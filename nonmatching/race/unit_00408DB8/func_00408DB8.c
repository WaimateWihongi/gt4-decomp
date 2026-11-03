/* NON_MATCHING: functional draft, 55 of 76 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00395380(s32, void *, s32);            /* extern */
M2C_UNK func_00408B08(); /* extern */
s32 func_00409B48(s32, f32 *, f32, f32, f32);       /* extern */

void func_00408DB8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    s32 sp8;
    s32 spC;
    struct StackFrame_00408DB8 { s8 pad0[0x4]; f32 sp4; s8 pad1[0x8]; f32 sp10; f32 sp14; f32 sp18; f32 sp1C; f32 sp20; f32 sp24; s32 sp28; s8 pad2[0x4]; f32 sp30; f32 sp34; f32 sp38; s8 pad3[0x4]; } sp_;
    void *temp_v1;

    sp_.sp10 = 0x0.0p+0f;
    sp_.sp18 = 0x0.0p+0f;
    sp_.sp14 = 0x0.0p+0f;
    sp_.sp28 = 0;
    sp_.sp24 = 0x0.0p+0f;
    sp_.sp20 = 0x0.0p+0f;
    sp_.sp1C = 0x0.0p+0f;
    func_00395380(arg2, ((s8 *)&sp_), arg1);
    temp_v1 = arg0 + 0x2C;
    if (func_00409B48(arg2, &sp_.sp10, sp0, sp_.sp4, sp8) != 0) {
        sp_.sp4 = sp_.sp10;
    }
    sp_.sp30 = sp0;
    sp_.sp38 = sp8;
    sp_.sp34 = sp_.sp4;
    M2C_FIELD(temp_v1, f32 *, 8) = sp_.sp38;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) sp_.sp30;
    M2C_FIELD(temp_v1, f32 *, 4) = sp_.sp4;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (spC + 0x1.91eb840000000p+1f);
    func_00408B08(arg0, 0, arg2, arg3, &sp_.sp30);
    func_00408B08(arg0, 1, arg2, arg3);
    func_00408B08(arg0, 2, arg2, arg3);
}
