/* NON_MATCHING: functional draft, 102 of 103 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_004A91D0(s32, M2C_UNK, void *, void *); /* extern */

void func_004A9228(u32 arg0) {
    s32 temp_a0;
    void *temp_a1;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_v0;
    void *temp_v1;

    temp_a3 = M2C_FIELD((void *)0x70002000, void **, 0x1F8);
    M2C_FIELD(temp_a3, s32 *, 0xC) = 0x51000006;
    M2C_FIELD(temp_a3, s32 *, 0) = 0x10000006;
    temp_a2 = temp_a3 + 0x10;
    M2C_FIELD(temp_a3, s32 *, 4) = 0;
    M2C_FIELD(temp_a3, s32 *, 8) = 0;
    M2C_FIELD((void *)0x70002000, void **, 0x1F8) = (void *) (M2C_FIELD((void *)0x70002000, void **, 0x1F8) + 0x70);
    M2C_FIELD(temp_a2, s32 *, -8) = 0x11000000;
    M2C_FIELD(temp_a3, s64 *, 0x10) = (s64) ((0x10000000 << 0x20) | 4);
    M2C_FIELD(temp_a2, s64 *, 8) = 0xE;
    temp_a1 = temp_a3 + 0x20;
    M2C_FIELD(temp_a1, s64 *, 8) = 0x50;
    M2C_FIELD(temp_a1, s32 *, 4) = (s32) (((arg0 >> 6) & 0x3FFF) | 0x10000);
    M2C_FIELD(temp_a3, s32 *, 0x20) = 0;
    temp_v0 = temp_a3 + 0x30;
    M2C_FIELD(temp_a3, s32 *, 0x30) = 0;
    M2C_FIELD(temp_v0, s64 *, 8) = 0x51;
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    temp_v1 = temp_a3 + 0x40;
    M2C_FIELD(temp_v1, s64 *, 8) = 0x52;
    M2C_FIELD(temp_v1, s32 *, 4) = 0x10;
    M2C_FIELD(temp_a3, s32 *, 0x40) = 0x10;
    M2C_FIELD(temp_a3, s64 *, 0x50) = 0;
    M2C_FIELD((temp_a3 + 0x50), s64 *, 8) = 0x53;
    temp_a3_2 = temp_a3 + 0x60;
    M2C_FIELD(temp_a3_2, s64 *, 8) = 0;
    M2C_FIELD(temp_a3, s64 *, 0x60) = (s64) ((0x08000000 << 0x20) | 0x8040);
    temp_a2_2 = M2C_FIELD((void *)0x70002000, void **, 0x1F8);
    temp_a0 = 0x84B080 & 0x0FFFFFFF;
    M2C_FIELD(temp_a2_2, s32 *, 0xC) = 0x51000040;
    M2C_FIELD(temp_a2_2, s32 *, 0) = 0x30000040;
    M2C_FIELD(temp_a2_2, s32 *, 4) = temp_a0;
    M2C_FIELD(temp_a2_2, s32 *, 8) = 0;
    M2C_FIELD((void *)0x70002000, void **, 0x1F8) = (void *) (M2C_FIELD((void *)0x70002000, void **, 0x1F8) + 0x10);
    if (*(s8 *)0x62A034 == 0) {
        *(s8 *)0x62A034 = 1;
        func_004A91D0(temp_a0, 0x30000040, temp_a2_2, temp_a3_2);
    }
}
