/* NON_MATCHING: functional draft, 221 of 225 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0049FE28();                            /* extern */

void func_004A6788(f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, f32 fparg4, f32 fparg5, f32 fparg6, f32 fparg7) {
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f1;
    s16 temp_v0_3;
    s16 temp_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a4;
    s32 temp_a5;
    s32 temp_f0;
    s32 temp_f2_2;
    s32 temp_f2_3;
    s32 temp_f6;
    s32 temp_s4;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a5;
    s32 var_a6;
    s32 var_a7;
    s32 var_s1;
    s32 var_s3;
    s32 var_t1;
    s32 var_t2;
    s32 var_v0;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a2_4;
    void *temp_a2_5;
    void *temp_a2_6;
    void *temp_a3;
    void *var_a2;

    func_0049FE28();
    var_f1 = 0x1.0000000000000p+3f;
    if (M2C_FIELD((void *)0x70002000, u8 *, 7) == 0) {
        var_f1 = 0x1.0000000000000p+4f;
    }
    temp_f2 = (f32) M2C_FIELD((void *)0x70002000, u16 *, 0x26C) + (f32) (M2C_FIELD((void *)0x70002000, s32 *, 0x288) * 0x10);
    temp_f1 = (f32) M2C_FIELD((void *)0x70002000, u16 *, 0x26E) + (f32) (M2C_FIELD((void *)0x70002000, s32 *, 0x28C) * 0x10);
    var_t1 = (s32) (temp_f2 + (fparg0 * 0x1.0000000000000p+4f) + 0x1.0000000000000p-1f);
    var_t2 = (s32) (temp_f2 + (fparg2 * 0x1.0000000000000p+4f) + 0x1.0000000000000p-1f);
    temp_f6 = (s32) (temp_f1 + (fparg1 * var_f1) + 0x1.0000000000000p-1f);
    temp_f2_2 = (s32) ((fparg5 * 0x1.0000000000000p+4f) + 0x1.0000000000000p-1f);
    temp_f2_3 = (s32) (temp_f1 + (fparg3 * var_f1) + 0x1.0000000000000p-1f);
    var_s3 = (s32) ((fparg6 * 0x1.0000000000000p+4f) + 0x1.0000000000000p-1f);
    var_s1 = (s32) ((fparg4 * 0x1.0000000000000p+4f) + 0x1.0000000000000p-1f);
    temp_f0 = (s32) ((fparg7 * 0x1.0000000000000p+4f) + 0x1.0000000000000p-1f);
    var_v0 = var_t2 - 1;
    if (var_t2 < var_t1) {
        temp_v0 = var_t1;
        var_t1 = var_t2;
        var_t2 = temp_v0;
        temp_v0_2 = var_s1;
        var_s1 = var_s3;
        var_s3 = temp_v0_2;
        var_v0 = var_t2 - 1;
    }
    var_a7 = var_t1;
    var_a6 = var_s1;
    temp_t0 = var_t2 - var_a7;
    temp_a5 = (var_v0 >> 9) - (var_t1 >> 9);
    temp_s4 = var_s3 - var_a6;
    if (temp_t0 != 0) {
        temp_a0 = temp_a5 * 2;
        temp_a3 = M2C_FIELD((void *)0x70002000, void **, 0x1F8);
        if (temp_a0 != -5) {
            temp_a0_2 = temp_a0 + 5;
            M2C_FIELD(temp_a3, s32 *, 0) = (s32) (temp_a0_2 | 0x10000000);
            M2C_FIELD(temp_a3, s32 *, 8) = 0x11000000;
            M2C_FIELD(temp_a3, s32 *, 0xC) = (s32) (temp_a0_2 | 0x50000000);
            M2C_FIELD(temp_a3, s32 *, 4) = 0;
            M2C_FIELD((void *)0x70002000, void **, 0x1F8) = (void *) ((temp_a5 << 5) + M2C_FIELD((void *)0x70002000, void **, 0x1F8) + 0x60);
        }
        M2C_FIELD(temp_a3, s64 *, 0x10) = (s64) ((0x24000000 << 0x20) | 1);
        M2C_FIELD((temp_a3 + 0x10), s64 *, 8) = 1;
        M2C_FIELD(temp_a3, s32 *, 0x20) = (s32) M2C_FIELD((void *)0x70002000, s32 *, 0xC24);
        M2C_FIELD((temp_a3 + 0x20), s32 *, 4) = 0x3F800000;
        M2C_FIELD(temp_a3, s64 *, 0x28) = (s64) ((M2C_FIELD((void *)0x70002000, u16 *, 0x4A) | 0x116) & 0xFFFF);
        temp_a4 = M2C_FIELD((void *)0x70002000, s32 *, 0x248);
        var_a2 = temp_a3 + 0x40;
        M2C_FIELD((temp_a3 + 0x30), s64 *, 8) = 0x43C3;
        var_a5 = temp_a5 - 1;
        M2C_FIELD(temp_a3, s64 *, 0x30) = (s64) ((temp_a5 + 1) | 0x8000 | (0x8800 << 0x2F));
        if (var_a5 != -1) {
            do {
                temp_v1 = (var_a7 + 0x200) & ~0x1F0;
                temp_v0_3 = var_s1 + ((s32) (temp_s4 * (temp_v1 - var_t1)) / temp_t0);
                M2C_FIELD(var_a2, s16 *, 0) = (s16) var_a6;
                M2C_FIELD(var_a2, s16 *, 2) = (s16) temp_f2_2;
                M2C_FIELD(var_a2, s32 *, 4) = 0;
                temp_a2 = var_a2 + 8;
                M2C_FIELD(var_a2, s16 *, 8) = (s16) var_a7;
                M2C_FIELD(temp_a2, s16 *, 2) = (s16) temp_f6;
                M2C_FIELD(temp_a2, s32 *, 4) = temp_a4;
                temp_a2_2 = temp_a2 + 8;
                M2C_FIELD(temp_a2, s16 *, 8) = temp_v0_3;
                M2C_FIELD(temp_a2_2, s16 *, 2) = (s16) temp_f0;
                M2C_FIELD(temp_a2_2, s32 *, 4) = 0;
                temp_a2_3 = temp_a2_2 + 8;
                M2C_FIELD(temp_a2_2, s16 *, 8) = temp_v1;
                M2C_FIELD(temp_a2_3, s16 *, 2) = (s16) temp_f2_3;
                M2C_FIELD(temp_a2_3, s32 *, 4) = temp_a4;
                var_a2 = temp_a2_3 + 8;
                var_a7 = (s32) temp_v1;
                var_a5 -= 1;
                var_a6 = (s32) temp_v0_3;
            } while (var_a5 != -1);
        }
        M2C_FIELD(var_a2, s16 *, 0) = (s16) var_a6;
        M2C_FIELD(var_a2, s16 *, 2) = (s16) temp_f2_2;
        M2C_FIELD(var_a2, s32 *, 4) = 0;
        temp_a2_4 = var_a2 + 8;
        M2C_FIELD(var_a2, s16 *, 8) = (s16) var_a7;
        M2C_FIELD(temp_a2_4, s16 *, 2) = (s16) temp_f6;
        M2C_FIELD(temp_a2_4, s32 *, 4) = temp_a4;
        temp_a2_5 = temp_a2_4 + 8;
        M2C_FIELD(temp_a2_4, s16 *, 8) = (s16) var_s3;
        M2C_FIELD(temp_a2_5, s16 *, 2) = (s16) temp_f0;
        M2C_FIELD(temp_a2_5, s32 *, 4) = 0;
        temp_a2_6 = temp_a2_5 + 8;
        M2C_FIELD(temp_a2_5, s16 *, 8) = (s16) var_t2;
        M2C_FIELD(temp_a2_6, s16 *, 2) = (s16) temp_f2_3;
        M2C_FIELD(temp_a2_6, s32 *, 4) = temp_a4;
    }
}
