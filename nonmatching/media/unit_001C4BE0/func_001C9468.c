/* NON_MATCHING: functional draft, 75 of 77 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00101C50(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_001CB1D0(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00554350();                                /* extern */
M2C_UNK func_00554620(s32);                         /* extern */
s32 func_00575E60(M2C_UNK, M2C_UNK);                /* extern */
s32 func_00576F70(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, void *); /* extern */
s32 func_00578B50(M2C_UNK, M2C_UNK);                /* extern */
s32 func_00594470(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_001C9468(void *arg0) {
    struct StackFrame_001C9468 { s8 pad0[0x10]; } sp_;
    M2C_UNK var_a1;

    M2C_FIELD(arg0, s32 *, 8) = 8;
    M2C_FIELD(arg0, f32 *, 0x14) = 0x1.8000000000000p+1f;
    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    M2C_FIELD(arg0, s32 *, 0xC) = 1;
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    M2C_FIELD(arg0, s32 *, 4) = 4;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    func_001CB1D0(arg0 + 0x20, 0x693F00, 1);
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = -1;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = -1;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    func_00554620(func_00554350());
    M2C_FIELD(arg0, s32 *, 0x64) = func_00575E60(0x100, 0x166666);
    func_00101C50(func_00578B50(1, -1), M2C_FIELD(arg0, s32 *, 0x64), 0x166666, 0x20);
    if (func_00594470(0x68BAE8, 0x693F20, 4) == 0) {
        var_a1 = 0x693F28;
    } else {
        var_a1 = 0x693F38;
    }
    M2C_FIELD(arg0, s32 *, 0x68) = func_00576F70(0x68BAE8, var_a1, 0, 0, ((s8 *)&sp_));
}
