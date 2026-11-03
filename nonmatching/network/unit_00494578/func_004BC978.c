/* NON_MATCHING: functional draft, 160 of 179 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_004BC818(); /* extern */
s32 func_004BC8A0(void *, s32 *, u32, s32, u8, u8); /* extern */
u32 func_004C0508(s32, s32, u16);                   /* extern */

s32 func_004BC978(s32 arg0, s32 arg1, void *arg2, s32 arg3) {
    s32 *temp_a1_2;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v1_2;
    s32 var_v1_3;
    u16 temp_a1;
    u16 var_v1;
    u32 temp_a2_2;
    u32 temp_v0_4;
    u8 temp_a4;
    u8 temp_a4_2;
    u8 temp_a5;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_s5 = arg1 & 0xFFFF;
    temp_s6 = temp_s5 & 0xFF00;
    temp_a1 = M2C_FIELD(arg2, u16 *, 0);
    if (temp_s6 == 0x200) {
        var_s4 = temp_s5 & 0xFF;
        var_v1 = M2C_FIELD(((var_s4 * 0x10) + arg0), u16 *, 0x4A);
    } else {
        var_s4 = temp_s5 & 0xFF;
        temp_v0 = arg0 + ((var_s4 * 0x10) + 0x50);
        var_v1 = M2C_FIELD(temp_v0, u16 *, 0xA) + M2C_FIELD(temp_v0, u16 *, 0xC);
    }
    var_v0 = -1;
    if ((s32) temp_a1 < (var_v1 + 1)) {
        temp_a2 = temp_a1 * 0x14;
        if (temp_s6 == 0x200) {
            temp_v0_2 = arg0 + ((var_s4 * 0x10) + 0x40);
            var_a0 = M2C_FIELD(temp_v0_2, s32 *, 0) + temp_a2 + (M2C_FIELD(temp_v0_2, u16 *, 0xA) * 6);
        } else {
            temp_v0_3 = arg0 + ((var_s4 * 0x10) + 0x50);
            var_a0 = M2C_FIELD(temp_v0_3, s32 *, 0) + temp_a2 + ((M2C_FIELD(temp_v0_3, u16 *, 0xA) + M2C_FIELD(temp_v0_3, u16 *, 0xC)) * 6);
        }
        temp_s1 = var_a0 + 6;
        func_004BC818(arg2 + 2, temp_s1, 2);
        var_v0 = 0;
        if (M2C_FIELD(arg2, u16 *, 2) != 0) {
            M2C_FIELD(arg2, u8 *, 4) = (u8) M2C_FIELD(temp_s1, u8 *, 2);
            M2C_FIELD(arg2, u8 *, 5) = (u8) M2C_FIELD(temp_s1, u8 *, 3);
            M2C_FIELD(arg2, u8 *, 6) = (u8) M2C_FIELD(temp_s1, u8 *, 4);
            M2C_FIELD(arg2, u8 *, 7) = (u8) M2C_FIELD(temp_s1, u8 *, 5);
            M2C_FIELD(arg2, u8 *, 8) = (u8) M2C_FIELD(temp_s1, u8 *, 6);
            M2C_FIELD(arg2, u8 *, 9) = (u8) M2C_FIELD(temp_s1, u8 *, 7);
            func_004BC818(arg2 + 0xA, temp_s1 + 8, 2);
            func_004BC818(arg2 + 0xC, temp_s1 + 0xA, 2);
            M2C_FIELD(arg2, u8 *, 0xE) = (u8) M2C_FIELD(temp_s1, u8 *, 0xC);
            M2C_FIELD(arg2, u8 *, 0xF) = (u8) M2C_FIELD(temp_s1, u8 *, 0xD);
            temp_a4 = M2C_FIELD(temp_s1, u8 *, 0x11);
            temp_a3 = M2C_FIELD(temp_s1, u8 *, 0xF) << 0x10;
            M2C_FIELD(arg2, s32 *, 0x10) = (s32) ((M2C_FIELD(temp_s1, u8 *, 0xE) << 0x18) | temp_a4 | ((M2C_FIELD(temp_s1, u8 *, 0x10) << 8) | temp_a3));
            func_004BC818(arg2 + 0x14, temp_s1 + 0x12, 2, temp_a3, temp_a4);
            temp_v0_4 = func_004C0508(arg0, temp_s5, M2C_FIELD(arg2, u16 *, 0x14));
            M2C_FIELD(arg2, u32 *, 0x18) = temp_v0_4;
            if (temp_v0_4 != 0) {
                temp_v1 = var_s4 * 0x10;
                if (temp_s6 == 0x200) {
                    var_a3 = arg0 + 4;
                    var_v1_2 = temp_v1 + 0x40;
                } else {
                    var_a3 = arg0 + 4;
                    var_v1_2 = temp_v1 + 0x50;
                }
                var_v0 = -1;
                if (temp_v0_4 < (u32) ((*(s32 *)(arg0 + var_v1_2) + *(s32 *)(var_a3 + var_v1_2)) - 1)) {
                    temp_a4_2 = M2C_FIELD(arg2, u8 *, 0xE);
                    temp_a5 = M2C_FIELD(arg2, u8 *, 0xF);
                    temp_a2_2 = M2C_FIELD(arg2, u32 *, 0x18);
                    if (temp_s6 == 0x200) {
                        var_v1_3 = (var_s4 * 0x10) + 0x40;
                    } else {
                        var_v1_3 = (var_s4 * 0x10) + 0x50;
                    }
                    temp_a1_2 = var_a3 + var_v1_3;
                    var_v0 = -1;
                    if ((u32) ((((*(s32 *)(arg0 + var_v1_3) + *(s32 *)temp_a1_2) - temp_a4_2) - temp_a5) - 1) >= temp_a2_2) {
                        M2C_FIELD(arg2, s32 *, 0x1C) = (s32) (temp_a2_2 + temp_a4_2);
                        if ((arg3 != 0) && (func_004BC8A0(arg2, temp_a1_2, temp_a2_2, var_a3, temp_a4_2, temp_a5) != M2C_FIELD(arg2, u16 *, 2))) {
                            goto block_22;
                        }
                        var_v0 = 1;
                        /* Duplicate return node #0x1.9000000000000p+4 Try simplifying control flow for better match */
                        return var_v0;
                    }
                    /* Duplicate return node #0x1.9000000000000p+4 Try simplifying control flow for better match */
                    return var_v0;
                }
                /* Duplicate return node #0x1.9000000000000p+4 Try simplifying control flow for better match */
                return var_v0;
            }
block_22:
            return -1;
        }
        /* Duplicate return node #0x1.9000000000000p+4 Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
