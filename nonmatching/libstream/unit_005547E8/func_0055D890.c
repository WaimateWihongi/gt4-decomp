/* NON_MATCHING: functional draft, 308 of 326 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0055D470(void *, void *);                  /* extern */
M2C_UNK func_0055D708(void *, M2C_UNK);             /* extern */
s32 func_0055E6A8(u16);                             /* extern */

void func_0055D890(void *arg0) {
    struct StackFrame_0055D890 { s8 pad0[0x4]; u32 sp4; s8 pad1[0x8]; } sp_;
    f32 temp_f0;
    f32 temp_f2;
    s16 var_v0;
    s16 var_v1;
    s32 *temp_t3;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a2;
    s32 temp_a4;
    s32 temp_a4_2;
    s32 temp_a5;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    s32 var_a6;
    s32 var_s2;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;
    s32 var_v0_2;
    s32 var_v1_2;
    u32 temp_a3;
    u32 temp_v0_6;
    u32 temp_v1_3;
    u32 temp_v1_4;
    u8 temp_t2;
    u8 var_v0_3;
    void *temp_a2_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v1_2;

    if (M2C_FIELD(arg0, u16 *, 0x1A) & 1 & 0xFFFF) {
        if (M2C_FIELD(arg0, s32 *, 0x30) != 0) {
            if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
                if (func_0055E6A8(M2C_FIELD(arg0, u16 *, 0x18)) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + 1);
                }
            } else {
                M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + 1);
                if (func_0055E6A8(M2C_FIELD(arg0, u16 *, 0x18)) == 0) {
                    func_0055D708(arg0, 0);
                }
            }
        }
        var_s2 = M2C_FIELD(arg0, u8 *, 0x1F) != 0;
        M2C_FIELD(arg0, u8 *, 0x1F) = 0U;
        if (M2C_FIELD(arg0, u8 *, 0x23) != 0) {
            temp_s0 = arg0 + 0xBC;
            var_s2 = (func_0055D470(temp_s0, arg0 + 0x60) != 0) ? 1 : var_s2;
            M2C_FIELD(arg0, u8 *, 0x23) = (u8) (M2C_FIELD(temp_s0, s32 *, 0xC) ^ 1);
        }
        temp_s0_2 = arg0 + 0x9C;
        if (M2C_FIELD(arg0, u8 *, 0x21) != 0) {
            var_s2 = (func_0055D470(temp_s0_2, arg0 + 0x70) != 0) ? 1 : var_s2;
            M2C_FIELD(arg0, u8 *, 0x21) = (u8) (M2C_FIELD(temp_s0_2, s32 *, 0xC) ^ 1);
        }
        if (var_s2 != 0) {
            temp_t2 = M2C_FIELD(arg0, u8 *, 0x1D);
            if (temp_t2 != 0) {
                M2C_FIELD(arg0, s16 *, 0x96) = 0;
                M2C_FIELD(arg0, s8 *, 0x2B) = 1;
                M2C_FIELD(arg0, s16 *, 0x98) = 0;
            } else {
                temp_a4 = M2C_FIELD(arg0, s32 *, 0x30);
                temp_t3 = M2C_FIELD(arg0, s32 **, 8);
                temp_a2 = (M2C_FIELD(arg0, s32 *, 0x68) + M2C_FIELD(arg0, s32 *, 0x6C) + M2C_FIELD(arg0, s32 *, 0x70)) - 0x80;
                var_t0 = (s32) (((s32) (((s32) (((s32) (((s32) (M2C_FIELD(arg0, s32 *, 0x54) * M2C_FIELD(arg0, s32 *, 0x4C)) >> 0xE) * M2C_FIELD(((temp_a4 * 0xC) + temp_t3), s32 *, 0x4C)) >> 0xE) * M2C_FIELD(arg0, s32 *, 0x58)) / 127) * M2C_FIELD(arg0, s32 *, 0x5C)) / 127) * M2C_FIELD(arg0, s32 *, 0x60)) / 127;
                if (temp_a4 == 2) {
                    var_t0 = (s32) (var_t0 * M2C_FIELD(arg0, s32 *, 0x50)) / 127;
                }
                temp_v1 = ((temp_a2 > 0x7F) ? 0x7FU : ((temp_a2 < (s32) temp_t2) ? temp_t2 : (u8) temp_a2)) * 2;
                temp_a0 = (s32) (((s32) (var_t0 * *(s32 *)(0x6C8AC0 + temp_v1)) / 127) * M2C_FIELD(arg0, s16 *, 0x64)) >> 0xE;
                temp_v0 = (s32) (((s32) (var_t0 * M2C_FIELD((temp_v1 + 0x6C8AC0), u8 *, 1)) / 127) * M2C_FIELD(arg0, s16 *, 0x66)) >> 0xE;
                temp_a5 = (temp_v0 > 0x3FFF) ? 0x3FFF : ((temp_v0 >= -0x4000) ? temp_v0 : -0x4000);
                temp_a4_2 = (temp_a0 > 0x3FFF) ? 0x3FFF : ((temp_a0 >= -0x4000) ? temp_a0 : -0x4000);
                M2C_FIELD(arg0, s16 *, 0x98) = (s16) temp_a5;
                M2C_FIELD(arg0, s16 *, 0x96) = (s16) temp_a4_2;
                if (*temp_t3 == 0) {
                    var_v0 = (s16) temp_a4_2;
                    var_v1 = (s16) temp_a5;
                    if (var_v0 < 0) {
                        var_v0 = -var_v0;
                    }
                    if (var_v1 < 0) {
                        var_v1 = -var_v1;
                    }
                    temp_v0_2 = (s32) (var_v0 + var_v1) / 2;
                    M2C_FIELD(arg0, s16 *, 0x98) = (s16) temp_v0_2;
                    M2C_FIELD(arg0, s16 *, 0x96) = (s16) temp_v0_2;
                }
                M2C_FIELD(arg0, s8 *, 0x2B) = 1;
            }
        }
        var_t2 = 0;
        var_t1 = M2C_FIELD(arg0, s32 *, 0x7C);
        var_a1 = M2C_FIELD(arg0, s32 *, 0x88);
        if (M2C_FIELD(arg0, u8 *, 0x1E) == 0) {
            temp_v1_2 = arg0 + 0xAC;
            if (M2C_FIELD(arg0, u8 *, 0x22) != 0) {
                var_v0_2 = M2C_FIELD(temp_v1_2, s32 *, 0xC);
                if (var_v0_2 == 0) {
                    temp_f2 = M2C_FIELD(temp_v1_2, f32 *, 4);
                    temp_f0 = M2C_FIELD(temp_v1_2, f32 *, 8) + temp_f2;
                    M2C_FIELD(temp_v1_2, f32 *, 8) = temp_f0;
                    if (((temp_f2 > 0x0.0p+0f) && (M2C_FIELD(arg0, f32 *, 0xAC) <= temp_f0)) || ((var_v0_3 = var_v0_2 ^ 1, (temp_f2 < 0x0.0p+0f)) && (temp_f0 <= M2C_FIELD(arg0, f32 *, 0xAC)))) {
                        var_v0_2 = 1;
                        M2C_FIELD(temp_v1_2, f32 *, 8) = M2C_FIELD(arg0, f32 *, 0xAC);
                        M2C_FIELD(temp_v1_2, s32 *, 0xC) = 1;
                        M2C_FIELD(temp_v1_2, f32 *, 4) = 0x0.0p+0f;
                        goto block_32;
                    }
                } else {
block_32:
                    var_v0_3 = var_v0_2 ^ 1;
                }
                M2C_FIELD(arg0, u8 *, 0x22) = var_v0_3;
                var_t2 = 1;
                var_t1 += (s32) (M2C_FIELD(temp_v1_2, f32 *, 8) * 0x1.5555540000000p+0f);
            }
            temp_a2_2 = arg0 + 0xCC;
            if (M2C_FIELD(arg0, u8 *, 0x24) != 0) {
                temp_a0_2 = M2C_FIELD(temp_a2_2, s32 *, 0xC);
                temp_v0_3 = M2C_FIELD(temp_a2_2, s32 *, 8);
                temp_a3 = *(u32 *)0x654734;
                var_t2 = 1;
                temp_t0 = M2C_FIELD(temp_a2_2, s32 *, 4);
                temp_v1_3 = M2C_FIELD(temp_a2_2, u32 *, 0x10) + ((u32) (temp_a0_2 + temp_v0_3) / temp_a3);
                temp_v1_4 = (temp_v1_3 >= 0x3CU) ? (temp_v1_3 - 0x3C) : temp_v1_3;
                M2C_FIELD(temp_a2_2, u32 *, 0x10) = temp_v1_4;
                M2C_FIELD(temp_a2_2, s32 *, 0xC) = (s32) ((temp_a0_2 + temp_v0_3) % temp_a3);
                var_a1 = (0x40 - ((u32) (temp_t0 + 1) >> 1)) + ((u32) (*(s32 *)(M2C_FIELD(arg0, s32 *, 0xCC) + temp_v1_4) * temp_t0) / 255U);
            }
        }
        if (M2C_FIELD(arg0, u8 *, 0x20) != 0) {
            M2C_FIELD(arg0, u8 *, 0x20) = 0U;
            var_t2 = 1;
        }
        if (var_t2 != 0) {
            var_a6 = M2C_FIELD(arg0, s32 *, 0x84);
            if (M2C_FIELD(arg0, s32 *, 0x30) == 1) {
                var_a1 = 0x40;
                temp_v0_4 = (M2C_FIELD(arg0, s32 *, 0x88) - 0x40) * var_a6;
                var_a6 = 1;
                var_t1 += (s32) ((temp_v0_4 < 0) ? (temp_v0_4 + 3) : temp_v0_4) >> 2;
            }
            temp_v0_5 = ((var_t1 + M2C_FIELD(arg0, s32 *, 0x80)) - M2C_FIELD(arg0, s32 *, 0x78)) + ((s32) ((var_a1 - 0x40) * var_a6) >> 2);
            var_v1_2 = temp_v0_5 % 192;
            var_a2 = 0xC - (temp_v0_5 / 192);
            if (var_v1_2 < 0) {
                var_a2 += 1;
                var_v1_2 += 0xC0;
            }
            temp_v0_6 = (u32) *(s32 *)(0x654738 + (var_v1_2 * 4)) >> var_a2;
            sp_.sp4 = temp_v0_6;
            M2C_FIELD(arg0, s8 *, 0x2C) = 1;
            M2C_FIELD(arg0, s16 *, 0x90) = (s16) *(s32 *)((temp_v0_6 >= 0x3FFFU) ? ((s8 *)&sp_) : &sp_.sp4);
        }
    }
}
