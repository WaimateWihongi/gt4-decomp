/* NON_MATCHING: functional draft, 43 of 44 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s8 func_004AAF38(void *arg0, s32 arg1) {
    s32 temp_a2;
    s32 temp_v0;
    s32 var_a5;
    s8 temp_a1;
    s8 temp_v1;
    s8 var_a4;
    void *temp_v0_2;

    var_a4 = M2C_FIELD(arg0, s8 *, 0xEBD);
    var_a5 = var_a4 * 4;
    if (var_a4 >= 0) {
loop_2:
        temp_a2 = (var_a5 + var_a4) * 4;
        if (M2C_FIELD((temp_a2 + (arg0 + 8)), s32 *, 0xC40) == arg1) {
            temp_v0 = temp_a2 + 0xC30;
            *(s32 *)(arg0 + 0x14 + temp_v0) = 0;
            temp_v0_2 = arg0 + temp_v0;
            temp_a1 = M2C_FIELD(temp_v0_2, s8 *, 0xA);
            temp_v1 = M2C_FIELD(temp_v0_2, s8 *, 0xB);
            if (temp_a1 >= 0) {
                M2C_FIELD(((temp_a1 * 0x14) + arg0), s8 *, 0xC3B) = temp_v1;
            } else {
                M2C_FIELD(arg0, s8 *, 0xEBC) = temp_v1;
            }
            if (temp_v1 < 0) {
                M2C_FIELD(arg0, s8 *, 0xEBD) = temp_a1;
            } else {
                M2C_FIELD(((temp_v1 * 0x14) + arg0), s8 *, 0xC3A) = temp_a1;
            }
            M2C_FIELD((((var_a5 + var_a4) * 4) + arg0), s8 *, 0xC38) = 0;
            return var_a4;
        }
        var_a4 = M2C_FIELD((temp_a2 + arg0), s8 *, 0xC3A);
        var_a5 = var_a4 * 4;
        if (var_a4 < 0) {
            /* Duplicate return node #0x1.a000000000000p+3 Try simplifying control flow for better match */
            return -1;
        }
        goto loop_2;
    }
    return -1;
}
