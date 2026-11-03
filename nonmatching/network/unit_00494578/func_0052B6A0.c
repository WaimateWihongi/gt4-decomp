/* NON_MATCHING: functional draft, 173 of 178 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0052C300(s32, s32, s32 *);
s32 func_0052C3D8(s32 *);
int func_0052C428(int, const char *, int *);
int func_0052C4A8(void *, char *, unsigned int, unsigned short *);
int func_0052C9B0(char *, unsigned char *, long, int);
void func_0053A878(void);
s32 func_0052BAD0(s8 *, s32 *, s8 *, s8 *);         /* extern */
s32 func_0052BFC0(s8 *, s32 **, s8 *, s64, s32);    /* extern */
s32 func_0052C640(s8 *, s8 *, s32 *);               /* extern */
s32 *func_0052CAE0(s8 *, s8 *, s64, s32);           /* extern */

s32 func_0052B6A0(s8 *arg0, s64 arg1, s32 arg2, u32 arg3) {
    s64 sp0;
    u16 sp8;
    u8 spA;                                         /* compiler-managed */
    u8 spB;
    u8 spC;                                         /* compiler-managed */
    u8 spD;
    u8 spE;                                         /* compiler-managed */
    u8 spF;
    u16 sp10;
    u8 sp12;                                        /* compiler-managed */
    u8 sp13;
    u16 sp14;
    s32 *sp18;
    s32 sp1C;
    s32 sp20;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 *temp_v0;
    s32 var_fp;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_4;
    s32 var_v1;
    s8 *temp_s1;
    s8 *var_a3;
    s8 *var_s0;
    u16 var_v0_2;
    u16 var_v0_3;
    u32 var_s3;

    var_fp = 0;
    sp0 = arg1;
    sp18 = NULL;
    sp20 = 0;
    var_v0 = 2;
    if ((M2C_FIELD(*(void **)0x64B4B0, s32 (**)(s64), 0x70)(sp0) == 0) && (arg2 != 0)) {
        temp_s1 = M2C_FIELD(arg0, s8 **, 0x4C);
        var_s3 = 2;
        temp_v0 = func_0052CAE0(arg0, temp_s1, sp0, arg2);
        sp18 = temp_v0;
        if ((temp_v0 != NULL) && (func_0053A878(), ((*temp_s1 & 0x4000) != 0))) {
            sp8 = 0;
            var_v0 = func_0052C4A8(sp18, temp_s1 + 2, arg3 - 2, &sp8);
            if (var_v0 == 0) {
                var_s3 = sp8 + 2;
                goto block_6;
            }
        } else {
block_6:
            var_v0 = 0;
            if (arg3 != var_s3) {
                var_v0 = 0xD2F5;
                if ((u32) (arg3 - var_s3) >= 2U) {
                    var_s0 = &temp_s1[var_s3];
                    spA = (u8) M2C_FIELD(var_s0, s8 *, 0);
                    spB = M2C_FIELD(var_s0, u8 *, 1);
                    spA = (u16) spA & 0x7FF;
                    if (sp18 != NULL) {
                        if (*temp_s1 & 0x1000) {
                            var_v0 = func_0052C3D8(sp18);
                            if (var_v0 == 0) {
                                goto block_12;
                            }
                        } else {
block_12:
                            if (*temp_s1 & 0x2000) {
                                var_v0 = func_0052C300((s32) arg0, (s32) var_s0, sp18);
                                if (var_v0 == 0) {
                                    goto block_14;
                                }
                            } else {
                                goto block_15;
                            }
                        }
                    } else {
block_14:
block_15:
                        if (*temp_s1 & 0x8000) {
                            if (sp18 != NULL) {
                                spC = (u8) M2C_FIELD(var_s0, s8 *, 0);
                                spD = M2C_FIELD(var_s0, u8 *, 1);
                                spC = (u16) spC & 0xF800;
                                if (*temp_s1 & 0x800) {
                                    var_fp = 1;
                                    sp20 = 1;
                                    goto block_34;
                                }
                                if (spA != 0) {
                                    var_fp = 1;
                                    goto block_34;
                                }
                                var_v0 = func_0052C428((s32) arg0, temp_s1, sp18);
                                if (var_v0 != 0) {

                                } else {
                                    goto block_34;
                                }
                            } else if (*temp_s1 & 0x800) {
                                var_v0 = func_0052BFC0(arg0, &sp18, temp_s1, sp0, arg2);
                                if (var_v0 == 0) {
                                    if (sp18 != NULL) {
                                        var_fp = 1;
                                        sp20 = 1;
                                    }
                                    goto block_34;
                                }
                            } else if (((*temp_s1 & 0x3FF) == 0x1C3) && (var_v0 = func_0052C9B0(arg0, (u8 *) var_s0, (s32) sp0, arg2), (var_v0 != 0))) {

                            } else {
                                goto block_34;
                            }
                        } else {
block_34:
                            var_v0 = 0;
                            if (var_fp != 0) {
                                var_v0 = 0;
                                if (var_s3 < arg3) {
loop_37:
                                    spE = (u8) M2C_FIELD(var_s0, s8 *, 0);
                                    spF = M2C_FIELD(var_s0, u8 *, 1);
                                    temp_v0_2 = (u16) spE & 0xF800;
                                    spE = temp_v0_2;
                                    if (temp_v0_2 & 0x6000) {
                                        var_v0_2 = 4;
                                    } else {
                                        var_v0_2 = 2;
                                    }
                                    sp10 = var_v0_2;
                                    spA = (u8) M2C_FIELD(var_s0, s8 *, 0);
                                    var_a3 = &var_s0[sp10];
                                    spB = M2C_FIELD(var_s0, u8 *, 1);
                                    spA = (u16) spA & 0x7FF;
                                    spC = (u8) M2C_FIELD(var_s0, s8 *, 0);
                                    spD = M2C_FIELD(var_s0, u8 *, 1);
                                    spC = (u16) spC & 0xF800;
                                    sp12 = (u8) M2C_FIELD(var_s0, s8 *, 0);
                                    sp13 = M2C_FIELD(var_s0, u8 *, 1);
                                    temp_v0_3 = (u16) sp12 & 0xF800;
                                    sp12 = temp_v0_3;
                                    if (temp_v0_3 & 0x6000) {
                                        var_v0_3 = 4;
                                    } else {
                                        var_v0_3 = 2;
                                    }
                                    sp14 = var_v0_3;
                                    var_s3 += sp14 + spA;
                                    if (spC & 0x8000) {
                                        var_s3 += 4;
                                        sp1C = M2C_UNALIGNED32(M2C_FIELD(&var_a3[spA], s8 *, 0));
                                        var_v1 = 1;
                                    } else {
                                        sp1C = 0;
                                        var_v1 = 0;
                                    }
                                    var_s5 = 0xD2F5;
                                    if (arg3 >= var_s3) {
                                        if (var_v1 != 0) {
                                            if (sp20 != 0) {
                                                var_a3 += 0xC;
                                                spA += 0xFFF4;
                                            }
                                            var_v0 = 0xD2F5;
                                            if (M2C_FIELD(*(void **)0x64B710, s32 (**)(M2C_UNK, s32, s32, s8 *, u16), 0x40)(-1, M2C_FIELD(sp18, s32 *, 0x84), sp1C, var_a3, spA) == 0) {
                                                goto block_53;
                                            }
                                        } else {
block_53:
                                            if (sp20 == 0) {
                                                var_v0_4 = func_0052C640(arg0, var_s0, sp18);
                                            } else {
                                                var_v0_4 = func_0052BAD0(arg0, sp18, temp_s1, var_s0);
                                            }
                                            var_s5 = var_v0_4;
                                            var_v0 = var_s5;
                                            if (var_s5 == 0) {
                                                var_s0 = &temp_s1[var_s3];
                                                if (var_s3 >= arg3) {
                                                    goto block_58;
                                                }
                                                goto loop_37;
                                            }
                                        }
                                    } else {
block_58:
                                        var_v0 = var_s5;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return var_v0;
}
