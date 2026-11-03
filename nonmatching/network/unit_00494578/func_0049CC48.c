/* NON_MATCHING: functional draft, 100 of 101 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_0049CC48(void *arg0) {
    s64 temp_a1;
    s64 temp_a2;
    s64 temp_a5;
    s64 temp_v0;
    s64 var_t2;
    s64 var_t3;
    u64 var_a7;
    u64 var_t1;

    var_a7 = M2C_FIELD(arg0, u64 *, 0);
    var_t1 = M2C_FIELD(arg0, u64 *, 8);
    var_t2 = M2C_FIELD(arg0, s64 *, 0x20);
    if (M2C_FIELD((void *)0x624CC0, u8 *, 0x1C) != 0) {
        temp_a5 = M2C_FIELD((void *)0x624CC0, s64 *, 0x10);
        temp_a2 = M2C_FIELD((void *)0x624CC0, s64 *, 0);
        temp_a1 = M2C_FIELD((void *)0x624CC0, s64 *, 8);
        var_a7 = (var_a7 & ~temp_a2) | (M2C_FIELD((void *)0x70002000, s64 *, 0x1C0) & temp_a2);
        var_t1 = (var_t1 & ~temp_a1) | (M2C_FIELD((void *)0x70002000, u64 *, 0x1B8) & temp_a1);
        var_t2 = (var_t2 & ~temp_a5) | (M2C_FIELD((void *)0x70002000, s64 *, 0x1A8) & temp_a5);
    }
    M2C_FIELD((void *)0x70002000, s64 *, 0x1A8) = var_t2;
    var_t3 = M2C_FIELD((void *)0x70002000, s64 *, 0x1D8) | 0x06800680;
    M2C_FIELD((void *)0x70002000, u64 *, 0x1B8) = var_t1;
    M2C_FIELD((void *)0x70002000, s64 *, 0x1C0) = (s64) (var_a7 & (-1U >> 3));
    if ((var_a7 >> 0x3D) != 0) {
        if ((var_a7 >> 0x38) & 0x1F) {
            var_a7 = (var_a7 & ~(((0x1F000000 << 0x10) | 0x3F0) << 0x10)) | 0x01300000;
        }
        M2C_FIELD((void *)0x70002000, u64 *, 0x1B0) = var_a7;
        var_t3 |= 0x01000100;
    }
    temp_v0 = (s64) ((var_t1 & 0x1C) << 0x20) >> 0x20;
    if (temp_v0 != 0) {
        var_t3 |= 0x08000800;
        M2C_FIELD((void *)0x70002000, u64 *, 0x1B8) = (u64) ((M2C_FIELD((void *)0x70002000, u64 *, 0x1B8) & ((((-0x1000 << 0x10) | 0xFFFF) << 0x10) | 0xFFFF)) | ((((s32) ((s16) (((s64) (((var_t1 >> 0x20) & 0xFFF) << 0x20) >> 0x20) * 0x10) + (M2C_FIELD((void *)0x70002000, s32 *, 0x44) << ((s64) (((var_t1 >> 0x13) & 3) << 0x20) >> 0x20))) >> 4) & 0xFFF) << 0x20));
        M2C_FIELD((void *)0x70002000, s64 *, 0x1C8) = (s64) M2C_FIELD(arg0, s64 *, 0x10);
        if ((u32) temp_v0 >= 0xDU) {
            var_t3 |= 0x10001000;
            M2C_FIELD((void *)0x70002000, s64 *, 0x1D0) = (s64) M2C_FIELD(arg0, s64 *, 0x18);
        }
    }
    M2C_FIELD((void *)0x70002000, s64 *, 0x1D8) = var_t3;
}
