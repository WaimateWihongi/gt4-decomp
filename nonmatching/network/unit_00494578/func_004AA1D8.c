/* NON_MATCHING: functional draft, 161 of 162 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_004ABD40(s32, s32, s32, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */

void func_004AA1D8(s32 arg4, s32 arg5, s32 arg6, s32 arg7, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f14;
    s32 temp_f12_2;
    s32 temp_f13_2;
    s32 temp_f14_2;
    s32 temp_f15;
    s32 temp_v1;

    temp_f12 = M2C_MAXS(fparg0, 0x0.0p+0f);
    temp_f13 = M2C_MAXS(fparg1, 0x0.0p+0f);
    temp_f14 = M2C_MAXS(fparg2, 0x0.0p+0f);
    temp_f15 = (s32) M2C_MINS((M2C_MAXS(fparg3, 0x0.0p+0f) * 0x1.0000000000000p+7f) + 0x1.0000000000000p-1f, 0x1.fe00000000000p+7f);
    temp_f12_2 = (s32) M2C_MINS((temp_f12 * 0x1.fe00000000000p+7f) + 0x1.0000000000000p-1f, 0x1.fe00000000000p+7f);
    temp_f13_2 = (s32) M2C_MINS((temp_f13 * 0x1.fe00000000000p+7f) + 0x1.0000000000000p-1f, 0x1.fe00000000000p+7f);
    temp_f14_2 = (s32) M2C_MINS((temp_f14 * 0x1.fe00000000000p+7f) + 0x1.0000000000000p-1f, 0x1.fe00000000000p+7f);
    temp_v1 = temp_f15 << 0x18;
    M2C_FIELD((void *)0x70002000, s32 *, 0xC24) = (s32) ((s32) M2C_MINS((temp_f12 * 0x1.0000000000000p+7f) + 0x1.0000000000000p-1f, 0x1.fe00000000000p+7f) | ((s32) M2C_MINS((temp_f13 * 0x1.0000000000000p+7f) + 0x1.0000000000000p-1f, 0x1.fe00000000000p+7f) << 8) | ((s32) M2C_MINS((temp_f14 * 0x1.0000000000000p+7f) + 0x1.0000000000000p-1f, 0x1.fe00000000000p+7f) << 0x10) | temp_v1);
    M2C_FIELD((void *)0x70002000, s32 *, 0xC20) = (s32) (temp_f12_2 | (temp_f13_2 << 8) | (temp_f14_2 << 0x10) | temp_v1);
    if (M2C_FIELD((void *)0x70002000, u8 *, 6) != 0) {
        func_004ABD40(M2C_FIELD((void *)0x70002000, s32 *, 0xC2C), M2C_FIELD((void *)0x70002000, s32 *, 0xC28), temp_v1, 0x70002000, arg4, arg5, arg6, arg7, temp_f12_2, temp_f13_2, temp_f14_2, temp_f15);
    }
}
