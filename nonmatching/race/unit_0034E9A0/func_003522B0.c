/* NON_MATCHING: functional draft, 57 of 89 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

float func_0057D1F0(float);
float func_0057D2B8(float);
f32 func_003522B0(void *arg0) {
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 temp_f22;
    f32 var_f0;

    var_f0 = 0x0.0p+0f;
    if (M2C_FIELD(arg0, f32 *, 0x4C) != 0x0.0p+0f) {
        temp_f22 = M2C_FIELD(arg0, f32 *, 0x20);
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x28) - temp_f22;
        if (!(temp_f22 < -0x1.638e360000000p+0f)) {
            var_f0 = 0x0.0p+0f;
            if (!(temp_f22 > 0x1.638e360000000p+0f)) {
                var_f0 = 0x0.0p+0f;
                if (!(temp_f1 < -0x1.1c71c60000000p-1f)) {
                    if (!(temp_f1 > 0x1.1c71c60000000p-1f)) {
                        temp_f20 = M2C_FIELD(arg0, f32 *, 0);
                        temp_f21 = func_0057D1F0(temp_f20) * M2C_FIELD(arg0, f32 *, 0x2C);
                        temp_f21_2 = temp_f21 + (func_0057D2B8(temp_f20) * M2C_FIELD(arg0, f32 *, 0x28));
                        var_f0 = 0x0.0p+0f;
                        if (!(temp_f21_2 > 0x1.1c71c60000000p+0f) && !(temp_f21_2 < -0x1.1c71c60000000p+0f)) {
                            temp_f20_2 = func_0057D2B8(temp_f21_2 * 0x1.69e9560000000p+1f);
                            var_f0 = temp_f20_2 * func_0057D1F0(temp_f22 * 0x1.2187780000000p+0f) * M2C_FIELD(arg0, f32 *, 0x4C);
                        }
                        /* Duplicate return node #0x1.8000000000000p+3 Try simplifying control flow for better match */
                        return var_f0;
                    }
                    goto block_7;
                }
            }
            /* Duplicate return node #0x1.8000000000000p+3 Try simplifying control flow for better match */
            return var_f0;
        }
block_7:
        return 0x0.0p+0f;
    }
    return var_f0;
}
