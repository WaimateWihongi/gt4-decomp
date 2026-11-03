/* NON_MATCHING: functional draft, 264 of 275 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

int func_004BD8F0(const u8 *, const u8 *, unsigned, unsigned);
int func_004C92D8(const unsigned char *, const unsigned char *, unsigned int);
s32 func_004BC978(s32, s32, void *, M2C_UNK, u16);  /* extern */
M2C_UNK func_004BD378(s32, s32, M2C_UNK, u32, M2C_UNK); /* extern */

s32 func_004BDF68(void *arg0, s32 arg1, u16 *arg2) {
    s32 spF;
    s32 sp1C;
    s32 sp14;
    struct StackFrame_004BDF68 { s8 pad0[0x20]; u16 sp20; s8 pad1[0x2]; s32 sp24; s32 sp28; s32 sp2C; s32 sp30; s8 pad2[0xC]; } sp_;
    s32 temp_a1;
    s32 temp_fp;
    s32 temp_s4;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_s0;
    s32 var_s6;
    s32 var_v0;
    s32 var_v0_2;
    u16 var_v1;
    u32 temp_s7;
    u32 var_s3;
    u32 var_s3_2;
    u32 var_s3_3;
    u8 *var_s1;
    u8 *var_s1_2;
    u8 *var_s1_3;
    void *temp_v0;

    temp_s4 = arg1 & 0xFFFF;
    temp_fp = temp_s4 & 0xFF00;
    sp_.sp28 = 0;
    sp_.sp30 = 0;
    if (temp_fp == 0x200) {
        var_s6 = temp_s4 & 0xFF;
        var_v1 = M2C_FIELD(((var_s6 * 0x10) + M2C_FIELD(arg0, s32 *, 0x24)), u16 *, 0x4A);
    } else {
        var_s6 = temp_s4 & 0xFF;
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x24) + ((var_s6 * 0x10) + 0x50);
        var_v1 = M2C_FIELD(temp_v0, u16 *, 0xA) + M2C_FIELD(temp_v0, u16 *, 0xC);
    }
    temp_s7 = (var_v1 + 1) & 0xFFFF;
    func_004BDAE8(M2C_FIELD(arg0, s32 *, 0x24), temp_s4, arg2, 4, &sp_.sp24, &sp_.sp28);
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_fp == 0x200) {
        var_a0 = M2C_FIELD(((var_s6 * 0x10) + temp_v0_2), s32 *, 0x40);
    } else {
        var_a0 = M2C_FIELD(((var_s6 * 0x10) + temp_v0_2), s32 *, 0x50);
    }
    var_s1 = var_a0 + 0xA;
    var_s3 = 1;
loop_19:
    if (var_s3 < temp_s7) {
        func_004BC818(&sp_.sp20, var_s1, 2);
        if (sp_.sp20 != 0) {
            var_v0 = -1;
            if (func_004BC978(M2C_FIELD(arg0, s32 *, 0x24), temp_s4, ((s8 *)&sp_), 0, sp_.sp20) > 0) {
                func_004BDAE8(M2C_FIELD(arg0, s32 *, 0x24), temp_s4, ((s8 *)&sp_), 4, &sp_.sp2C, &sp_.sp30);
                var_a0_2 = func_004BD8F0((u8 *) sp_.sp24, (u8 *) sp_.sp2C, (u32) sp_.sp28, (u32) sp_.sp30);
                if (var_a0_2 == 0) {
                    var_s0 = sp_.sp28;
                    if (sp_.sp28 == sp_.sp30) {
                        var_s0 = (s32) M2C_FIELD(arg2, u8 *, 0xF);
                        sp_.sp30 = (s32) spF;
                        var_a0_2 = func_004C92D8(M2C_FIELD(arg2, u8 **, 0x1C), sp1C, (u32) ((var_s0 >= (s32) spF) ? spF : (u8) var_s0));
                    }
                } else {
                    var_s0 = sp_.sp28;
                }
                if ((var_a0_2 < 0) || ((var_v0_2 = var_s3 + 1, (var_a0_2 == 0)) && (var_v0_2 = var_s3 + 1, ((sp_.sp30 < var_s0) == 0)))) {
                    func_004BD378(M2C_FIELD(arg0, s32 *, 0x24), temp_s4, 4, var_s3, 1);
                    func_004BC868(var_s1, arg2, 1);
                    goto block_24;
                }
                var_s1 += 6;
                var_s3 = var_v0_2 & 0xFFFF;
                goto loop_19;
            }
            /* Duplicate return node #0x1.d000000000000p+5 Try simplifying control flow for better match */
            return var_v0;
        }
        func_004BC868(var_s1, arg2, 1);
        goto block_24;
    }
