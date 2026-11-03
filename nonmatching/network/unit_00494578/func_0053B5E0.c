/* NON_MATCHING: functional draft, 56 of 60 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0053B4E0(s8);                              /* extern */

s32 func_0053B5E0(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_a0;
    s32 var_s4;
    s32 var_v0;
    s8 temp_s1;
    s8 temp_s5;
    u8 *var_s2;
    u8 *var_s3;
    u8 temp_s7;
    u8 var_s6;

    var_v0 = 0;
    var_s2 = arg0;
    var_s3 = arg1;
    if (arg2 != 0) {
        var_s4 = arg2 - 1;
loop_7:
        temp_s7 = *var_s2;
        if (var_s4 != -1) {
            temp_s5 = (s8) *var_s2;
            var_s2 += 1;
            var_s6 = *var_s3;
            temp_s1 = (s8) *var_s3;
            var_s3 += 1;
            temp_s0 = func_0053B4E0(temp_s5);
            var_a0 = temp_s7 << 0x18;
            if (temp_s0 != func_0053B4E0(temp_s1)) {
                goto block_12;
            }
            var_v0 = 0;
            if (var_s4 != 0) {
                if (temp_s5 != 0) {
                    var_s4 -= 1;
                    if (temp_s1 == 0) {
                        return 0;
                    }
                    goto loop_7;
                }
                /* Duplicate return node #0x1.c000000000000p+3 Try simplifying control flow for better match */
                return var_v0;
            }
            goto block_13;
        }
        var_s6 = *var_s3;
        var_a0 = temp_s7 << 0x18;
block_12:
        temp_s0_2 = func_0053B4E0((s8) (var_a0 >> 0x18));
        var_v0 = temp_s0_2 - func_0053B4E0((s8) var_s6);
        goto block_13;
    }
block_13:
    return var_v0;
}
