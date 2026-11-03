/* NON_MATCHING: functional draft, 333 of 348 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_004C0D30(s32, s32, M2C_UNK *, void **);    /* extern */
M2C_UNK func_004C2758(M2C_UNK, s8, M2C_UNK, void *); /* extern */
u32 func_004C4CB8(u16);                             /* extern */
s32 func_004C7140(s32, s32, s32 *, M2C_UNK, M2C_UNK, s32, s16, s16, u8 *, s32); /* extern */
s32 func_004C7478(s32, s32, s32, M2C_UNK *, void *, u8 *, s32, s32 *); /* extern */
M2C_UNK func_004C8BB0(s32, void *);                 /* extern */
void *func_004C8C20(s32, M2C_UNK);                  /* extern */
M2C_UNK func_004C8C38(s32, void *);                 /* extern */
M2C_UNK func_004C94A0(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_004C9580();             /* extern */
M2C_UNK func_004C9658(); /* extern */

s32 func_004C7B38(s32 arg0, s32 arg1, M2C_UNK *arg2, u8 *arg3, s32 arg4, void *arg5) {
    M2C_UNK sp10;
    M2C_UNK sp40;
    M2C_UNK sp70;
    void *spA0;
    s32 spA4;
    s32 spA8;
    u8 *spAC;
    s32 spB0;
    void *spB4;
    s32 spB8;
    s32 spBC;
    s32 spC0;
    s32 spC4;
    s16 var_a0_3;
    s16 var_s5_2;
    s16 var_v0_4;
    s16 var_v0_5;
    s16 var_v0_8;
    s32 *var_s3;
    s32 *var_s4;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s7;
    s32 temp_v0_5;
    s32 temp_v0_7;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s5;
    s32 var_s6;
    s32 var_s7;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_6;
    s32 var_v0_7;
    s8 var_s0_2;
    u32 temp_v0_2;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_6;
    void *temp_v0_8;
    void *temp_v1_3;
    void *var_a5;

    var_a5 = arg5;
    spA4 = arg0;
    var_a0 = -1;
    spA8 = arg1;
    spAC = arg3;
    spB0 = arg4;
    if (var_a5 != NULL) {
        temp_v1 = M2C_FIELD(var_a5, s32 *, 0);
        if (temp_v1 & 0x100000) {
            var_a5 = (void *) M2C_FIELD(var_a5, u8 *, 5);
            if ((var_a5 == (void *)0x10) || (var_a5 == (void *)0xD)) {
                var_a0 = 1;
            }
        } else if (!(temp_v1 & 0xC00000)) {
            temp_v0 = M2C_FIELD(var_a5, void **, 4);
            var_a0 = ((u8) M2C_FIELD(temp_v0, u8 *, 5) >> 5) | ((M2C_FIELD(temp_v0, u8 *, 4) & 0x3F) * 8);
        } else {
            var_a0 = M2C_FIELD(var_a5, u16 *, 0xA) & 0x1FF;
        }
    }
    func_004C9658(var_a0, &sp10, arg2, arg3, arg4, (u8) var_a5);
    var_s0 = func_004C0D30(spA4, spA8, arg2, &spA0);
    if (var_s0 >= 0) {
        spBC = 0;
        if (spAC != NULL) {
            spBC = (s32) *spAC;
        }
        if (spA0 == NULL) {
            var_v0 = 0;
            if (func_004C9580(arg2, 8) == 1) {
                var_s0_2 = 0;
loop_17:
                temp_v0_2 = func_004C4CB8(*(s32 *)((var_s0_2 * 2) + spA8));
                switch (temp_v0_2) {
                case 0x1:
                case 0x2:
                case 0x4:
                case 0x6:
                case 0x8:
                case 0xA:
                case 0x44:
                case 0x46:
                case 0x48:
                case 0x4F:
                    var_s0_2 += 1;
                    goto loop_17;
                default:
                    var_s0_2 += 1;
                    break;
                }
                temp_v0_3 = func_004C8C20(spA4, 0x10);
                spA0 = temp_v0_3;
                var_v0 = 0x80000306;
                if (temp_v0_3 != NULL) {
                    temp_v0_4 = func_004C8C20(spA4, 0x10);
                    if (temp_v0_4 != NULL) {
                        func_004C2758(1, var_s0_2, 0, temp_v0_4);
                        M2C_FIELD(spA0, void **, 4) = temp_v0_4;
                        M2C_FIELD(spA0, s16 *, 8) = 1;
                        M2C_FIELD(spA0, s8 *, 0) = var_s0_2;
                        M2C_FIELD(spA0, s32 *, 0xC) = 0;
                        goto block_31;
                    }
                    func_004C8C38(spA4, spA0);
                    return 0x80000306;
                }
                /* Duplicate return node #0x1.6400000000000p+6 Try simplifying control flow for better match */
                return var_v0;
            }
            /* Duplicate return node #0x1.6400000000000p+6 Try simplifying control flow for better match */
            return var_v0;
        }
block_31:
        spB4 = spA0;
        if (spA0 != NULL) {
loop_32:
            var_s4 = M2C_FIELD(spB4, s32 **, 4);
            temp_v0_5 = (M2C_FIELD(spB4, u8 *, 0) + spBC) & 0xFF;
            var_a2 = 0x100000;
            spB8 = temp_v0_5;
            var_s3 = var_s4 + 0x10;
            temp_s7 = M2C_FIELD(spB4, u16 *, 8) - 1;
            temp_a1 = M2C_FIELD(var_s4, s32 *, 0);
            temp_a0 = temp_v0_5 * 0x28;
            if (temp_a1 & 0x100000) {
                var_v0_2 = temp_a0 + (M2C_FIELD(var_s4, s16 *, 6) * 2);
                goto block_38;
            }
            var_a2 = 0xC00000;
            if (temp_a1 & 0xC00000) {
                var_v0_3 = temp_v0_5 * 0x280000;
            } else {
                var_v0_2 = temp_a0 + ((M2C_FIELD(M2C_FIELD(var_s4, void **, 4), u8 *, 5) & 0x1F) * 2);
block_38:
                var_v0_3 = var_v0_2 << 0x10;
            }
            temp_s1 = var_v0_3 >> 0x10;
            var_s6 = temp_s1;
            var_a0_2 = 8;
            if (!(temp_a1 & 0x100000)) {
                if (!(temp_a1 & 0xC00000)) {
                    temp_v0_6 = M2C_FIELD(var_s4, void **, 4);
                    var_a0_2 = ((u8) M2C_FIELD(temp_v0_6, u8 *, 5) >> 5) | ((M2C_FIELD(temp_v0_6, u8 *, 4) & 0x3F) * 8);
                } else {
                    var_a0_2 = M2C_FIELD(var_s4, u16 *, 0xA) & 0x1FF;
                }
            }
            if (func_004C9580(&sp10, var_a0_2, var_a2) != 0) {
                var_s6 = (s32) (s16) (temp_s1 + 0x1E);
            }
            func_004C9658(var_a0_2, &sp70, &sp70);
            temp_v1_2 = M2C_FIELD(var_s4, s32 *, 0);
            temp_a0_2 = temp_v1_2 & 0xC00000;
            var_s5 = var_s6;
            if (temp_a0_2 != 0) {
                var_s6 = (s32) (s16) (var_s6 + 0x1E);
                var_s5 = var_s6;
            }
            var_v0_4 = (s16) var_s5;
            if (!(temp_v1_2 & 0x100000)) {
                if (temp_a0_2 == 0) {
                    var_v0_5 = M2C_FIELD(var_s4, s16 *, 8);
                } else {
                    var_v0_5 = M2C_FIELD(var_s4, s16 *, 0xC);
                }
                var_v0_4 = var_s5 + var_v0_5;
            }
            var_s5_2 = var_v0_4;
            var_s7 = temp_s7 - 1;
            if (var_s7 != -1) {
                temp_v0_7 = (temp_v0_5 * 4) + spB8;
                spC4 = temp_v0_7 << 0x13;
                spC0 = temp_v0_7 * 8;
                do {
                    temp_a0_3 = M2C_FIELD(var_s3, s32 *, 0);
                    var_a2_2 = spC0;
                    if (temp_a0_3 & 0x100000) {
                        var_v0_6 = var_a2_2 + (M2C_FIELD(var_s3, s16 *, 6) * 2);
                        goto block_64;
                    }
                    if (temp_a0_3 & 0xC00000) {
                        var_v0_7 = spC4;
                    } else {
                        var_a2_2 = spC0;
                        var_v0_6 = var_a2_2 + ((M2C_FIELD(M2C_FIELD(var_s3, void **, 4), u8 *, 5) & 0x1F) * 2);
block_64:
                        var_v0_7 = var_v0_6 << 0x10;
                    }
                    temp_s0 = var_v0_7 >> 0x10;
                    var_s2 = temp_s0;
                    var_s1 = 8;
                    if (!(temp_a0_3 & 0x100000)) {
                        var_a2_2 = 0xC00000;
                        if (!(temp_a0_3 & 0xC00000)) {
                            temp_v0_8 = M2C_FIELD(var_s3, void **, 4);
                            var_s1 = ((u8) M2C_FIELD(temp_v0_8, u8 *, 5) >> 5) | ((M2C_FIELD(temp_v0_8, u8 *, 4) & 0x3F) * 8);
                        } else {
                            var_s1 = M2C_FIELD(var_s3, u16 *, 0xA) & 0x1FF;
                        }
                    }
                    if (func_004C9580(&sp10, var_s1, var_a2_2) != 0) {
                        var_s2 = (s32) (s16) (temp_s0 + 0x1E);
                    }
                    func_004C9658(var_s1, &sp40);
                    func_004C94A0(&sp70, &sp40, &sp70);
                    if (*var_s4 & 0xC00000) {
                        var_s2 = (s32) (s16) (var_s2 + 0x1E);
                    }
                    temp_a1_2 = M2C_FIELD(var_s3, s32 *, 0);
                    var_a0_3 = (s16) var_s2;
                    if (!(temp_a1_2 & 0x100000)) {
                        if (!(temp_a1_2 & 0xC00000)) {
                            var_v0_8 = M2C_FIELD(var_s3, s16 *, 8);
                        } else {
                            var_v0_8 = M2C_FIELD(var_s3, s16 *, 0xC);
                        }
                        var_a0_3 = var_s2 + var_v0_8;
                    }
                    var_s6 = (var_s6 < var_s2) ? var_s2 : var_s6;
                    if (var_s5_2 < var_a0_3) {
                        var_s5_2 = var_a0_3;
                        var_s4 = var_s3;
                    }
                    var_s7 -= 1;
                    var_s3 += 0x10;
                } while (var_s7 != -1);
            }
            var_s0 = func_004C7478(spA4, spB0, spA8, &sp70, spB4, spAC, spBC, var_s4);
            if (var_s0 >= 0) {
                var_s0 = func_004C7140(spA4, spB0, var_s4, 0, 0, spB8, (s16) var_s6, var_s5_2, spAC, spBC);
                if (var_s0 >= 0) {
                    temp_v1_3 = M2C_FIELD(spB4, void **, 0xC);
                    spB4 = temp_v1_3;
                    if (temp_v1_3 == NULL) {
                        goto block_88;
                    }
                    goto loop_32;
                }
            }
            goto block_28;
        }
block_88:
        func_004C8BB0(spA4, spA0);
        var_v0 = 0;
        return var_v0;
    }
block_28:
    func_004C8BB0(spA4, spA0);
    return var_s0;
}
