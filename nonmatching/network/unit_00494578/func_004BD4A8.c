/* NON_MATCHING: functional draft, 176 of 196 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

u32 func_004BD038(void *, unsigned short, int, int, u32);
s16 func_004BC758(s32, u16, void *);                /* extern */
s32 func_004BC978(s32, u16, void *, M2C_UNK, s16);  /* extern */

s32 func_004BD4A8(void *arg0, s32 arg1, u32 arg2, void *arg3, s32 arg4) {
    struct StackFrame_004BD4A8 { s8 pad0[0x20]; u32 sp20; void * sp24; s8 pad1[0x8]; } sp_;
    s16 var_a6;
    s16 var_s2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_s4;
    s32 temp_v0_4;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a2;
    s32 var_a3;
    s32 var_a5;
    s32 var_s1;
    s32 var_s6;
    s32 var_v0_2;
    s32 var_v1;
    u16 temp_s3;
    u16 temp_v1;
    u16 var_a7;
    u16 var_s5;
    u32 var_v0;
    u8 *var_s0_2;
    u8 temp_v1_2;
    u8 var_v0_3;
    void *temp_a1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *var_s0;

    temp_s3 = arg1 & 0xFFFF;
    var_s5 = 0;
    var_a6 = 0;
    var_a7 = 0;
    sp_.sp20 = arg2;
    sp_.sp24 = arg3;
    temp_s4 = M2C_FIELD(arg0, s32 *, 0x24);
    if (arg4 != 1) {
        var_a2 = temp_s3 & 0xFF;
        var_a5 = temp_s3 & 0xFF00;
        if (arg4 > 0) {
            var_v0_2 = 0 * 4;
            if (arg4 < 4) {
                temp_a3 = var_a2 * 0x10;
                temp_a1 = temp_s4 + (temp_a3 + 0x50);
                temp_v1 = M2C_FIELD(temp_a1, u16 *, 0xA);
                var_a6 = temp_v1 + 1;
                var_a7 = temp_v1 + M2C_FIELD(temp_a1, u16 *, 0xC);
                if (var_a5 == 0x200) {
                    var_s5 = M2C_FIELD((temp_a3 + temp_s4), u16 *, 0x48);
                } else {
                    var_s5 = M2C_FIELD(temp_a1, u16 *, 8);
                }
                goto block_12;
            }
        } else {
            goto block_12;
        }
    } else {
        var_a2 = temp_s3 & 0xFF;
        var_a5 = temp_s3 & 0xFF00;
        temp_a0 = var_a2 * 0x10;
        var_a6 = 1;
        temp_v0 = temp_s4 + (temp_a0 + 0x50);
        var_a7 = M2C_FIELD(temp_v0, u16 *, 0xA);
        if (var_a5 == 0x200) {
            var_s5 = M2C_FIELD((temp_a0 + temp_s4), u16 *, 0x48);
        } else {
            var_s5 = M2C_FIELD(temp_v0, u16 *, 8);
        }
block_12:
        var_v0_2 = var_a6 * 4;
    }
    temp_a3_2 = (var_v0_2 + var_a6) * 4;
    if (var_a5 == 0x200) {
        temp_v0_2 = temp_s4 + ((var_a2 * 0x10) + 0x40);
        var_a0 = M2C_FIELD(temp_v0_2, s32 *, 0) + temp_a3_2 + (M2C_FIELD(temp_v0_2, u16 *, 0xA) * 6);
    } else {
        temp_v0_3 = temp_s4 + ((var_a2 * 0x10) + 0x50);
        var_a0 = M2C_FIELD(temp_v0_3, s32 *, 0) + temp_a3_2 + ((M2C_FIELD(temp_v0_3, u16 *, 0xA) + M2C_FIELD(temp_v0_3, u16 *, 0xC)) * 6);
    }
    var_s0 = var_a0 + 6;
    var_s2 = var_a6;
loop_20:
    temp_a0_2 = (s32) var_a7 < var_s2;
    if (temp_a0_2 == 0) {
        if ((M2C_FIELD(var_s0, u8 *, 0) | M2C_FIELD(var_s0, u8 *, 1)) != 0) {
            var_s2 += 1;
            var_s0 += 0x14;
            goto loop_20;
        }
        if (temp_a0_2 == 0) {
            temp_v0_4 = var_a2 * 0x10;
            if (var_a5 == 0x200) {
                var_v1 = M2C_FIELD((temp_v0_4 + temp_s4), s32 *, 0x40);
            } else {
                var_v1 = M2C_FIELD((temp_v0_4 + temp_s4), s32 *, 0x50);
            }
            var_s0_2 = var_v1 + 8;
            var_s6 = 0;
            if ((s32) var_s5 < 2) {
                var_v0 = func_004BD038(arg0, temp_s3, 0, 0, sp_.sp20);
                if ((s32) var_v0 >= 0) {
                    if (var_v0 == 0) {
                        goto block_45;
                    }
                    goto block_46;
                }
                /* Duplicate return node #0x1.9800000000000p+5 Try simplifying control flow for better match */
                return (s32) var_v0;
            }
            var_s1 = 0;
            if (var_s5 != 0) {
loop_36:
                var_v0_3 = M2C_FIELD(var_s0_2, u8 *, 0);
                if (var_s1 == 0) {
                    var_s6 = 0;
                    goto block_40;
                }
                var_a3 = 0;
                temp_v1_2 = M2C_FIELD(var_s0_2, u8 *, 1);
                var_s0_2 += 6;
                var_s6 = (var_v0_3 << 8) | temp_v1_2;
                if (var_s1 != (var_s5 - 1)) {
                    var_v0_3 = *var_s0_2;
block_40:
                    var_a3 = (var_v0_3 << 8) | M2C_FIELD(var_s0_2, u8 *, 1);
                }
                var_v0 = func_004BD038(arg0, temp_s3, var_s6, var_a3, sp_.sp20);
                var_a0_2 = var_s1 < (s32) var_s5;
                var_s1 += 1;
                if ((s32) var_v0 <= 0) {
                    var_a0_2 = var_s1 < (s32) var_s5;
                    if ((s32) var_v0 >= 0) {
                        if (var_a0_2 == 0) {
                            goto block_44;
                        }
                        goto loop_36;
                    }
                    /* Duplicate return node #0x1.9800000000000p+5 Try simplifying control flow for better match */
                    return (s32) var_v0;
                }
block_44:
                if (var_a0_2 == 0) {
                    goto block_45;
                }
block_46:
                if (func_004BC978(temp_s4, temp_s3, ((s8 *)&sp_), 0, (s16) var_s6) >= 0) {
                    M2C_FIELD(sp_.sp24, s16 *, 0) = var_s2;
                    M2C_FIELD(sp_.sp24, s16 *, 0x14) = func_004BC758(temp_s4, temp_s3, ((s8 *)&sp_));
                    var_v0 = 0;
                    return (s32) var_v0;
                }
                return 0x80001E6C;
            }
            goto block_45;
        }
        goto block_45;
    }
block_45:
    return 0x80003A6C;
}
