#!/usr/bin/env python3
"""Compile every source of src/ and nonmatching/ for Windows (MinGW-w64 i686) into
build/port/obj/, one object per source (named after the source's path), skipping sources whose
object is newer. A source that fails (or takes more than --timeout seconds: some PS2 inline asm
hangs gcc's x87 register stack) is listed in build/port/failed.json with its first error.

    python port/tools/build_objects.py [--jobs 12] [--timeout 60]
"""
import argparse, json, os, re, subprocess
from concurrent.futures import ThreadPoolExecutor

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
MINGW = os.environ.get("MINGW32", r"C:\msys64\mingw32\bin")
os.environ["PATH"] = MINGW + os.pathsep + os.environ["PATH"]
OUT = os.path.join(ROOT, "build", "port")
OBJ = os.path.join(OUT, "obj")
INC = [os.path.join(ROOT, "port", "include"), os.path.join(ROOT, "include"),
       os.path.join(ROOT, "include", "stl"), os.path.join(ROOT, "include", "shim")]
COMMON = ["-m32", "-c", "-w", "-O0", "-g0", "-fno-builtin", "-Dasm=__asm__", "-DGT4_HOST"] + \
         [x for i in INC for x in ("-I", i)]
CFLAGS = ["-std=gnu89", "-fpermissive"]
CXXFLAGS = ["-std=gnu++98", "-fpermissive", "-fno-exceptions", "-fno-rtti"]


def objname(path):
    rel = os.path.relpath(path, ROOT).replace(os.sep, "__")
    return os.path.join(OBJ, os.path.splitext(rel)[0] + ".o")


def build(path, timeout):
    o = objname(path)
    if os.path.exists(o) and os.path.getmtime(o) >= os.path.getmtime(path):
        return path, True, None
    cpp = path.endswith(".cpp")
    cmd = [os.path.join(MINGW, "g++.exe" if cpp else "gcc.exe")] + COMMON + \
          (CXXFLAGS if cpp else CFLAGS) + [path, "-o", o]
    p = subprocess.Popen(cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True, errors="replace")
    try:
        _, err = p.communicate(timeout=timeout)
    except subprocess.TimeoutExpired:
        # killing g++ alone leaves cc1plus running and holding the pipes: kill the whole tree
        subprocess.run(["taskkill", "/T", "/F", "/PID", str(p.pid)], capture_output=True)
        p.communicate()
        if os.path.exists(o):
            os.remove(o)
        return path, False, "timeout (gcc hung)"
    r = subprocess.CompletedProcess(cmd, p.returncode, "", err)
    if r.returncode == 0:
        return path, True, None
    first = next((l for l in r.stderr.splitlines() if " error: " in l or "Error:" in l), "failed")
    return path, False, first.split(" error: ", 1)[-1].split("Error:", 1)[-1].strip()[:160]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--jobs", type=int, default=12)
    ap.add_argument("--timeout", type=int, default=60)
    a = ap.parse_args()
    os.makedirs(OBJ, exist_ok=True)
    files = []
    for d in ("src", "nonmatching"):
        for dp, _, fs in os.walk(os.path.join(ROOT, d)):
            files += [os.path.join(dp, f) for f in fs if f.endswith((".c", ".cpp"))]
    with ThreadPoolExecutor(a.jobs) as ex:
        res = list(ex.map(lambda p: build(p, a.timeout), files))
    failed = {os.path.relpath(p, ROOT).replace(os.sep, "/"): e for p, ok, e in res if not ok}
    json.dump(failed, open(os.path.join(OUT, "failed.json"), "w"), indent=1)
    print(f"{len(res) - len(failed)} of {len(res)} sources compiled to build/port/obj; {len(failed)} failed")


if __name__ == "__main__":
    main()
