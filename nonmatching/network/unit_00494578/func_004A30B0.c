/* NON_MATCHING: functional draft, 73 of 73 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_004A30B0(void *arg0, s64 arg1, s32 arg2, s32 arg3, void *arg4) {
    s32 var_a0;
    s32 var_v1;
    u32 temp_a1;
    void *temp_a2;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_a5;
    void *temp_a5_2;
    void *temp_v1;
    void *var_a5;

    temp_a3 = M2C_FIELD(arg0, void **, 0x1F8);
    temp_a5 = temp_a3 + 0x10;
    M2C_FIELD(temp_a3, s64 *, 0x10) = (s64) ((0x10000000 << 0x20) | 4);
    M2C_FIELD(temp_a5, s64 *, 8) = 0xE;
    M2C_FIELD(temp_a3, s64 *, 0x20) = arg1;
    M2C_FIELD((temp_a3 + 0x20), s64 *, 8) = 0x47;
    M2C_FIELD((temp_a3 + 0x30), s64 *, 8) = 0x4E;
    M2C_FIELD(temp_a3, s64 *, 0x30) = (s64) ((M2C_FIELD(arg0, s64 *, 0x188) & ((((-2 << 0x10) | 0xFFFF) << 0x10) | 0xFFFF)) | ((s64) M2C_FIELD(arg0, u8 *, 0x2D4) << 0x20));
    M2C_FIELD((temp_a3 + 0x40), s64 *, 8) = 0;
    M2C_FIELD(temp_a3, s64 *, 0x40) = 6;
    temp_v1 = temp_a3 + 0x50;
    M2C_FIELD(temp_v1, s64 *, 8) = 1;
    M2C_FIELD(temp_a3, s32 *, 0x50) = arg2;
    M2C_FIELD(temp_v1, s32 *, 4) = 0x3F800000;
    var_a0 = M2C_FIELD(arg4, s32 *, 0xC);
    var_a5 = temp_a3 + 0x70;
    temp_a3_2 = temp_a3 + 0x60;
    var_v1 = ((u16) M2C_FIELD(arg4, s32 *, 0xC) + 0x400) | (M2C_FIELD(arg4, u16 *, 0x12) << 0x10);
    do {
        M2C_FIELD(var_a5, s32 *, 0) = var_a0;
        M2C_FIELD(var_a5, s32 *, 4) = arg3;
        temp_a5_2 = var_a5 + 8;
        M2C_FIELD(var_a5, s32 *, 8) = var_v1;
        M2C_FIELD(temp_a5_2, s32 *, 4) = arg3;
        var_a5 = temp_a5_2 + 8;
        var_a0 += 0x400;
        var_v1 += 0x400;
    } while ((u32) (var_a0 & 0xFFFF) < (u16) M2C_FIELD(arg4, u16 *, 0x10));
    temp_a1 = (u32) (var_a5 - temp_a5) >> 4;
    temp_a2 = M2C_FIELD(arg0, void **, 0x1F8);
    if (temp_a1 != 0) {
        M2C_FIELD(temp_a2, s32 *, 0xC) = (s32) (temp_a1 | 0x50000000);
        M2C_FIELD(temp_a2, s32 *, 0) = (s32) (temp_a1 | 0x10000000);
        M2C_FIELD(temp_a2, s32 *, 8) = 0x11000000;
        M2C_FIELD(temp_a2, s32 *, 4) = 0;
        M2C_FIELD(arg0, void **, 0x1F8) = (void *) (M2C_FIELD(arg0, void **, 0x1F8) + (temp_a1 * 0x10) + 0x10);
    }
    M2C_FIELD(temp_a3_2, s64 *, 8) = 0x5D;
    M2C_FIELD(temp_a3, s64 *, 0x60) = (s64) (((u64) (((((u32) (var_a5 - temp_a3_2) >> 4) - 1) | 0x8000) << 0x20) >> 0x20) | (0x9000 << 0x2E));
    M2C_FIELD(arg0, s64 *, 0x1D8) = (s64) (M2C_FIELD(arg0, s64 *, 0x1D8) | 0x48);
}
