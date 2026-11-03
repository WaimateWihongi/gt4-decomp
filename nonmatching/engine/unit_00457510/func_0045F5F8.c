/* NON_MATCHING: functional draft, 163 of 165 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

f32 func_0045C0B8();                                /* extern */

f32 func_0045F5F8(void *arg0, void *arg1, void *arg2, void *arg3) {
    f32 sp0;
    f32 sp4;
    f32 sp10;
    f32 sp14;
    f32 sp20;
    f32 sp24;
    f32 sp30;
    f32 sp34;
    f32 sp40;
    f32 sp44;
    f32 sp50;
    f32 sp54;
    f32 sp60;
    f32 sp64;
    f32 sp70;
    f32 sp74;
    f32 sp80;
    f32 sp84;
    f32 sp90;
    f32 sp94;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f5_3;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f7_3;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f9;
    f32 temp_f9_2;
    f32 var_f1;
    void *temp_s2;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_s2 = M2C_FIELD(arg0, s32 *, 0x4A8) + (M2C_FIELD(arg0, s32 *, 0x40C) * 0x4F0);
    temp_f18 = func_0045C0B8();
    temp_f5 = M2C_FIELD(arg0, f32 *, 0x414);
    temp_f11 = M2C_FIELD((arg0 + 0x414), f32 *, 4);
    temp_f0 = -temp_f5;
    temp_f9 = M2C_FIELD(arg2, f32 *, 4);
    temp_f7 = M2C_FIELD(arg2, f32 *, 0);
    temp_f10 = M2C_FIELD(arg2, f32 *, 0xC);
    temp_f4 = M2C_FIELD(arg2, f32 *, 8);
    temp_v0 = arg0 + (M2C_FIELD(arg0, s32 *, 0x408) * 0x2C);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x3D0);
    temp_f14 = (temp_f7 * temp_f11) + (temp_f9 * temp_f0);
    temp_f6 = M2C_FIELD((temp_v0 + 0x238), f32 *, 4);
    temp_f13 = (temp_f4 * temp_f11) + (temp_f10 * temp_f0);
    temp_f8 = M2C_FIELD(temp_v0, f32 *, 0x238);
    sp30 = temp_f14;
    sp34 = temp_f13;
    temp_f4_2 = (temp_f4 * temp_f8) + (temp_f10 * temp_f6);
    temp_v1 = temp_s2 + (M2C_FIELD(arg0, s32 *, 0x410) * 0x2C);
    sp14 = M2C_FIELD(arg0, f32 *, 0x3C8) - (temp_f2 * temp_f13);
    temp_v1_2 = temp_v1 + 0x228;
    sp10 = M2C_FIELD(arg0, f32 *, 0x3C4) - (temp_f2 * temp_f14);
    sp0 = (temp_f7 * temp_f8) + (temp_f9 * temp_f6);
    sp4 = temp_f4_2;
    temp_f7_2 = M2C_FIELD(arg3, f32 *, 0);
    temp_f11_2 = M2C_FIELD(arg3, f32 *, 4);
    temp_f12 = M2C_FIELD(arg3, f32 *, 0xC);
    temp_f6_2 = M2C_FIELD(arg3, f32 *, 8);
    temp_f1 = (temp_f7_2 * M2C_FIELD(temp_v1_2, f32 *, 4)) + (temp_f11_2 * -M2C_FIELD(temp_v1, f32 *, 0x228));
    sp40 = temp_f1;
    temp_f2_2 = (temp_f6_2 * M2C_FIELD(temp_v1_2, f32 *, 4)) + (temp_f12 * -M2C_FIELD(temp_v1, f32 *, 0x228));
    sp44 = temp_f2_2;
    temp_f1_2 = M2C_FIELD(temp_s2, f32 *, 0x3C4) - (M2C_FIELD(temp_s2, f32 *, 0x3D0) * temp_f1);
    sp20 = temp_f1_2;
    sp50 = temp_f14;
    sp54 = temp_f13;
    temp_f5_2 = -((temp_f5 * temp_f6) - (temp_f11 * temp_f8)) * M2C_FIELD(arg0, f32 *, 4);
    sp24 = M2C_FIELD(temp_s2, f32 *, 0x3C8) - (M2C_FIELD(temp_s2, f32 *, 0x3D0) * temp_f2_2);
    sp60 = (temp_f7_2 * sp0) + (temp_f6_2 * temp_f4_2);
    temp_f2_3 = (temp_f11_2 * sp0) + (temp_f12 * sp4);
    temp_f9_2 = sp10 - temp_f1_2;
    temp_f16 = sp14 - sp24;
    sp64 = temp_f2_3;
    temp_f1_3 = M2C_FIELD(temp_v1, f32 *, 0x228);
    temp_f0_2 = M2C_FIELD(temp_v1_2, f32 *, 4);
    temp_f7_3 = (temp_f7_2 * temp_f0_2) + (temp_f11_2 * -temp_f1_3);
    sp70 = temp_f7_3;
    temp_f1_4 = -((temp_f1_3 * temp_f2_3) - (temp_f0_2 * sp60)) * M2C_FIELD(temp_s2, f32 *, 4);
    temp_f8_2 = (temp_f5_2 * sp50) + (temp_f1_4 * temp_f7_3);
    temp_f6_3 = (temp_f6_2 * M2C_FIELD(temp_v1_2, f32 *, 4)) + (temp_f12 * -M2C_FIELD(temp_v1, f32 *, 0x228));
    sp80 = temp_f8_2;
    sp74 = temp_f6_3;
    temp_f5_3 = (temp_f5_2 * sp54) + (temp_f1_4 * temp_f6_3);
    sp84 = temp_f5_3;
    sp90 = temp_f9_2;
    temp_f3 = M2C_FIELD(arg0, f32 *, 0) + M2C_FIELD(temp_s2, f32 *, 0) + ((temp_f8_2 * sp0) + (temp_f5_3 * sp4));
    sp94 = temp_f16;
    if (temp_f3 != 0x0.0p+0f) {
        var_f1 = (-(temp_f18 + 0x1.0000000000000p+0f) * ((temp_f9_2 * sp0) + (temp_f16 * sp4))) / temp_f3;
    } else {
        var_f1 = 0x0.0p+0f;
    }
    M2C_FIELD(arg1, f32 *, 0) = (f32) (var_f1 * sp0);
    M2C_FIELD(arg1, f32 *, 4) = (f32) (var_f1 * sp4);
    return var_f1;
}
