/* NON_MATCHING: functional draft, 128 of 133 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0049FE28();                            /* extern */

void func_004A6290(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a3;
    s32 temp_a6;
    s32 temp_a7;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_a6;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_v0;
    void *temp_a2;
    void *temp_a4;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v1;
    void *var_a4;

    var_s0 = arg0;
    var_s1 = arg2;
    func_0049FE28();
    var_v0 = var_s1 - 1;
    if (var_s1 < var_s0) {
        temp_v0 = var_s0;
        var_s0 = var_s1;
        var_s1 = temp_v0;
        var_v0 = var_s1 - 1;
    }
    temp_a6 = (var_v0 >> 6) - (var_s0 >> 6);
    temp_a3 = temp_a6 * 2;
    var_s0_2 = var_s0 * 0x10;
    temp_a2 = M2C_FIELD((void *)0x70002000, void **, 0x1F8);
    if (temp_a3 != -5) {
        temp_a0 = temp_a3 + 5;
        M2C_FIELD(temp_a2, s32 *, 0) = (s32) (temp_a0 | 0x10000000);
        M2C_FIELD(temp_a2, s32 *, 8) = 0x11000000;
        M2C_FIELD(temp_a2, s32 *, 0xC) = (s32) (temp_a0 | 0x50000000);
        M2C_FIELD(temp_a2, s32 *, 4) = 0;
        M2C_FIELD((void *)0x70002000, void **, 0x1F8) = (void *) ((temp_a6 << 5) + M2C_FIELD((void *)0x70002000, void **, 0x1F8) + 0x60);
    }
    M2C_FIELD((temp_a2 + 0x10), s64 *, 8) = 0xE;
    M2C_FIELD(temp_a2, s64 *, 0x10) = (s64) ((temp_a3 + 4) | 0x8000 | (0x8000 << 0x2D));
    temp_v0_2 = temp_a2 + 0x20;
    M2C_FIELD(temp_v0_2, s32 *, 4) = 0x3F800000;
    M2C_FIELD(temp_v0_2, s64 *, 8) = 1;
    M2C_FIELD(temp_a2, s32 *, 0x20) = (s32) M2C_FIELD((void *)0x70002000, s32 *, 0xC20);
    var_a4 = temp_a2 + 0x40;
    M2C_FIELD((temp_a2 + 0x30), s64 *, 8) = 0;
    M2C_FIELD(temp_a2, s64 *, 0x30) = (s64) ((M2C_FIELD((void *)0x70002000, u16 *, 0x4A) | 6) & 0xFFEF);
    temp_a1 = (M2C_FIELD((void *)0x70002000, u8 *, 7) == 0) ? 4 : 3;
    temp_v0_3 = M2C_FIELD((void *)0x70002000, u16 *, 0x26E) + (M2C_FIELD((void *)0x70002000, s32 *, 0x28C) * 0x10);
    temp_a2_2 = M2C_FIELD((void *)0x70002000, u16 *, 0x26C) + (M2C_FIELD((void *)0x70002000, s32 *, 0x288) * 0x10);
    var_a6 = temp_a6 - 1;
    temp_a7 = ((temp_v0_3 + (arg3 << temp_a1)) << 0x10) | temp_a2_2;
    temp_a1_2 = ((temp_v0_3 + (arg1 << temp_a1)) << 0x10) | temp_a2_2;
    temp_a2_3 = M2C_FIELD((void *)0x70002000, s32 *, 0x248);
    if (var_a6 != -1) {
        do {
            temp_a0_2 = (var_s0_2 + 0x400) & ~0x3F0;
            temp_a4 = var_a4 + 0x10;
            M2C_FIELD(var_a4, s32 *, 0) = (s32) (temp_a1_2 + var_s0_2);
            M2C_FIELD(var_a4, s64 *, 8) = 0xC;
            M2C_FIELD(var_a4, s32 *, 4) = temp_a2_3;
            temp_v1 = temp_a4;
            var_a4 = temp_a4 + 0x10;
            M2C_FIELD(temp_v1, s32 *, 0) = (s32) (temp_a7 + temp_a0_2);
            M2C_FIELD(temp_v1, s64 *, 8) = 4;
            M2C_FIELD(temp_v1, s32 *, 4) = temp_a2_3;
            var_a6 -= 1;
            var_s0_2 = temp_a0_2;
        } while (var_a6 != -1);
    }
    M2C_FIELD(var_a4, s32 *, 0) = (s32) (temp_a1_2 + var_s0_2);
    M2C_FIELD(var_a4, s64 *, 8) = 0xC;
    M2C_FIELD(var_a4, s32 *, 4) = temp_a2_3;
    temp_v0_4 = var_a4 + 0x10;
    M2C_FIELD(temp_v0_4, s64 *, 8) = 4;
    M2C_FIELD(var_a4, s32 *, 0x10) = (s32) (temp_a7 + (var_s1 * 0x10));
    M2C_FIELD(temp_v0_4, s32 *, 4) = temp_a2_3;
}
