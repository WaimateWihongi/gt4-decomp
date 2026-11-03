/* NON_MATCHING: functional draft, 168 of 169 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

u16 func_00528770(void *);                          /* extern */
s32 func_005288E8();                                /* extern */
s32 func_0052BDD8(s32, void *);                     /* extern */
M2C_UNK func_0052CC10(s32, void *);                 /* extern */
s32 func_0052CC90(s32, void *, void *);             /* extern */
s32 func_0052DD60(void *);                          /* extern */
M2C_UNK func_005A4724(void *, void *, u16);         /* extern */

s32 func_0052BAD0(s32 arg0, void *arg1, u16 *arg2, void *arg3) {
    s32 sp8;
    s32 sp4;
    s32 sp5;
    struct StackFrame_0052BAD0 { s8 pad0[0xA]; s32 spA; s8 pad1[0x43]; u8 sp51; u16 sp52; s8 pad2[0x1]; u8 sp55; s8 pad3[0xA]; } sp_;
    u8 sp50;                                        /* compiler-managed */
    u8 sp54;                                        /* compiler-managed */
    s16 temp_v0_3;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;
    u16 temp_a0_2;
    u16 var_v0_2;
    u8 temp_a0;
    u8 temp_a1;

    var_v0 = 0;
    if (*arg2 & 0x3FF) {
        temp_a1 = M2C_FIELD(arg3, u8 *, 1);
        temp_a0 = M2C_FIELD(arg3, u8 *, 0);
        sp_.sp51 = temp_a1;
        sp50 = temp_a0;
        temp_v0_3 = (u16) sp50 & 0xF800;
        sp50 = temp_v0_3;
        if (temp_v0_3 & 0x6000) {
            var_v0_2 = 4;
        } else {
            var_v0_2 = 2;
        }
        sp_.sp52 = var_v0_2;
        sp_.sp55 = temp_a1;
        var_v0 = 0xD2F5;
        sp54 = temp_a0;
        temp_a0_2 = (u16) sp54 & 0x7FF;
        sp54 = temp_a0_2;
        if (temp_a0_2 < 0x4DU) {
            func_005A4724(((s8 *)&sp_), arg3 + sp_.sp52, sp54);
            if (M2C_FIELD(arg1, u16 *, 0x6E) == 0) {
                if ((u32) (M2C_FIELD(arg1, u32 *, 0) - 9) < 2U) {
                    M2C_FIELD(arg1, u16 *, 0x78) = func_00528770(arg3);
                    M2C_FIELD(arg1, s32 *, 0x70) = (s32) sp8;
                    M2C_FIELD(arg1, u16 *, 0x6E) = (u16) (*arg2 & 0x3FF);
                    if (func_0052DD60(arg1 + 0x14) != 0) {
                        goto block_13;
                    }
                    M2C_FIELD(arg1, u32 *, 0) = 7U;
                    func_0052CC10(arg0, arg1);
                    var_v0 = 0xD2F7;
                    goto block_49;
                }
                goto block_14;
            }
block_13:
block_14:
            var_v0 = 0;
            if (M2C_FIELD(arg1, u32 *, 0) != 8) {
                if (M2C_FIELD(arg1, u32 *, 0) != 0xA) {
                    if (M2C_FIELD(arg1, u32 *, 0) < 0xBU) {
                        if (M2C_FIELD(arg1, u32 *, 0) != 9) {
                            goto block_37;
                        }
                        if ((sp4 >= 3U) || (sp5 != 0)) {
                            M2C_FIELD(arg1, u32 *, 0) = 1U;
                            func_0052CC10(arg0, arg1);
                            var_v0 = 0xD307;
                            goto block_49;
                        }
                        goto block_30;
                    }
                    if (M2C_FIELD(arg1, u32 *, 0) < 0xEU) {
                        if (M2C_FIELD(arg1, u32 *, 0) < 0xCU) {
                            goto block_37;
                        }
                        goto block_30;
                    }
block_37:
                    M2C_FIELD(arg1, u32 *, 0) = 2U;
                    func_0052CC10(arg0, arg1);
                    goto block_48;
                }
block_30:
                if (M2C_FIELD(arg1, u16 *, 0x78) == 0) {
                    M2C_FIELD(arg1, u16 *, 0x78) = func_00528770(arg3);
                    M2C_FIELD(arg1, s32 *, 0x70) = (s32) sp8;
                }
                if ((func_005288E8() == 1) || (var_v0 = 0, (sp54 != 0x4C))) {
                    if ((func_005288E8() == 1) && (sp54 == 0xC)) {
                        goto block_48;
                    }
                    if (sp54 == 0x4C) {
                        temp_s2 = M2C_FIELD(arg1, s32 *, 0x84);
                        if (M2C_FIELD(*(void **)0x64B710, s32 (**)(M2C_UNK, s32, M2C_UNK *), 0x34)(-1, temp_s2, &sp_.spA) != 0) {
                            M2C_FIELD(*(void **)0x64B710, M2C_UNK (**)(M2C_UNK, s32, M2C_UNK *), 0x2C)(-1, temp_s2, &sp_.spA);
                            M2C_FIELD(arg1, u16 *, 0x78) = func_00528770(arg3);
                            temp_v0_2 = func_0052BDD8(arg0, arg1);
                            if (temp_v0_2 != 0) {
                                return temp_v0_2;
                            }
                            goto block_48;
                        }
                        M2C_FIELD(arg1, u16 *, 0x78) = func_00528770(arg3);
                        temp_v0 = func_0052CC90(arg0, arg1, arg3);
                        if (temp_v0 != 0) {
                            return temp_v0;
                        }
                        goto block_48;
                    }
                    var_v0 = func_0052CC90(arg0, arg1, arg3);
                    if (var_v0 == 0) {
block_48:
                        var_v0 = 0;
                    }
                    /* Duplicate return node #0x1.9000000000000p+5 Try simplifying control flow for better match */
                    return var_v0;
                }
                goto block_49;
            }
            goto block_49;
        }
        goto block_49;
    }
block_49:
    return var_v0;
}
