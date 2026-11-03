# GT4 PC port (Windows, 32-bit)

Work in progress. The decompiled sources (`src/` matching, `nonmatching/` functional) are compiled
for Windows with MinGW-w64 (i686) and hosted by a small runtime that stands in for the PS2.

## How it works

- **Same addresses as the PS2.** The exe reserves 0x00100000-0x02000000 (`runtime/ps2mem.s`, placed
  first by `runtime/pe.ld`) and loads your own `CORE.GT4.elf` code and data images there, so every
  pointer stored in the game's data (vtables, tables, linked structures) stays valid as it is.
- **Thunks.** Every PS2 function that has host C gets a 5-byte `jmp` at its PS2 address, so function
  pointers taken from the game's data reach the host code. Every other known function start gets a
  logging `call` (`runtime/missing.s`): `[missing] ADDR` in the log instead of running MIPS bytes.
- **Linking by address.** `tools/resolve.py` maps every symbol to its PS2 address (the PS2 build's own
  name table) and turns undefined ones into aliases (same function, other spelling), absolute data
  symbols, or logging stubs.
- **The PS2 kernel.** `runtime/kernel.c`: semaphores, threads (one at a time, like the EE), 60 Hz
  vertical-blank interrupts. The 162 kernel-call stubs are generated (`tools/build_runtime.py`).
  `runtime/ps2_libc.c`: the hand-written string routines and soft-float helpers.
- `port/include/types.h` replaces the PS2's 128-bit types for the host compiler; the PS2 build never
  reads `port/`.

## Build (Windows, MSYS2 with `mingw-w64-i686-gcc`)

```sh
# once, in WSL (needs the PS2 build): function starts and asm function list
#   build/port/ps2_functions.csv, build/port/asm_funcs.json, build/port/ps2_link.ld
python port/tools/build_objects.py   # every source -> build/port/obj (about 4 minutes)
python port/tools/build_runtime.py
python port/tools/resolve.py
python port/tools/link.py            # -> build/port/gt4.exe
build/port/gt4.exe                   # from the repository root; log in gt4_port.log
```

Your `CORE.GT4.elf` is read at run time from `orig/SCUS-97328/` (or `GT4_ELF`); nothing from the
game is in the repository or the exe.

## Status (2026-11-04)

- Links: 29,485 objects, 25,556 PS2 functions with host code.
- Boots: loads the image, writes the thunks, runs the C runtime and the game's static constructors.
- Blocker being fixed: **argument pass-through.** Many matching sources declare fewer parameters
  than the function really takes (on MIPS an argument left in `$a0` reaches the callee anyway, so the
  bytes match); on x86 the callee reads the wrong stack slot. Example: `func_00572048(void)` calls
  `func_00574D78()` without the pointer it was given, which then zeroes a return address. The fix is
  a tool that derives each function's true arity from the original code and rewrites the C.
- Not started: graphics (GS/VU1 -> Direct3D/Vulkan), sound (IOP/SPU2), input, files.
