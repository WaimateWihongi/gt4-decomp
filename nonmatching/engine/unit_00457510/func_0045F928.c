/* NON_MATCHING: functional draft, 82 of 84 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_0045F928(void *arg0, void *arg1, void *arg2) {
    f32 sp0;
    f32 sp4;
    f32 sp10;
    f32 sp14;
    f32 sp20;
    f32 sp24;
    f32 sp30;
    f32 sp34;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f7;
    s32 temp_v0;
    void *temp_a0;
    void *temp_a4;
    void *temp_v1;
    void *temp_v1_2;

    temp_a4 = M2C_FIELD(arg0, s32 *, 0x4A8) + (M2C_FIELD(arg0, s32 *, 0x40C) * 0x4F0);
    temp_v1 = temp_a4 + (M2C_FIELD(arg0, s32 *, 0x410) * 0x2C);
    temp_v1_2 = temp_v1 + 0x228;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x408) * 0x2C;
    temp_a0 = arg0 + temp_v0;
    sp20 = (M2C_FIELD(arg2, f32 *, 0) * M2C_FIELD(temp_v1, f32 *, 0x228)) + (M2C_FIELD(arg2, f32 *, 4) * M2C_FIELD(temp_v1_2, f32 *, 4));
    temp_f0 = M2C_FIELD(temp_a0, f32 *, 0x238);
    temp_f2 = M2C_FIELD((temp_a0 + 0x238), f32 *, 4);
    temp_f7 = (M2C_FIELD(arg2, f32 *, 8) * M2C_FIELD(temp_v1, f32 *, 0x228)) + (M2C_FIELD(arg2, f32 *, 0xC) * M2C_FIELD(temp_v1_2, f32 *, 4));
    temp_f4 = (M2C_FIELD(arg1, f32 *, 0) * temp_f0) + (M2C_FIELD(arg1, f32 *, 4) * temp_f2);
    sp24 = temp_f7;
    temp_f3 = (M2C_FIELD(arg1, f32 *, 8) * temp_f0) + (M2C_FIELD(arg1, f32 *, 0xC) * temp_f2);
    temp_f0_2 = (M2C_FIELD(temp_a4, f32 *, 0x390) - M2C_FIELD(arg0, f32 *, 0x390)) + sp20;
    sp0 = temp_f0_2;
    sp10 = temp_f4;
    sp14 = temp_f3;
    temp_f1 = (M2C_FIELD(temp_a4, f32 *, 0x394) - M2C_FIELD(arg0, f32 *, 0x394)) + temp_f7;
    sp4 = temp_f1;
    temp_f1_2 = (temp_f4 * temp_f0_2) + (temp_f3 * temp_f1) + M2C_FIELD((temp_v0 + arg0), f32 *, 0x240);
    if (!(temp_f1_2 <= 0x0.0p+0f)) {
        temp_f1_3 = -temp_f1_2;
        temp_f1_4 = temp_f1_3 * temp_f4 * 0x1.0000000000000p-1f;
        sp34 = temp_f1_3 * temp_f3 * 0x1.0000000000000p-1f;
        sp30 = temp_f1_4;
        M2C_FIELD(temp_a4, f32 *, 0x390) = (f32) (M2C_FIELD(temp_a4, f32 *, 0x390) + temp_f1_4);
        M2C_FIELD(temp_a4, f32 *, 0x394) = (f32) (M2C_FIELD(temp_a4, f32 *, 0x394) + sp34);
        M2C_FIELD(arg0, f32 *, 0x390) = (f32) (M2C_FIELD(arg0, f32 *, 0x390) - sp30);
        M2C_FIELD(arg0, f32 *, 0x394) = (f32) (M2C_FIELD(arg0, f32 *, 0x394) - sp34);
    }
}
