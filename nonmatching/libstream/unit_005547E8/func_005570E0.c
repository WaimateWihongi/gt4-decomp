/* NON_MATCHING: functional draft, 281 of 390 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s64 func_0057F578(s64, s64);                        /* extern */
s32 func_0057F6F8(s64, s64);                        /* extern */
s64 func_0057F8B8(s64, s64);                        /* extern */
s64 func_0057FA38(s64, s64);                        /* extern */
s32 func_0057FA98(s64);                             /* extern */
s64 func_0059C5C0(s64);                             /* extern */
s64 func_0059CE48(s64);                             /* extern */
s64 func_0059D318(s64);                             /* extern */

void func_005570E0(void *arg0, void *arg1, void *arg2) {
    s64 sp0;
    s64 sp8;
    s64 sp10;
    s64 sp18;
    s64 sp20;
    s64 sp28;
    s64 sp30;
    s64 sp38;
    s64 sp40;
    void *sp50;
    void *sp54;
    s64 sp58;
    s64 sp60;
    s64 sp68;
    s32 sp70;
    void *sp74;
    s64 *sp78;
    void *sp7C;
    void *sp80;
    s32 temp_v0_3;
    s64 temp_s0;
    s64 temp_s0_10;
    s64 temp_s0_11;
    s64 temp_s0_12;
    s64 temp_s0_2;
    s64 temp_s0_3;
    s64 temp_s0_4;
    s64 temp_s0_5;
    s64 temp_s0_6;
    s64 temp_s0_7;
    s64 temp_s0_8;
    s64 temp_s0_9;
    s64 temp_s1;
    s64 temp_s1_2;
    s64 temp_s1_3;
    s64 temp_s2;
    s64 temp_s2_2;
    s64 temp_s2_3;
    s64 temp_s3;
    s64 temp_s3_2;
    s64 temp_s3_3;
    s64 temp_s4;
    s64 temp_s4_2;
    s64 temp_s4_3;
    s64 temp_s5;
    s64 temp_s5_2;
    s64 temp_s6;
    s64 temp_s7;
    s64 temp_v0;
    s64 temp_v0_2;
    s64 temp_v0_4;
    s64 temp_v0_5;
    s64 temp_v0_6;
    s64 temp_v0_7;
    s64 var_s0;
    void *var_fp;

    sp50 = arg0;
    sp54 = arg2;
    sp70 = 0;
    sp58 = M2C_FIELD(arg1, s64 *, 0);
    sp60 = M2C_FIELD(arg1, s64 *, 8);
    sp74 = sp50 + 8;
    sp68 = M2C_FIELD(arg1, s64 *, 0x10);
    temp_s7 = func_0059C5C0(M2C_FIELD(arg1, s64 *, 0x18));
    sp78 = sp50 + 0x238;
    sp7C = sp50 + 0x1D8;
    var_fp = sp50 + 0x128;
    temp_s6 = func_0059C5C0(M2C_FIELD(arg1, s64 *, 0x20));
    sp80 = sp50 + 0x120;
    temp_s3 = func_0059C5C0(M2C_FIELD(arg1, s64 *, 0x28));
    temp_s4 = func_0059CE48(M2C_FIELD(arg1, s64 *, 0x18));
    temp_s5 = func_0059CE48(M2C_FIELD(arg1, s64 *, 0x20));
    temp_s2 = func_0059CE48(M2C_FIELD(arg1, s64 *, 0x28));
    sp0 = func_0057F8B8(temp_s7, temp_s3);
    sp18 = func_0057F8B8(temp_s7, temp_s2);
    sp30 = func_0057FA38(0, temp_s4);
    temp_v0 = func_0057F8B8(temp_s5, temp_s4);
    temp_s0 = func_0057F8B8(temp_v0, temp_s3);
    sp8 = func_0057FA38(temp_s0, func_0057F8B8(temp_s6, temp_s2));
    temp_s0_2 = func_0057F8B8(temp_v0, temp_s2);
    sp20 = func_0057F578(temp_s0_2, func_0057F8B8(temp_s6, temp_s3));
    sp38 = func_0057F8B8(temp_s5, temp_s7);
    temp_v0_2 = func_0057F8B8(temp_s6, temp_s4);
    temp_s0_3 = func_0057F8B8(temp_v0_2, temp_s3);
    sp10 = func_0057F578(temp_s0_3, func_0057F8B8(temp_s5, temp_s2));
    temp_s0_4 = func_0057F8B8(temp_v0_2, temp_s2);
    sp28 = func_0057FA38(temp_s0_4, func_0057F8B8(temp_s5, temp_s3));
    sp40 = func_0057F8B8(temp_s6, temp_s7);
    do {
        temp_s1 = M2C_FIELD(var_fp, s64 *, -0xA0);
        temp_s2_2 = M2C_FIELD(sp80, s64 *, -0x90);
        temp_s3_2 = M2C_FIELD(var_fp, s64 *, -0x90);
        temp_s0_5 = func_0057F8B8(temp_s1, sp0);
        temp_s0_6 = func_0057F578(temp_s0_5, func_0057F8B8(temp_s2_2, sp8));
        temp_v0_4 = func_0057FA38(M2C_FIELD(var_fp, s64 *, -0x10), func_0057F578(func_0057F578(temp_s0_6, func_0057F8B8(temp_s3_2, sp10)), sp58));
        temp_s4_2 = func_0057F8B8(temp_v0_4, temp_v0_4);
        temp_s0_7 = func_0057F8B8(temp_s1, sp18);
        temp_s0_8 = func_0057F578(temp_s0_7, func_0057F8B8(temp_s2_2, sp20));
        temp_v0_5 = func_0057FA38(M2C_FIELD(sp80, s64 *, 0), func_0057F578(func_0057F578(temp_s0_8, func_0057F8B8(temp_s3_2, sp28)), sp60));
        temp_s4_3 = func_0057F578(temp_s4_2, func_0057F8B8(temp_v0_5, temp_v0_5));
        temp_s0_9 = func_0057F8B8(temp_s1, sp30);
        temp_s0_10 = func_0057F578(temp_s0_9, func_0057F8B8(temp_s2_2, sp38));
        temp_v0_6 = func_0057FA38(M2C_FIELD(var_fp, s64 *, 0), func_0057F578(func_0057F578(temp_s0_10, func_0057F8B8(temp_s3_2, sp40)), sp68));
        temp_s1_2 = M2C_FIELD(sp7C, s64 *, -0x30);
        temp_v0_7 = func_0057FA38(func_0059D318(func_0057F578(temp_s4_3, func_0057F8B8(temp_v0_6, temp_v0_6))), *(s64 *)0x6C87E8);
        M2C_FIELD(sp7C, s64 *, 0x30) = temp_v0_7;
        temp_s3_3 = func_0057FA38(temp_v0_7, temp_s1_2);
        temp_s2_3 = M2C_FIELD(sp7C, s64 *, 0);
        temp_s5_2 = func_0057F8B8(func_0057F578(temp_v0_7, temp_s1_2), 0xFF80 << 0x2E);
        if (((func_0057F6F8(temp_s3_3, 0) >= 0) && (func_0057F6F8(temp_s2_3, 0x8092 << 0x2F) >= 0)) || ((func_0057F6F8(temp_s3_3, 0) <= 0) && (func_0057F6F8(temp_s2_3, 0xC049 << 0x30) <= 0))) {
            var_s0 = temp_s2_3;
            if (func_0057F6F8(temp_s2_3, 0) < 0) {
                var_s0 = func_0057FA38(0, temp_s2_3);
            }
            temp_s0_11 = func_0057F8B8(func_0057FA38(var_s0, 0x8092 << 0x2F), *(s64 *)0x6C87F0);
            *sp78 = func_0057F578(temp_s5_2, func_0057F8B8(temp_s0_11, func_0057FA38(temp_s2_3, temp_s5_2)));
        } else {
            M2C_FIELD(((sp70 * 8) + sp74), s64 *, 0x230) = temp_s5_2;
        }
        var_fp += 0x18;
        sp78 += 8;
        temp_v0_3 = sp70 + 1;
        sp70 = temp_v0_3;
        sp7C += 8;
        sp80 += 0x18;
    } while (temp_v0_3 < 6);
    temp_s0_12 = 0x80A2 << 0x2F;
    temp_s1_3 = *(s64 *)0x6C87F8;
    M2C_FIELD(sp54, s32 *, 0) = func_0057FA98(func_0057F8B8(func_0057F578(M2C_FIELD(sp50, s64 *, 0x258), temp_s0_12), temp_s1_3));
    M2C_FIELD(sp54, s32 *, 4) = func_0057FA98(func_0057F8B8(func_0057F578(M2C_FIELD(sp50, s64 *, 0x250), temp_s0_12), temp_s1_3));
    M2C_FIELD(sp54, s32 *, 8) = func_0057FA98(func_0057F8B8(func_0057F578(M2C_FIELD(sp50, s64 *, 0x248), temp_s0_12), temp_s1_3));
    M2C_FIELD(sp54, s32 *, 0xC) = func_0057FA98(func_0057F8B8(func_0057F578(M2C_FIELD(sp50, s64 *, 0x240), temp_s0_12), temp_s1_3));
    M2C_FIELD(sp54, s32 *, 0x10) = func_0057FA98(func_0057F8B8(func_0057F578(M2C_FIELD(sp50, s64 *, 0x238), temp_s0_12), temp_s1_3));
    M2C_FIELD(sp54, s32 *, 0x14) = func_0057FA98(func_0057F8B8(func_0057F578(M2C_FIELD(sp50, s64 *, 0x260), temp_s0_12), temp_s1_3));
}
