/* NON_MATCHING: functional draft, 175 of 193 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_004C25E0(void *, void **, s32, s32, u32, u32, s32, s32, s32, s32); /* extern */
M2C_UNK func_004C3160(s32, u32, u16 *);             /* extern */
s32 func_004C3480(void *, void *, u32 *, u32 *, s32 *); /* extern */
M2C_UNK func_004C4070(s32, s32, s32);               /* extern */
M2C_UNK func_004C8BB0(void *, void *);              /* extern */
s32 func_004C8C20(void *, s32);                     /* extern */
s32 func_004C8D08(u16 *, void *);                   /* extern */
s32 func_004C8ED0(void *);                          /* extern */
s32 func_004C9580(s32, s32, u32);                   /* extern */

s32 func_004C2048(void *arg0, void *arg1, s32 arg2, s32 *arg3) {
    u16 sp10;
    u32 sp30;
    u32 sp34;
    s32 sp38;
    void *sp3C;
    s32 sp40;
    s32 *sp44;
    s32 sp48;
    s32 sp4C;
    u32 sp50;
    s32 sp54;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_a1;
    s32 var_fp;
    s32 var_s0;
    s32 var_s1;
    s32 var_s6;
    u16 temp_v0_2;
    u32 var_a2;
    u32 var_s2;
    u8 temp_v1_2;
    void *temp_v1;
    void *var_s0_2;

    var_s6 = 0;
    sp40 = arg2;
    sp44 = arg3;
    sp3C = NULL;
    temp_v0 = func_004C8ED0(arg1);
    sp4C = 0;
    sp54 = 0;
loop_1:
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x24) + (var_s6 * 0x2C);
    if (M2C_FIELD(temp_v1, s32 *, 4) != 0) {
        var_s0 = func_004C3480(temp_v1, arg1, &sp30, &sp34, &sp38);
        var_a2 = sp30;
        if (var_s0 >= 0) {
            var_s2 = 0;
            if (var_a2 != sp34) {
                var_fp = 0;
                temp_s3 = temp_v0 < 3;
                sp48 = M2C_FIELD(temp_v1, s32 *, 8);
                sp4C = 0;
                sp50 = 0;
loop_23:
                if (var_a2 < sp34) {
                    temp_v1_2 = M2C_FIELD(var_a2, u8 *, 3);
                    temp_s1 = temp_v1_2 & 0xF;
                    temp_s0 = temp_s1 < 3;
                    if (temp_s0 == 0) {
                        if (var_fp == 0) {
                            var_fp = 1;
                        } else {
                            sp38 += temp_v1_2 >> 4;
                        }
                    }
                    if (var_s2 != 0) {
                        if (temp_v0 != temp_s1) {

                        } else if ((temp_s3 != 0) || (sp10 == M2C_FIELD(arg1, u16 *, 4))) {
                            goto block_8;
                        }
                    } else {
block_8:
                        if (func_004C9580(sp40, ((M2C_FIELD(var_a2, u8 *, 4) & 0x3F) * 8) | ((u8) M2C_FIELD(var_a2, u8 *, 5) >> 5), var_a2) == 1) {
                            if ((temp_s0 == 0) && (sp38 != 0)) {
                                func_004C3160(sp38, sp30, &sp10);
                            }
                            if (temp_s1 != temp_v0) {

                            } else if ((temp_s3 != 0) || (func_004C8D08(&sp10, arg1 + 4) == 0)) {
                                if (var_s2 != 0) {

                                } else {
                                    var_s2 = sp30;
                                }
                                sp50 = sp30;
                                sp4C += 1;
                            }
                        }
                        var_a2 = sp30 + 6;
                        sp30 = var_a2;
                        goto loop_23;
                    }
                }
                if (sp4C > 0) {
                    var_s0 = func_004C25E0(arg0, &sp3C, sp4C, temp_v0, var_s2, sp50, sp48, sp40, var_s6, 0);
                    if (var_s0 >= 0) {
                        sp54 += var_s0;
                        goto block_34;
                    }
                    goto block_38;
                }
                goto block_34;
            }
            goto block_34;
        }
block_38:
        func_004C8BB0(arg0, sp3C);
        return var_s0;
    }
block_34:
    var_s6 = (var_s6 + 1) & 0xFF;
    if (var_s6 != 0) {
        if (sp54 > 0) {
            var_s1 = func_004C8C20(arg0, sp54 * 0x10);
            if (var_s1 == 0) {
                func_004C8BB0(arg0, sp3C);
                return 0x80000325;
            }
            var_s0_2 = sp3C;
            *sp44 = var_s1;
            if (sp3C != NULL) {
                var_a1 = M2C_FIELD(var_s0_2, s32 *, 4);
loop_42:
                if (var_a1 != 0) {
                    temp_v0_2 = M2C_FIELD(var_s0_2, u16 *, 8);
                    if (temp_v0_2 != 0) {
                        func_004C4070(var_s1, var_a1, temp_v0_2 * 0x10);
                        var_s1 += M2C_FIELD(var_s0_2, u16 *, 8) * 0x10;
                    }
                }
                var_s0_2 = M2C_FIELD(var_s0_2, void **, 0xC);
                if (var_s0_2 != NULL) {
                    var_a1 = M2C_FIELD(var_s0_2, s32 *, 4);
                    goto loop_42;
                }
            }
            func_004C8BB0(arg0, sp3C);
            sp4C = sp54;
            goto block_50;
        }
block_50:
        return sp4C;
    }
    goto loop_1;
}
