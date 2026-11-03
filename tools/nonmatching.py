#!/usr/bin/env python3
"""The non-matching tier: functional C for functions that have no matching source yet.

A file in nonmatching/ is C that compiles and is meant to do what the original does, but does NOT
compile to the original's bytes (the header says how far off it is). The full build never sees it
(tools/build.py and the judge read src/ only), so `.text OK` keeps proving the matching tier; these
sources are for reading the game and for a port, where every function needs C. A function leaves
this tier when a matching source appears in src/ (`status` reports such leftovers, `prune` removes
them).

    nonmatching.py import [--jobs 12] [--hand MANIFEST]   best draft per open function -> nonmatching/
    nonmatching.py status                                matching / non-matching / missing
    nonmatching.py prune                                 drop files whose function now matches

Drafts come from, in order: a hand manifest (lines `ADDR PATH`), then tools/cpu_solve.py's
build/auto/cpu/ADDR.c. Each is judged with match.py check; the closest compiling one is kept.
Equivalence with the original is NOT verified: an m2c draft can be wrong.
"""
import argparse
import json
import os
import re
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor

import match
import project

ROOT = match.ROOT
TIER = os.path.join(ROOT, "nonmatching")
INDEX = os.path.join(TIER, "index.json")
CPU = os.path.join(ROOT, "build", "auto", "cpu")
ASM_LIST = os.path.join(ROOT, "config", "asm_functions.txt")


def open_functions():
    """Addresses of the work queue (tools/work_queue.py) that have no source in src/."""
    queue = json.load(open(os.path.join(ROOT, "build", "queue.json")))
    have = project.sources(refresh=True)
    return sorted(int(i["addr"], 16) for i in queue if int(i["addr"], 16) not in have)


def judge(addr, path):
    """(differing, total) for a draft, or None when it does not compile."""
    out = subprocess.run([sys.executable, os.path.join(ROOT, "tools", "match.py"), "check", f"{addr:x}", path],
                         capture_output=True, text=True).stdout
    if "MATCH" in out:
        m = re.search(r"MATCH \((\d+) instructions\)", out)
        return (0, int(m.group(1)) if m else 0)
    m = re.search(r"(\d+) of (\d+) instructions differ", out)
    return (int(m.group(1)), int(m.group(2))) if m else None


def tier_path(addr, ext):
    import layout
    return os.path.join(TIER, os.path.relpath(os.path.join(ROOT, layout.path_for(addr, ext)), project.SRC))


def candidates(addr, hand):
    out = list(hand.get(addr, []))
    p = os.path.join(CPU, f"{addr:08x}.c")
    if os.path.exists(p):
        out.append(p)
    return out


def cmd_import(a):
    hand = {}
    if a.hand:
        for line in open(a.hand):
            p = line.split()
            if len(p) == 2 and not line.startswith("#"):
                hand.setdefault(int(p[0], 16), []).append(os.path.join(ROOT, p[1]))
    addrs = open_functions()
    index = json.load(open(INDEX)) if os.path.exists(INDEX) else {}

    def best(addr):
        results = []
        for path in candidates(addr, hand):
            r = judge(addr, path)
            if r is not None:
                results.append((r[0] / max(r[1], 1), r, path))
        return addr, (min(results) if results else None)

    with ThreadPoolExecutor(a.jobs) as ex:
        found = list(ex.map(best, addrs))
    kept = 0
    for addr, res in found:
        if res is None:
            continue
        _, (diff, total), path = res
        old = index.get(f"{addr:08x}")
        if old and old["differ"] / max(old["of"], 1) <= diff / max(total, 1):
            continue  # an equal or closer draft is already in the tier
        ext = os.path.splitext(path)[1]
        dst = tier_path(addr, ext)
        os.makedirs(os.path.dirname(dst), exist_ok=True)
        body = open(path, encoding="utf-8").read()
        body = re.sub(r"^/\* NON_MATCHING:.*?\*/\n", "", body, flags=re.S)
        how = "hand" if path not in (os.path.join(CPU, f"{addr:08x}.c"),) else "m2c (tools/cpu_solve.py)"
        head = (f"/* NON_MATCHING: functional draft, {diff} of {total} instructions differ from the original.\n"
                f"   Source: {how}. Equivalence with the original is NOT verified. */\n")
        # keep a compiler marker on the first line, where project.source_compiler reads it
        lines = body.split("\n", 1)
        if lines[0].startswith("/* compiler:"):
            text = lines[0] + "\n" + head + (lines[1] if len(lines) > 1 else "")
        else:
            text = head + body
        open(dst, "w", newline="\n", encoding="utf-8").write(text)
        index[f"{addr:08x}"] = {"path": os.path.relpath(dst, ROOT).replace(os.sep, "/"), "differ": diff,
                                "of": total, "source": how}
        kept += 1
    os.makedirs(TIER, exist_ok=True)
    json.dump(dict(sorted(index.items())), open(INDEX, "w"), indent=1)
    print(f"{len(addrs)} open functions; {sum(1 for _, r in found if r)} with a compiling draft; "
          f"{kept} written or improved; {len(index)} in the tier")


def cmd_status(a):
    index = json.load(open(INDEX)) if os.path.exists(INDEX) else {}
    have = project.sources(refresh=True)
    addrs = open_functions()
    stale = [k for k in index if int(k, 16) in have]
    nm = [int(k, 16) for k in index if int(k, 16) not in have]
    missing = [x for x in addrs if f"{x:08x}" not in index]
    close = sum(1 for k in index if int(k, 16) not in have and index[k]["differ"] / max(index[k]["of"], 1) <= 0.1)
    total = len(have) + len(addrs)
    print(f"matching (src/):        {len(have):6}")
    print(f"non-matching C:         {len(nm):6}   ({close} within 10% of the original)")
    print(f"no C yet:               {len(missing):6}")
    print(f"C for {len(have) + len(nm)} of {total} functions ({(len(have) + len(nm)) / total * 100:.2f}%)")
    if stale:
        print(f"{len(stale)} tier files now have a matching source: run `prune`")


def cmd_prune(a):
    index = json.load(open(INDEX)) if os.path.exists(INDEX) else {}
    have = project.sources(refresh=True)
    for k in [k for k in index if int(k, 16) in have]:
        p = os.path.join(ROOT, index[k]["path"])
        if os.path.exists(p):
            os.remove(p)
        del index[k]
    json.dump(dict(sorted(index.items())), open(INDEX, "w"), indent=1)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("cmd", choices=["import", "status", "prune"])
    ap.add_argument("--jobs", type=int, default=12)
    ap.add_argument("--hand")
    a = ap.parse_args()
    {"import": cmd_import, "status": cmd_status, "prune": cmd_prune}[a.cmd](a)


if __name__ == "__main__":
    main()
