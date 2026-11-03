/* NON_MATCHING: functional draft, 262 of 273 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0034C190(s32, s32);
f32 func_003F3720(void *);
float func_003F3738(void *);
float func_0057D118(float, float);
void func_003CE4A0(s32 arg0, s32 arg1, s32 arg2) {
    f32 sp0;
    M2C_UNK32 sp4;
    f32 sp8;
    f32 *var_v1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 temp_f3_5;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f2;
    f32 var_f3;
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_s2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_s0;
    void *temp_s1_2;
    void *temp_s4;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;

    temp_s2 = func_0034C190(arg2, arg1);
    temp_s1 = arg1 * 4;
    temp_s0 = arg0 + (arg1 * 0x8D0);
    temp_s4 = temp_s0 + 0x3E4;
    temp_a1 = M2C_FIELD(*(s32 *)(temp_s1 + M2C_FIELD(M2C_FIELD(*(s32 *)arg2, void **, 0x60), s32 *, 8)), void **, 0x2880);
    temp_v1 = M2C_FIELD(temp_a1, void **, 8);
    temp_a1_2 = M2C_FIELD(M2C_FIELD((temp_v1 + 0x50), void *(**)(void *, void *), 4)(temp_a1 + M2C_FIELD(temp_v1, s16 *, 0x50), temp_a1), void **, 0x50);
    if (temp_a1_2 != NULL) {
        temp_a0 = M2C_FIELD((temp_s1 + arg0), s32 *, 0x9658);
        temp_s1_2 = temp_a1_2 + 0xAC;
        switch (temp_a0) {                          /* irregular */
        case 0:
        case 3:
            temp_f0 = func_003F3738((void *) temp_s2) * 0x1.0000000000000p-1f;
            sp4 = 0;
            temp_f3 = M2C_FIELD(temp_s4, f32 *, 0x184);
            sp0 = temp_f0 + 0x1.9999980000000p-4f;
            temp_f2 = M2C_FIELD(temp_s1_2, f32 *, 8);
            sp8 = temp_f2;
            if (fabsf(temp_f2 - temp_f3) < 0x1.cccccc0000000p-2f) {
                if (temp_f3 < temp_f2) {
                    var_f0 = temp_f3 + 0x1.fffffe0000000p-2f;
                } else {
                    var_f0 = temp_f3 - 0x1.fffffe0000000p-2f;
                }
                sp8 = var_f0;
            }
            temp_f3_2 = M2C_FIELD(temp_s4, f32 *, 0x474);
            temp_f2_2 = sp8;
            if (fabsf(temp_f2_2 - temp_f3_2) < 0x1.cccccc0000000p-2f) {
                if (temp_f3_2 < temp_f2_2) {
                    var_f0_2 = temp_f3_2 + 0x1.fffffe0000000p-2f;
                } else {
                    var_f0_2 = temp_f3_2 - 0x1.fffffe0000000p-2f;
                }
                sp8 = var_f0_2;
            }
            temp_f3_3 = M2C_FIELD(temp_s4, f32 *, 0x184);
            var_f2 = sp8;
            if (fabsf(var_f2 - temp_f3_3) < 0x1.cccccc0000000p-2f) {
                temp_f0_2 = (temp_f3_3 + M2C_FIELD(temp_s4, f32 *, 0x474)) * 0x1.0000000000000p-1f;
                sp8 = temp_f0_2;
                var_f2 = temp_f0_2;
            }
            temp_f3_4 = 0x1.2d95800000000p+2f - M2C_MINS(M2C_MAXS(func_0057D118(var_f2 - M2C_FIELD(temp_s1_2, f32 *, 8), 0x1.9999980000000p-4f), -0x1.0c131c0000000p-1f), 0x1.0c131c0000000p-1f);
            temp_v0 = temp_s4 + 0x5E0;
            M2C_FIELD(temp_v0, f32 *, 4) = sp0;
            M2C_FIELD(temp_v0, f32 *, 0x10) = temp_f3_4;
            M2C_FIELD(temp_v0, M2C_UNK32 *, 8) = sp4;
            M2C_FIELD(temp_v0, f32 *, 0xC) = (f32) sp8;
            return;
        case 1:
            temp_f20 = M2C_FIELD(temp_a1_2, f32 *, 0xAC);
            temp_v0_2 = temp_s0 + 0x9C4;
            temp_f0_3 = func_003F3720((void *) temp_s2) + 0x1.9999980000000p-4f;
            M2C_FIELD(temp_v0_2, f32 *, 4) = temp_f20;
            M2C_FIELD(temp_v0_2, f32 *, 0x10) = 0x1.921cac0000000p+1f;
            M2C_FIELD(temp_v0_2, s32 *, 8) = 0;
            M2C_FIELD(temp_v0_2, f32 *, 0xC) = temp_f0_3;
            return;
        case 2:
            temp_f0_4 = -func_003F3738((void *) temp_s2);
            sp4 = 0;
            sp0 = (temp_f0_4 * 0x1.0000000000000p-1f) - 0x1.9999980000000p-4f;
            temp_f1 = M2C_FIELD(temp_s1_2, f32 *, 8);
            sp8 = temp_f1;
            temp_f2_3 = M2C_FIELD(temp_s0, f32 *, 0x3F0);
            var_v1 = temp_s4 + 0x2FC;
            if (fabsf(temp_f1 - temp_f2_3) < 0x1.cccccc0000000p-2f) {
                if (temp_f2_3 < temp_f1) {
                    var_f0_3 = temp_f2_3 + 0x1.fffffe0000000p-2f;
                } else {
                    var_f0_3 = temp_f2_3 - 0x1.fffffe0000000p-2f;
                }
                sp8 = var_f0_3;
                var_v1 = temp_s4 + 0x2FC;
            }
            temp_f2_4 = *var_v1;
            temp_f3_5 = sp8;
            if (fabsf(temp_f3_5 - temp_f2_4) < 0x1.cccccc0000000p-2f) {
                if (temp_f2_4 < temp_f3_5) {
                    var_f0_4 = temp_f2_4 + 0x1.fffffe0000000p-2f;
                } else {
                    var_f0_4 = temp_f2_4 - 0x1.fffffe0000000p-2f;
                }
                sp8 = var_f0_4;
            }
            temp_f2_5 = M2C_FIELD(temp_s4, f32 *, 0xC);
            var_f3 = sp8;
            if (fabsf(var_f3 - temp_f2_5) < 0x1.cccccc0000000p-2f) {
                temp_f0_5 = (temp_f2_5 + *var_v1) * 0x1.0000000000000p-1f;
                sp8 = temp_f0_5;
                var_f3 = temp_f0_5;
            }
            temp_f0_6 = M2C_MINS(M2C_MAXS(func_0057D118(var_f3 - M2C_FIELD(temp_s1_2, f32 *, 8), 0x1.9999980000000p-4f), -0x1.0c131c0000000p-1f), 0x1.0c131c0000000p-1f) + 0x1.921cac0000000p+0f;
            temp_v0_3 = temp_s4 + 0x5E0;
            M2C_FIELD(temp_v0_3, M2C_UNK32 *, 8) = sp4;
            M2C_FIELD(temp_v0_3, f32 *, 4) = sp0;
            M2C_FIELD(temp_v0_3, f32 *, 0x10) = temp_f0_6;
            M2C_FIELD(temp_v0_3, f32 *, 0xC) = (f32) sp8;
            break;
        }
    }
}
