/* NON_MATCHING: functional draft, 41 of 45 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

u32 func_004C3850(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a3;
    s32 var_a0;
    u16 temp_a4;
    u32 temp_a3_2;
    u32 temp_v1;
    u32 temp_v1_2;
    u32 var_a2;
    u32 var_a6;
    u32 var_t0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x24);
    var_a6 = 0;
    var_a2 = 0;
    temp_a3 = (arg1 & 0xFF) * 0x2C;
    temp_a1 = temp_a3 + 0x20;
    temp_a4 = *M2C_FIELD((temp_a0 + temp_a1), u16 **, 8);
    var_t0 = 0;
    if (temp_a4 != 0) {
        temp_a3_2 = *M2C_FIELD(arg0, u32 **, 0xC);
        var_a0 = 0 * 4;
        do {
            temp_v1 = ((u32) *(s32 *)(var_a0 + M2C_FIELD((temp_a0 + temp_a3), s32 *, 0x1C)) >> 0x14) + (*(s32 *)((var_a2 * 2) + *(s32 *)(temp_a0 + temp_a1)) << 0xC);
            temp_v1_2 = ((temp_a3_2 < temp_v1) * 0x10000000) + (temp_a3_2 - temp_v1);
            if (var_a6 < temp_v1_2) {
                var_a6 = temp_v1_2;
                var_t0 = var_a2;
            }
            var_a2 = (var_a2 + 1) & 0xFFFF;
            var_a0 = var_a2 * 4;
        } while (var_a2 < temp_a4);
    }
    return var_t0;
}
