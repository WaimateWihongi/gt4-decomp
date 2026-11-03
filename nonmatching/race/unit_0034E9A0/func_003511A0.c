/* NON_MATCHING: functional draft, 96 of 108 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00350FB8(void *);                      /* extern */
M2C_UNK func_00351178(void *);                      /* extern */
void *func_00359510(void *);                        /* extern */
s32 func_00368398(void *);                          /* extern */

void func_003511A0(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_v0;
    s8 *var_a3_2;
    s8 var_v0_2;
    u32 var_a0_2;
    u32 var_a1_3;
    u8 *var_a3;
    u8 var_v1;
    void *temp_s0;
    void *temp_s2;
    void *temp_s3;
    void *var_a0_3;
    void *var_a1;
    void *var_a1_2;

    temp_s2 = arg0 + 0x104;
    temp_s3 = M2C_FIELD(arg0, void **, 0x10);
    temp_s0 = func_00359510(temp_s3);
    M2C_FIELD(temp_s2, f32 *, 0x50C) = 0x0.0p+0f;
    M2C_FIELD(temp_s2, f32 *, 0x510) = 0x0.0p+0f;
    if (func_00368398(temp_s3 + 0x234) != 0) {
        func_00351178(temp_s2);
    } else {
        func_00350FB8(arg0);
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), u8 *, 0x246) == 4) {
        M2C_FIELD(temp_s2, s8 *, 0x522) = 1;
    }
    var_a2 = 0;
    if (M2C_FIELD(temp_s0, u8 *, 1) != 0) {
        var_a3 = temp_s0 + 0x14;
        var_a1 = arg0 + 0x164;
        do {
            temp_v0 = var_a2 < (s32) M2C_FIELD(temp_s0, u8 *, 1);
            var_a2 += 1;
            var_v1 = 0;
            if (temp_v0 != 0) {
                var_v1 = *var_a3;
            }
            var_a3 += 1;
            M2C_FIELD(var_a1, f32 *, 0x78) = (f32) (M2C_FIELD(var_a1, f32 *, 0x64) * M2C_FIELD(((var_v1 * 4) + temp_s3), f32 *, 0x1010));
            var_a1 += 0xEC;
        } while ((u32) var_a2 < (u8) M2C_FIELD(temp_s0, u8 *, 1));
    }
    var_a0 = (s32) M2C_FIELD(temp_s0, u8 *, 1);
    var_a2_2 = 0;
    if ((s32) M2C_FIELD(temp_s0, u8 *, 1) != 0) {
        var_a1_2 = arg0 + 0x164;
        var_a3_2 = temp_s0 + 0x3C;
        do {
            temp_v0_2 = var_a2_2 < var_a0;
            var_a2_2 += 1;
            var_a0_2 = 0;
            if (temp_v0_2 != 0) {
                var_a0_2 = (u32) *var_a3_2 >> 0x1F;
            }
            var_v0 = (u32) var_a2_2 < M2C_FIELD(temp_s0, u8 *, 1);
            if (var_a0_2 != 0) {
                M2C_FIELD(var_a1_2, f32 *, 0x78) = (f32) (M2C_FIELD(var_a1_2, f32 *, 0x78) + (M2C_FIELD(temp_s2, f32 *, 0x490) * M2C_FIELD(temp_s3, f32 *, 0x1018)));
                var_v0 = (u32) var_a2_2 < (u8) M2C_FIELD(temp_s0, u8 *, 1);
            }
            var_a1_2 += 0xEC;
            var_a3_2 += 1;
            var_a0 = (s32) M2C_FIELD(temp_s0, u8 *, 1);
        } while (var_v0 != 0);
    }
    var_a1_3 = 0;
    if (M2C_FIELD(temp_s0, u8 *, 1) != 0) {
        var_a0_3 = arg0 + 0x164;
        do {
            var_v0_2 = 0;
            if (M2C_FIELD(var_a0_3, f32 *, 0x78) != 0x0.0p+0f) {
                var_v0_2 = 2;
            }
            if (M2C_FIELD(var_a0_3, f32 *, 0x48) == 0x0.0p+0f) {
                var_v0_2 |= 1;
            }
            M2C_FIELD(var_a0_3, s8 *, 0x46) = var_v0_2;
            var_a1_3 += 1;
            var_a0_3 += 0xEC;
        } while (var_a1_3 < (u8) M2C_FIELD(temp_s0, u8 *, 1));
    }
}