block_24:
    func_004BDAE8(M2C_FIELD(arg0, s32 *, 0x24), temp_s4, arg2, 0, &sp_.sp24, &sp_.sp28);
    temp_v0_3 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_fp == 0x200) {
        var_a0_3 = M2C_FIELD(((var_s6 * 0x10) + temp_v0_3), s32 *, 0x40);
    } else {
        var_a0_3 = M2C_FIELD(((var_s6 * 0x10) + temp_v0_3), s32 *, 0x50);
    }
    var_s1_2 = var_a0_3 + 6;
    var_s3_2 = 1;
loop_38:
    if (var_s3_2 < temp_s7) {
        func_004BC818(&sp_.sp20, var_s1_2, 2);
        if (sp_.sp20 == 0) {
            func_004BC868(var_s1_2, arg2, 1);
            goto block_41;
        }
        if (func_004BC978(M2C_FIELD(arg0, s32 *, 0x24), temp_s4, ((s8 *)&sp_), 0, sp_.sp20) >= 0) {
            func_004BDAE8(M2C_FIELD(arg0, s32 *, 0x24), temp_s4, ((s8 *)&sp_), 0, &sp_.sp2C, &sp_.sp30);
            temp_v0_4 = func_004C92D8((u8 *) sp_.sp24, (u8 *) sp_.sp2C, (u32) ((sp_.sp28 >= sp_.sp30) ? sp_.sp30 : sp_.sp28));
            temp_a1 = var_s3_2 + 1;
            if (temp_v0_4 >= 0) {
                if (temp_v0_4 != 0) {
                    var_s3_2 = temp_a1 & 0xFFFF;
                    goto block_37;
                }
                if (sp_.sp28 >= sp_.sp30) {
                    var_s3_2 = temp_a1 & 0xFFFF;
block_37:
                    var_s1_2 += 6;
                    goto loop_38;
                }
                goto block_36;
            }
block_36:
            func_004BD378(M2C_FIELD(arg0, s32 *, 0x24), temp_s4, 0, var_s3_2, 1);
            func_004BC868(var_s1_2, arg2, 1);
block_41:
            goto block_42;
        }
        goto block_44;
    }
block_42:
    temp_v0_5 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_fp == 0x200) {
        var_a0_4 = M2C_FIELD(((var_s6 * 0x10) + temp_v0_5), s32 *, 0x40);
    } else {
        var_a0_4 = M2C_FIELD(((var_s6 * 0x10) + temp_v0_5), s32 *, 0x50);
    }
    var_s1_3 = var_a0_4 + 8;
    var_s3_3 = 1;
loop_54:
    var_v0 = 0;
    if (var_s3_3 < temp_s7) {
        func_004BC818(&sp_.sp20, var_s1_3, 2);
        if (sp_.sp20 == 0) {
            func_004BC868(var_s1_3, arg2, 1);
            goto block_57;
        }
        if (func_004BC978(M2C_FIELD(arg0, s32 *, 0x24), temp_s4, ((s8 *)&sp_), 0, sp_.sp20) >= 0) {
            if ((u16) M2C_FIELD(arg2, u16 *, 0x14) < sp14) {
                func_004BD378(M2C_FIELD(arg0, s32 *, 0x24), temp_s4, 2, var_s3_3, 1);
                func_004BC868(var_s1_3, arg2, 1);
block_57:
                var_v0 = 0;
                /* Duplicate return node #0x1.d000000000000p+5 Try simplifying control flow for better match */
                return var_v0;
            }
            var_s3_3 = (var_s3_3 + 1) & 0xFFFF;
            var_s1_3 += 6;
            goto loop_54;
        }
block_44:
        return -1;
    }
    return var_v0;
}
