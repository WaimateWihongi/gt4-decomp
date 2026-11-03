/* NON_MATCHING: functional draft, 95 of 101 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

unsigned func_004C35E8(void *, u8, unsigned);
M2C_UNK func_004C1118(void *, u8, u32, u16, s32, s32); /* extern */
u16 func_004C3850(void *, u8, void *, u32, s32);    /* extern */

s32 func_004C0D78(void *arg0, s32 arg1, u32 arg2) {
    s32 sp0;
    s32 temp_a4;
    s32 temp_s2;
    s32 temp_s5;
    s32 temp_v0_2;
    u16 *temp_a1_2;
    u32 temp_v0;
    u32 var_a3;
    u32 var_s0;
    u8 temp_s1;
    void *temp_a0;
    void *temp_a1;
    void *temp_a1_3;
    void *temp_a2;

    temp_s1 = arg1 & 0xFF;
    temp_s5 = arg2 & 0xFFFFF;
    temp_v0 = *M2C_FIELD(arg0, u32 **, 0xC);
    sp0 = (temp_v0 >> 0xC) & 0xFFFF;
    var_s0 = func_004C35E8(M2C_FIELD(arg0, void **, 0x24), temp_s1, arg2);
    temp_a0 = M2C_FIELD(arg0, void **, 0x24);
    temp_a4 = var_s0 * 4;
    var_a3 = var_s0;
    temp_v0_2 = temp_s1 * 0x2C;
    temp_a1 = temp_v0_2 + temp_a0;
    temp_s2 = temp_v0_2 + 0x20;
    temp_a2 = temp_a0 + temp_s2;
    if ((var_s0 >= (u16) *M2C_FIELD(temp_a1, u16 **, 0x28)) || ((*(s32 *)(temp_a4 + M2C_FIELD(temp_a1, s32 *, 0x1C)) & 0xFFFFF) != temp_s5)) {
        temp_a1_2 = M2C_FIELD(temp_a2, u16 **, 8);
        if (*temp_a1_2 != *M2C_FIELD(temp_a2, u16 **, 4)) {
            var_a3 = (u32) *temp_a1_2;
            *temp_a1_2 = var_a3 + 1;
        } else {
            temp_a1_3 = M2C_FIELD(arg0, void **, 0x24);
            var_a3 = func_004C3850(arg0, temp_s1, temp_a2, var_a3, temp_a4);
            if (var_s0 < (u16) *M2C_FIELD((temp_a1_3 + temp_s2), u16 **, 8)) {
                if (var_a3 < var_s0) {
                    if ((u32) (arg2 & 0xFFFFF) < (u32) (*(s32 *)((var_s0 * 4) + M2C_FIELD((temp_v0_2 + temp_a1_3), s32 *, 0x1C)) & 0xFFFFF)) {
                        goto block_8;
                    }
                }
            } else {
block_8:
                var_s0 = (var_s0 + 0xFFFF) & 0xFFFF;
            }
        }
    }
    func_004C1118(arg0, temp_s1, var_s0, (u16) var_a3, (temp_v0 << 0x14) | temp_s5, sp0);
    return 0;
}
