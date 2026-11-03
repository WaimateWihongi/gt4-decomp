/* NON_MATCHING: functional draft, 43 of 44 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_004CB558(s8 *arg0) {
    s32 var_a4;
    s32 var_v0;
    s8 *var_a3;
    s8 temp_a1;
    u8 temp_v0;
    u8 var_a2;

    temp_a1 = *arg0;
    var_v0 = -0x16;
    var_a2 = (u8) *arg0;
    if (temp_a1 != 0x20) {
        var_a3 = arg0;
        var_a4 = 0;
        if (temp_a1 != 0) {
loop_3:
            var_a4 = (((s8) var_a2 ^ 0x2E) == 0) ? (var_a4 + 1) : var_a4;
            if (((s8) var_a2 >= 0x20) && ((s8) var_a2 != 0x22) && ((u32) ((var_a2 - 0x2A) & 0xFF) >= 3U) && ((u32) ((var_a2 - 0x3A) & 0xFF) >= 6U) && ((u32) ((var_a2 - 0x5B) & 0xFF) >= 3U)) {
                if ((s8) var_a2 != 0x7C) {
                    var_a3 += 1;
                    temp_v0 = *var_a3;
                    var_a2 = temp_v0;
                    if (temp_v0 == 0) {
                        goto block_13;
                    }
                    goto loop_3;
                }
                /* Duplicate return node #0x1.6000000000000p+3 Try simplifying control flow for better match */
                return -0x16;
            }
            return -0x16;
        }
block_13:
        var_v0 = (var_a4 < 2) ? 0 : -0x16;
        /* Duplicate return node #0x1.c000000000000p+3 Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
