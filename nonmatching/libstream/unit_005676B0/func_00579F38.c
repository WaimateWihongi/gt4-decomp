/* NON_MATCHING: functional draft, 88 of 97 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_00572C90(u8 *, s32);                       /* extern */

s32 func_00579F38(s8 *arg0, u8 *arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_a4;
    s32 var_a6;
    s8 *var_s0;
    s8 temp_v1;
    u32 temp_a2;
    u32 temp_a3;
    u32 var_f0;
    u8 *var_s1;

    var_s1 = arg1;
    var_s0 = arg0;
    var_a6 = func_00572C90(var_s1, arg2);
    if (arg2 != 0) {
        temp_a1 = var_a6 & 0xFFFFFF;
        var_a6 = temp_a1 | (*var_s1 << 0x18);
        temp_a4 = var_s0 + arg2;
        var_f0 = temp_a1 | 0x3F000000;
        if (var_s0 != temp_a4) {
            do {
                temp_a2 = var_f0 >> 8;
                temp_a3 = var_f0 >> 0x10;
                temp_v1 = (*var_s1 ^ temp_a2 ^ (var_f0 ^ temp_a3)) & 0xFF;
                *var_s0 = temp_v1;
                var_s0 += 1;
                var_s1 += 1;
                var_f0 = M2C_BITWISE(u32, ((*(s32 *)(0x655888 + (temp_v1 * 4)) * M2C_BITWISE(f32, var_f0)) / M2C_BITWISE(f32, ((*(s32 *)(0x655C90 + (var_f0 & 0xFF)) << 0x10) | (*(s32 *)(0x655C90 + (temp_a2 & 0xFF)) << 8) | *(s32 *)(0x655C90 + (temp_a3 & 0xFF)) | 0x3F000000))));
            } while (var_s0 != temp_a4);
        }
    }
    return var_a6;
}
