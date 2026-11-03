#!/usr/bin/env python3
"""What a Windows link of build/port/obj/ is missing: every symbol some object uses and no object
defines, grouped by kind. This is the port's to-do list (stubs, data, platform layer).

    python port/tools/link_report.py            -> build/port/undefined.json + summary
"""
import collections, glob, json, os, re, subprocess
from concurrent.futures import ThreadPoolExecutor

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
MINGW = os.environ.get("MINGW32", r"C:\msys64\mingw32\bin")
NM = os.path.join(MINGW, "nm.exe")
OUT = os.path.join(ROOT, "build", "port")


def syms(o):
    r = subprocess.run([NM, "-P", o], capture_output=True, text=True, errors="replace")
    d, u = set(), set()
    for line in r.stdout.splitlines():
        p = line.split()
        if len(p) < 2:
            continue
        name, kind = p[0], p[1]
        if kind == "U":
            u.add(name)
        elif kind.upper() in "TDBRCVWGS" and kind != "U":
            d.add(name)
    return o, d, u


def kind(s):
    n = s[1:] if s.startswith("_") else s  # i686 C symbols carry a leading underscore
    if re.match(r"func_[0-9A-Fa-f]{8}$", n): return "game functions with no C (func_ADDR)"
    if re.match(r"D_[0-9A-Fa-f]{8}$", n): return "data globals not from source (D_ADDR)"
    if n.startswith(("sce", "_sce")): return "Sony SDK (sce*)"
    if n.startswith("_Z") or n.startswith("__Z"): return "C++ functions/methods (mangled)"
    if n.startswith(("__imp_", "__")): return "compiler/runtime internals"
    return "other named symbols (libc, libraries)"


def main():
    objs = glob.glob(os.path.join(OUT, "obj", "*.o"))
    with ThreadPoolExecutor(12) as ex:
        res = list(ex.map(syms, objs))
    defined = set().union(*(d for _, d, _ in res)) if res else set()
    used = collections.Counter()
    for _, _, u in res:
        used.update(u)
    missing = {s: n for s, n in used.items() if s not in defined}
    groups = collections.defaultdict(list)
    for s in missing:
        groups[kind(s)].append(s)
    dup = collections.Counter(s for _, d, _ in res for s in d)
    print(f"{len(objs)} objects; {len(defined)} symbols defined; {len(missing)} used but undefined")
    for k, v in sorted(groups.items(), key=lambda kv: -len(kv[1])):
        top = sorted(v, key=lambda s: -missing[s])[:6]
        print(f"  {len(v):6}  {k}   e.g. {', '.join(top)}")
    multi = [s for s, n in dup.items() if n > 1]
    print(f"  {len(multi):6}  symbols defined in more than one object")
    json.dump({"missing": {k: sorted(v, key=lambda s: -missing[s]) for k, v in groups.items()},
               "uses": missing, "multiply_defined": sorted(multi)},
              open(os.path.join(OUT, "undefined.json"), "w"), indent=1)


if __name__ == "__main__":
    main()
