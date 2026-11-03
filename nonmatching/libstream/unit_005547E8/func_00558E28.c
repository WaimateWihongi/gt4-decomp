/* NON_MATCHING: functional draft, 105 of 117 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_00558E28(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_a1_2;
    s16 temp_a1_3;
    s16 temp_a1_4;
    s16 temp_a4;
    s16 temp_a4_2;
    s16 temp_a4_3;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_a1_5;
    s32 temp_a1_6;
    s32 temp_a2;
    s32 temp_a3_2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a2;
    s32 var_a3;
    s32 var_a5;
    s32 var_a6;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    void *temp_a3;
    void *temp_a5;
    void *temp_a7;

    temp_a7 = arg0 + (arg1 * 0x18);
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x30);
    temp_v0 = M2C_FIELD((arg0 + ((1 - arg1) * 0x18)), s32 *, 4);
    var_a0 = 0x4000;
    temp_a5 = temp_a1 + (M2C_FIELD(temp_a7, s32 *, 4) * 0x10);
    if (temp_v0 >= 0) {
        temp_a4 = M2C_FIELD(temp_a5, s16 *, 2);
        temp_a3 = temp_a1 + (temp_v0 * 0x10);
        if (arg2 < temp_a4) {
            temp_v0_2 = M2C_FIELD(temp_a3, s16 *, 4);
            var_v1 = arg2 - temp_v0_2;
            var_v0 = temp_a4 - temp_v0_2;
            goto block_5;
        }
        temp_a1_2 = M2C_FIELD(temp_a5, s16 *, 4);
        var_v0_2 = 0x4000 < 0;
        if (temp_a1_2 < arg2) {
            temp_v0_3 = M2C_FIELD(temp_a3, s16 *, 2);
            var_v1 = temp_v0_3 - arg2;
            var_v0 = temp_v0_3 - temp_a1_2;
block_5:
            var_a0 = (s32) (var_v1 << 0xE) / var_v0;
            goto block_6;
        }
    } else {
block_6:
        var_v0_2 = var_a0 < 0;
    }
    temp_a0 = (s32) (((s32) (*(s32 *)(0x64D3F8 + (((u32) ((var_v0_2 != 0) ? 0 : var_a0) >> 3) & 0x1FFE)) * 0x3FFF) >> 0xC) * M2C_FIELD(temp_a5, s16 *, 6)) >> 0xE;
    var_a3 = (s32) (M2C_FIELD(arg0, s16 *, 0x4E) * temp_a0) >> 0xE;
    var_a2 = (s32) (M2C_FIELD(arg0, s16 *, 0x4C) * temp_a0) >> 0xE;
    if (arg3 != 0) {
        temp_a1_3 = M2C_FIELD(temp_a7, s16 *, 0xC);
        var_a5 = 0;
        temp_a4_2 = M2C_FIELD(temp_a7, s16 *, 0xE);
        if (var_a2 < 0) {
            var_a5 = 1;
            var_a2 = -var_a2;
        }
        temp_a1_4 = (temp_a1_3 < 0) ? -temp_a1_3 : temp_a1_3;
        var_a6 = 0;
        temp_a0_2 = temp_a1_4 - 0x1000;
        temp_a1_5 = temp_a1_4 + 0x1000;
        temp_a2 = (((temp_a1_5 < var_a2) ^ 0) != 0) ? temp_a1_5 : ((var_a2 < temp_a0_2) ? temp_a0_2 : var_a2);
        var_a2 = (var_a5 != 0) ? -temp_a2 : temp_a2;
        if (var_a3 < 0) {
            var_a6 = 1;
            var_a3 = -var_a3;
        }
        temp_a4_3 = (temp_a4_2 < 0) ? -temp_a4_2 : temp_a4_2;
        temp_a0_3 = temp_a4_3 - 0x1000;
        temp_a1_6 = temp_a4_3 + 0x1000;
        temp_a3_2 = (((temp_a1_6 < var_a3) ^ 0) != 0) ? temp_a1_6 : ((var_a3 < temp_a0_3) ? temp_a0_3 : var_a3);
        var_a3 = (var_a6 != 0) ? -temp_a3_2 : temp_a3_2;
    }
    M2C_FIELD(temp_a7, s16 *, 0xE) = (s16) var_a3;
    M2C_FIELD(temp_a7, s16 *, 0xC) = (s16) var_a2;
}
