/* NON_MATCHING: functional draft, 223 of 229 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0049FE28();                            /* extern */

void func_0049B850(s32 arg0, void *arg1, void *arg2, s32 *arg3) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 var_f20;
    s32 *var_s1;
    s32 temp_a2;
    s32 temp_a4;
    s32 temp_a4_3;
    s32 temp_f1_2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a5;
    s32 var_a5_2;
    s32 var_s4;
    s64 *var_a4_2;
    s64 temp_a2_3;
    s64 temp_a5;
    s64 var_a6;
    u32 temp_v0;
    void *temp_a0;
    void *temp_a2_2;
    void *temp_a4_2;
    void *var_a4;
    void *var_s2;
    void *var_s3;

    var_s1 = arg3;
    var_s2 = arg2;
    var_s3 = arg1;
    var_s4 = 0;
    var_f20 = 0x1.0000000000000p+3f;
    if (M2C_FIELD((void *)0x70002000, u8 *, 7) == 0) {
        var_f20 = 0x1.0000000000000p+4f;
    }
    func_0049FE28();
    var_a5 = 0;
    var_a6 = (M2C_FIELD((void *)0x70002000, u16 *, 0x4A) | 0xD) & 0xFFFF;
    if (var_s2 != NULL) {
        var_a6 |= 0x110;
        var_s4 = 0 | 3;
        var_a5 = 1;
    }
    temp_v1 = var_a5 * 4;
    if (var_s1 != NULL) {
        var_a5 += 1;
        var_s4 |= 1 << temp_v1;
    }
    temp_a2 = var_a5 * 4;
    temp_a5 = var_a5 + 1;
    temp_v0 = (temp_a5 * arg0) + 1;
    temp_a4 = ((s32) (temp_v0 + (temp_v0 >> 0x1F)) >> 1) + 4 + (var_s1 == NULL);
    temp_a2_2 = M2C_FIELD((void *)0x70002000, void **, 0x1F8);
    if (temp_a4 != 0) {
        M2C_FIELD(temp_a2_2, s32 *, 0) = (s32) (temp_a4 | 0x10000000);
        M2C_FIELD(temp_a2_2, s32 *, 8) = 0x11000000;
        M2C_FIELD(temp_a2_2, s32 *, 0xC) = (s32) (temp_a4 | 0x50000000);
        M2C_FIELD(temp_a2_2, s32 *, 4) = 0;
        M2C_FIELD((void *)0x70002000, void **, 0x1F8) = (void *) (M2C_FIELD((void *)0x70002000, void **, 0x1F8) + (temp_a4 * 0x10) + 0x10);
    }
    var_a4 = temp_a2_2 + 0x20;
    M2C_FIELD((temp_a2_2 + 0x10), s64 *, 8) = 0xE;
    M2C_FIELD(temp_a2_2, s64 *, 0x10) = (s64) ((var_s1 == NULL) ? ((0x10000000 << 0x20) | 2) : ((0x10000000 << 0x20) | 1));
    if (var_s1 == NULL) {
        temp_a0 = var_a4;
        var_a4 = temp_a2_2 + 0x30;
        if (var_s2 != NULL) {
            var_a1 = M2C_FIELD((void *)0x70002000, s32 *, 0xC24);
        } else {
            var_a1 = M2C_FIELD((void *)0x70002000, s32 *, 0xC20);
        }
        M2C_FIELD(temp_a0, s64 *, 8) = 1;
        M2C_FIELD(temp_a0, s32 *, 0) = var_a1;
        M2C_FIELD(temp_a0, s32 *, 4) = 0x3F800000;
    }
    temp_a4_2 = var_a4 + 0x10;
    M2C_FIELD(var_a4, s64 *, 0) = var_a6;
    M2C_FIELD(var_a4, s64 *, 8) = 0;
    temp_a2_3 = temp_a5 << 0x3C;
    M2C_FIELD(temp_a4_2, s64 *, 8) = (s64) ((0xC << temp_a2) | var_s4);
    M2C_FIELD(var_a4, s64 *, 0x10) = (s64) (temp_a2_3 | ((0x04000000 << 0x20) | 2));
    var_a4_2 = temp_a4_2 + 0x10;
    var_a5_2 = 0;
    if (arg0 > 0) {
        do {
            if (var_a5_2 == 2) {
                temp_a4_3 = (s32) (var_a4_2 + 0xF) & ~0xF;
                M2C_FIELD(temp_a4_3, s64 *, 0) = (s64) ((arg0 - 2) | 0x8000 | temp_a2_3 | (0x8000 << 0x2B));
                M2C_FIELD(temp_a4_3, s64 *, 8) = (s64) ((4 << temp_a2) | var_s4);
                var_a4_2 = temp_a4_3 + 0x10;
            }
            if (var_s2 != NULL) {
                temp_f0 = M2C_FIELD(var_s2, f32 *, 4);
                temp_f1 = M2C_FIELD(var_s2, f32 *, 0);
                var_s2 += 8;
                *var_a4_2 = (s32) (temp_f1 * 0x1.0000000000000p+4f) | ((s32) (temp_f0 * 0x1.0000000000000p+4f) << 0x10);
                var_a4_2 += 8;
            }
            if (var_s1 != NULL) {
                temp_v0_2 = *var_s1;
                var_s1 += 4;
                M2C_FIELD(var_a4_2, s32 *, 4) = 0x3F800000;
                M2C_FIELD(var_a4_2, s32 *, 0) = temp_v0_2;
                var_a4_2 += 8;
            }
            var_a5_2 += 1;
            M2C_FIELD(var_a4_2, s32 *, 0) = (s32) (((M2C_FIELD((void *)0x70002000, u16 *, 0x26C) + (s32) (((f32) M2C_FIELD((void *)0x70002000, s32 *, 0x288) * 0x1.0000000000000p+4f) + (M2C_FIELD(var_s3, f32 *, 0) * 0x1.0000000000000p+4f))) & 0xFFFF) | ((M2C_FIELD((void *)0x70002000, u16 *, 0x26E) + (s32) (((f32) M2C_FIELD((void *)0x70002000, s32 *, 0x28C) * 0x1.0000000000000p+4f) + (M2C_FIELD(var_s3, f32 *, 4) * var_f20))) << 0x10));
            temp_f0_2 = M2C_FIELD(var_s3, f32 *, 8);
            var_s3 += 0xC;
            temp_f1_2 = (s32) ((0x1.0000000000000p+0f - temp_f0_2) * 0x1.fffffe0000000p+23f);
            temp_v0_3 = (temp_f1_2 < 0) ? 0 : temp_f1_2;
            M2C_FIELD(var_a4_2, s32 *, 4) = (s32) (((temp_v0_3 > 0xFFFFFF) ? 0xFFFFFF : temp_v0_3) | (M2C_FIELD((void *)0x70002000, s32 *, 0x248) & 0xFF000000));
            var_a4_2 += 8;
        } while (var_a5_2 < arg0);
    }
}
