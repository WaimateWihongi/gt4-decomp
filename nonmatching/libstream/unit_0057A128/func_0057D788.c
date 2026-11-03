/* NON_MATCHING: functional draft, 70 of 73 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

f32 func_0057D788(f32 fparg0, f32 fparg1) {
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a4;
    s32 var_a0;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_v0;

    temp_f1 = fabsf(fparg0);
    temp_f2 = fabsf(fparg1);
    var_f0 = fparg0;
    if (!(temp_f1 < temp_f2)) {
        temp_a4 = M2C_BITWISE(s32, fparg0) & 0x80000000;
        temp_a1 = M2C_BITWISE(s32, temp_f2) >> 0x17;
        var_f0 = M2C_BITWISE(f32, temp_a4);
        temp_a2 = (M2C_BITWISE(s32, temp_f2) & 0x7FFFFF) | 0x800000;
        var_a0 = (M2C_BITWISE(s32, temp_f1) & 0x7FFFFF) | 0x800000;
        var_a3 = M2C_BITWISE(s32, temp_f1) >> 0x17;
        if (temp_a1 != 0) {
loop_5:
            if ((var_a0 < temp_a2) || (var_a0 -= temp_a2, (var_a0 != 0))) {
                if (temp_a1 < var_a3) {
                    var_a0 *= 2;
                    var_a3 -= 1;
                    goto loop_5;
                }
                var_v0 = var_a3 << 0x17;
                if (var_a0 <= 0x7FFFFF) {
                    var_a3_2 = var_a3 - 1;
                    var_a0 *= 2;
                    if (var_a3_2 != 0) {
                        var_v0 = var_a3_2 << 0x17;
                        if (var_a0 <= 0x7FFFFF) {
                            var_a0 *= 2;
loop_14:
                            temp_a3 = var_a3_2 - 1;
                            if (temp_a3 != 0) {
                                var_v0 = temp_a3 << 0x17;
                                if (var_a0 <= 0x7FFFFF) {
                                    var_a0 *= 2;
                                    var_a3_2 = temp_a3 - 1;
                                    if (var_a3_2 != 0) {
                                        if (var_a0 <= 0x7FFFFF) {
                                            var_a0 *= 2;
                                            goto loop_14;
                                        }
                                        var_v0 = var_a3_2 << 0x17;
                                        goto block_21;
                                    }
                                } else {
                                    goto block_21;
                                }
                            }
                        } else {
                            goto block_21;
                        }
                    }
                } else {
block_21:
                    var_f0 = M2C_BITWISE(f32, (temp_a4 | var_v0 | (var_a0 + 0xFF800000)));
                }
            }
        }
    }
    return var_f0;
}
