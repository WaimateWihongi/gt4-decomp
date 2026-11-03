/* NON_MATCHING: functional draft, 469 of 473 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

f32 func_00344798(s32, M2C_UNK);                    /* extern */
f32 func_003447F8(s32, M2C_UNK);                    /* extern */
f32 func_00344828(s32, M2C_UNK);                    /* extern */
f32 func_003448B8(s32, M2C_UNK);                    /* extern */
s32 func_0034C190(void *, s32);                     /* extern */
s32 func_0034C750(void *);                          /* extern */
M2C_UNK func_003934A0(void *, M2C_UNK, M2C_UNK, void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00393528(void *, M2C_UNK, void *);     /* extern */
s32 func_003C9F38(s32);                             /* extern */
M2C_UNK func_003CAFE0(void *);                      /* extern */
s32 func_003CC7B0();                                /* extern */
s32 func_003CC958(s32);                             /* extern */
M2C_UNK func_003CD430(void *, s32, void *);         /* extern */
M2C_UNK func_003CF570(void *, void *, f32);         /* extern */
M2C_UNK func_003CFA98(void *, s32, void *, f32);    /* extern */
M2C_UNK func_003D0D88(void *, s32, void *);         /* extern */
M2C_UNK func_003D3040(void *, s32);                 /* extern */
M2C_UNK func_003D3490(f32 *);                       /* extern */
M2C_UNK func_003D34A8(f32 *);                       /* extern */
s32 func_003D34D8(f32 *, f32 *, f32, f32, f32, f32); /* extern */
f32 func_003F3708(s32);                             /* extern */
f32 func_003F3720(s32);                             /* extern */
f32 func_003F3738(s32);                             /* extern */
M2C_UNK func_0057D8A0(f32 *, f32 *, f32);           /* extern */

void func_003D03E0(void *arg0, void *arg1, f32 fparg0) {
    s32 sp0;
    struct StackFrame_003D03E0 { s8 pad0[0x4]; f32 sp4; s8 pad1[0x8]; f32 sp10; f32 sp14; f32 sp18; f32 sp1C; f32 sp20; f32 sp24; s8 pad2[0x8]; f32 sp30; f32 sp34; s8 pad3[0x8]; f32 sp40; f32 sp44; s8 pad4[0x8]; f32 sp50; f32 sp54; f32 sp58; s8 pad5[0x4]; void * sp60; s32 sp64; s32 sp68; s32 sp6C; void * sp70; s32 * sp74; s8 pad6[0x8]; } sp_;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f14;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 var_f15;
    f32 var_f4;
    s32 *var_a1;
    s32 *var_s0;
    s32 *var_s1_2;
    s32 *var_s2;
    s32 *var_v0_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s7;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1_2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s3_4;
    s32 var_s3_5;
    s32 var_s3_6;
    s32 var_s3_7;
    s32 var_v0;
    void *temp_a3;
    void *var_a2;
    void *var_fp;
    void *var_s0_2;
    void *var_s1;
    void *var_s1_3;

    sp_.sp60 = arg1;
    if ((func_003CC7B0() != 0) && (func_0034C750(sp_.sp60) != 0)) {
        temp_s7 = M2C_FIELD(sp_.sp60, s32 *, 0xF8A0);
        M2C_FIELD(arg0, s32 *, 0x9670) = (s32) (M2C_FIELD(arg0, s32 *, 0x9670) ^ 1);
        M2C_FIELD(arg0, s32 *, 0x96D0) = (s32) (M2C_FIELD(arg0, s32 *, 0x96D0) + 1);
        var_s3 = 0;
        if (temp_s7 > 0) {
            var_s1 = arg0;
            do {
                temp_a1 = var_s3;
                var_s3 += 1;
                temp_v0 = func_0034C190(sp_.sp60, temp_a1);
                func_0057D8A0(((s8 *)&sp_), &sp_.sp4, func_003448B8(temp_v0, 0));
                M2C_FIELD(var_s1, f32 *, 0x7910) = sp0;
                M2C_FIELD(var_s1, f32 *, 0x791C) = sp_.sp4;
                M2C_FIELD(var_s1, f32 *, 0x790C) = sp_.sp4;
                M2C_FIELD(var_s1, f32 *, 0x7918) = (f32) -sp0;
                temp_f20 = func_00344798(temp_v0, 0);
                temp_f0 = func_00344828(temp_v0, 0);
                M2C_FIELD(var_s1, f32 *, 0x7914) = temp_f20;
                temp_f5 = M2C_FIELD(var_s1, f32 *, 0x790C);
                temp_f6 = M2C_FIELD(var_s1, f32 *, 0x7910);
                temp_f3 = M2C_FIELD(var_s1, f32 *, 0x7918);
                temp_f4 = M2C_FIELD(var_s1, f32 *, 0x791C);
                M2C_FIELD(var_s1, f32 *, 0x7920) = temp_f0;
                M2C_FIELD(var_s1, f32 *, 0x7924) = temp_f5;
                M2C_FIELD(var_s1, f32 *, 0x7928) = temp_f3;
                M2C_FIELD(var_s1, f32 *, 0x7930) = temp_f6;
                M2C_FIELD(var_s1, f32 *, 0x7934) = temp_f4;
                M2C_FIELD(var_s1, f32 *, 0x792C) = (f32) ((-temp_f5 * temp_f20) - (temp_f3 * temp_f0));
                M2C_FIELD(var_s1, f32 *, 0x7938) = (f32) ((-temp_f6 * temp_f20) - (temp_f4 * temp_f0));
                var_s1 += 0xA0;
            } while (var_s3 < temp_s7);
        }
        var_s3_2 = 0;
        if (temp_s7 > 0) {
            var_s2 = arg0 + 0x9290;
            var_s0 = arg0 + 0x9684;
            var_s1_2 = arg0 + 0x969C;
            do {
                temp_a0 = func_0034C190(sp_.sp60, var_s3_2);
                *var_s1_2 = *var_s0;
                temp_v0_2 = func_003C9F38(temp_a0);
                *var_s0 = temp_v0_2;
                if (temp_v0_2 != *var_s1_2) {
                    func_003D3040(arg0, var_s3_2);
                    temp_v1 = *var_s0;
                    if ((temp_v1 != (*var_s1_2 + 1)) && (temp_v1 != 0)) {
                        func_003CD430(arg0, var_s3_2, sp_.sp60);
                    }
                }
                temp_v0_3 = *var_s0;
                if (temp_v0_3 == 1) {
                    *var_s2 = temp_v0_3;
                } else if (temp_v0_3 == 0) {
                    *var_s2 = 0;
                }
                var_s3_2 += 1;
                var_s2 += 4;
                var_s0 += 4;
                var_s1_2 += 4;
            } while (var_s3_2 < temp_s7);
        }
        var_s3_3 = 0;
        var_a2 = (void *)6;
        var_a1 = arg0 + 0x4364;
        do {
            temp_v0_4 = var_s3_3 & 1;
            var_s3_3 += 1;
            if (temp_v0_4 == M2C_FIELD(arg0, s32 *, 0x9670)) {
                *var_a1 = 1;
            }
            var_a1 += 0xAA4;
        } while (var_s3_3 < 6);
        var_s3_4 = 0;
        if (temp_s7 > 0) {
            do {
                func_003D0D88(arg0, var_s3_4, sp_.sp60);
                temp_a1_2 = var_s3_4;
                var_s3_4 += 1;
                func_003CFA98(arg0, temp_a1_2, sp_.sp60, fparg0);
                var_a2 = sp_.sp60;
            } while (var_s3_4 < temp_s7);
        }
        var_a0 = 1;
        var_s3_5 = 0;
        if (temp_s7 > 0) {
            var_v0 = M2C_FIELD(arg0, s32 *, 0x98B8);
loop_31:
            if (var_v0 == 0) {
                var_s3_5 += 1;
                if (var_s3_5 < temp_s7) {
                    var_v0 = M2C_FIELD(((var_s3_5 * 8) + arg0), s32 *, 0x98B8);
                    goto loop_31;
                }
            } else {
                var_a0 = 0;
            }
        }
        if (var_a0 != 0) {
            func_00393528(arg0 + 0x98E8, 1, var_a2);
        }
        var_s3_6 = 0;
        if (temp_s7 > 0) {
            temp_a3 = arg0 + 8;
            var_a1_2 = 0x98B0;
            var_v0_2 = temp_a3 + 0x98B0;
loop_39:
            temp_a0_2 = *var_v0_2;
            var_a1_2 += 8;
            if (temp_a0_2 != *(s32 *)(arg0 + 0xC + var_a1_2)) {
                if (temp_a0_2 != 0) {
                    func_003934A0(arg0 + 0x98E8, 0x46, 0x40, temp_a3, 0x3F800000, 0x3F800000);
                } else {
                    goto block_43;
                }
            } else {
block_43:
                var_s3_6 += 1;
                var_v0_2 = temp_a3 + var_a1_2;
                if (var_s3_6 < temp_s7) {
                    goto loop_39;
                }
            }
        }
        var_s3_7 = 0;
        func_003CF570(arg0, sp_.sp60, fparg0);
        M2C_FIELD(arg0, s32 *, 0x9678) = -1;
        func_003D34A8(&sp_.sp10);
        if (temp_s7 > 0) {
            var_s1_3 = arg0;
            sp_.sp70 = var_s1_3;
            sp_.sp68 = 0x90F4;
            sp_.sp6C = 0;
            sp_.sp74 = var_s1_3 + 0xB4;
            do {
                temp_s0 = *sp_.sp74;
                temp_s2 = func_0034C190(sp_.sp60, var_s3_7);
                if ((temp_s0 == 8) && !(fabsf(func_003447F8(temp_s2, 0) - M2C_FIELD((arg0 + sp_.sp68), f32 *, 8)) > 0x1.0000000000000p+1f)) {
                    temp_f20_2 = -func_003F3738(temp_s2);
                    sp_.sp64 = 0;
                    var_fp = sp_.sp70 + 0x3E4;
                    var_s0_2 = arg0 + sp_.sp6C;
                    temp_f21 = -func_003F3708(temp_s2);
                    temp_f22 = func_003F3738(temp_s2) * 0x1.0000000000000p-1f;
                    temp_f0_2 = func_003F3720(temp_s2);
                    sp_.sp14 = temp_f21;
                    sp_.sp1C = temp_f0_2;
                    sp_.sp18 = temp_f22;
                    sp_.sp10 = temp_f20_2 * 0x1.0000000000000p-1f;
                    do {
                        sp_.sp40 = 0x0.0p+0f;
                        sp_.sp44 = 0x0.0p+0f;
                        sp_.sp30 = M2C_FIELD(var_s0_2, f32 *, 0x3E8);
                        sp_.sp34 = M2C_FIELD(var_s0_2, f32 *, 0x3F0);
                        func_003D3490(&sp_.sp50);
                        func_0057D8A0(&sp_.sp4, ((s8 *)&sp_), M2C_FIELD(var_s0_2, f32 *, 0x3F4));
                        if (func_003CC958(sp_.sp64) != 0) {
                            var_f15 = 0x1.9999980000000p-3f;
                            var_f4 = 0x1.3333320000000p+0f;
                        } else {
                            var_f15 = 0x1.0000000000000p-2f;
                            var_f4 = 0x1.8a3d700000000p-1f;
                        }
                        temp_f0_3 = var_f4 * -sp_.sp4;
                        temp_f1 = var_f4 * -sp0;
                        temp_f13 = M2C_FIELD(var_s1_3, f32 *, 0x78E4);
                        temp_f14 = M2C_FIELD(var_s1_3, f32 *, 0x78F0);
                        sp_.sp40 = temp_f0_3;
                        temp_f2 = sp_.sp34 + temp_f1;
                        sp_.sp44 = temp_f1;
                        sp_.sp30 += temp_f0_3;
                        sp_.sp34 = temp_f2;
                        temp_f0_4 = sp_.sp30;
                        temp_f12 = M2C_FIELD(var_s1_3, f32 *, 0x792C);
                        sp_.sp50 = var_f15;
                        temp_f5_2 = (M2C_FIELD(var_s1_3, f32 *, 0x78DC) * temp_f0_4) + (M2C_FIELD(var_s1_3, f32 *, 0x78E0) * temp_f2) + temp_f13;
                        temp_f3_2 = (M2C_FIELD(var_s1_3, f32 *, 0x78E8) * temp_f0_4) + (M2C_FIELD(var_s1_3, f32 *, 0x78EC) * temp_f2) + temp_f14;
                        sp_.sp20 = temp_f5_2;
                        sp_.sp24 = temp_f3_2;
                        temp_f6_2 = (M2C_FIELD(var_s1_3, f32 *, 0x7924) * temp_f5_2) + (M2C_FIELD(var_s1_3, f32 *, 0x7928) * temp_f3_2) + temp_f12;
                        temp_f4_2 = (M2C_FIELD(var_s1_3, f32 *, 0x7930) * temp_f5_2) + (M2C_FIELD(var_s1_3, f32 *, 0x7934) * temp_f3_2) + M2C_FIELD(var_s1_3, f32 *, 0x7938);
                        sp_.sp30 = temp_f6_2;
                        sp_.sp54 = temp_f6_2;
                        sp_.sp34 = temp_f4_2;
                        sp_.sp58 = temp_f4_2;
                        if (func_003D34D8(&sp_.sp10, &sp_.sp50, temp_f12, temp_f13, temp_f14, var_f15) != 0) {
                            temp_f0_5 = (M2C_FIELD(var_s1_3, f32 *, 0x790C) * sp_.sp54) + (M2C_FIELD(var_s1_3, f32 *, 0x7910) * sp_.sp58) + M2C_FIELD(var_s1_3, f32 *, 0x7914);
                            sp_.sp20 = temp_f0_5;
                            temp_f2_2 = (M2C_FIELD(var_s1_3, f32 *, 0x7918) * sp_.sp54) + (M2C_FIELD(var_s1_3, f32 *, 0x791C) * sp_.sp58) + M2C_FIELD(var_s1_3, f32 *, 0x7920);
                            sp_.sp24 = temp_f2_2;
                            sp_.sp30 = (M2C_FIELD(var_s1_3, f32 *, 0x78F4) * temp_f0_5) + (M2C_FIELD(var_s1_3, f32 *, 0x78F8) * temp_f2_2) + M2C_FIELD(var_s1_3, f32 *, 0x78FC);
                            sp_.sp34 = (M2C_FIELD(var_s1_3, f32 *, 0x7900) * temp_f0_5) + (M2C_FIELD(var_s1_3, f32 *, 0x7904) * sp_.sp24) + M2C_FIELD(var_s1_3, f32 *, 0x7908);
                            sp_.sp30 -= sp_.sp40;
                            temp_f2_3 = sp_.sp34 - sp_.sp44;
                            sp_.sp34 = temp_f2_3;
                            M2C_FIELD(var_s0_2, f32 *, 0x3F0) = temp_f2_3;
                            M2C_FIELD(var_s0_2, f32 *, 0x3E8) = (f32) sp_.sp30;
                            func_003CAFE0(var_fp);
                        }
                        var_fp += 0x178;
                        var_s0_2 += 0x178;
                        temp_a0_3 = sp_.sp64 + 1;
                        sp_.sp64 = temp_a0_3;
                    } while (temp_a0_3 < 5);
                }
                var_s3_7 += 1;
                var_s1_3 += 0xA0;
                sp_.sp68 += 0xC;
                sp_.sp6C += 0x8D0;
                sp_.sp70 += 0x8D0;
                sp_.sp74 += 4;
            } while (var_s3_7 < temp_s7);
        }
    }
}
