/* NON_MATCHING: functional draft, 87 of 109 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_00541208(void *, s32 *, s32);              /* extern */
s32 func_0057F260(u32, s32, s32, s32);              /* extern */
M2C_UNK func_005A609C(s32, u32);                    /* extern */

s32 func_00542510(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *var_s0;
    s32 *var_s2;
    s32 var_a2;
    s32 var_a3;
    s32 var_v0;
    s8 *var_a0_2;
    s8 *var_s1;
    s8 temp_v0;
    u32 var_v1;
    u8 var_a0;

    var_a2 = arg2;
    var_a3 = arg3;
    var_v0 = 2;
    var_s1 = arg0 + 0x8414;
    if ((arg1 != 0) && (arg0 != NULL)) {
        M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x8C14) + arg0), s8 *, 0x8414) = 0;
        var_a0 = (u8) M2C_FIELD(arg0, s8 *, 0x8414);
        if (M2C_FIELD(arg0, s8 *, 0x8414) != 0) {
            var_a3 = 9;
            var_a2 = 0xD;
loop_4:
            if (((s8) var_a0 == 0x20) || ((s8) var_a0 == 9) || ((s8) var_a0 == 0xD) || ((s8) var_a0 == 0xA)) {
                var_s1 += 1;
                var_a0 = (u8) *var_s1;
                if (*var_s1 != 0) {
                    goto loop_4;
                }
            }
        }
        var_a0_2 = arg0 + M2C_FIELD(arg0, s32 *, 0x8C14) + 0x8413;
        var_s2 = arg1 + 0xC;
        if ((u32) var_s1 < (u32) var_a0_2) {
            var_a3 = 9;
            var_a2 = 0xD;
loop_11:
            temp_v0 = *var_a0_2;
            if ((temp_v0 == 0x20) || (temp_v0 == 9) || (temp_v0 == 0xD) || (var_s2 = arg1 + 0xC, (temp_v0 == 0xA))) {
                *var_a0_2 = 0;
                var_a0_2 -= 1;
                if ((u32) var_s1 >= (u32) var_a0_2) {
                    var_s2 = arg1 + 0xC;
                } else {
                    goto loop_11;
                }
            }
        }
        var_v1 = 0;
        var_s0 = var_s2;
loop_18:
        if (*var_s0 != 0) {
            var_v1 += 1;
            var_s2 += 4;
            var_s0 += 4;
            if (var_v1 >= 0x40U) {
                goto block_24;
            }
            goto loop_18;
        }
        var_v0 = func_00541208(arg0, var_s2, func_0057F260((u32) var_s1, arg1, var_a2, var_a3) + 1);
        if (var_v0 == 0) {
            func_005A609C(*var_s0, (u32) var_s1);
block_24:
            M2C_FIELD(arg0, s32 *, 0x8C14) = 0;
            var_v0 = 0;
            M2C_FIELD(arg0, s8 *, 0x8414) = 0;
        }
    }
    return var_v0;
}
