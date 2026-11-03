#!/usr/bin/env python3
"""Link build/port/gt4.exe: the PS2 RAM block (.ps2ram, at 0x00100000 by port/runtime/pe.ld), the
runtime, the generated stubs/thunks, every object of build/port/obj/, and resolve.py's symbol
assignments (appended to the linker script: ld takes one -T script).

    python port/tools/build_objects.py && python port/tools/resolve.py && python port/tools/link.py
"""
import glob, os, subprocess, sys

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
MINGW = os.environ.get("MINGW32", r"C:\msys64\mingw32\bin")
os.environ["PATH"] = MINGW + os.pathsep + os.environ["PATH"]
OUT = os.path.join(ROOT, "build", "port")
GEN = os.path.join(OUT, "gen")
GCC = os.path.join(MINGW, "gcc.exe")


def cc(src, obj, extra=()):
    r = subprocess.run([GCC, "-m32", "-c", "-O0", "-g", "-fno-omit-frame-pointer", "-w", src, "-o", obj, *extra], capture_output=True, text=True)
    if r.returncode:
        sys.exit(f"{src}:\n{r.stderr}")
    return obj


def main():
    rt = os.path.join(OUT, "rt")
    os.makedirs(rt, exist_ok=True)
    objs = [cc(os.path.join(ROOT, "port", "runtime", "ps2mem.s"), os.path.join(rt, "ps2mem.o")),
            cc(os.path.join(ROOT, "port", "runtime", "main.c"), os.path.join(rt, "main.o")),
            cc(os.path.join(GEN, "stubs.c"), os.path.join(rt, "stubs.o")),
            cc(os.path.join(GEN, "thunks.c"), os.path.join(rt, "thunks.o")),
            cc(os.path.join(GEN, "missing.c"), os.path.join(rt, "missing_table.o")),
            cc(os.path.join(ROOT, "port", "runtime", "missing.s"), os.path.join(rt, "missing.o"))]
    objs += sorted(glob.glob(os.path.join(OUT, "obj", "*.o")))
    rsp = os.path.join(OUT, "link.rsp")
    with open(rsp, "w", newline="\n") as f:
        f.writelines('"' + o.replace("\\", "/") + '"\n' for o in objs)
    script = os.path.join(GEN, "gt4.ld")
    with open(script, "w", newline="\n") as f:
        f.write(open(os.path.join(ROOT, "port", "runtime", "pe.ld")).read())
        f.write("\n/* symbol assignments from port/tools/resolve.py */\n")
        f.write(open(os.path.join(GEN, "resolve.ld")).read())
    exe = os.path.join(OUT, "gt4.exe")
    cmd = [os.path.join(MINGW, "g++.exe"), "-m32", "@" + rsp, "-o", exe,
           "-Wl,--image-base=0x000F0000,--section-alignment=0x10000,--file-alignment=0x200",
           "-Wl,--disable-dynamicbase,--disable-reloc-section,--allow-multiple-definition",
           "-Wl,--no-gc-sections", "-T", script, "-static", "-lkernel32"]
    r = subprocess.run(cmd, capture_output=True, text=True, errors="replace")
    text = r.stdout + r.stderr
    open(os.path.join(OUT, "link.log"), "w").write(text)
    errors = [l for l in text.splitlines() if "multiple definition" not in l and "first defined here" not in l]
    print("\n".join(errors[:30]))
    print("LINKED" if r.returncode == 0 and os.path.exists(exe) else f"link failed (exit {r.returncode})")


if __name__ == "__main__":
    main()
