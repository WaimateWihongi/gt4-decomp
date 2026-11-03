/* NON_MATCHING: functional draft, 19 of 22 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s64 func_005B8400(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    s32 temp_a4_2;
    s64 temp_a4;
    s64 var_a6;

    temp_a4_2 = M2C_FIELD((void *)0x10001000, s32 *, 0x10);
    var_a6 = *(s64 *)0x6592F0;
    if (temp_a4_2 & 0x800) {
        var_a6 += 1;
    }
    temp_a4 = temp_a4_2 & 3;
    return (M2C_FIELD((void *)0x10001000, u32 *, 0) | (var_a6 << 0x10)) << (((temp_a4 == 0) ? 0 : 2) << temp_a4);
}
