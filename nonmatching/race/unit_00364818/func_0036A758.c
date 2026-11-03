/* NON_MATCHING: functional draft, 419 of 440 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void *func_00359510(void *);                        /* extern */
f32 func_0035D248(u8 *, s32, u8 *);                 /* extern */
M2C_UNK func_00369DE8(u8 *, u8 *, void *, s32, u8, f32, f32); /* extern */
f32 func_0036A048(void *, void *, void *);          /* extern */
f32 func_0036A578(void *, s32, f32, f32);           /* extern */
f32 func_0036A690(void *, s32, M2C_UNK, f32, f32);  /* extern */
f32 func_0057D1F0(f32, f32);                        /* extern */

void func_0036A758(u8 *arg0) {
    struct StackFrame_0036A758 { s8 pad0[0x10]; u8 * sp10; s8 pad1[0x3]; f32 * sp14; u8 * sp18; s8 pad2[0x7]; } sp_;
    f32 *var_s1_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 var_f2;
    f32 var_f5;
    f32 var_f7;
    f32 var_f7_2;
    s32 temp_a3;
    s32 temp_v0_2;
    s32 var_a3_2;
    s32 var_a7;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s4_3;
    s32 var_s4_4;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_5;
    s8 var_s1;
    u32 var_v1_2;
    u32 var_v1_6;
    u8 *var_a1;
    u8 *var_a1_2;
    u8 *var_a2;
    u8 *var_a3;
    u8 *var_s0;
    u8 *var_s6;
    u8 *var_v0_2;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a1;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 var_a2_2;
    u8 var_s2;
    u8 var_v1_3;
    u8 var_v1_4;
    void *temp_fp;
    void *temp_s2;
    void *temp_s3;
    void *temp_s5;
    void *temp_t0;
    void *temp_v0;
    void *temp_v1;
    void *var_a0;
    void *var_a4;
    void *var_a5;
    void *var_a6;

    temp_s3 = arg0 + 0x104;
    var_s4 = 0;
    sp_.sp10 = arg0;
    temp_fp = M2C_FIELD(arg0, void **, 0x10);
    temp_v0 = func_00359510(temp_fp);
    if (M2C_FIELD(temp_v0, u8 *, 1) != 0) {
        var_a0 = temp_v0 + 0x3C;
        var_a1 = sp_.sp10 + 0x7B8;
        var_a3 = sp_.sp10 + 0x164;
        do {
            temp_v0_2 = M2C_FIELD(var_a0, u8 *, -0x10) * 4;
            temp_v0_3 = M2C_FIELD(var_a0, u8 *, -0x20);
            temp_f0 = M2C_FIELD((temp_v0_2 + (temp_fp + 8)), f32 *, 0x20) * M2C_FIELD(temp_s3, f32 *, 0x584);
            var_f7 = 0x0.0p+0f;
            temp_f1 = M2C_FIELD((temp_v0_2 + temp_fp), f32 *, 0x10) * M2C_FIELD(temp_s3, f32 *, 0x580);
            if (temp_v0_3 == 0) {
                var_f7 = temp_f0 + 0x0.0p+0f;
            } else if ((temp_v0_3 ^ 1) == 0) {
                var_f7 = 0x0.0p+0f - temp_f0;
            }
            var_v1 = 0;
            if (var_s4 < (s32) M2C_FIELD(temp_v0, u8 *, 1)) {
                var_v1 = M2C_FIELD(var_a0, s8 *, 0) > 0;
            }
            if (var_v1 != 0) {
                var_f7 += temp_f1;
            } else {
                var_v1_2 = 0;
                if (var_s4 < (s32) M2C_FIELD(temp_v0, u8 *, 1)) {
                    var_v1_2 = (u32) M2C_FIELD(var_a0, s8 *, 0) >> 0x1F;
                }
                if (var_v1_2 != 0) {
                    var_f7 -= temp_f1;
                }
            }
            var_s4 += 1;
            var_a0 += 1;
            temp_f5 = -M2C_FIELD(var_a1, f32 *, 0x24);
            temp_f4 = M2C_FIELD(var_a1, f32 *, 0x20);
            temp_f6 = M2C_FIELD(var_a1, f32 *, 0x1C);
            var_a1 += 0x34;
            M2C_FIELD(var_a3, f32 *, 0xD8) = (f32) (((M2C_FIELD(temp_s3, f32 *, 0x544) + (M2C_FIELD(temp_s3, f32 *, 0x24) * var_f7)) * temp_f6) + ((M2C_FIELD(temp_s3, f32 *, 0x548) + (M2C_FIELD(temp_s3, f32 *, 0x28) * var_f7)) * temp_f5) + ((M2C_FIELD(temp_s3, f32 *, 0x54C) + (M2C_FIELD(temp_s3, f32 *, 0x2C) * var_f7)) * temp_f4));
            var_a3 += 0xEC;
        } while (var_s4 < (s32) M2C_FIELD(temp_v0, u8 *, 1));
    }
    var_s4_2 = 0;
    if (M2C_FIELD(temp_v0, u8 *, 1) != 0) {
        var_a2 = sp_.sp10;
        sp_.sp14 = temp_s3 + 0x410;
        var_s6 = var_a2 + 0x164;
        sp_.sp18 = temp_v0 + 0x14;
        var_v0 = (s32) M2C_FIELD(temp_v0, u8 *, 1) > 0;
        do {
            var_s2 = 0;
            if (var_v0 != 0) {
                var_s2 = *sp_.sp18;
            }
            temp_f20 = *sp_.sp14;
            var_s1 = 1;
            temp_s5 = temp_fp + (var_s2 * 0x58) + 0x308;
            if (!(M2C_FIELD(var_s6, f32 *, 0x48) > 0x0.0p+0f)) {
                var_s1 = 0;
            }
            func_00369DE8(sp_.sp10, var_s6, temp_s5, var_s4_2, var_s2, temp_f20, func_0035D248(sp_.sp10, var_s4_2, var_a2));
            if ((var_s1 == 0) && (M2C_FIELD(var_s6, f32 *, 0x48) > 0x0.0p+0f)) {
                var_s1 = 2;
            } else if ((var_s1 == 1) && (M2C_FIELD(var_s6, f32 *, 0x48) == 0x0.0p+0f)) {
                var_s1 = 3;
            }
            M2C_FIELD(var_s6, s8 *, 0xDC) = var_s1;
            temp_f20_2 = M2C_FIELD(var_s6, f32 *, 0x94) - M2C_FIELD(temp_s5, f32 *, 0x10);
            M2C_FIELD(var_s6, f32 *, 8) = func_0036A690(temp_fp, var_s4_2, 1, M2C_FIELD(temp_s3, f32 *, 0x468), temp_f20_2);
            if (M2C_FIELD(temp_v0, u8 *, 0) != 1) {
                M2C_FIELD(var_s6, f32 *, 4) = func_0036A578(temp_fp, var_s4_2, M2C_FIELD(temp_s3, f32 *, 0x468), temp_f20_2);
            } else {
                temp_f20_3 = M2C_FIELD(temp_fp, f32 *, 0x1004);
                M2C_FIELD(var_s6, f32 *, 4) = (f32) (M2C_FIELD(temp_s3, f32 *, 0x468) * (temp_f20_3 * func_0057D1F0(M2C_FIELD(temp_s3, f32 *, 0x56C) - M2C_FIELD(temp_s3, f32 *, 0x578), temp_f20_2)));
            }
            var_s4_2 += 1;
            var_s6 += 0xEC;
            var_v0 = var_s4_2 < (s32) M2C_FIELD(temp_v0, u8 *, 1);
            var_a2 = sp_.sp18 + 1;
            sp_.sp14 += 4;
            sp_.sp18 = var_a2;
        } while (var_v0 != 0);
    }
    var_s4_3 = 0;
    if (M2C_FIELD(temp_v0, u8 *, 2) != 0) {
        var_s1_2 = ((s8 *)&sp_);
        var_s0 = temp_v0 + 0x10;
        do {
            *var_s1_2 = 0x0.0p+0f;
            temp_a0 = *(u8 *)(temp_v0 + 0xC + var_s4_3);
            temp_a1 = M2C_FIELD((temp_a0 + (temp_v0 + 4)), u8 *, 0x20);
            if (temp_a1 != 0x7F) {
                var_v1_3 = 0;
                if (var_s4_3 < (s32) M2C_FIELD(temp_v0, u8 *, 2)) {
                    var_v1_3 = *var_s0;
                }
                *var_s1_2 = func_0036A048(sp_.sp10 + (temp_a0 * 0xEC) + 0x164, sp_.sp10 + (temp_a1 * 0xEC) + 0x164, temp_fp + (var_v1_3 * 0x58) + 0x308);
            }
            var_s4_3 += 1;
            var_s1_2 += 4;
            var_s0 += 1;
        } while (var_s4_3 < (s32) M2C_FIELD(temp_v0, u8 *, 2));
    }
    var_f7_2 = 0x0.0p+0f;
    if (*(u8 *)0x620E11 == 0) {
        var_f7_2 = M2C_FIELD(temp_fp, f32 *, 0x34) * -M2C_FIELD(temp_s3, f32 *, 0x554);
    }
    M2C_FIELD(temp_s3, f32 *, 0x5B8) = 0x0.0p+0f;
    if (M2C_FIELD(temp_v0, u8 *, 0) == 1) {
        M2C_FIELD(temp_s3, f32 *, 0x5B8) = (f32) (M2C_FIELD(temp_s3, f32 *, 0x554) * M2C_FIELD(temp_s3, f32 *, 0x4D4) * M2C_FIELD(temp_s3, f32 *, 0x2C));
    }
    var_s4_4 = 0;
    temp_f6_2 = M2C_FIELD(temp_fp, f32 *, 0x38) * M2C_FIELD(temp_s3, f32 *, 0x564);
    if (M2C_FIELD(temp_v0, u8 *, 1) != 0) {
        temp_s2 = temp_v0 + 4;
        var_a1_2 = sp_.sp10 + 0x164;
        temp_t0 = temp_fp + 0x14;
        var_a6 = temp_s3 + 0x420;
        var_a7 = 0x10;
        var_a4 = temp_v0 + 0x3C;
        var_a5 = temp_v0 + 0x24;
        do {
            var_f5 = M2C_FIELD(var_a1_2, f32 *, 0x9C);
            if (M2C_FIELD(var_a1_2, f32 *, 0x48) == 0x0.0p+0f) {
                var_v1_4 = 0;
                if (var_s4_4 < (s32) M2C_FIELD(temp_v0, u8 *, 1)) {
                    var_v1_4 = M2C_FIELD(var_a5, u8 *, -0x10);
                }
                var_f5 = -M2C_FIELD(((var_v1_4 * 0x58) + temp_t0), f32 *, 0x330);
            }
            temp_a3 = var_s4_4 + 0x20;
            if (M2C_FIELD(var_a5, u8 *, 0) != 0x7F) {
                temp_a0_2 = M2C_FIELD(var_a4, u8 *, -0x20);
                temp_f0_2 = *(((s8 *)&sp_) + (M2C_FIELD(var_a4, u8 *, -0x10) * 4));
                if (temp_a0_2 == 0) {
                    var_f5 -= temp_f0_2;
                } else if ((temp_a0_2 ^ 1) == 0) {
                    var_f5 += temp_f0_2;
                }
            }
            var_f2 = temp_f6_2;
            var_v1_5 = 0;
            if (var_s4_4 < (s32) M2C_FIELD(temp_v0, u8 *, 1)) {
                var_v1_5 = M2C_FIELD(var_a4, s8 *, 0) > 0;
            }
            if (var_v1_5 != 0) {
                temp_v0_4 = M2C_FIELD(temp_v0, u8 *, 4);
                temp_f1_2 = (f32) temp_v0_4;
                if (temp_v0_4 != 2) {
                    var_f2 = temp_f6_2 * (0x1.0000000000000p+1f / temp_f1_2);
                }
                var_f5 = (var_f5 - (M2C_FIELD(temp_s3, f32 *, 0x5A8) / temp_f1_2)) + var_f2;
                goto block_67;
            }
            var_v1_6 = 0;
            if (var_s4_4 < (s32) M2C_FIELD(temp_v0, u8 *, 1)) {
                var_v1_6 = (u32) M2C_FIELD(var_a4, s8 *, 0) >> 0x1F;
            }
            var_v0_2 = temp_s2 + temp_a3;
            if (var_v1_6 != 0) {
                temp_v0_5 = M2C_FIELD(temp_v0, u8 *, 5);
                temp_f1_3 = (f32) temp_v0_5;
                if (temp_v0_5 != 2) {
                    var_f2 = temp_f6_2 * (0x1.0000000000000p+1f / temp_f1_3);
                }
                var_f5 = (var_f5 - (M2C_FIELD(temp_s3, f32 *, 0x5AC) / temp_f1_3)) - var_f2;
block_67:
                var_v0_2 = temp_s2 + temp_a3;
            }
            if (*var_v0_2 != 0x7F) {
                if (M2C_FIELD((void *)0x620CD8, u8 *, 0x139) != 0) {
                    if (var_s4_4 >= (s32) M2C_FIELD(temp_v0, u8 *, 1)) {
                        var_a2_2 = 0;
                        var_a3_2 = var_s4_4 + 0x10;
                    } else {
                        var_a3_2 = var_a7;
                        var_a2_2 = *(u8 *)(temp_s2 + var_a7);
                    }
                    temp_v1 = (var_a2_2 * 4) + temp_fp;
                    temp_v0_6 = *(u8 *)(temp_v0 + 0xC + var_a3_2);
                    temp_f2 = ((M2C_FIELD(temp_fp, f32 *, 0x1060) + ((M2C_FIELD(var_a6, f32 *, -0x10) - M2C_FIELD(((var_a2_2 * 0x58) + temp_t0), f32 *, 0x300)) + M2C_FIELD(temp_v1, f32 *, 0x2C4))) / M2C_FIELD(temp_v1, f32 *, 0x28)) * M2C_FIELD(var_a1_2, f32 *, 0xD4);
                    if (temp_v0_6 == 0) {
                        var_f5 -= temp_f2;
                    } else if ((temp_v0_6 ^ 1) == 0) {
                        var_f5 += temp_f2;
                    }
                } else {
                    temp_v0_7 = M2C_FIELD(var_a4, u8 *, -0x20);
                    if (temp_v0_7 == 0) {
                        var_f5 += var_f7_2;
                    } else if ((temp_v0_7 ^ 1) == 0) {
                        var_f5 -= var_f7_2;
                    }
                }
            }
            M2C_FIELD(var_a6, f32 *, 0) = var_f5;
            var_a6 += 4;
            var_s4_4 += 1;
            var_a7 += 1;
            var_a4 += 1;
            var_a5 += 1;
            var_a1_2 += 0xEC;
        } while (var_s4_4 < (s32) M2C_FIELD(temp_v0, u8 *, 1));
    }
}
