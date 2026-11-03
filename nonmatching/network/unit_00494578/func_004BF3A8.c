/* NON_MATCHING: functional draft, 75 of 78 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_004BF3A8(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a4;
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_a2_3;
    void *temp_a3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_a1 = arg1 & 0xFFFF;
    temp_a4 = temp_a1 & 0xFF;
    var_v0 = 0x80001E71;
    if (temp_a4 == 0) {
        temp_a2 = arg2 & 0xFFFF;
        temp_a3 = M2C_FIELD(arg0, void **, 0x24);
        if (temp_a2 != 0) {
            temp_a1_2 = temp_a1 & 0xFF00;
            temp_v0 = temp_a3 + 0x50;
            if (temp_a1_2 == 0x200) {
                if (temp_a2 < (M2C_FIELD(temp_a3, u16 *, 0x4A) + 1)) {
                    var_v0_2 = temp_a2 * 4;
                    goto block_9;
                }
                /* Duplicate return node #0x1.0000000000000p+3 Try simplifying control flow for better match */
                return 0x80001E71;
            }
            if (temp_a2 < (M2C_FIELD(temp_v0, u16 *, 0xA) + M2C_FIELD(temp_v0, u16 *, 0xC) + 1)) {
                var_v0_2 = temp_a2 * 4;
block_9:
                temp_a2_2 = (var_v0_2 + temp_a2) * 4;
                if (temp_a1_2 == 0x200) {
                    temp_v0_2 = temp_a3 + ((temp_a4 * 0x10) + 0x40);
                    var_a0 = M2C_FIELD(temp_v0_2, s32 *, 0) + temp_a2_2 + (M2C_FIELD(temp_v0_2, u16 *, 0xA) * 6);
                } else {
                    temp_v0_3 = temp_a3 + ((temp_a4 * 0x10) + 0x50);
                    var_a0 = M2C_FIELD(temp_v0_3, s32 *, 0) + temp_a2_2 + ((M2C_FIELD(temp_v0_3, u16 *, 0xA) + M2C_FIELD(temp_v0_3, u16 *, 0xC)) * 6);
                }
                temp_a2_3 = var_a0 + 6;
                var_v0 = 0;
                M2C_FIELD(temp_a2_3, u8 *, 0xE) = (u8) M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u8 *, 3);
                M2C_FIELD(temp_a2_3, u8 *, 0xF) = (u8) M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u8 *, 2);
                M2C_FIELD(temp_a2_3, u8 *, 0x10) = (u8) M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u8 *, 1);
                M2C_FIELD(temp_a2_3, u8 *, 0x11) = (u8) M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u8 *, 0);
                /* Duplicate return node #0x1.c000000000000p+3 Try simplifying control flow for better match */
                return var_v0;
            }
            /* Duplicate return node #0x1.0000000000000p+3 Try simplifying control flow for better match */
            return 0x80001E71;
        }
        return 0x80001E71;
    }
    return var_v0;
}
