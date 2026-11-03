/* NON_MATCHING: functional draft, 149 of 164 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_002311D0(void *, s32);                 /* extern */
M2C_UNK func_002318C0(void *, s32);                 /* extern */
M2C_UNK func_0024B248(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_0025B500(s32, f32 *, f32 *, f32 *, void *); /* extern */
M2C_UNK func_0025BAA0(s32, void *, f32 *, f32 *, f32 *); /* extern */
s32 func_0025C2A0(s32);                             /* extern */
s32 func_00265D98(s32);                             /* extern */
s32 func_00266590(s32);                             /* extern */
M2C_UNK func_002665A0(s32, s32);                    /* extern */
s32 func_00267698(s32);                             /* extern */
s32 func_002677C0(s32);                             /* extern */
M2C_UNK func_00267808(s32 *, s32);                  /* extern */
f32 func_00267DB0(s32);                             /* extern */
M2C_UNK func_004896D0(void *, s32);                 /* extern */

void func_00231508(void *arg0, s32 arg1) {
    s32 sp0;
    struct StackFrame_00231508 { s8 pad0[0x4]; f32 sp4; f32 sp8; f32 spC; s32 sp10; s8 pad1[0xC]; } sp_;
    s32 temp_v0;
    void *temp_s0;
    void *temp_s1;
    void *temp_s4;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1D00) + 1;
    M2C_FIELD(arg0, s32 *, 0x1D00) = temp_v0;
    temp_s0 = arg0 + (temp_v0 * 0x38);
    temp_s4 = temp_s0 + 0x6E8;
    temp_s1 = temp_s0 + 0x720;
    if (func_00267698(arg1) == 3) {
        func_0025BAA0(arg1, ((s8 *)&sp_), &sp_.sp4, &sp_.sp8, &sp_.spC);
        temp_v0_2 = temp_s0 + 0x730;
        M2C_FIELD(temp_s0, f32 *, 0x720) = sp0;
        M2C_FIELD(temp_s1, f32 *, 4) = sp_.sp4;
        M2C_FIELD(temp_s1, f32 *, 8) = sp_.sp8;
        M2C_FIELD(temp_s1, f32 *, 0xC) = sp_.spC;
        M2C_FIELD(temp_v0_2, f32 *, 0x20) = 0x1.0000000000000p+0f;
        M2C_FIELD(temp_s0, f32 *, 0x730) = 0x1.0000000000000p+0f;
        M2C_FIELD(temp_v0_2, f32 *, 0xC) = 0x0.0p+0f;
        M2C_FIELD(temp_v0_2, f32 *, 4) = 0x0.0p+0f;
        M2C_FIELD(temp_v0_2, f32 *, 0x10) = 0x1.0000000000000p+0f;
        M2C_FIELD(temp_v0_2, f32 *, 8) = 0x0.0p+0f;
        M2C_FIELD(temp_v0_2, f32 *, 0x1C) = (f32) ((sp0 * 0x0.0p+0f) + sp_.sp4 + 0x0.0p+0f);
        M2C_FIELD(temp_v0_2, f32 *, 0x18) = (f32) (sp0 + (sp_.sp4 * 0x0.0p+0f) + 0x0.0p+0f);
        M2C_FIELD(temp_v0_2, f32 *, 0x14) = 0x0.0p+0f;
    } else {
        func_0025B500(arg1, &sp_.spC, &sp_.sp8, &sp_.sp4, ((s8 *)&sp_));
        temp_v1 = temp_s0 + 0x6F8;
        temp_v0_3 = temp_s0 + 0x730;
        M2C_FIELD(temp_s0, f32 *, 0x720) = (f32) (sp_.spC + M2C_FIELD(temp_s0, f32 *, 0x6E8));
        M2C_FIELD(temp_s1, f32 *, 8) = sp_.sp4;
        M2C_FIELD(temp_s1, f32 *, 0xC) = sp0;
        M2C_FIELD(temp_s1, f32 *, 4) = (f32) (sp_.sp8 + M2C_FIELD(temp_s4, f32 *, 4));
        if (temp_v0_3 != temp_v1) {
            M2C_FIELD(temp_s0, f32 *, 0x730) = (f32) M2C_FIELD(temp_s0, f32 *, 0x6F8);
            M2C_FIELD(temp_v0_3, f32 *, 0xC) = (f32) M2C_FIELD(temp_v1, f32 *, 0xC);
            M2C_FIELD(temp_v0_3, f32 *, 0x18) = (f32) M2C_FIELD(temp_v1, f32 *, 0x18);
            M2C_FIELD(temp_v0_3, f32 *, 4) = (f32) M2C_FIELD(temp_v1, f32 *, 4);
            M2C_FIELD(temp_v0_3, f32 *, 0x10) = (f32) M2C_FIELD(temp_v1, f32 *, 0x10);
            M2C_FIELD(temp_v0_3, f32 *, 0x1C) = (f32) M2C_FIELD(temp_v1, f32 *, 0x1C);
            M2C_FIELD(temp_v0_3, f32 *, 8) = (f32) M2C_FIELD(temp_v1, f32 *, 8);
            M2C_FIELD(temp_v0_3, f32 *, 0x14) = (f32) M2C_FIELD(temp_v1, f32 *, 0x14);
            M2C_FIELD(temp_v0_3, f32 *, 0x20) = (f32) M2C_FIELD(temp_v1, f32 *, 0x20);
        }
        M2C_FIELD(temp_v0_3, f32 *, 0x18) = (f32) ((M2C_FIELD(temp_s0, f32 *, 0x730) * sp_.spC) + (M2C_FIELD(temp_v0_3, f32 *, 0xC) * sp_.sp8) + M2C_FIELD(temp_v0_3, f32 *, 0x18));
        M2C_FIELD(temp_v0_3, f32 *, 0x1C) = (f32) ((M2C_FIELD(temp_v0_3, f32 *, 4) * sp_.spC) + (M2C_FIELD(temp_v0_3, f32 *, 0x10) * sp_.sp8) + M2C_FIELD(temp_v0_3, f32 *, 0x1C));
    }
    if (func_002677C0(arg1) != 0) {
        func_00267808(&sp_.sp10, arg1);
        func_004896D0(temp_s1 + 0x10, sp_.sp10 + 0x10);
        func_0024B248(&sp_.sp10, 2);
    }
    M2C_FIELD(temp_s1, f32 *, 0x34) = (f32) (M2C_FIELD(temp_s4, f32 *, 0x34) * func_00267DB0(arg1));
    if (func_00265D98(arg1) != 0) {
        func_002665A0(arg1, func_00266590(func_0025C2A0(arg1)));
    }
    if ((M2C_FIELD(arg0, s32 *, 0x1D48) != 0) && (M2C_FIELD(arg0, s32 *, 0x1D40) == 0)) {
        func_002311D0(arg0, arg1);
    }
    func_002318C0(arg0, arg1);
}
