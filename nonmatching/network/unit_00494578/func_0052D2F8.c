/* NON_MATCHING: functional draft, 35 of 36 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_005A48D8(s32, M2C_UNK, M2C_UNK, s32);  /* extern */

s32 func_0052D2F8(s32 arg0) {
    s32 temp_a0;
    s32 temp_a3;
    u16 *var_a2;
    u16 temp_v0;
    u32 var_a1;

    temp_a0 = arg0 & 0xFFFF;
    var_a1 = 0;
    var_a2 = (u16 *)0x867FFC;
    if (temp_a0 == 0) {
        goto block_6;
    }
loop_4:
    temp_v0 = *var_a2;
    var_a2 += 0x10;
    temp_a3 = var_a1 * 0x10;
    var_a1 += 1;
    if (temp_a0 != temp_v0) {
        if (var_a1 >= 0x10U) {
block_6:
            return 2;
        }
        goto loop_4;
    }
    func_005A48D8(temp_a3 + 0x867FFC, 0, 0x10, temp_a3);
    M2C_FIELD((void *)0x867FF8, s32 *, 0x104) = (s32) (M2C_FIELD((void *)0x867FF8, s32 *, 0x104) - 1);
    return 0;
}
