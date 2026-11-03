/* NON_MATCHING: functional draft, 275 of 284 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

f32 func_004860E8(s32, s32, f32);                   /* extern */
M2C_UNK func_0049FD50(); /* extern */
M2C_UNK func_004A1638(M2C_UNK);                     /* extern */
M2C_UNK func_004A2808(M2C_UNK, M2C_UNK);            /* extern */
void *func_004A5B70(M2C_UNK);                       /* extern */
M2C_UNK func_004AA1D8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_004AB040(M2C_UNK);                     /* extern */

void func_003CA168(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    void *sp30;
    void *sp34;
    void *sp38;
    f32 *temp_a0;
    f32 *temp_a1;
    f32 *temp_a2;
    f32 *temp_a3;
    f32 *temp_v0_2;
    f32 *temp_v1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f12;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f21;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 var_f12;
    f32 var_f22;
    f32 var_f5;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_t0;
    void *temp_v0;
    void *var_a5;
    void *var_s0;
    void *var_s1;
    void *var_s2;

    var_s4 = 0;
    func_004A1638(6);
    func_004AB040(0xF);
    var_f22 = 0x0.0p+0f;
    func_004A2808(0x44, 0x3F800000);
    func_004AA1D8(0, 0, 0, 0x3F4CCCCC);
    sp30 = func_004A5B70(0x24);
    sp34 = func_004A5B70(0x24);
    temp_v0 = func_004A5B70(0xC);
    sp38 = temp_v0;
    var_s2 = temp_v0;
    var_s1 = sp34;
    var_s0 = sp30;
    do {
        var_f12 = var_f22;
        if (var_s4 == 0x17) {
            var_f22 = 0x1.0000000000000p+0f;
            var_f12 = 0x1.0000000000000p+0f;
        }
        var_s4 += 1;
        temp_f21 = func_004860E8(arg0, arg3, var_f12);
        temp_f0 = func_004860E8(arg1, arg3, var_f22);
        temp_f12 = var_f22;
        var_f22 += 0x1.642c840000000p-5f;
        temp_f0_2 = func_004860E8(arg2, arg3, temp_f12);
        M2C_FIELD(var_s0, f32 *, 8) = temp_f0_2;
        M2C_FIELD(var_s0, f32 *, 0) = temp_f21;
        M2C_FIELD(var_s0, f32 *, 4) = temp_f0;
        M2C_FIELD(var_s0, f32 *, 0xC) = temp_f21;
        M2C_FIELD(var_s0, f32 *, 0x10) = temp_f0;
        M2C_FIELD(var_s0, f32 *, 0x14) = temp_f0_2;
        var_s0 += 0x18;
        M2C_FIELD(var_s1, f32 *, 0xC) = temp_f21;
        M2C_FIELD(var_s1, f32 *, 0x10) = temp_f0;
        M2C_FIELD(var_s1, f32 *, 0x14) = temp_f0_2;
        M2C_FIELD(var_s1, f32 *, 0) = temp_f21;
        M2C_FIELD(var_s1, f32 *, 4) = temp_f0;
        M2C_FIELD(var_s1, f32 *, 8) = temp_f0_2;
        var_s1 += 0x18;
        M2C_FIELD(var_s2, s32 *, 0) = 0x80000000;
        M2C_FIELD(var_s2, s32 *, 4) = 0x80000000;
        var_s2 += 8;
    } while (var_s4 < 0x18);
    var_s4_2 = 0;
    sp0 = 0x1.0000000000000p+0f;
    sp4 = 0x0.0p+0f;
    sp8 = 0x0.0p+0f;
    sp10 = 0x0.0p+0f;
    sp14 = 0x0.0p+0f;
    sp18 = -0x1.0000000000000p+0f;
    var_t0 = 0;
    var_a5 = sp30;
    do {
        var_f5 = sp0;
        if (var_s4_2 < 0x17) {
            sp20 = M2C_FIELD(var_a5, f32 *, 0x18) - M2C_FIELD(var_a5, f32 *, 0);
            sp24 = M2C_FIELD(var_a5, f32 *, 0x1C) - M2C_FIELD(var_a5, f32 *, 4);
            temp_f2 = M2C_FIELD(var_a5, f32 *, 0x20) - M2C_FIELD(var_a5, f32 *, 8);
            sp28 = temp_f2;
            temp_f3 = sp20;
            temp_f0_3 = sp24;
            temp_f1 = (temp_f3 * temp_f3) + (temp_f0_3 * temp_f0_3) + (temp_f2 * temp_f2);
            var_f5 = sp0;
            if (temp_f1 != 0x0.0p+0f) {
                temp_f2_2 = M2C_RSQRTS(0x1.0000000000000p+0f, temp_f1);
                sp20 = temp_f3 * temp_f2_2;
                sp24 *= temp_f2_2;
                temp_f1_2 = sp28 * temp_f2_2;
                sp28 = temp_f1_2;
                temp_f0_4 = sp24;
                if (sp20 != 0x0.0p+0f) {
                    sp0 = -temp_f0_4;
                    sp4 = sp20;
                    sp8 = 0x0.0p+0f;
                } else if (temp_f0_4 == 0x0.0p+0f) {
                    sp0 = temp_f1_2;
                    sp4 = 0x0.0p+0f;
                    sp8 = -sp20;
                } else {
                    sp0 = 0x0.0p+0f;
                    sp4 = -sp28;
                    sp8 = sp24;
                }
                temp_f0_5 = M2C_RSQRTS(0x1.0000000000000p+0f, (sp0 * sp0) + (sp4 * sp4) + (sp8 * sp8));
                var_f5 = sp0 * temp_f0_5;
                sp0 = var_f5;
                sp8 *= temp_f0_5;
                sp4 *= temp_f0_5;
                sp10 = (sp24 * sp8) - (sp28 * sp4);
                sp14 = (sp28 * var_f5) - (sp20 * sp8);
                sp18 = (sp20 * sp4) - (sp24 * var_f5);
            }
        }
        var_s4_2 += 1;
        temp_v0_2 = var_t0 + sp34;
        temp_v1 = temp_v0_2 + 4;
        temp_a0 = temp_v0_2 + 8;
        temp_a1 = temp_v0_2 + 0xC;
        M2C_FIELD(var_a5, f32 *, 0) = (f32) (M2C_FIELD(var_a5, f32 *, 0) + (var_f5 * 0x1.47ae140000000p-7f));
        temp_a2 = temp_v0_2 + 0x10;
        temp_a3 = temp_v0_2 + 0x14;
        var_t0 += 0x18;
        M2C_FIELD(var_a5, f32 *, 4) = (f32) (M2C_FIELD(var_a5, f32 *, 4) + (sp4 * 0x1.47ae140000000p-7f));
        M2C_FIELD(var_a5, f32 *, 8) = (f32) (M2C_FIELD(var_a5, f32 *, 8) + (sp8 * 0x1.47ae140000000p-7f));
        M2C_FIELD(var_a5, f32 *, 0xC) = (f32) (M2C_FIELD(var_a5, f32 *, 0xC) - (sp0 * 0x1.47ae140000000p-7f));
        M2C_FIELD(var_a5, f32 *, 0x10) = (f32) (M2C_FIELD(var_a5, f32 *, 0x10) - (sp4 * 0x1.47ae140000000p-7f));
        M2C_FIELD(var_a5, f32 *, 0x14) = (f32) (M2C_FIELD(var_a5, f32 *, 0x14) - (sp8 * 0x1.47ae140000000p-7f));
        var_a5 += 0x18;
        *temp_v0_2 += sp10 * 0x1.47ae140000000p-7f;
        *temp_v1 += sp14 * 0x1.47ae140000000p-7f;
        *temp_a0 += sp18 * 0x1.47ae140000000p-7f;
        *temp_a1 -= sp10 * 0x1.47ae140000000p-7f;
        *temp_a2 -= sp14 * 0x1.47ae140000000p-7f;
        *temp_a3 -= sp18 * 0x1.47ae140000000p-7f;
    } while (var_s4_2 < 0x18);
    func_0049FD50(0x30, sp30, 0, sp38, 0, 0, &sp8, &sp4);
    func_0049FD50(0x30, sp34, 0, sp38, 0, 0);
    func_004A1638(0xF);
}
