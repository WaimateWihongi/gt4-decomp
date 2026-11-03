/* NON_MATCHING: functional draft, 133 of 133 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_004A3308(void *arg0) {
    s32 temp_a1;
    s32 temp_a7;
    s32 temp_t0;
    s32 temp_v0;
    u64 temp_a5;
    void *temp_a3;
    void *temp_a4;
    void *temp_a4_2;

    temp_a5 = M2C_FIELD(arg0, u64 *, 0x190);
    temp_t0 = M2C_FIELD(arg0, s32 *, 0x264);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x250);
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x254);
    temp_a7 = M2C_FIELD(arg0, s32 *, 0x268);
    temp_a4 = M2C_FIELD(arg0, void **, 0x1F8);
    M2C_FIELD(temp_a4, s32 *, 0) = 0x10000004;
    M2C_FIELD(temp_a4, s32 *, 8) = 0x11000000;
    M2C_FIELD(temp_a4, s32 *, 0xC) = 0x50000004;
    M2C_FIELD(temp_a4, s32 *, 4) = 0;
    M2C_FIELD(arg0, void **, 0x1F8) = (void *) (M2C_FIELD(arg0, void **, 0x1F8) + 0x50);
    M2C_FIELD((temp_a4 + 0x10), s64 *, 8) = 0xE;
    M2C_FIELD(temp_a4, s64 *, 0x10) = (s64) ((0x10000000 << 0x20) | 0x8003);
    M2C_FIELD(temp_a4, s64 *, 0x20) = (s64) ((M2C_FIELD(arg0, u8 *, 0x24F) << 0x18) | (M2C_FIELD(arg0, u8 *, 0x24E) << 0x10) | ((u16) M2C_FIELD(arg0, u16 *, 0x24C) >> 5));
    M2C_FIELD((temp_a4 + 0x20), s64 *, 8) = 0x4C;
    temp_a3 = temp_a4 + 0x30;
    temp_a4_2 = temp_a4 + 0x40;
    M2C_FIELD(temp_a3, s64 *, 8) = 0x40;
    M2C_FIELD(temp_a4, s32 *, 0x30) = (s32) (((((s32) ((((s64) (((temp_a5 >> 0x10) & 0x7FF) << 0x20) >> 0x20) * temp_v0) + temp_v0) / temp_t0) - 1) << 0x10) | ((s32) (((s64) ((temp_a5 & 0x7FF) << 0x20) >> 0x20) * temp_v0) / temp_t0));
    M2C_FIELD(temp_a3, s32 *, 4) = (s32) (((((s32) ((((s64) (((temp_a5 >> 0x30) & 0x7FF) << 0x20) >> 0x20) * temp_a1) + temp_a1) / temp_a7) - 1) << 0x10) | ((s32) (((s64) (((temp_a5 >> 0x20) & 0x7FF) << 0x20) >> 0x20) * temp_a1) / temp_a7));
    M2C_FIELD(temp_a4, s32 *, 0x40) = (s32) (M2C_FIELD(arg0, u16 *, 0x258) + 8);
    M2C_FIELD(temp_a4_2, s64 *, 8) = 0x18;
    M2C_FIELD(temp_a4_2, s32 *, 4) = (s32) (M2C_FIELD(arg0, u16 *, 0x25A) + 8);
    M2C_FIELD(arg0, s64 *, 0x1D8) = (s64) (M2C_FIELD(arg0, s64 *, 0x1D8) | 0x13);
}
