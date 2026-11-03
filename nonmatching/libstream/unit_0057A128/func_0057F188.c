/* NON_MATCHING: functional draft, 50 of 51 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0057F188(u8 *arg0, void *arg1, s32 arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6, u8 arg7) {
    s32 temp_a2;
    s32 temp_a2_2;
    s32 var_a2;
    u8 *var_a0;
    u8 var_a4;
    u8 var_a5;
    u8 var_a6;
    u8 var_a7;
    void *var_a1;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a7 = arg7;
    var_a2 = arg2 - 5;
    if (arg2 != 0) {
        var_a6 = var_a7;
        var_a4 = *var_a0;
        if (var_a2 >= 0) {
loop_2:
            var_a5 = M2C_FIELD(var_a1, u8 *, 0);
            if (var_a6 == var_a7) {
                var_a6 = M2C_FIELD(var_a0, u8 *, 1);
                var_a2 -= 4;
                var_a7 = M2C_FIELD(var_a1, u8 *, 1);
                if (var_a4 == var_a5) {
                    var_a4 = M2C_FIELD(var_a0, u8 *, 2);
                    var_a0 += 4;
                    var_a5 = M2C_FIELD(var_a1, u8 *, 2);
                    if (var_a6 == var_a7) {
                        var_a6 = M2C_FIELD(var_a0, u8 *, -1);
                        var_a1 += 4;
                        var_a7 = M2C_FIELD(var_a1, u8 *, -1);
                        if (var_a4 == var_a5) {
                            var_a4 = M2C_FIELD(var_a0, u8 *, 0);
                            if (var_a2 < 0) {
                                if (var_a6 == var_a7) {
                                    goto block_10;
                                }
                                /* Duplicate return node #0x1.1000000000000p+4 Try simplifying control flow for better match */
                                return var_a6 - var_a7;
                            }
                            goto loop_2;
                        }
                        /* Duplicate return node #0x1.2000000000000p+4 Try simplifying control flow for better match */
                        return var_a4 - var_a5;
                    }
                    /* Duplicate return node #0x1.1000000000000p+4 Try simplifying control flow for better match */
                    return var_a6 - var_a7;
                }
                /* Duplicate return node #0x1.2000000000000p+4 Try simplifying control flow for better match */
                return var_a4 - var_a5;
            }
            /* Duplicate return node #0x1.1000000000000p+4 Try simplifying control flow for better match */
            return var_a6 - var_a7;
        }
block_10:
        temp_a2 = var_a2 + 4;
        var_a5 = M2C_FIELD(var_a1, u8 *, 0);
        if (temp_a2 != 0) {
            var_a6 = M2C_FIELD(var_a0, u8 *, 1);
            temp_a2_2 = temp_a2 - 1;
            var_a7 = M2C_FIELD(var_a1, u8 *, 1);
            if (var_a4 == var_a5) {
                if (temp_a2_2 != 0) {
                    var_a4 = M2C_FIELD(var_a0, u8 *, 2);
                    if (var_a6 == var_a7) {
                        var_a5 = M2C_FIELD(var_a1, u8 *, 2);
                        if ((temp_a2_2 - 1) != 0) {
                            var_a6 = M2C_FIELD(var_a0, u8 *, 3);
                            if (var_a4 == var_a5) {
                                var_a7 = M2C_FIELD(var_a1, u8 *, 3);
                                /* Duplicate return node #0x1.1000000000000p+4 Try simplifying control flow for better match */
                                return var_a6 - var_a7;
                            }
                        }
                        /* Duplicate return node #0x1.2000000000000p+4 Try simplifying control flow for better match */
                        return var_a4 - var_a5;
                    }
                }
                return var_a6 - var_a7;
            }
        }
        return var_a4 - var_a5;
    }
    return 0;
}
