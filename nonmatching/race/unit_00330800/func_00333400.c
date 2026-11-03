/* NON_MATCHING: functional draft, 46 of 76 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_003309F0(void *, M2C_UNK, void *, M2C_UNK); /* extern */

void func_00333400(void *arg0) {
    s32 var_v1;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *var_a2;

    temp_v0 = arg0 + 0x1C;
    temp_a0 = arg0 + 0x44;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    var_a2 = arg0 + 0x54;
    M2C_FIELD(temp_v0, s32 *, 0x20) = 3;
    var_v1 = 2;
    M2C_FIELD(temp_v0, s32 *, 0x1C) = 1;
    M2C_FIELD(temp_v0, f32 *, 0x24) = 0x1.0000000000000p+0f;
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    M2C_FIELD(temp_v0, s32 *, 8) = 0;
    M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x10) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x14) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x18) = 1;
    M2C_FIELD(temp_a0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_a0, s32 *, 4) = 0;
    M2C_FIELD(temp_a0, s32 *, 8) = 0;
    do {
        var_v1 -= 1;
        M2C_FIELD(var_a2, s32 *, 4) = 0;
        M2C_FIELD(var_a2, s32 *, 8) = 0;
        M2C_FIELD(var_a2, s32 *, 0xC) = 0;
        M2C_FIELD(var_a2, s32 *, 0x10) = 0;
        M2C_FIELD(var_a2, s32 *, 0x14) = 0;
        M2C_FIELD(var_a2, s32 *, 0x18) = 1;
        M2C_FIELD(var_a2, s32 *, 0x1C) = 1;
        M2C_FIELD(var_a2, s32 *, 0x20) = 3;
        M2C_FIELD(var_a2, f32 *, 0x24) = 0x1.0000000000000p+0f;
        var_a2 += 0x28;
    } while (var_v1 != -1);
    func_003309F0(arg0 + 0xCC, 1, var_a2, 1);
    temp_v1 = arg0 + 0xF8;
    temp_v0_2 = arg0 + 0x108;
    M2C_FIELD(temp_v1, s32 *, 0xC) = 0;
    M2C_FIELD(temp_v1, s32 *, 4) = 0;
    M2C_FIELD(temp_v1, s32 *, 8) = 0;
    M2C_FIELD(temp_v0_2, s32 *, 0xC) = 0;
    M2C_FIELD(temp_v0_2, s32 *, 4) = 0;
    M2C_FIELD(temp_v0_2, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x118) = 1;
    M2C_FIELD(arg0, s32 *, 0x11C) = 0x5F;
    M2C_FIELD(arg0, f32 *, 0x130) = 0x1.0000000000000p+0f;
    M2C_FIELD(arg0, f32 *, 0x138) = 0x1.57c0000000000p+12f;
    M2C_FIELD(arg0, s32 *, 0x168) = 0;
    M2C_FIELD(arg0, f32 *, 0x120) = 0x1.0000000000000p+0f;
    M2C_FIELD(arg0, s32 *, 0x124) = 0;
    M2C_FIELD(arg0, s32 *, 0x128) = 0;
    M2C_FIELD(arg0, s32 *, 0x12C) = 0;
    M2C_FIELD(arg0, s32 *, 0x134) = 0;
    M2C_FIELD(arg0, s32 *, 0x13C) = 0;
    M2C_FIELD(arg0, s32 *, 0x140) = 0;
    M2C_FIELD(arg0, s32 *, 0x164) = 0;
}
