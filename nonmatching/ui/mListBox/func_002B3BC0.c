/* NON_MATCHING: functional draft, 41 of 45 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_002B2310(void *);                          /* extern */
M2C_UNK func_002B3AF8(void *, s32);                 /* extern */
s32 func_002B5580(void *, s32);                     /* extern */

s32 func_002B3BC0(void *arg0, s32 arg1) {
    s32 var_s0;
    s32 var_s2;

    var_s0 = M2C_FIELD(arg0, s32 *, 0x124);
    var_s2 = arg1;
    if (var_s0 >= 0) {
        if (var_s2 > 0) {
loop_3:
            var_s0 += 1;
            if (var_s0 == func_002B2310(arg0)) {
                var_s0 = (M2C_FIELD(arg0, s32 *, 0x10C) == 0) ? -1 : 0;
            }
            if (var_s0 >= 0) {
                if (func_002B5580(arg0, var_s0) == 0) {
                    var_s2 -= 1;
                    var_s0 = ((var_s0 ^ M2C_FIELD(arg0, s32 *, 0x124)) == 0) ? -1 : var_s0;
                }
                if (var_s0 >= 0) {
                    if (var_s2 <= 0) {
                        goto block_10;
                    }
                    goto loop_3;
                }
                /* Duplicate return node #0x1.a000000000000p+3 Try simplifying control flow for better match */
                return 0;
            }
            /* Duplicate return node #0x1.a000000000000p+3 Try simplifying control flow for better match */
            return 0;
        }
block_10:
        if (var_s0 >= 0) {
            func_002B3AF8(arg0, var_s0);
            return 1;
        }
        goto block_12;
    }
block_12:
    return 0;
}
