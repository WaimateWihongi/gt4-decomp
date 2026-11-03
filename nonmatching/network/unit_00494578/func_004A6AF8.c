/* NON_MATCHING: functional draft, 86 of 88 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0049FE28();                            /* extern */

void func_004A6AF8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_a4;
    s32 temp_s1;
    void *temp_a0;

    temp_s1 = (M2C_FIELD((void *)0x70002000, u8 *, 7) == 0) ? 4 : 3;
    func_0049FE28();
    temp_a0 = M2C_FIELD((void *)0x70002000, void **, 0x1F8);
    temp_a4 = M2C_FIELD((void *)0x70002000, u16 *, 0x26C) + (M2C_FIELD((void *)0x70002000, s32 *, 0x288) * 0x10);
    M2C_FIELD(temp_a0, s32 *, 0) = 0x10000003;
    M2C_FIELD(temp_a0, s32 *, 8) = 0x11000000;
    M2C_FIELD(temp_a0, s32 *, 0xC) = 0x50000003;
    temp_a1 = M2C_FIELD((void *)0x70002000, u16 *, 0x26E) + (M2C_FIELD((void *)0x70002000, s32 *, 0x28C) * 0x10);
    M2C_FIELD(temp_a0, s32 *, 4) = 0;
    M2C_FIELD((void *)0x70002000, void **, 0x1F8) = (void *) (M2C_FIELD((void *)0x70002000, void **, 0x1F8) + 0x40);
    M2C_FIELD((temp_a0 + 0x10), s64 *, 8) = 0x4C01;
    M2C_FIELD(temp_a0, s64 *, 0x10) = (s64) ((0x44000000 << 0x20) | 0x8001);
    M2C_FIELD(temp_a0, s32 *, 0x20) = (s32) M2C_FIELD((void *)0x70002000, s32 *, 0xC20);
    M2C_FIELD((temp_a0 + 0x20), s32 *, 4) = 0x3F800000;
    M2C_FIELD(temp_a0, s64 *, 0x28) = (s64) ((M2C_FIELD((void *)0x70002000, u16 *, 0x4A) | 1) & 0xFFEF);
    M2C_FIELD(temp_a0, s32 *, 0x30) = (s32) (((temp_a1 + (arg1 << temp_s1)) << 0x10) | ((temp_a4 + (arg0 * 0x10)) & 0xFFFF));
    M2C_FIELD((temp_a0 + 0x30), s32 *, 4) = (s32) M2C_FIELD((void *)0x70002000, s32 *, 0x248);
    M2C_FIELD(temp_a0, s32 *, 0x38) = (s32) (((temp_a1 + (arg3 << temp_s1)) << 0x10) | ((temp_a4 + (arg2 * 0x10)) & 0xFFFF));
    M2C_FIELD((temp_a0 + 0x38), s32 *, 4) = (s32) M2C_FIELD((void *)0x70002000, s32 *, 0x248);
}
