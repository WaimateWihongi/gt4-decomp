/* NON_MATCHING: functional draft, 35 of 71 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0034C750(s32);                             /* extern */
s32 func_003CC7B0();                                /* extern */
M2C_UNK func_003D1BA0(s32, s32, s32);               /* extern */
M2C_UNK func_003D1BE0(s32, s32, s32, s32);          /* extern */
M2C_UNK func_003D2550(s32, s32, s32, s32);          /* extern */
s32 func_003D2840(s32, s32);                        /* extern */

void func_003D25B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *var_a0;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a2;

    if ((func_003CC7B0() != 0) && (func_0034C750(arg2) != 0)) {
        if (func_003D2840(arg0, arg1) != 0) {
            var_a1 = 0;
            if (M2C_FIELD(((arg1 * 4) + arg0), s32 *, 0x3C) != 0) {
                var_a0 = arg0 + 0xFC;
                var_a2 = 6;
                do {
                    temp_v0 = *var_a0;
                    var_a0 += 4;
                    var_a2 -= 1;
                    var_a1 = ((temp_v0 ^ 2) != 0) ? (var_a1 + 1) : var_a1;
                } while (var_a2 != 0);
                if (var_a1 < 2) {
                    func_003D2550(arg0, arg1, arg2, arg3);
                    return;
                }
                goto block_10;
            }
block_10:
            func_003D1BE0(arg0, arg1, arg2, arg3);
            return;
        }
        func_003D1BA0(arg0, arg2, arg3);
    }
}
