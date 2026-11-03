/* NON_MATCHING: functional draft, 264 of 292 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void *func_00359510(s32);                           /* extern */

void func_0036E4B8(void *arg0) {
    struct StackFrame_0036E4B8 { void * sp0; void * sp4; s8 pad0[0x8]; } sp_;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f3;
    f32 temp_f5;
    f32 temp_f7;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f1_4;
    f32 var_f1_5;
    f32 var_f2;
    f32 var_f4;
    s32 temp_a1_2;
    s32 temp_a3;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_condition_bit;
    s32 var_condition_bit_2;
    s32 var_t0;
    s32 var_v1;
    u8 *temp_t9;
    u8 *temp_v0_3;
    u8 *temp_v1_2;
    u8 *var_v0;
    u8 temp_a5;
    u8 temp_a5_2;
    u8 temp_a6;
    u8 var_a4;
    u8 var_a7;
    void **var_a2;
    void *temp_a0;
    void *temp_a1;
    void *temp_a2;
    void *temp_s0;
    void *temp_v0_2;
    void *temp_v0_4;

    temp_s2 = arg0 + 0x104;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_s0 = temp_v0 + 0x234;
    temp_v0_2 = func_00359510(temp_v0);
    temp_f7 = M2C_FIELD(arg0, f32 *, 0x54C);
    var_t0 = 0;
    if (M2C_FIELD(temp_v0_2, u8 *, 2) != 0) {
        temp_t9 = temp_v0_2 + 0xC;
        var_v0 = temp_t9;
        do {
            temp_a6 = *var_v0;
            var_a7 = 0;
            temp_a5 = M2C_FIELD((temp_a6 + (temp_v0_2 + 4)), u8 *, 0x20);
            if (var_t0 < (s32) M2C_FIELD(temp_v0_2, u8 *, 2)) {
                var_a7 = M2C_FIELD((var_t0 + temp_v0_2), u8 *, 0x10);
            }
            temp_a5_2 = ((temp_a5 ^ 0x7F) == 0) ? temp_a6 : temp_a5;
            var_a4 = M2C_FIELD((var_a7 + temp_s0), u8 *, 0x10);
            temp_a2 = arg0 + (temp_a5_2 * 0xEC) + 0x164;
            temp_a1 = arg0 + (temp_a6 * 0xEC) + 0x164;
            sp_.sp0 = temp_a1;
            temp_f5 = M2C_FIELD(temp_a1, f32 *, 0x20) - M2C_FIELD(temp_a2, f32 *, 0x20);
            sp_.sp4 = temp_a2;
            switch (var_a4) {
            case 0:
            case 1:
            case 2:
            case 6:
            case 7:
                break;
            case 3:
            case 4:
                temp_a3 = temp_s2 + 4;
                var_f1 = M2C_FIELD(((var_t0 * 4) + temp_a3), f32 *, 0x530);
                if (!(var_f1 >= 0x0.0p+0f)) {
                    var_f0 = -var_f1;
                    var_a0 = var_a7 * 4;
                    var_v1 = temp_s0 + 4;
                    var_f1 = M2C_FIELD((var_a0 + var_v1), f32 *, 0x20);
                } else {
                    var_a0 = var_a7 * 4;
                    var_v1 = temp_s0 + 4;
                    var_f0 = M2C_FIELD((var_a0 + temp_s0), f32 *, 0x1C);
                }
                var_f2 = var_f1 * var_f0;
                temp_f1 = M2C_FIELD((var_a0 + var_v1), f32 *, 0x10);
                if (var_f2 < temp_f1) {
                    var_f2 = temp_f1;
                }
                temp_v0_3 = temp_a3 + (var_t0 + 0x520);
                if (*temp_v0_3 != 0) {
                    temp_f3 = 0x1.0000000000000p+1f * var_f2;
                    temp_f1_2 = M2C_FIELD(temp_a1, f32 *, 0x84) - M2C_FIELD(temp_a2, f32 *, 0x84);
                    if (temp_f3 < temp_f1_2) {
                        *temp_v0_3 = 0;
                        goto block_23;
                    }
                    if (temp_f1_2 < -temp_f3) {
                        *temp_v0_3 = 0;
                        goto block_23;
                    }
                    var_a4 = 1;
                } else {
block_23:
                    if (temp_f5 > 0x0.0p+0f) {
                        M2C_FIELD(temp_a1, f32 *, 0x84) = (f32) (M2C_FIELD(temp_a1, f32 *, 0x84) - var_f2);
                        var_f1_2 = M2C_FIELD(temp_a2, f32 *, 0x84) + var_f2;
                        goto block_34;
                    }
                    var_condition_bit = temp_f5 < 0x0.0p+0f;
block_32:
                    if (var_condition_bit) {
                        M2C_FIELD(temp_a1, f32 *, 0x84) = (f32) (M2C_FIELD(temp_a1, f32 *, 0x84) + var_f2);
                        var_f1_2 = M2C_FIELD(temp_a2, f32 *, 0x84) - var_f2;
block_34:
                        M2C_FIELD(temp_a2, f32 *, 0x84) = var_f1_2;
                    }
                }
                break;
            case 5:
                var_f1_3 = temp_f5 * temp_f5;
                temp_v1 = (var_a7 * 4) + 0x10;
                temp_f0 = M2C_FIELD((temp_s0 + temp_v1), f32 *, 4);
                if (temp_f0 < var_f1_3) {
                    var_f1_3 = temp_f0;
                }
                var_f2 = M2C_FIELD((temp_s0 + temp_v1), f32 *, 0xC) * var_f1_3;
                if (temp_f5 > 0x0.0p+0f) {
                    M2C_FIELD(temp_a1, f32 *, 0x84) = (f32) (M2C_FIELD(temp_a1, f32 *, 0x84) - var_f2);
                    var_f1_2 = M2C_FIELD(temp_a2, f32 *, 0x84) + var_f2;
                    goto block_34;
                }
                var_condition_bit = temp_f5 < 0x0.0p+0f;
                goto block_32;
            }
            if (var_a4 != 0) {
                if (var_a4 != 1) {
                    temp_a1_2 = var_a7 * 4;
                    var_f4 = (temp_f5 * 0x1.0000000000000p-1f) + ((M2C_FIELD(sp_.sp0, f32 *, 0x84) - M2C_FIELD(sp_.sp4, f32 *, 0x84)) * M2C_FIELD((temp_a1_2 + temp_s0), f32 *, 0xB4) * 0x1.0000000000000p-1f * temp_f7);
                    if ((temp_f5 * var_f4) < 0x0.0p+0f) {
                        var_f4 = 0x0.0p+0f;
                        if ((u32) (var_a4 - 3) < 2U) {
                            M2C_FIELD((var_t0 + temp_s2), s8 *, 0x524) = 1;
                        }
                    }
                    var_f1_4 = M2C_FIELD((temp_a1_2 + temp_s0), f32 *, 0x90);
                    if (M2C_FIELD(temp_s0, u8 *, 1) != 0) {
                        var_f1_4 = M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 3) * 4) + temp_s0), f32 *, 0x90);
                    }
                    temp_f0_2 = var_f1_4 * M2C_FIELD(((var_t0 * 4) + temp_s2), f32 *, 0x52C);
                    M2C_FIELD((arg0 + (temp_a6 * 0xEC)), f32 *, 0x184) = (f32) (temp_f0_2 + var_f4);
                    M2C_FIELD((arg0 + (temp_a5_2 * 0xEC)), f32 *, 0x184) = (f32) (temp_f0_2 - var_f4);
                } else {
                    var_f1_5 = M2C_FIELD(((var_a7 * 4) + temp_s0), f32 *, 0x90);
                    if (M2C_FIELD(temp_s0, u8 *, 1) != 0) {
                        var_f1_5 = M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 3) * 4) + temp_s0), f32 *, 0x90);
                    }
                    temp_f0_3 = var_f1_5 * M2C_FIELD(((var_t0 * 4) + temp_s2), f32 *, 0x52C);
                    M2C_FIELD((arg0 + (temp_a5_2 * 0xEC)), f32 *, 0x184) = temp_f0_3;
                    M2C_FIELD((arg0 + (temp_a6 * 0xEC)), f32 *, 0x184) = temp_f0_3;
                }
            } else {
                temp_v1_2 = temp_v0_2 + 8 + var_t0;
                var_a1 = 0;
                if ((s32) var_a4 < (s32) *temp_v1_2) {
                    var_a2 = ((s8 *)&sp_);
                    do {
                        temp_a0 = *var_a2;
                        temp_v0_4 = arg0 + (((var_a1 != 0) ? temp_a5_2 : temp_a6) * 0xEC) + 0x164;
                        temp_f1_3 = M2C_FIELD(temp_v0_4, f32 *, 0x20);
                        var_f0_2 = temp_f1_3 + (M2C_FIELD(temp_a0, f32 *, 0x84) * M2C_FIELD((temp_s0 + (var_a7 * 4)), f32 *, 0xB4) * temp_f7);
                        if (M2C_FIELD(temp_a0, f32 *, 0x78) != 0x0.0p+0f) {
                            if (temp_f1_3 > 0x0.0p+0f) {
                                var_condition_bit_2 = var_f0_2 < 0x0.0p+0f;
                                goto block_47;
                            }
                            if (temp_f1_3 < 0x0.0p+0f) {
                                var_condition_bit_2 = var_f0_2 > 0x0.0p+0f;
block_47:
                                if (var_condition_bit_2) {
                                    goto block_48;
                                }
                            } else {
block_48:
                                var_f0_2 = 0x0.0p+0f;
                            }
                        }
                        M2C_FIELD(temp_v0_4, f32 *, 0x20) = var_f0_2;
                        var_a1 += 1;
                        var_a2 += 4;
                    } while (var_a1 < (s32) *temp_v1_2);
                }
            }
            var_t0 += 1;
            var_v0 = temp_t9 + var_t0;
        } while (var_t0 < (s32) M2C_FIELD(temp_v0_2, u8 *, 2));
    }
}
