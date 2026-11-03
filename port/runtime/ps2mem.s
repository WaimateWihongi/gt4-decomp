/* The PS2's main RAM range 0x00100000-0x02000000, reserved inside the exe image so that Windows
   cannot place anything else there (the process heap would otherwise land in it). port/runtime/pe.ld
   puts this section first, at image base 0x000F0000 + 64 KB = 0x00100000; it is uninitialised, so
   the exe file does not carry it. The runtime makes it RWX and loads CORE.GT4's code and data
   images into it at their own addresses: pointers stored in the game's data stay valid as they are. */
    .section .ps2ram,"bwx"
    .globl _ps2_ram
_ps2_ram:
    .space 0x01F00000
    .globl _ps2_ram_end
_ps2_ram_end:
