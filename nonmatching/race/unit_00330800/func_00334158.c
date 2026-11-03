/* NON_MATCHING: functional draft, 342 of 360 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_00575D00(void);
double func_0057FB50(float);
s32 func_0057F8B8(s32, s64);                        /* extern */
s32 func_0057FA38(s32, s32);                        /* extern */
s32 func_0057FA98(s32);                             /* extern */
M2C_UNK func_005CD9E8(void *, void *, s32, s8 *);   /* extern */

void func_00334158(void *arg0) {
    struct StackFrame_00334158 { s8 pad0[0x4]; void * sp4; void * sp8; s32 spC; s32 sp10; s32 sp14; s32 sp18; s32 sp1C; s32 sp20; f32 sp24; s8 pad1[0x1C]; s32 sp44; s8 pad2[0x4]; s8 sp4C; s8 pad3[0x3]; s32 sp50; s32 sp54; s32 sp58; s32 sp5C; s32 sp60; s32 sp64; void * sp68; s32 sp6C; s32 sp70; s32 sp74; s32 sp78; s8 pad4[0x4]; } sp_;
    void *sp40;                                     /* compiler-managed */
    s32 sp48;                                       /* compiler-managed */
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f4;
    f32 temp_f5;
    s32 *temp_a0_2;
    s32 *temp_a0_3;
    s32 *temp_a0_4;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_s0;
    s32 temp_s0_3;
    s32 temp_s1;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 var_s1;
    s32 var_s4;
    s32 var_s6;
    s32 var_s7;
    s32 var_v1;
    u32 temp_s3;
    u32 temp_v1_2;
    u8 temp_fp;
    u8 temp_v0_3;
    u8 temp_v1_3;
    void *temp_a0_5;
    void *temp_a2;
    void *temp_s0_2;
    void *temp_s1_2;
    void *temp_v1_4;
    void *var_s0;
    void *var_s5;
    void *var_v0;

    if (*(s32 *)0x6201A8 != 0) {
        func_003355F0((s8 *) arg0);
        return;
    }
    temp_a4 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_a1 = M2C_FIELD(arg0, s32 *, 4) * temp_a4;
    temp_a3 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_s4 = temp_a4 * temp_a3;
    temp_v0 = M2C_FIELD(arg0, s32 *, 8) * temp_a3;
    temp_v1 = sp_.sp18 * sp_.sp1C;
    sp_.sp1C = 1;
    sp_.sp4 = NULL;
    sp_.sp8 = NULL;
    temp_s3 = temp_a1 * 3 * temp_v0;
    sp_.spC = 0;
    temp_s0 = sp_.sp10 * sp_.sp20 * sp_.sp14 * temp_v1;
    sp_.sp10 = temp_a1;
    sp_.sp14 = temp_v0;
    sp_.sp18 = 1;
    sp_.sp20 = 3;
    temp_f20 = M2C_FIELD(arg0, f32 *, 0x14);
    temp_s1 = func_00575D00();
    if (temp_s3 != temp_s0) {
        func_005CD968(((s8 *)&sp_));
        var_v0 = arg0 + 0x1C;
        if ((u32) temp_s1 >= temp_s3) {
            temp_v1_2 = sp_.sp8 - sp_.sp4;
            sp_.sp4C = 0;
            if (temp_s3 < temp_v1_2) {
                temp_s0_2 = sp_.sp4 + temp_s3;
                func_005A47D4(temp_s0_2, sp_.sp8, 0U);
                sp40 = temp_s0_2;
                sp_.sp8 -= sp_.sp8 - temp_s0_2;
            } else {
                func_005CD9E8(((s8 *)&sp_), sp_.sp8, temp_s3 - temp_v1_2, &sp_.sp4C);
            }
            goto block_8;
        }
    } else {
block_8:
        var_v0 = arg0 + 0x1C;
    }
    sp_.sp68 = var_v0;
    sp_.sp24 = temp_f20;
    sp_.sp6C = 0;
    var_s5 = M2C_FIELD(var_v0, void **, 4);
    if (M2C_FIELD(arg0, s32 *, 8) > 0) {
        sp_.sp78 = temp_s4 - 1;
        do {
            var_s7 = 0;
            if (M2C_FIELD(arg0, s32 *, 4) > 0) {
                do {
                    temp_v1_3 = M2C_FIELD(var_s5, u8 *, 0);
                    var_s6 = 0;
                    sp_.sp70 = (s32) temp_v1_3;
                    temp_f1 = (f32) temp_v1_3;
                    temp_v0_3 = M2C_FIELD(var_s5, u8 *, 1);
                    temp_f5 = (f32) temp_v0_3;
                    sp_.sp74 = (s32) temp_v0_3;
                    temp_fp = M2C_FIELD(var_s5, u8 *, 2);
                    var_s5 += 3;
                    temp_f4 = (f32) temp_fp;
                    temp_f22 = ((temp_f1 * -0x1.5a1cac0000000p-3f) - (temp_f5 * 0x1.53f7ce0000000p-2f)) + (temp_f4 * 0x1.0000000000000p-1f);
                    temp_f21 = ((temp_f1 * 0x1.0000000000000p-1f) - (temp_f5 * 0x1.ad0e560000000p-2f)) - (temp_f4 * 0x1.4bc6a60000000p-4f);
                    if (M2C_FIELD(arg0, s32 *, 0x10) > 0) {
                        var_v1 = M2C_FIELD(arg0, s32 *, 0xC);
                        do {
                            var_s4 = 0;
                            if (var_v1 > 0) {
loop_18:
                                temp_a0 = ((var_s7 * var_v1) + var_s4) * sp_.sp20;
                                temp_a1_2 = (var_s6 * var_v1) + var_s4;
                                var_s4 += 1;
                                temp_s1_2 = (sp_.sp10 * sp_.sp20 * ((sp_.sp6C * M2C_FIELD(arg0, s32 *, 0x10)) + var_s6)) + temp_a0 + sp_.sp4;
                                temp_a2 = arg0 + (temp_a1_2 * 0x28) + 0x54;
                                if (temp_a1_2 == sp_.sp78) {
                                    M2C_FIELD(temp_s1_2, u8 *, 2) = temp_fp;
                                    M2C_FIELD(temp_s1_2, u8 *, 0) = (u8) sp_.sp70;
                                    M2C_FIELD(temp_s1_2, u8 *, 1) = (u8) sp_.sp74;
                                } else {
                                    temp_v0_4 = M2C_FIELD(temp_a2, s32 *, 0x20);
                                    temp_f20_2 = (f32) *(s32 *)((M2C_FIELD(temp_a2, s32 *, 0x10) * temp_v0_4 * sp_.sp6C) + (var_s7 * temp_v0_4) + M2C_FIELD(temp_a2, s32 *, 4));
                                    sp40 = (s32) (temp_f20_2 + (temp_f21 * 0x1.66e9780000000p+0f));
                                    temp_s0_3 = M2C_BITWISE(s32, func_0057FB50(temp_f20_2 - (temp_f21 * 0x1.6d91680000000p-1f)));
                                    temp_v0_5 = func_0057FA98(func_0057FA38(temp_s0_3, func_0057F8B8(M2C_BITWISE(s32, func_0057FB50(temp_f22)), *(s64 *)0x69F130)));
                                    sp_.sp44 = temp_v0_5;
                                    sp_.sp50 = 0xFF;
                                    sp_.sp54 = 0;
                                    sp48 = (s32) (temp_f20_2 + (temp_f22 * 0x1.c5a1ca0000000p+0f));
                                    temp_a0_2 = (sp40 > 0) ? &sp40 : &sp_.sp54;
                                    M2C_FIELD(temp_s1_2, u8 *, 0) = (u8) *((*temp_a0_2 >= 0xFF) ? &sp_.sp50 : temp_a0_2);
                                    sp_.sp58 = 0xFF;
                                    sp_.sp5C = 0;
                                    temp_a0_3 = (temp_v0_5 > 0) ? &sp_.sp44 : &sp_.sp5C;
                                    M2C_FIELD(temp_s1_2, u8 *, 1) = (u8) *((*temp_a0_3 >= 0xFF) ? &sp_.sp58 : temp_a0_3);
                                    sp_.sp60 = 0xFF;
                                    sp_.sp64 = 0;
                                    temp_a0_4 = (sp48 > 0) ? &sp48 : &sp_.sp64;
                                    M2C_FIELD(temp_s1_2, u8 *, 2) = (u8) *((*temp_a0_4 >= 0xFF) ? &sp_.sp60 : temp_a0_4);
                                }
                                var_v1 = M2C_FIELD(arg0, s32 *, 0xC);
                                if (var_s4 < var_v1) {
                                    goto loop_18;
                                }
                            }
                            var_s6 += 1;
                            var_v1 = M2C_FIELD(arg0, s32 *, 0xC);
                        } while (var_s6 < M2C_FIELD(arg0, s32 *, 0x10));
                    }
                    var_s7 += 1;
                } while (var_s7 < M2C_FIELD(arg0, s32 *, 4));
            }
            temp_v0_2 = sp_.sp6C + 1;
            sp_.sp6C = temp_v0_2;
        } while (temp_v0_2 < M2C_FIELD(arg0, s32 *, 8));
    } else {
        sp_.sp78 = temp_s4 - 1;
    }
    if (sp_.sp78 > 0) {
        var_s1 = sp_.sp78;
        var_s0 = arg0 + 0x54;
        do {
            var_s1 -= 1;
            func_005CD968(var_s0);
            M2C_FIELD(var_s0, s32 *, 0x10) = 0;
            M2C_FIELD(var_s0, s32 *, 0x14) = 0;
            var_s0 += 0x28;
        } while (var_s1 != 0);
    }
    temp_a0_5 = M2C_FIELD(arg0, void **, 0x20);
    M2C_FIELD(arg0, void **, 0x20) = (void *) sp_.sp4;
    sp_.sp4 = temp_a0_5;
    temp_v1_4 = sp_.sp8;
    sp_.sp8 = M2C_FIELD(arg0, void **, 0x24);
    M2C_FIELD(arg0, void **, 0x24) = temp_v1_4;
    temp_v1_5 = M2C_FIELD(arg0, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) sp_.spC;
    sp_.spC = temp_v1_5;
    temp_v1_6 = sp_.sp10;
    sp_.sp10 = M2C_FIELD(arg0, s32 *, 0x2C);
    M2C_FIELD(arg0, s32 *, 0x2C) = temp_v1_6;
    temp_v0_6 = M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) sp_.sp14;
    sp_.sp14 = temp_v0_6;
    temp_v0_7 = sp_.sp18;
    sp_.sp18 = M2C_FIELD(arg0, s32 *, 0x34);
    M2C_FIELD(arg0, s32 *, 0x34) = temp_v0_7;
    temp_v0_8 = M2C_FIELD(arg0, s32 *, 0x38);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) sp_.sp1C;
    sp_.sp1C = temp_v0_8;
    temp_v0_9 = sp_.sp20;
    sp_.sp20 = M2C_FIELD(arg0, s32 *, 0x3C);
    M2C_FIELD(arg0, s32 *, 0x3C) = temp_v0_9;
    temp_f1_2 = sp_.sp24;
    sp_.sp24 = M2C_FIELD(arg0, f32 *, 0x40);
    M2C_FIELD(arg0, f32 *, 0x40) = temp_f1_2;
    func_00331520(sp_.sp68, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10));
    sp48 = sp_.sp4;
    if (sp_.sp4 != NULL) {
        func_00575DA0(sp_.sp4);
    }
}
