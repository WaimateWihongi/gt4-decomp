/* NON_MATCHING: functional draft, 169 of 171 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_004A3620(void *arg0, void *arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5, f32 fparg0) {
    s32 temp_a1_3;
    s32 temp_a6;
    u16 temp_a1_2;
    u16 temp_v0;
    u16 var_a4;
    u16 var_a7;
    u16 var_t0;
    u32 temp_a2;
    u32 temp_v0_2;
    void *temp_a1;
    void *temp_a3;
    void *temp_a6_2;
    void *temp_a6_3;
    void *temp_a6_4;
    void *temp_t8;
    void *temp_v1;
    void *temp_v1_2;
    void *var_a6;

    temp_a6 = (s32) M2C_MINS(M2C_MAXS(fparg0 * 0x1.0000000000000p+7f, 0x0.0p+0f), 0x1.fe00000000000p+7f);
    temp_a1 = M2C_FIELD(arg0, void **, 0x1F8);
    temp_t8 = temp_a1 + 0x10;
    M2C_FIELD((temp_a1 + 0x20), s64 *, 8) = 0x3F;
    M2C_FIELD(temp_a1, s64 *, 0x20) = 0;
    M2C_FIELD(temp_a1, s64 *, 0x30) = 0;
    M2C_FIELD((temp_a1 + 0x30), s64 *, 8) = 0x45;
    M2C_FIELD(temp_a1, s64 *, 0x40) = 0;
    M2C_FIELD((temp_a1 + 0x40), s64 *, 8) = 0x47;
    temp_v1 = temp_a1 + 0x50;
    M2C_FIELD(temp_v1, s64 *, 8) = 0x42;
    M2C_FIELD(temp_a1, s32 *, 0x50) = arg3;
    M2C_FIELD(temp_v1, s32 *, 4) = (s32) ((s64) ((s64) temp_a6 << 0x20) >> 0x20);
    M2C_FIELD((temp_a1 + 0x60), s64 *, 8) = 0x14;
    M2C_FIELD(temp_a1, s64 *, 0x60) = 1;
    M2C_FIELD((temp_a1 + 0x70), s64 *, 8) = 6;
    M2C_FIELD(temp_a1, s64 *, 0x70) = (s64) (M2C_FIELD(arg2, u16 *, 0) | (0x8000 << 0x13) | (((s64) M2C_FIELD(arg2, u8 *, 2) << 0xE) | 0x28000000) | ((s64) M2C_FIELD(arg2, u8 *, 3) << 0x14) | (0xA000 << 0x12));
    M2C_FIELD(temp_a1, s64 *, 0x80) = 0;
    M2C_FIELD((temp_a1 + 0x80), s64 *, 8) = 8;
    M2C_FIELD(temp_a1, s64 *, 0x90) = 0x156;
    M2C_FIELD((temp_a1 + 0x90), s64 *, 8) = 0;
    temp_v1_2 = temp_a1 + 0xA0;
    M2C_FIELD(temp_v1_2, s64 *, 8) = 1;
    M2C_FIELD(temp_a1, s32 *, 0xA0) = 0x80808080;
    var_a6 = temp_a1 + 0xB0;
    M2C_FIELD(temp_v1_2, s32 *, 4) = 0x3F800000;
    var_a7 = M2C_FIELD(arg1, u16 *, 0xC);
    temp_v0 = M2C_FIELD(arg1, u16 *, 0xE);
    var_t0 = var_a7 + 0x400;
    temp_a1_2 = M2C_FIELD(arg1, u16 *, 0x12);
    var_a4 = var_t0;
loop_3:
    temp_a1_3 = M2C_FIELD(arg2, s32 *, 4);
    temp_v0_2 = M2C_FIELD(arg1, u32 *, 4);
    temp_a6_2 = var_a6 + 0x10;
    M2C_FIELD(var_a6, s64 *, 8) = 3;
    M2C_FIELD(var_a6, u64 *, 0) = (u64) ((u64) (((arg5 << 0x10) | ((u32) ((var_a7 - M2C_FIELD(arg1, u16 *, 0xC)) * temp_a1_3) / temp_v0_2)) << 0x20) >> 0x20);
    temp_a6_3 = temp_a6_2 + 0x10;
    M2C_FIELD(temp_a6_2, s64 *, 8) = 0xD;
    M2C_FIELD(var_a6, u64 *, 0x10) = (u64) ((u64) ((((temp_v0 + arg4) << 0x10) | var_a7) << 0x20) >> 0x20);
    temp_a6_4 = temp_a6_3 + 0x10;
    M2C_FIELD(temp_a6_3, s64 *, 8) = 3;
    M2C_FIELD(temp_a6_2, u64 *, 0x10) = (u64) ((u64) ((((((u32) ((temp_a1_2 - temp_v0) * M2C_FIELD(arg2, s32 *, 8)) / (u32) M2C_FIELD(arg1, u32 *, 8)) + arg5) << 0x10) | ((u32) ((var_t0 - M2C_FIELD(arg1, u16 *, 0xC)) * temp_a1_3) / temp_v0_2)) << 0x20) >> 0x20);
    var_a6 = temp_a6_4 + 0x10;
    M2C_FIELD(temp_a6_4, s64 *, 8) = 5;
    M2C_FIELD(temp_a6_3, u64 *, 0x10) = (u64) ((u64) ((((temp_a1_2 + arg4) << 0x10) | var_t0) << 0x20) >> 0x20);
    var_a7 = var_a4;
    var_a4 = var_a7 + 0x400;
    var_t0 += 0x400;
    if (var_a7 < (u16) M2C_FIELD(arg1, u16 *, 0x10)) {
        goto loop_3;
    }
    temp_a2 = (u32) (var_a6 - temp_t8) >> 4;
    temp_a3 = M2C_FIELD(arg0, void **, 0x1F8);
    if (temp_a2 != 0) {
        M2C_FIELD(temp_a3, s32 *, 0xC) = (s32) (temp_a2 | 0x50000000);
        M2C_FIELD(temp_a3, s32 *, 0) = (s32) (temp_a2 | 0x10000000);
        M2C_FIELD(temp_a3, s32 *, 8) = 0x11000000;
        M2C_FIELD(temp_a3, s32 *, 4) = 0;
        M2C_FIELD(arg0, void **, 0x1F8) = (void *) (M2C_FIELD(arg0, void **, 0x1F8) + (temp_a2 * 0x10) + 0x10);
    }
    M2C_FIELD(temp_t8, s64 *, 8) = 0xE;
    M2C_FIELD(temp_a1, s64 *, 0x10) = (s64) ((temp_a2 - 1) | 0x8000 | (0x8000 << 0x2D));
    M2C_FIELD(arg0, s64 *, 0x1D8) = (s64) (M2C_FIELD(arg0, s64 *, 0x1D8) | ((4 << 0x20) | 0x6E0));
}
