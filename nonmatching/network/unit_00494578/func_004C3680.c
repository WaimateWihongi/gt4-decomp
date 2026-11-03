/* NON_MATCHING: functional draft, 65 of 74 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s16 func_004C37B0(void *, u32);
s16 func_004C3680(void *arg0, s32 arg1, u32 arg2) {
    s16 var_a3;
    s16 var_a5;
    s16 var_v0;
    s16 var_v0_3;
    s32 temp_a1;
    s32 temp_a4;
    s32 temp_a6;
    s32 temp_a7;
    s32 var_v0_2;
    u16 temp_a2;
    u32 temp_a2_2;
    void *temp_v1;

    temp_a6 = arg1 & 0xFF;
    temp_a7 = M2C_FIELD(arg0, s32 *, 0x24);
    temp_a4 = temp_a6 * 0x2C;
    var_a5 = 0;
    var_v0 = 0;
    temp_a2 = *M2C_FIELD((temp_a4 + temp_a7), u16 **, 0x28);
    var_a3 = temp_a2 + 0xFFFF;
    if (temp_a2 != 0) {
        var_v0_2 = temp_a6 * 3;
        if (var_a3 > 0) {
            var_v0_3 = var_a3;
            do {
                temp_a1 = (s32) ((var_v0_3 + ((u32) var_v0_3 >> 0x1F)) << 0xF) >> 0x10;
                if ((u32) (*(s32 *)((temp_a1 * 4) + M2C_FIELD((temp_a4 + temp_a7), s32 *, 0x1C)) & 0xFFFFF) < arg2) {
                    var_a5 = temp_a1 + 1;
                } else {
                    var_a3 = (s16) temp_a1;
                }
                var_v0_3 = var_a5 + var_a3;
            } while (var_a5 < var_a3);
            var_v0_2 = temp_a6 * 3;
        }
        temp_v1 = (((var_v0_2 * 4) - temp_a6) * 4) + temp_a7;
        temp_a2_2 = *(u32 *)((var_a5 * 4) + M2C_FIELD(temp_v1, s32 *, 0x1C));
        var_v0 = 0;
        if ((temp_a2_2 & 0xFFFFF) == arg2) {
            var_v0 = func_004C37B0(arg0, (temp_a2_2 >> 0x14) + (*(s32 *)((var_a5 * 2) + M2C_FIELD(temp_v1, s32 *, 0x20)) << 0xC));
        }
    }
    return var_v0;
}
