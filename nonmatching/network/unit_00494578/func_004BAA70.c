/* NON_MATCHING: functional draft, 229 of 231 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_004BC740(s8 *, M2C_UNK *);             /* extern */
s16 func_004C5DC8(void *, void *, M2C_UNK, void **, void *); /* extern */
s32 func_004C8718(void *, void *, M2C_UNK, void *, s32); /* extern */
M2C_UNK func_004C8C38(); /* extern */
M2C_UNK func_004C8E38(void *, s32, u8, s32);        /* extern */
M2C_UNK func_004C90F0(M2C_UNK *, void *);           /* extern */
s32 func_004C9410(M2C_UNK *);                       /* extern */

u16 func_004BAA70(s32 arg0, s32 arg1, s8 *arg2, u32 arg3) {
    struct StackFrame_004BAA70 { s8 pad0[0x80]; s32 sp80; s8 pad1[0x7C]; void * sp100; s8 pad2[0xC]; } sp_;
    s16 temp_a1_4;
    s16 temp_s0;
    s16 temp_s4;
    s16 var_v0;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_5;
    s32 temp_a1_6;
    s32 temp_s0_2;
    s32 temp_s1_2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a3;
    u16 temp_a0;
    u8 temp_a2;
    u8 var_a1;
    void **var_s0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a1;
    void *temp_a3;
    void *temp_a4;
    void *temp_s1;
    void *temp_v0_2;
    void *var_v1;

    var_v0 = 0x8000154D;
    if (arg3 <= 0x7FFFU) {
        var_v0 = 0x8000194D;
        if (arg0 >= 0) {
            if (arg2 != NULL) {
                if ((s32) arg3 > 0) {
                    *arg2 = 0;
                }
            }
            temp_a4 = *(void **)0x6452D4;
            var_v0 = 0x8000014D;
            if (*M2C_FIELD(temp_a4, s32 **, 0x2C) == 0x65) {
                temp_s1 = M2C_FIELD(temp_a4, void **, 0x30);
                if (arg0 < (s32) M2C_FIELD(temp_s1, u8 *, 0x498)) {
                    temp_a0 = M2C_FIELD(temp_s1, u16 *, 0x548);
                    temp_s4 = ((M2C_FIELD(temp_s1, u8 *, 0x498) - arg0) - 1) & 0xFFFF;
                    if (temp_a0 != 0x7FFF) {
                        var_s0 = (void **)0x640000 + 0x52D4;
                        if ((temp_a0 & 0x7FFF) == temp_s4) {
                            if (temp_a0 & 0x8000) {
                                goto block_17;
                            }
                            goto block_30;
                        }
                        goto block_18;
                    }
block_17:
                    var_s0 = (void **)0x640000 + 0x52D4;
block_18:
                    temp_a0_2 = *var_s0;
                    temp_a1 = M2C_FIELD(temp_a0_2, void **, 0x30);
                    if (M2C_FIELD(temp_a1, u16 *, 0x548) != 0x7FFF) {
                        temp_a1_2 = M2C_FIELD(temp_a1, s32 *, 0x54C);
                        if (temp_a1_2 != 0) {
                            func_004C8C38(temp_a0_2, temp_a1_2, arg2, arg3, temp_a4);
                            M2C_FIELD(M2C_FIELD(*var_s0, void **, 0x30), s32 *, 0x54C) = 0;
                            M2C_FIELD(M2C_FIELD(*var_s0, void **, 0x30), s16 *, 0x550) = 0;
                            M2C_FIELD(M2C_FIELD(*var_s0, void **, 0x30), s16 *, 0x548) = 0x7FFF;
                        }
                    }
                    temp_a0_3 = M2C_FIELD((void **)0x640000, void **, 0x52D4);
                    temp_s0_2 = (temp_s4 * 4) + 0x4A0;
                    temp_a1_3 = *(s32 *)(M2C_FIELD(temp_a0_3, void **, 0x30) + temp_s0_2);
                    if (temp_a1_3 != 0) {
                        func_004C8C38(temp_a0_3, temp_a1_3);
                        *(s32 *)(M2C_FIELD(M2C_FIELD((void **)0x640000, void **, 0x52D4), void **, 0x30) + temp_s0_2) = 0;
                    }
                    var_a3 = 0;
                    var_a0 = M2C_FIELD(temp_s1, u8 *, 0x498) - 1;
                    var_a1 = M2C_FIELD(temp_s1, u8 *, 0x499);
                    if (var_a0 >= 0) {
                        var_v1 = (var_a0 * 0x1C) + temp_s1;
loop_25:
                        sp_.sp100 = var_v1;
                        temp_v0 = var_a3;
                        var_a3 += 1;
                        temp_a2 = M2C_FIELD(var_v1, u8 *, 0x11);
                        var_v1 -= 0x1C;
                        var_a1 -= temp_a2;
                        if (temp_v0 != arg0) {
                            var_a0 -= 1;
                            if (var_a0 >= 0) {
                                goto loop_25;
                            }
                        } else {
                            temp_v0_2 = M2C_FIELD((void **)0x640000, void **, 0x52D4);
                            func_004C8E38(M2C_FIELD(temp_v0_2, void **, 0x30) + 0x552, M2C_FIELD(temp_v0_2, s32 *, 0x28) + (var_a1 * 2), temp_a2, var_a3);
                            M2C_FIELD(((M2C_FIELD(sp_.sp100, u8 *, 0x11) * 2) + M2C_FIELD(M2C_FIELD((void **)0x640000, void **, 0x52D4), void **, 0x30)), s16 *, 0x552) = 0;
                        }
                    }
                    sp_.sp100 = NULL;
                    temp_a0_4 = M2C_FIELD((void **)0x640000, void **, 0x52D4);
                    var_v0 = func_004C5DC8(temp_a0_4, M2C_FIELD(temp_a0_4, void **, 0x30) + 0x552, 0, &sp_.sp100, temp_s1 + (temp_s4 * 0x1C));
                    temp_a1_4 = var_v0;
                    if (temp_a1_4 >= 0) {
                        var_v0 = 0x8000034D;
                        if (sp_.sp100 != NULL) {
                            M2C_FIELD(M2C_FIELD(M2C_FIELD((void **)0x640000, void **, 0x52D4), void **, 0x30), void **, 0x54C) = sp_.sp100;
                            M2C_FIELD(M2C_FIELD(M2C_FIELD((void **)0x640000, void **, 0x52D4), void **, 0x30), s16 *, 0x550) = temp_a1_4;
                            M2C_FIELD(M2C_FIELD(M2C_FIELD((void **)0x640000, void **, 0x52D4), void **, 0x30), s16 *, 0x548) = temp_s4;
block_30:
                            if (arg1 < 0) {
                                return M2C_FIELD(M2C_FIELD(*(void **)0x6452D4, void **, 0x30), u16 *, 0x550);
                            }
                            temp_a0_5 = M2C_FIELD((void **)0x640000, void **, 0x52D4);
                            temp_a3 = M2C_FIELD(temp_a0_5, void **, 0x30);
                            var_v0 = 0;
                            if (arg1 < (s32) M2C_FIELD(temp_a3, u16 *, 0x550)) {
                                if (func_004C8718(temp_a0_5, ((s8 *)&sp_), 0x74, temp_a3 + 0x552, M2C_FIELD(temp_a3, s32 *, 0x54C) + (arg1 * 0x1C)) < 0) {
                                    temp_a0_6 = M2C_FIELD((void **)0x640000, void **, 0x52D4);
                                    temp_a1_5 = M2C_FIELD(M2C_FIELD(temp_a0_6, void **, 0x30), s32 *, 0x54C);
                                    if (temp_a1_5 != 0) {
                                        func_004C8C38(temp_a0_6, temp_a1_5);
                                        M2C_FIELD(M2C_FIELD(M2C_FIELD((void **)0x640000, void **, 0x52D4), void **, 0x30), s32 *, 0x54C) = 0;
                                    }
                                    M2C_FIELD(M2C_FIELD(M2C_FIELD((void **)0x640000, void **, 0x52D4), void **, 0x30), s16 *, 0x548) = 0x7FFF;
                                    temp_s1_2 = (temp_s4 * 4) + 0x4A0;
                                    M2C_FIELD(M2C_FIELD(M2C_FIELD((void **)0x640000, void **, 0x52D4), void **, 0x30), s16 *, 0x550) = 0;
                                    temp_a0_7 = M2C_FIELD((void **)0x640000, void **, 0x52D4);
                                    temp_a1_6 = *(s32 *)(M2C_FIELD(temp_a0_7, void **, 0x30) + temp_s1_2);
                                    if (temp_a1_6 != 0) {
                                        func_004C8C38(temp_a0_7, temp_a1_6);
                                        *(s32 *)(M2C_FIELD(M2C_FIELD((void **)0x640000, void **, 0x52D4), void **, 0x30) + temp_s1_2) = 0;
                                    }
                                    return 0x8000474DU;
                                }
                                func_004C90F0(&sp_.sp80, ((s8 *)&sp_));
                                temp_s0 = func_004C9410(&sp_.sp80) + 1;
                                var_v0 = temp_s0;
                                if (arg2 != NULL) {
                                    if ((s32) arg3 >= temp_s0) {
                                        func_004BC740(arg2, &sp_.sp80);
                                        return (u16) temp_s0;
                                    }
                                    var_v0 = 0x8000104D;
                                    /* Duplicate return node #0x1.6800000000000p+5 Try simplifying control flow for better match */
                                    return (u16) var_v0;
                                }
                                /* Duplicate return node #0x1.6800000000000p+5 Try simplifying control flow for better match */
                                return (u16) var_v0;
                            }
                            /* Duplicate return node #0x1.6800000000000p+5 Try simplifying control flow for better match */
                            return (u16) var_v0;
                        }
                    }
                    /* Duplicate return node #0x1.6800000000000p+5 Try simplifying control flow for better match */
                    return (u16) var_v0;
                }
                return 0x8000134DU;
            }
            /* Duplicate return node #0x1.6800000000000p+5 Try simplifying control flow for better match */
            return (u16) var_v0;
        }
    }
    return (u16) var_v0;
}
