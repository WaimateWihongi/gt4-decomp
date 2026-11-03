/* NON_MATCHING: functional draft, 131 of 134 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_003485D0(void *arg0, s32 arg1, s32 arg2, f32 fparg0, f32 fparg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f9;
    f32 var_f1;
    f32 var_f3;
    f32 var_f6;
    f32 var_f7;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_v0;
    void *temp_a3;

    temp_a3 = arg0 + 0x104;
    temp_v1 = arg1 * 4;
    temp_f4 = M2C_FIELD(temp_a3, f32 *, 0x468);
    temp_a1 = arg1 * 2;
    temp_f6 = M2C_FIELD(temp_a3, f32 *, 0x484);
    temp_f5 = *(f32 *)(0x8435A8 + temp_v1);
    temp_v0 = (temp_a1 + arg2) * 4;
    var_f3 = *(f32 *)(0x8435B8 + temp_v0);
    temp_f9 = M2C_FIELD(arg0, f32 *, 0x54C);
    var_f7 = *(f32 *)(0x843600 + temp_v0);
    var_f1 = ((fparg0 - temp_f4) * *(s32 *)(0x843598 + temp_v1)) - (temp_f6 * *(s32 *)(0x8435B0 + temp_v1));
    if (temp_f5 != 0x0.0p+0f) {
        if (!(temp_f4 < fparg0) || (var_v0 = temp_a1 + arg2, !(temp_f4 < fparg1))) {
            if (!(fparg0 < temp_f4)) {
                goto block_10;
            }
            if (fparg1 < temp_f4) {
                var_v0 = temp_a1 + arg2;
                goto block_8;
            }
block_10:
            goto block_11;
        }
block_8:
        temp_v0_2 = var_v0 * 4;
        var_f7 = *(f32 *)(0x843620 + temp_v0_2);
        var_f3 = *(f32 *)(0x8435D8 + temp_v0_2);
        var_f1 += (fparg1 - M2C_FIELD(temp_a3, f32 *, 0x468)) * temp_f5;
    } else {
block_11:
        if (((M2C_FIELD(temp_a3, f32 *, 0x468) > 0x0.0p+0f) && (fparg0 < M2C_FIELD(temp_a3, f32 *, 0x468))) || ((M2C_FIELD(temp_a3, f32 *, 0x468) < 0x0.0p+0f) && (M2C_FIELD(temp_a3, f32 *, 0x468) < fparg0))) {
            temp_v0_3 = (temp_a1 + arg2) * 4;
            var_f7 = *(f32 *)(0x843610 + temp_v0_3);
            var_f3 = *(f32 *)(0x8435C8 + temp_v0_3);
            var_f1 -= M2C_FIELD(temp_a3, f32 *, 0x468) * *(s32 *)(0x8435A0 + temp_v1);
        }
    }
    var_f6 = temp_f6 + (var_f1 * temp_f9);
    if (*(s32 *)(0x8435E8 + temp_v1) != 0) {
        temp_f1 = M2C_FIELD(temp_a3, f32 *, 0x53C);
        temp_f2 = *(f32 *)(0x8435F0 + temp_v1);
        if (temp_f2 < temp_f1) {
            temp_f5_2 = *(f32 *)(0x8435F8 + temp_v1);
            if (!(temp_f5_2 <= temp_f1)) {
                var_f3 += ((var_f7 - var_f3) * (temp_f1 - temp_f2)) / (temp_f5_2 - temp_f2);
            } else {
                var_f3 = var_f7;
            }
        }
    }
    if (!(var_f3 < var_f6)) {
        temp_f0 = -var_f3;
        if (var_f6 < temp_f0) {
            var_f6 = temp_f0;
        }
    } else {
        var_f6 = var_f3;
    }
    temp_f0_2 = M2C_FIELD(temp_a3, f32 *, 0x468) + (var_f6 * temp_f9);
    if (!(M2C_FIELD(temp_a3, f32 *, 0x468) <= fparg0) || !(fparg0 <= temp_f0_2)) {
        if (!(fparg0 <= M2C_FIELD(temp_a3, f32 *, 0x468))) {
            M2C_FIELD(temp_a3, f32 *, 0x484) = var_f6;
            /* Duplicate return node #0x1.3800000000000p+5 Try simplifying control flow for better match */
            M2C_FIELD(temp_a3, f32 *, 0x468) = temp_f0_2;
            return;
        }
        if (!(temp_f0_2 <= fparg0)) {
            M2C_FIELD(temp_a3, f32 *, 0x484) = var_f6;
            M2C_FIELD(temp_a3, f32 *, 0x468) = temp_f0_2;
            return;
        }
        /* Duplicate return node #0x1.2800000000000p+5 Try simplifying control flow for better match */
        M2C_FIELD(temp_a3, f32 *, 0x468) = fparg0;
        M2C_FIELD(temp_a3, f32 *, 0x484) = 0x0.0p+0f;
        return;
    }
    M2C_FIELD(temp_a3, f32 *, 0x468) = fparg0;
    M2C_FIELD(temp_a3, f32 *, 0x484) = 0x0.0p+0f;
}
