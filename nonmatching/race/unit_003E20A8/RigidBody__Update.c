/* NON_MATCHING: functional draft, 451 of 452 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00395A38(s32, M2C_UNK, f32 **, s32, f32, f32, f32, f32); /* extern */
s32 func_003E2100(s32);                             /* extern */
s32 func_003E29F8(void *);                          /* extern */
M2C_UNK func_003E3290(void *);                      /* extern */
M2C_UNK func_003E3458(void *, void *);              /* extern */
M2C_UNK func_003E3748(void *, void *, s8);          /* extern */
M2C_UNK func_003E3C48(void *, void *, s8);          /* extern */
M2C_UNK func_0057D8A0();      /* extern */
M2C_UNK func_005FE3A0();                  /* extern */

s32 func_003E2B28(void *arg0, f32 fparg0) {
    struct StackFrame_003E2B28 { s8 pad0[0x60]; f32 sp60; f32 sp64; f32 sp68; s8 pad1[0x4]; f32 sp70; f32 sp74; f32 sp78; s8 pad2[0x4]; f32 sp80; f32 sp84; f32 sp88; s8 pad3[0x4]; f32 sp90; f32 sp94; f32 sp98; f32 sp9C; f32 * spA0; void * spA4; s8 pad4[0x4]; s32 spAC; } sp_;
    f32 *var_s3;
    f32 *var_s4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f24;
    f32 temp_f25;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f9;
    f32 temp_f9_2;
    f32 temp_f9_3;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f12;
    f32 var_f13;
    f32 var_f14;
    f32 var_f15;
    f32 var_f20;
    f32 var_f21;
    f32 var_f22;
    f32 var_f7;
    s32 var_a1;
    s32 var_s1_2;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_2;
    s8 temp_s6;
    s8 var_s1;
    u8 *var_a0;
    u8 temp_a1;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_5;
    void *temp_s2;
    void *temp_v0_3;
    void *temp_v0_4;

    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x45);
    if ((temp_v0 == 0) || (temp_v0_2 = temp_v0 + 1, M2C_FIELD(arg0, u8 *, 0x45) = temp_v0_2, var_v0 = 0, (func_003E2100(temp_v0_2 & 0xFF) == 0))) {
        temp_a1 = M2C_FIELD(arg0, u8 *, 0x44);
        var_v0 = 1;
        temp_s2 = *(s32 *)0x6D6054 + (temp_a1 * 0xA0) + 0x20;
        temp_s6 = M2C_FIELD(temp_s2, s8 *, 3);
        if (!(((u8) M2C_FIELD(temp_s2, u8 *, 2) >> 1) & 1)) {
            sp_.sp60 = 0x0.0p+0f;
            temp_v0_3 = M2C_FIELD(arg0, void **, 0x4C);
            sp_.sp68 = 0x0.0p+0f;
            sp_.sp70 = 0x0.0p+0f;
            sp_.sp74 = 0x0.0p+0f;
            sp_.sp78 = 0x0.0p+0f;
            temp_f3 = -M2C_FIELD(temp_s2, f32 *, 0x94) * 0x1.39eb840000000p+3f;
            sp_.sp64 = temp_f3;
            if (temp_v0_3 != NULL) {
                temp_f2 = sp_.sp60;
                sp_.sp60 = M2C_FIELD(temp_v0_3, f32 *, 0) + temp_f2;
                sp_.sp64 = temp_f3 + M2C_FIELD(temp_v0_3, f32 *, 4);
                sp_.sp68 = M2C_FIELD(temp_v0_3, f32 *, 8) + temp_f2;
            }
            temp_v0_4 = M2C_FIELD(arg0, void **, 0x50);
            if (temp_v0_4 != NULL) {
                sp_.sp70 += M2C_FIELD(temp_v0_4, f32 *, 0);
                sp_.sp74 += M2C_FIELD(temp_v0_4, f32 *, 4);
                sp_.sp78 += M2C_FIELD(temp_v0_4, f32 *, 8);
            }
            sp_.sp80 = M2C_FIELD(arg0, f32 *, 0x10);
            sp_.sp84 = M2C_FIELD(arg0, f32 *, 0x14);
            sp_.sp88 = M2C_FIELD(arg0, f32 *, 0x18);
            func_005FE3A0(arg0, temp_a1);
            var_a1 = 0;
            if (M2C_FIELD(arg0, void **, 0x4C) == NULL) {
                var_v0_2 = 0 < 3;
                if (M2C_FIELD(arg0, void **, 0x50) == NULL) {
                    var_s5 = 0 >= 3;
                    if (temp_s6 > 0) {
                        var_a0 = arg0 + 0x58;
                        var_s1 = temp_s6;
                        do {
                            temp_v0_5 = *var_a0;
                            var_a0 += 1;
                            var_s1 -= 1;
                            var_a1 = ((temp_v0_5 ^ 2) == 0) ? (var_a1 + 1) : var_a1;
                        } while (var_s1 != 0);
                        goto block_12;
                    }
                } else {
                    goto block_13;
                }
            } else {
block_12:
                var_v0_2 = var_a1 < 3;
block_13:
                var_s5 = var_v0_2 ^ 1;
            }
            if (var_s5 == 0) {
                var_f21 = M2C_FIELD(arg0, f32 *, 0x28);
                var_f20 = M2C_FIELD(arg0, f32 *, 0x2C);
                var_f22 = M2C_FIELD(arg0, f32 *, 0x30);
                temp_f26 = M2C_FIELD(temp_s2, f32 *, 4);
                temp_f25 = M2C_FIELD(temp_s2, f32 *, 8);
                temp_f24 = M2C_FIELD(temp_s2, f32 *, 0xC);
                func_0057D8A0(&sp_.sp90, &sp_.sp94, M2C_FIELD(arg0, f32 *, 4));
                func_0057D8A0(&sp_.sp98, &sp_.sp9C, M2C_FIELD(arg0, f32 *, 0xC));
                if (*(s32 *)0x621D08 == 0) {
                    M2C_FIELD((void *)0x8456B0, f32 *, 0) = 0x1.59e8b60000000p-1f;
                    M2C_FIELD((void *)0x8456B0, f32 *, 0xC) = 0x1.59e8b60000000p-1f;
                    *(s32 *)0x621D08 = 1;
                    M2C_FIELD((void *)0x8456B0, f32 *, 8) = -0x1.67a2d80000000p-3f;
                    M2C_FIELD((void *)0x8456B0, f32 *, 4) = -0x1.67a2d80000000p-3f;
                }
                temp_f9 = fparg0 * M2C_FIELD((void *)0x8456B0, f32 *, 0);
                temp_f2_2 = ((var_f21 * sp_.sp98) - (var_f20 * sp_.sp9C)) * (0x1.0000000000000p+0f / sp_.sp94);
                var_s4 = (void *)0x8456B0 + 4;
                var_s3 = (f32 *)0x6A3960;
                var_s1_2 = 0;
                M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) + (temp_f2_2 * temp_f9));
                M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) + (-((var_f21 * sp_.sp9C) + (var_f20 * sp_.sp98)) * temp_f9));
                M2C_FIELD(arg0, f32 *, 0xC) = (f32) (M2C_FIELD(arg0, f32 *, 0xC) + (-((temp_f2_2 * sp_.sp90) + var_f22) * temp_f9));
                do {
                    temp_f3_2 = *var_s3;
                    var_s3 += 4;
                    temp_f3_3 = fparg0 * temp_f3_2;
                    var_s1_2 += 1;
                    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) + (((sp_.sp74 + ((temp_f24 - temp_f26) * var_f22 * var_f21)) * temp_f3_3) / temp_f25));
                    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) + (((sp_.sp70 + ((temp_f25 - temp_f24) * var_f20 * var_f22)) * temp_f3_3) / temp_f26));
                    M2C_FIELD(arg0, f32 *, 0x30) = (f32) (M2C_FIELD(arg0, f32 *, 0x30) + (((sp_.sp78 + ((temp_f26 - temp_f25) * var_f21 * var_f20)) * temp_f3_3) / temp_f24));
                    func_0057D8A0(&sp_.sp90, &sp_.sp94, M2C_FIELD(arg0, f32 *, 4), M2C_FIELD(arg0, f32 *, 0x28));
                    func_0057D8A0(&sp_.sp98, &sp_.sp9C, M2C_FIELD(arg0, f32 *, 0xC));
                    var_f21 = M2C_FIELD(arg0, f32 *, 0x28);
                    var_f20 = M2C_FIELD(arg0, f32 *, 0x2C);
                    temp_f9_2 = fparg0 * *var_s4;
                    var_f22 = M2C_FIELD(arg0, f32 *, 0x30);
                    var_s4 += 4;
                    temp_f2_3 = ((var_f21 * sp_.sp98) - (var_f20 * sp_.sp9C)) * (0x1.0000000000000p+0f / sp_.sp94);
                    temp_f0 = M2C_FIELD(arg0, f32 *, 4) + (-((var_f21 * sp_.sp9C) + (var_f20 * sp_.sp98)) * temp_f9_2);
                    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) + (temp_f2_3 * temp_f9_2));
                    M2C_FIELD(arg0, f32 *, 4) = temp_f0;
                    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (M2C_FIELD(arg0, f32 *, 0xC) + (-((temp_f2_3 * sp_.sp90) + var_f22) * temp_f9_2));
                } while (var_s1_2 < 3);
                var_f7 = temp_f0;
                if (var_f7 < 0x0.0p+0f) {
                    temp_f0_2 = var_f7 + 0x1.921fb40000000p+2f;
                    M2C_FIELD(arg0, f32 *, 4) = temp_f0_2;
                    var_f7 = temp_f0_2;
                }
                if (var_f7 >= 0x1.921fb40000000p+2f) {
                    M2C_FIELD(arg0, f32 *, 4) = (f32) (var_f7 - 0x1.921fb40000000p+2f);
                }
                var_f0 = M2C_FIELD(arg0, f32 *, 8);
                if (var_f0 < 0x0.0p+0f) {
                    var_f0 += 0x1.921fb40000000p+2f;
                    M2C_FIELD(arg0, f32 *, 8) = var_f0;
                }
                if (var_f0 >= 0x1.921fb40000000p+2f) {
                    M2C_FIELD(arg0, f32 *, 8) = (f32) (var_f0 - 0x1.921fb40000000p+2f);
                }
                var_f0_2 = M2C_FIELD(arg0, f32 *, 0xC);
                if (var_f0_2 < 0x0.0p+0f) {
                    var_f0_2 += 0x1.921fb40000000p+2f;
                    M2C_FIELD(arg0, f32 *, 0xC) = var_f0_2;
                }
                if (var_f0_2 >= 0x1.921fb40000000p+2f) {
                    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (var_f0_2 - 0x1.921fb40000000p+2f);
                }
                temp_f0_3 = 0x1.0000000000000p+0f / M2C_FIELD(temp_s2, f32 *, 0x94);
                temp_f7 = M2C_FIELD(arg0, f32 *, 0x1C);
                temp_f8 = M2C_FIELD(arg0, f32 *, 0x20);
                temp_f9_3 = M2C_FIELD(arg0, f32 *, 0x24);
                M2C_FIELD(arg0, f32 *, 0x10) = (f32) (M2C_FIELD(arg0, f32 *, 0x10) + (temp_f7 * fparg0));
                M2C_FIELD(arg0, f32 *, 0x14) = (f32) (M2C_FIELD(arg0, f32 *, 0x14) + (temp_f8 * fparg0));
                M2C_FIELD(arg0, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0x18) + (temp_f9_3 * fparg0));
                M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (temp_f7 + (sp_.sp60 * temp_f0_3 * fparg0));
                M2C_FIELD(arg0, f32 *, 0x20) = (f32) (temp_f8 + (sp_.sp64 * temp_f0_3 * fparg0));
                M2C_FIELD(arg0, f32 *, 0x24) = (f32) (temp_f9_3 + (sp_.sp68 * temp_f0_3 * fparg0));
            }
            func_005FE3A0(arg0);
            func_003E3290(arg0);
            func_003E3458(arg0, ((s8 *)&sp_));
            if (var_s5 == 0) {
                temp_f0_4 = M2C_FIELD(arg0, f32 *, 0x10);
                var_f12 = sp_.sp80;
                var_f14 = temp_f0_4;
                if (!(var_f12 < temp_f0_4)) {
                    var_f14 = var_f12;
                    var_f12 = temp_f0_4;
                }
                temp_f0_5 = M2C_FIELD(arg0, f32 *, 0x18);
                var_f13 = sp_.sp88;
                var_f15 = temp_f0_5;
                if (!(var_f13 < temp_f0_5)) {
                    var_f15 = var_f13;
                    var_f13 = temp_f0_5;
                }
                sp_.spA0 = &sp_.sp80;
                sp_.spA4 = arg0;
                sp_.spAC = 0;
                func_00395A38(*(s32 *)0x6D6060, 0x3E26D0, &sp_.spA0, M2C_FIELD(arg0, s32 *, 0x48), var_f12, var_f13, var_f14, var_f15);
                if (var_s5 == 0) {
                    var_v0 = func_003E29F8(arg0);
                    if (var_v0 != 0) {
                        func_003E3748(arg0, ((s8 *)&sp_), temp_s6);
                        goto block_40;
                    }
                } else {
                    goto block_40;
                }
            } else {
block_40:
                func_003E3C48(arg0, ((s8 *)&sp_), temp_s6);
                var_v0 = 1;
            }
        }
    }
    return var_v0;
}
