/* NON_MATCHING: functional draft, 47 of 49 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_004BC8A0(void *arg0) {
    s32 var_a4;
    s32 var_a6;
    s32 var_a6_2;
    u16 temp_a0;
    u16 temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 temp_a1;
    u8 temp_a1_2;

    var_a6 = 0;
    temp_v0 = M2C_FIELD(arg0, u16 *, 0xA);
    temp_a0 = M2C_FIELD(arg0, u16 *, 0xC);
    temp_a1 = M2C_FIELD(arg0, u8 *, 0xE);
    var_a4 = (M2C_FIELD(arg0, u8 *, 0xF) + (M2C_FIELD(arg0, u8 *, 9) + (M2C_FIELD(arg0, u8 *, 8) + (M2C_FIELD(arg0, u8 *, 7) + (M2C_FIELD(arg0, u8 *, 6) + (M2C_FIELD(arg0, u8 *, 5) + (M2C_FIELD(arg0, u8 *, 4) + 1))))) + ((temp_v0 >> 8) + (temp_v0 & 0xFF)) + ((temp_a0 >> 8) + (temp_a0 & 0xFF)) + M2C_FIELD(arg0, u8 *, 0xE))) & 0xFFFF;
    if (temp_a1 != 0) {
        do {
            temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x18) + var_a6;
            var_a6 += 1;
            var_a4 = (var_a4 + *temp_v0_2) & 0xFFFF;
        } while (var_a6 < (s32) temp_a1);
    }
    temp_a1_2 = M2C_FIELD(arg0, u8 *, 0xF);
    var_a6_2 = 0;
    if (temp_a1_2 != 0) {
        do {
            temp_v0_3 = M2C_FIELD(arg0, s32 *, 0x1C) + var_a6_2;
            var_a6_2 += 1;
            var_a4 = (var_a4 + *temp_v0_3) & 0xFFFF;
        } while (var_a6_2 < (s32) temp_a1_2);
    }
    return var_a4;
}
