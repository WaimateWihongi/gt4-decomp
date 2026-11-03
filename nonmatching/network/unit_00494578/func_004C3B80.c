/* NON_MATCHING: functional draft, 61 of 66 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_004C3B80(void *arg0, u16 *arg1, s16 *arg2, u16 *arg3) {
    s32 var_a5;
    s32 var_t1;
    s32 var_v0;
    u16 temp_a3;
    u16 temp_a3_2;
    u16 temp_a4;
    u16 temp_a4_2;
    u16 temp_v1;
    void *var_v1;

    temp_a3 = *arg3;
    temp_a4 = *M2C_FIELD(arg0, u16 **, 0x14);
    if ((s32) temp_a4 >= (temp_a3 + 1)) {
        temp_v1 = *M2C_FIELD(arg0, u16 **, 0x20);
        if ((temp_v1 + temp_a3 + 1) >= (s32) temp_a4) {
            var_v1 = M2C_FIELD(arg0, void **, 0x10);
            var_a5 = 0;
        } else {
            var_a5 = 1;
            var_v1 = M2C_FIELD(arg0, void **, 0x10) + (temp_v1 * 8);
        }
        var_t1 = 0;
loop_10:
        temp_a3_2 = M2C_FIELD(var_v1, u16 *, 6);
        temp_a4_2 = M2C_FIELD(var_v1, u16 *, 0);
        if (temp_a3_2 == 0xFFFF) {
            var_v0 = 0x1FFF - (temp_a4_2 + M2C_FIELD(var_v1, u16 *, 2));
        } else {
            var_v0 = (temp_a3_2 - (temp_a4_2 + M2C_FIELD(var_v1, u16 *, 2))) - 1;
        }
        if ((var_v0 & 0xFFFF) >= (temp_a3 + 1)) {
            var_t1 = 1;
        } else if (temp_a3_2 != 0xFFFF) {
            var_v1 = M2C_FIELD(arg0, void **, 0x10) + (M2C_FIELD(var_v1, u16 *, 6) * 8);
            goto loop_10;
        }
        if (var_t1 == 0) {
            var_a5 -= 1;
            if (var_a5 > 0) {
                var_v1 = M2C_FIELD(arg0, void **, 0x10);
                goto loop_10;
            }
        }
        if (var_t1 != 1) {
            return -1;
        }
        *arg1 = temp_a4_2;
        *arg2 = M2C_FIELD(var_v1, u16 *, 0) + M2C_FIELD(var_v1, u16 *, 2) + 1;
        return 0;
    }
    return -1;
}
