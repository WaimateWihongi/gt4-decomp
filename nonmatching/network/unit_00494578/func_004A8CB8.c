/* NON_MATCHING: functional draft, 219 of 224 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0049FE28();                            /* extern */
f32 func_004A8AD0(s32, M2C_UNK, M2C_UNK, M2C_UNK, f32); /* extern */
f32 func_004A8BB0(f32);                             /* extern */
void *func_004ABC90(M2C_UNK);                       /* extern */

void func_004A8CB8(u32 arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, f32 fparg4, f32 fparg5) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f23;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f30;
    f32 var_f27;
    s32 temp_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_s1;
    s32 var_s2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *var_s0;

    func_0049FE28();
    temp_v0 = func_004ABC90(0x36);
    temp_v0_2 = temp_v0 + 0x10;
    M2C_FIELD(temp_v0, s64 *, 8) = 0xE;
    M2C_FIELD(temp_v0, s64 *, 0) = (s64) ((0x10000000 << 0x20) | 4);
    temp_v0_3 = temp_v0_2 + 0x10;
    M2C_FIELD(temp_v0_2, s64 *, 8) = 0x50;
    M2C_FIELD(temp_v0_2, s32 *, 4) = (s32) (((arg0 >> 6) & 0x3FFF) | 0x01010000);
    M2C_FIELD(temp_v0, s32 *, 0x10) = 0;
    temp_v0_4 = temp_v0_3 + 0x10;
    M2C_FIELD(temp_v0_3, s64 *, 8) = 0x51;
    M2C_FIELD(temp_v0_2, s64 *, 0x10) = 0;
    temp_v0_5 = temp_v0_4 + 0x10;
    M2C_FIELD(temp_v0_3, s64 *, 0x10) = (s64) ((0x10 << 0x20) | 0x10);
    M2C_FIELD(temp_v0_4, s64 *, 8) = 0x52;
    temp_v0_6 = temp_v0_5 + 0x10;
    M2C_FIELD(temp_v0_5, s64 *, 8) = 0x53;
    M2C_FIELD(temp_v0_4, s64 *, 0x10) = 0;
    M2C_FIELD(temp_v0_6, s64 *, 8) = 0;
    M2C_FIELD(temp_v0_5, s64 *, 0x10) = (s64) ((0x08000000 << 0x20) | 0x8030);
    var_s0 = temp_v0_6 + 0x10;
    if (fparg3 != fparg4) {
        var_f27 = 0x1.0000000000000p+0f / (fparg4 - fparg3);
    } else {
        var_f27 = 0x0.0p+0f;
    }
    var_s2 = 0;
    temp_f29 = 0x1.0000000000000p+0f / M2C_MAXS(fparg1, 0x0.0p+0f);
    var_s1 = 0;
    temp_f28 = 0x1.0000000000000p+0f / M2C_MAXS(fparg2, 0x0.0p+0f);
    temp_f30 = 0x1.0000000000000p+0f / M2C_MAXS(fparg0, 0x0.0p+0f);
    temp_f23 = M2C_MINS(M2C_MAXS(fparg5, 0x0.0p+0f), 0x1.fe00000000000p+7f);
    do {
        var_a3 = 0;
        var_a2 = 0;
        var_a1 = 0;
        var_s1 += 1;
        temp_f0 = (f32) var_s2 * 0x1.0101000000000p-8f;
        temp_f1 = temp_f0 - fparg3;
        temp_a0 = (var_s1 & 0xE7) | ((var_s1 & 8) * 2);
        var_s2 = temp_a0 | ((s32) (var_s1 & 0x10) >> 1);
        if (fparg3 < temp_f0) {
            temp_f0_2 = func_004A8AD0(temp_a0, 0, 0, 0, M2C_MINS(temp_f1 * var_f27, 0x1.0000000000000p+0f));
            temp_f20 = func_004A8BB0(temp_f30 * temp_f0_2) * 0x1.fe00000000000p+7f;
            temp_f21 = func_004A8BB0(temp_f29 * temp_f0_2) * 0x1.fe00000000000p+7f;
            var_a3 = (s32) M2C_MINS(M2C_MAXS(temp_f20, 0x0.0p+0f), temp_f23);
            var_a2 = (s32) M2C_MINS(M2C_MAXS(temp_f21, 0x0.0p+0f), temp_f23);
            var_a1 = (s32) M2C_MINS(M2C_MAXS(func_004A8BB0(temp_f28 * temp_f0_2) * 0x1.fe00000000000p+7f, 0x0.0p+0f), temp_f23);
        }
        M2C_FIELD(var_s0, s8 *, 0) = (s8) var_a3;
        M2C_FIELD(var_s0, s8 *, 1) = (s8) var_a2;
        M2C_FIELD(var_s0, s8 *, 2) = (s8) var_a1;
        var_s0 += 3;
    } while (var_s1 < 0x100);
}
