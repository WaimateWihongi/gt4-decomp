/* NON_MATCHING: functional draft, 47 of 48 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_004A1FA8(void *, M2C_UNK);             /* extern */
s8 func_004AA858(void *, s32);                      /* extern */
M2C_UNK func_004AAAF0(void *);                      /* extern */

s8 func_004AAA20(void *arg0, s32 arg1) {
    s32 *var_s3;
    s32 temp_s2;
    s32 temp_v0;
    s8 temp_v0_2;
    s8 var_s0;
    s8 var_v0;

    temp_v0 = arg1 + 0x7FF;
    temp_s2 = (s32) ((temp_v0 < 0) ? (arg1 + 0xFFE) : temp_v0) >> 0xB;
    temp_v0_2 = func_004AA858(arg0, temp_s2);
    var_v0 = temp_v0_2;
    if (temp_v0_2 < 0) {
        var_s3 = NULL;
        var_s0 = M2C_FIELD(arg0, s8 *, 0xEBC);
loop_2:
        if (var_s0 >= 0) {
            var_s3 = M2C_FIELD(((var_s0 * 0x14) + (arg0 + 0x14)), s32 **, 0xC30);
            func_004AAAF0(arg0);
            var_s0 = func_004AA858(arg0, temp_s2);
            if (var_s0 < 0) {
                var_s0 = M2C_FIELD(arg0, s8 *, 0xEBC);
                goto loop_2;
            }
        }
        if (var_s3 != NULL) {
            *var_s3 = 0x91020000;
            func_004A1FA8(arg0, 0x10000);
        }
        var_v0 = var_s0;
    }
    return var_v0;
}
