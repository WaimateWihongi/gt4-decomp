/* NON_MATCHING: functional draft, 27 of 30 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_0055FC10(void *arg0, s32 arg1, s32 arg2, void *arg3, s32 arg4) {
    s16 temp_a6;
    s16 var_a3;
    s16 var_a5;
    void *temp_v0;
    void *var_a7;

    M2C_FIELD(arg0, s32 *, 0) = arg1;
    var_a7 = arg3;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    var_a5 = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = arg4;
    M2C_FIELD(arg0, void **, 8) = arg3;
    do {
        temp_a6 = var_a5 + 1;
        M2C_FIELD(var_a7, s16 *, 2) = var_a5;
        var_a3 = temp_a6;
loop_3:
        temp_v0 = (var_a5 * 8) + arg4;
        var_a5 = var_a3;
        if ((M2C_FIELD(temp_v0, s16 *, 0) | M2C_FIELD(temp_v0, s16 *, 6) | (M2C_FIELD(temp_v0, s16 *, 4) | M2C_FIELD(temp_v0, s16 *, 2))) != 0) {
            var_a3 += 1;
            goto loop_3;
        }
        var_a7 += 4;
    } while (var_a3 != temp_a6);
}
