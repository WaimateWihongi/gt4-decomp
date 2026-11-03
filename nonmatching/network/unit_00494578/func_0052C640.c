/* NON_MATCHING: functional draft, 58 of 58 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

u16 func_00528770(void *, s16);                     /* extern */
s32 func_0052CC90(s32, void *, void *);             /* extern */
s32 func_0052CCD0(void *, void *, s32 *, s32, u16, void *, s32, s32, s32); /* extern */
s32 func_0052D5A8(void *, void *, void *);          /* extern */
s32 func_0052D7E8(void *, void *);                  /* extern */
void *func_0052DD60(void *);                        /* extern */
void *func_0052DD98(void *);                        /* extern */

s32 func_0052C640(s32 arg0, void *arg1, void *arg2) {
    struct StackFrame_0052C640 { s8 pad0[0x51]; u8 sp51; s8 pad1[0x1]; u8 sp53; u16 sp54; s8 pad2[0x1]; u8 sp57; s8 pad3[0x1]; u8 sp59; s8 pad4[0x2]; s32 sp5C; s32 sp60; s8 pad5[0xC]; } sp_;
    u8 sp50;                                        /* compiler-managed */
    u8 sp52;                                        /* compiler-managed */
    u8 sp56;                                        /* compiler-managed */
    u8 sp58;                                        /* compiler-managed */
    s16 temp_a1;
    s16 temp_v1_2;
    s32 temp_a3;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_4;
    s32 var_s6;
    s32 var_v0;
    s32 var_v0_3;
    u16 temp_a0;
    u16 temp_s3;
    u16 temp_v0_6;
    u16 var_v0_2;
    u8 temp_a1_2;
    u8 temp_v0_2;
    u8 temp_v1;
    void *temp_s1;
    void *temp_s5;
    void *temp_v0_3;
    void *temp_v0_5;
    void *temp_v0_7;
    void *var_s0;
    void *var_s7;

    var_s7 = NULL;
    temp_v1 = M2C_FIELD(arg1, u8 *, 0);
    temp_v0_2 = M2C_FIELD(arg1, u8 *, 1);
    sp52 = temp_v1;
    sp_.sp53 = temp_v0_2;
    sp50 = temp_v1;
    sp_.sp51 = temp_v0_2;
    temp_v1_2 = (u16) sp52 & 0xF800;
    sp_.sp60 = 0;
    sp_.sp5C = 0;
    sp50 = (u16) sp50 & 0x7FF;
    sp52 = temp_v1_2;
    if (temp_v1_2 & 0x6000) {
        var_v0_2 = 4;
    } else {
        var_v0_2 = 2;
    }
    sp_.sp54 = var_v0_2;
    temp_a3 = sp_.sp54 + sp50;
    var_s6 = func_0052CCD0(arg2, arg1, &sp_.sp5C, temp_a3, sp50, arg1, temp_a3, temp_a3, 1);
    sp56 = M2C_FIELD(arg1, u8 *, 0);
    sp_.sp57 = M2C_FIELD(arg1, u8 *, 1);
    temp_a1 = (u16) sp56 & 0xF800;
    sp56 = temp_a1;
    if (sp_.sp5C == 0) {
        if (temp_a1 & 0x4000) {
            temp_s5 = arg2 + 0x2C;
            temp_s3 = func_00528770(arg1, temp_a1);
            var_s0 = func_0052DD60(temp_s5);
            if (var_s0 != NULL) {
                temp_s2 = temp_s3 < 0x7FFFU;
loop_8:
                if ((M2C_FIELD(var_s0, s32 *, 0) != 0) && (temp_v0_3 = (var_s0 == NULL) ? NULL : (var_s0 + 8), temp_a1_2 = M2C_FIELD(temp_v0_3, u8 *, 0), sp58 = temp_a1_2, sp_.sp59 = M2C_FIELD(temp_v0_3, u8 *, 1), sp58 = (u16) sp58 & 0xF800, temp_a0 = func_00528770(temp_v0_3, (s16) temp_a1_2), temp_v0_4 = (temp_a0 - temp_s3) << 0x10, ((sp58 & 0x4000) != 0))) {
                    if (temp_v0_4 <= 0) {
                        var_s7 = var_s0;
                        goto block_32;
                    }
                    if (temp_a0 < 0x7FFFU) {
                        if (temp_s2 == 0) {
                            var_s7 = var_s0;
                            goto block_32;
                        }
                        goto block_20;
                    }
                    if (temp_s2 != 0) {
                        var_s7 = var_s0;
                        goto block_32;
                    }
block_20:
                    if (var_s7 == NULL) {
                        if (temp_s3 != (M2C_FIELD(arg2, u16 *, 0x78) + 1)) {
                            var_v0 = var_s6;
                            if ((u32) (M2C_FIELD(arg2, s32 *, 0x34) - M2C_FIELD(arg2, s32 *, 0x38)) >= 0x5ABU) {
                                goto block_29;
                            }
                        } else {
block_29:
                            var_v0 = func_0052D7E8(temp_s5, ((s8 *)&sp_));
                            if (var_v0 == 0) {
                                goto block_30;
                            }
                        }
                    } else if ((u32) (M2C_FIELD(arg2, s32 *, 0x34) - M2C_FIELD(arg2, s32 *, 0x38)) >= 0x5ABU) {
                        var_v0 = func_0052D5A8(temp_s5, var_s7, ((s8 *)&sp_));
                        if (var_v0 != 0) {

                        } else {
block_30:
                            sp_.sp60 = 1;
                            goto block_33;
                        }
                    } else {
                        goto block_52;
                    }
                } else {
block_32:
                    var_s0 = M2C_FIELD(var_s0, void **, 4);
                    if (var_s0 == NULL) {
block_33:
                        goto block_34;
                    }
                    goto loop_8;
                }
            } else {
block_34:
                if (sp_.sp60 == 0) {
                    if ((u32) (M2C_FIELD(arg2, s32 *, 0x34) - M2C_FIELD(arg2, s32 *, 0x38)) >= 0x5ABU) {
                        temp_v0_5 = func_0052DD98(temp_s5);
                        var_v0 = 3;
                        if (temp_v0_5 != NULL) {
                            var_v0 = func_0052D5A8(temp_s5, temp_v0_5, ((s8 *)&sp_));
                            if (var_v0 == 0) {
                                goto block_39;
                            }
                        }
                    } else {
                        goto block_52;
                    }
                } else {
block_39:
                    var_v0_3 = func_0052CC90(arg0, arg2, arg1);
                    goto block_51;
                }
            }
            /* Duplicate return node #0x1.b000000000000p+5 Try simplifying control flow for better match */
            return var_v0;
        }
        var_v0 = var_s6;
        if ((u32) (M2C_FIELD(arg2, s32 *, 0x34) - M2C_FIELD(arg2, s32 *, 0x38)) >= 0x5ABU) {
            if (temp_a1 & 0x2000) {
                temp_v0_6 = func_00528770(arg1, temp_a1);
                M2C_FIELD(arg2, u16 *, 0x76) = temp_v0_6;
                if (temp_v0_6 == 0xFFFF) {
                    M2C_FIELD(arg2, u16 *, 0x76) = 0U;
                }
            }
            temp_s1 = arg2 + 0x2C;
            temp_v0_7 = func_0052DD98(temp_s1);
            var_v0 = 3;
            if (temp_v0_7 != NULL) {
                temp_v0 = func_0052D5A8(temp_s1, temp_v0_7, ((s8 *)&sp_));
                if (temp_v0 != 0) {
                    return temp_v0;
                }
                goto block_52;
            }
            goto block_53;
        }
        goto block_53;
    }
    if (temp_a1 & 0x4000) {
        var_v0_3 = func_0052CC90(arg0, arg2, arg1);
block_51:
        var_s6 = var_v0_3;
    }
block_52:
    var_v0 = var_s6;
block_53:
    return var_v0;
}
