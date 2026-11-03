/* NON_MATCHING: functional draft, 177 of 180 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_004C25E0(void *, void **, s32, s32, u32, u32, s32, s32, s32, s32); /* extern */
M2C_UNK func_004C3160(s32, u32, M2C_UNK *);         /* extern */
s32 func_004C3480(void *, s32, u32 *, u32 *, s32 *); /* extern */
s32 func_004C8DB8(M2C_UNK *, s32, s32);             /* extern */
s32 func_004C9580(s32, s32);                        /* extern */

s32 func_004C2830(void *arg0, s32 arg1, s32 arg2, s32 arg3, void **arg4) {
    M2C_UNK sp10;
    u32 sp30;
    u32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    void **sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s3;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u16 temp_v0;
    u32 var_a1;
    u32 var_s2;
    u32 var_s7;
    u8 temp_v1_2;
    void *temp_v1;
    void *var_a1_2;

    sp3C = arg1;
    sp40 = arg2;
    sp44 = arg4;
    var_s5 = 0;
loop_1:
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x24) + (var_s5 * 0x2C);
    if (M2C_FIELD(temp_v1, s32 *, 4) != 0) {
        var_v0 = func_004C3480(temp_v1, sp3C, &sp30, &sp34, &sp38);
        if (var_v0 >= 0) {
            if (sp30 != sp34) {
                var_s2 = 0;
                sp48 = M2C_FIELD(temp_v1, s32 *, 8);
                var_s7 = 0;
                var_s3 = 0;
                var_s4 = 0;
                sp4C = -1;
                sp50 = 0;
                sp54 = 0;
                if (sp30 < sp34) {
loop_6:
                    temp_v1_2 = M2C_FIELD(sp30, u8 *, 3);
                    temp_s1 = temp_v1_2 & 0xF;
                    temp_a0 = temp_s1 < 3;
                    if (temp_a0 == 0) {
                        if (sp54 == 0) {
                            sp54 = 1;
                        } else {
                            sp38 += temp_v1_2 >> 4;
                        }
                    }
                    if (sp40 < temp_s1) {
                        var_a1 = sp30 + 6;
                        goto block_33;
                    }
                    var_v0_2 = 0;
                    if (temp_a0 == 0) {
                        if (sp38 != 0) {
                            func_004C3160(sp38, sp30, &sp10);
                        }
                        var_v0_2 = func_004C8DB8(&sp10, sp3C + 4, temp_s1 - 2);
                        if (var_v0_2 <= 0) {
                            goto block_19;
                        }
                        goto block_34;
                    }
block_19:
                    if (var_v0_2 == 0) {
                        temp_s0 = ((M2C_FIELD(sp30, u8 *, 4) & 0x3F) * 8) | ((u8) M2C_FIELD(sp30, u8 *, 5) >> 5);
                        if (temp_s0 != sp4C) {
                            sp50 = func_004C9580(arg3, temp_s0);
                            sp4C = temp_s0;
                        }
                        if (sp50 != 1) {
                            goto block_32;
                        }
                        var_s2 = ((var_s2 ^ 0) == 0) ? sp30 : var_s2;
                        if ((var_s3 != 0) && (temp_s1 != var_s3)) {
                            var_v0 = func_004C25E0(arg0, sp44, var_s4, var_s3, var_s2, var_s7, sp48, arg3, var_s5, 0);
                            var_s2 = sp30;
                            if (var_v0 >= 0) {
                                var_s4 = 0;
                                goto block_31;
                            }
                        } else {
block_31:
                            var_s3 = temp_s1;
                            var_s4 += 1;
                            var_s7 = sp30;
                            goto block_32;
                        }
                    } else {
block_32:
                        var_a1 = sp30 + 6;
block_33:
                        sp30 = var_a1;
                        if (sp30 >= sp34) {
                            goto block_34;
                        }
                        goto loop_6;
                    }
                } else {
block_34:
                    var_v0_3 = var_s5 + 1;
                    if (var_s4 > 0) {
                        var_v0 = func_004C25E0(arg0, sp44, var_s4, var_s3, var_s2, var_s7, sp48, arg3, var_s5, 0);
                        if (var_v0 >= 0) {
                            goto block_36;
                        }
                    } else {
                        goto block_37;
                    }
                }
            } else {
                goto block_36;
            }
        }
    } else {
block_36:
        var_v0_3 = var_s5 + 1;
block_37:
        var_s5 = var_v0_3 & 0xFF;
        if (var_s5 != 0) {
            var_a1_2 = *sp44;
            var_s4_2 = 0;
            if (var_a1_2 != NULL) {
                do {
                    temp_v0 = M2C_FIELD(var_a1_2, u16 *, 8);
                    var_a1_2 = M2C_FIELD(var_a1_2, void **, 0xC);
                    var_s4_2 += temp_v0;
                } while (var_a1_2 != NULL);
            }
            var_v0 = var_s4_2;
        } else {
            goto loop_1;
        }
    }
    return var_v0;
}
