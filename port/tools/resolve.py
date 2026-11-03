#!/usr/bin/env python3
"""Resolve the Windows link by PS2 address, as tools/build.py's link.ld does for the PS2 build.

Every symbol is mapped to a PS2 address: func_ADDR / D_ADDR by name, the rest through the PS2
linker script's PROVIDE table (build/port/ps2_link.ld, copied from WSL's build/full/link.ld), after
demangling (the host's C++ mangling differs from ee-gcc 2.96's, and one function is often declared
as C in one file and C++ in another). Then, for each symbol used but not defined:
  - an address some object defines a function for  -> alias to that function
  - a data address (>= DATA_START)                  -> absolute symbol at the PS2 address (the
    runtime loads the original data image there, so pointers in data stay valid)
  - anything else                                    -> a stub that logs its address once
Writes build/port/gen/resolve.ld (symbol assignments), stubs.c, thunks.c (PS2 address -> host
function, for the jmp thunks the runtime writes at every PS2 function address).

    python port/tools/resolve.py
"""
import collections, glob, json, os, re, subprocess
from concurrent.futures import ThreadPoolExecutor

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
MINGW = os.environ.get("MINGW32", r"C:\msys64\mingw32\bin")
OUT = os.path.join(ROOT, "build", "port")
GEN = os.path.join(OUT, "gen")
TEXT_START, DATA_START = 0x00100000, 0x00617A80  # CORE.GT4: code below DATA_START, data/bss above
ADDR_RE = re.compile(r"\b(?:func|D)_([0-9A-Fa-f]{8})\b")


def provide_table():
    out = {}
    for line in open(os.path.join(OUT, "ps2_link.ld"), errors="replace"):
        m = re.match(r"PROVIDE\((\S+) = 0x([0-9a-fA-F]+)\);", line)
        if m:
            out[m.group(1)] = int(m.group(2), 16)
    return out


def nm(o):
    r = subprocess.run([os.path.join(MINGW, "nm.exe"), "-P", o], capture_output=True, text=True, errors="replace")
    d, u = {}, set()
    for line in r.stdout.splitlines():
        p = line.split()
        if len(p) >= 2:
            if p[1] == "U":
                u.add(p[0])
            elif p[1] in "TW":  # functions (global or weak/COMDAT)
                d[p[0]] = p[1]
            elif p[1] in "DBRCG":
                d[p[0]] = "D"
    return o, d, u


def host_runtime_symbols():
    """Symbols the MinGW C/C++ runtime and kernel32 define (libmsvcrt, libmingwex, libgcc, libstdc++)."""
    prefix = os.path.dirname(MINGW)  # MSYS2: C:\msys64\mingw32 (lib/); a plain mingw-w64: i686-w64-mingw32/lib
    dirs = [os.path.join(prefix, "lib"), os.path.join(prefix, "i686-w64-mingw32", "lib")]
    gcc = glob.glob(os.path.join(prefix, "lib", "gcc", "i686-w64-mingw32", "*"))
    libs = [os.path.join(d, n) for d in dirs for n in ("libmsvcrt.a", "libucrt.a", "libmingwex.a", "libmingw32.a",
                                                        "libkernel32.a", "libmoldname.a")]
    libs += [os.path.join(g, n) for g in gcc for n in ("libgcc.a", "libstdc++.a")]
    out = set()
    for l in libs:
        if os.path.exists(l):
            r = subprocess.run([os.path.join(MINGW, "nm.exe"), "-P", "--defined-only", l], capture_output=True,
                               text=True, errors="replace")
            out |= {p.split()[0] for p in r.stdout.splitlines() if len(p.split()) >= 2 and p.split()[1] in "TDBRWI"}
    return out


def demangle(names):
    names = list(names)
    r = subprocess.run([os.path.join(MINGW, "c++filt.exe"), "-_"], input="\n".join(names), capture_output=True,
                       text=True, errors="replace")
    return dict(zip(names, r.stdout.splitlines()))


def base(dm):
    """'GT4MC__X__load(int, void*)' -> 'GT4MC__X__load'; 'A::b(int)' -> 'A__b'."""
    s = dm.split("(", 1)[0].strip()
    s = re.sub(r"<.*>", "", s)
    return s.replace("::", "__").split(" ")[-1]


def address(raw, dm, provide):
    m = ADDR_RE.search(dm) or ADDR_RE.search(raw)
    if m:
        return int(m.group(1), 16)
    b = base(dm)
    if b in provide:
        return provide[b]
    b2 = b[1:] if b.startswith("_") else b
    return provide.get(b2)


