/* NON_MATCHING: functional draft, 34 of 37 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00343420(s32, M2C_UNK);                /* extern */

void func_00110D18(void *arg0) {
    s32 temp_s0;
    s32 temp_s3;
    s32 var_s1;

    var_s1 = 1;
    temp_s3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), s32 *, 0);
    if (temp_s3 > 1) {
loop_3:
        temp_s0 = var_s1 * 4;
        var_s1 += 1;
        func_00343420(*(s32 *)(temp_s0 + M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), s32 *, 8)) + 0x3468, 0);
        M2C_FIELD(*(s32 *)(temp_s0 + M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), s32 *, 8)), s8 *, 0x186) = 0;
        if (var_s1 < temp_s3) {
            goto loop_3;
        }
    }
}
