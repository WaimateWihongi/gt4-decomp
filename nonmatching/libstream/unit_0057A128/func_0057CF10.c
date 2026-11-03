/* NON_MATCHING: functional draft, 55 of 64 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0057CF10(void *arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_a4;
    s32 temp_a5;
    s32 temp_a6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a1;
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

    temp_a5 = M2C_FIELD(arg0, s32 *, 4);
    temp_a4 = M2C_FIELD(arg0, s32 *, 8);
    var_v0 = 0;
    if (temp_a5 != temp_a4) {
        temp_a6 = M2C_FIELD(arg0, s32 *, 0);
        temp_a1 = temp_a6 + arg1;
        M2C_FIELD(arg0, s32 *, 0) = temp_a1;
        if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
            if (temp_a1 >= temp_a5) {
                if (temp_a1 < temp_a4) {
                    M2C_FIELD(arg0, s32 *, 0x10) = 0;
                } else {
                    goto block_7;
                }
            } else {
block_7:
                M2C_FIELD(arg0, s32 *, 0x10) = 1;
            }
            var_a1 = M2C_FIELD(arg0, s32 *, 0);
            var_a2 = var_a1;
            if (var_a1 < temp_a5) {
                do {
                    temp_v0 = var_a2 + (temp_a4 - temp_a5);
                    var_a2 = temp_v0;
                } while (temp_v0 < temp_a5);
                M2C_FIELD(arg0, s32 *, 0) = temp_v0;
                var_a1 = temp_v0;
            }
            var_v0_2 = temp_a6 ^ var_a1;
            if (var_a1 >= temp_a4) {
                do {
                    temp_v0_2 = var_a1 - (temp_a4 - temp_a5);
                    M2C_FIELD(arg0, s32 *, 0) = temp_v0_2;
                    var_a1 = temp_v0_2;
                } while (temp_v0_2 >= temp_a4);
                goto block_20;
            }
        } else {
            var_a1 = M2C_FIELD(arg0, s32 *, 0);
            var_v0_3 = var_a1 < temp_a4;
            if (var_a1 < temp_a5) {
                M2C_FIELD(arg0, s32 *, 0) = temp_a5;
                var_a1 = temp_a5;
                var_v0_3 = var_a1 < temp_a4;
            }
            if (var_v0_3 == 0) {
                temp_v0_3 = temp_a4 - 1;
                M2C_FIELD(arg0, s32 *, 0) = temp_v0_3;
                var_a1 = temp_v0_3;
            }
block_20:
            var_v0_2 = temp_a6 ^ var_a1;
        }
        var_v0 = var_v0_2 != 0;
    }
    return var_v0;
}