def main():
    os.makedirs(GEN, exist_ok=True)
    provide = provide_table()
    objs = glob.glob(os.path.join(OUT, "obj", "*.o"))
    with ThreadPoolExecutor(12) as ex:
        res = list(ex.map(nm, objs))
    defined = {}
    for o, d, _ in res:
        for s, k in d.items():
            defined.setdefault(s, k)
    used = set().union(*(u for _, _, u in res))
    undefined = used - set(defined)
    dm = demangle(set(defined) | undefined)

    host_fn = {}  # PS2 address -> host function symbol (strong definitions first)
    for s, k in sorted(defined.items(), key=lambda kv: kv[1] != "T"):
        if k in "TW":
            a = address(s, dm.get(s, s), provide)
            if a is not None and TEXT_START <= a < DATA_START:
                host_fn.setdefault(a, s)

    crt = host_runtime_symbols()
    lines, stubs, kinds = [], {}, collections.Counter()
    for s in sorted(undefined):
        if s.startswith(("_port_", "_ps2_")):
            continue  # the runtime's own symbols (port/runtime/main.c, linked by link.py)
        if s.startswith("__imp_") or s in crt:
            kinds["provided by the Windows C runtime"] += 1
            continue  # memcpy, malloc, sprintf...: the host's own C library wins
        a = address(s, dm.get(s, s), provide)
        if a is None:
            stubs[s] = None
            kinds["stub (no PS2 address known)"] += 1
        elif a >= DATA_START:
            lines.append(f"{s} = 0x{a:08x};")
            kinds["data at its PS2 address"] += 1
        elif a in host_fn:
            lines.append(f"{s} = {host_fn[a]};")
            kinds["alias to the host function at that address"] += 1
        else:
            stubs[s] = a
            kinds["stub (function with no host C)"] += 1

    with open(os.path.join(GEN, "stubs.c"), "w", newline="\n") as f:
        f.write('/* generated by port/tools/resolve.py: functions with no host C yet */\n'
                'extern void port_stub_hit(unsigned addr, const char *name);\n')
        for i, (s, a) in enumerate(sorted(stubs.items())):
            f.write(f'int port_stub_{i}(void) {{ port_stub_hit(0x{a or 0:08x}u, "{s}"); return 0; }}\n')
            lines.append(f"{s} = _port_stub_{i};")
    with open(os.path.join(GEN, "resolve.ld"), "w", newline="\n") as f:
        f.write("\n".join(lines) + "\n")
    with open(os.path.join(GEN, "thunks.c"), "w", newline="\n") as f:
        f.write("/* generated by port/tools/resolve.py: PS2 function address -> host function */\n")
        items = sorted(host_fn.items())
        for i, (a, s) in enumerate(items):
            f.write(f'extern char port_fn_{i}[] __asm__("{s}");\n')
        f.write("const struct { unsigned addr; void *fn; } port_thunks[] = {\n")
        for i, (a, s) in enumerate(items):
            f.write(f"  {{0x{a:08x}u, port_fn_{i}}},\n")
        f.write("};\nconst unsigned port_thunk_count = sizeof port_thunks / sizeof port_thunks[0];\n")
    # Every other known PS2 function start gets a logging thunk (port/runtime/missing.s), so a call
    # through a pointer to a function without host code is reported instead of running MIPS bytes.
    starts = set()
    fcsv = os.path.join(OUT, "ps2_functions.csv")
    if os.path.exists(fcsv):
        for line in open(fcsv):
            if line.startswith("0x"):
                starts.add(int(line.split(",")[0], 16))
    for line in open(os.path.join(ROOT, "config", "symbol_addrs.txt"), errors="replace"):
        m = re.match(r"\s*\S+\s*=\s*0x([0-9A-Fa-f]+)\s*;.*type:func", line)
        if m:
            starts.add(int(m.group(1), 16))
    missing = sorted(a for a in starts if TEXT_START <= a < DATA_START and a not in host_fn)
    with open(os.path.join(GEN, "missing.c"), "w", newline="\n") as f:
        f.write("/* generated by port/tools/resolve.py: PS2 functions with no host code */\n"
                "const unsigned port_missing[] = {\n")
        f.writelines(f"  0x{a:08x}u,\n" for a in missing)
        f.write("};\nconst unsigned port_missing_count = sizeof port_missing / sizeof port_missing[0];\n")
    kinds["PS2 function starts with no host code (logging thunk)"] = len(missing)
    json.dump({"kinds": kinds, "stubs": {s: (f"{a:08x}" if a else None) for s, a in stubs.items()}},
              open(os.path.join(OUT, "resolve.json"), "w"), indent=1)
    print(f"{len(objs)} objects, {len(host_fn)} PS2 functions with host C; undefined {len(undefined)}:")
    for k, n in kinds.most_common():
        print(f"  {n:6}  {k}")


if __name__ == "__main__":
    main()
