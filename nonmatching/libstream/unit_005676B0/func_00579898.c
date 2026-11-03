/* NON_MATCHING: functional draft, 102 of 107 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

u64 func_00579708(s32, s32, M2C_UNK, s32);          /* extern */

s32 func_00579898(s32 arg0) {
    s32 sp12;
    s16 sp0;
    s8 sp2;
    s8 sp3;
    u16 sp10;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_hi;
    s32 temp_hi_2;
    s32 temp_lo;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 var_s0;
    s32 var_s2;
    u64 temp_ret;
    u64 temp_v0;
    u64 temp_v0_2;

    temp_s3 = arg0 + 0xFFE5BBAF;
    temp_hi = temp_s3 % 146097;
    var_s0 = temp_hi / 36524;
    var_s2 = temp_hi % 36524;
    if (var_s0 == 4) {
        var_s0 = 3;
        var_s2 = 0x8EAC;
    }
    temp_hi_2 = var_s2 % 1461;
    temp_lo = var_s2 / 1461;
    temp_v0 = func_00579708(temp_hi_2, 0x6CC718, 5, 4);
    temp_a1 = temp_v0 == 3;
    temp_a3 = temp_lo ^ 0x18;
    temp_a0 = (temp_a3 != 0) ? temp_a1 : (temp_a1 & (var_s0 == 3));
    temp_s3_2 = temp_hi_2 - *(s32 *)(0x6CC718 + (temp_v0 * 2));
    sp0 = temp_v0 + ((temp_lo + ((var_s0 + ((temp_s3 / 146097) * 4)) * 0x19)) * 4) + 1;
    temp_ret = func_00579708(temp_s3_2, (temp_a0 * 0x1A) + 0x6CC728, 0xD, temp_a3);
    temp_v0_2 = temp_ret;
    sp2 = temp_v0_2 + 1;
    sp3 = (temp_s3_2 - *(s32 *)(0x6CC728 + (((temp_a0 * 0xD) + temp_v0_2) * 2))) + 1;
    sp10 = M2C_UNALIGNED32(sp0);
    return ((s64) sp12 << 0x10) | ((((u32) temp_ret & 0xFFFF0000) | sp10) & ((-1 << 0x20) | 0xFFFF));
}
