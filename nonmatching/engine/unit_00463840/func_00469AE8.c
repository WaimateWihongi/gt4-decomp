/* NON_MATCHING: functional draft, 125 of 202 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_003F33D8(char *);
s32 func_0046BC80(void *);
s32 func_0046BC98(void *);
M2C_UNK func_004684A8(s8 *, M2C_UNK, f32);          /* extern */

void func_00469AE8(void *arg0) {
    f32 var_f20;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_a1;
    s32 var_s3;
    s8 *temp_a1;
    s8 temp_v0;
    s8 temp_v1_2;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_s0;
    void *temp_s4;
    void *temp_s5;

    temp_a1 = M2C_FIELD(arg0, s8 **, 0xE8);
    temp_s4 = M2C_FIELD(arg0, void **, 0xEC);
    temp_s5 = temp_a1 + 0x104;
    if (M2C_FIELD(arg0, s16 *, 0x18) > 0) {
        M2C_FIELD(arg0, s16 *, 0x18) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x18) - 1);
    }
    temp_a0 = M2C_FIELD(arg0, u8 *, 0x1C);
    temp_v1 = temp_a0 & 0xFF;
    var_s3 = 1;
    if (temp_v1 != 4) {
        if ((temp_v1 == 3) && (((M2C_FIELD(arg0, s8 *, 0x4B) != 0) && (M2C_FIELD(arg0, s8 *, 0x49) != 0)) || ((var_s3 = 0, (M2C_FIELD(arg0, s8 *, 0x4C) != 0)) && (M2C_FIELD(arg0, s8 *, 0x4A) != 0)))) {
            if (!(M2C_FIELD(temp_s5, f32 *, 0x53C) < 0x1.0aaaa80000000p+3f)) {
                M2C_FIELD(arg0, f32 *, 0x34) = (f32) (M2C_FIELD(arg0, f32 *, 0x34) * 0x1.0000000000000p-1f);
            } else {
                M2C_FIELD(arg0, s16 *, 0x18) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x18) + 1);
            }
            var_s3 = 0;
        }
        temp_v0 = M2C_FIELD(arg0, s8 *, 0x43);
        switch (temp_v0) {
        case 1:
        case 2:
        case 5:
            var_s3 = 0;
            break;
        case 3:
        case 4:
            var_s3 = ((u32) ((temp_a0 + 0xFF) & 0xFF) < 2U) ? -1 : var_s3;
            break;
        }
        var_f20 = M2C_FIELD(arg0, f32 *, 0x44);
        if (M2C_FIELD(arg0, s16 *, 0x18) > 0) {
            var_f20 = 0x0.0p+0f;
        }
        if (M2C_FIELD(arg0, f32 *, 0x2C) > 0x0.0p+0f) {
            var_s3 = 0;
        }
        temp_v1_2 = M2C_FIELD(temp_a1, s8 *, 0x56A);
        if ((temp_v1_2 == 1) && (M2C_FIELD(arg0, u8 *, 0x6E) == 0)) {
            var_s3 = ((var_s3 ^ temp_v1_2) == 0) ? -1 : var_s3;
        }
        if ((var_s3 > 0) && (var_f20 > 0x0.0p+0f)) {
            temp_s0 = M2C_FIELD(arg0, u8 *, 0x1C);
            temp_s2 = func_0046BC80(temp_s4);
            temp_v0_2 = func_0046BC80(temp_s4);
            temp_s2_2 = (temp_v0_2 >= 0) ? temp_v0_2 : temp_s2;
            temp_s0_2 = func_0046BC98(temp_s4);
            temp_v0_3 = func_0046BC98(temp_s4);
            var_a1 = -1;
            temp_a0_2 = M2C_FIELD(arg0, u8 *, 0x1F);
            temp_s0_3 = (temp_v0_3 >= 0) ? temp_v0_3 : temp_s0_2;
            if (temp_a0_2 == 1) {
                if (temp_s2_2 >= 0) {
                    goto block_43;
                }
                goto block_30;
            }
            if (temp_a0_2 == 2) {
                if (temp_s0_3 >= 0) {
                    var_a1 = temp_s0_3;
                } else {
                    goto block_41;
                }
            } else {
block_41:
                if ((temp_s2_2 >= 0) && (M2C_FIELD(arg0, s8 *, 0x43) != 3)) {
block_43:
                    var_a1 = temp_s2_2;
                } else {
block_30:
                    if ((temp_s0_3 >= 0) && (M2C_FIELD(arg0, s8 *, 0x43) != 4)) {
                        var_a1 = temp_s0_3;
                    }
                }
            }
            if (var_a1 >= 0) {
                func_00463C28(arg0, var_a1, 0);
                M2C_FIELD(arg0, s16 *, 0x18) = 0xB4;
                if (func_003F33D8(M2C_FIELD(arg0, s8 **, 0xE8)) != 0) {
                    func_004684A8(M2C_FIELD(arg0, s8 **, 0xE8), 2, M2C_FIELD(temp_s5, f32 *, 0x53C));
                }
                var_f20 = 0x0.0p+0f;
            }
        }
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) (M2C_FIELD(arg0, f32 *, 0x34) * (0x1.0000000000000p+0f - var_f20));
        if (var_s3 != 0) {
            if (((M2C_FIELD(arg0, s8 *, 0x48) + M2C_FIELD(arg0, s8 *, 0x4C) + (M2C_FIELD(arg0, s8 *, 0x4A) + M2C_FIELD(arg0, s8 *, 0x49)) + M2C_FIELD(arg0, s8 *, 0x4B)) == 0) && (M2C_FIELD(arg0, u8 *, 0x1C) != 6)) {
                func_00463C28(arg0, 6, 0);
            }
        }
    }
}
