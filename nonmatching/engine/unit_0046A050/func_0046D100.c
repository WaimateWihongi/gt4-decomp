/* NON_MATCHING: functional draft, 391 of 395 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0046CFA8(s32, void *, s32, s32);           /* extern */
s32 func_0046CFE8(s32, s32, s32, s32);              /* extern */
M2C_UNK func_0046D038(s32, s32, s32, s32);          /* extern */
s32 func_0046D770(void *);                          /* extern */
s32 func_0046EA08(void *, s32);                     /* extern */
s32 func_0046EAC8(void *, s32);                     /* extern */
M2C_UNK func_0046F6C8(void *, s32);                 /* extern */
s32 func_0046F6F8(void *, void *, void *, s32, s32, void *, void **, void *); /* extern */
s32 func_0046FA10(void *, s32);                     /* extern */
M2C_UNK func_0046FFE8(void *, s32, s32);            /* extern */
M2C_UNK func_00470068(void *, s32, s32);            /* extern */

s32 func_0046D100(void *arg0) {
    struct StackFrame_0046D100 { s8 pad0[0x20]; void * sp20; s8 pad1[0xC]; s32 sp30; s32 sp34; s32 sp38; s32 sp3C; void * sp40; s32 sp44; s32 sp48; s32 sp4C; s32 sp50; s32 sp54; s32 sp58; s32 sp5C; s32 sp60; s32 sp64; s32 sp68; s8 pad2[0x4]; } sp_;
    s32 *var_a5;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a4;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_s5;
    s32 temp_s7;
    s32 temp_t2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s6;
    s32 var_s6_2;
    s32 var_t0;
    s32 var_t1;
    s32 var_v0;
    s32 var_v1;
    void **var_t3;
    void *temp_fp;
    void *temp_s0_2;
    void *temp_s2;
    void *temp_v1;
    void *var_a7;

    var_v0 = 0;
    sp_.sp30 = M2C_FIELD(arg0, s32 *, 0xAC0);
    sp_.sp34 = M2C_FIELD(arg0, s32 *, 0xAC4);
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        temp_t2 = M2C_FIELD(arg0, s32 *, 0xDCC);
        temp_a4 = M2C_FIELD(arg0, s32 *, 0xDD0);
        temp_a0 = M2C_FIELD(arg0, s32 *, 0xAC8);
        sp_.sp38 = (s32) ((((s32) (sp_.sp30 + 7) >> 3) + temp_t2) - 1) / temp_t2;
        sp_.sp3C = (s32) ((((s32) (sp_.sp34 + 7) >> 3) + temp_a4) - 1) / temp_a4;
        if (temp_a0 > 0) {
            var_t0 = temp_a0;
            var_t3 = &sp_.sp20;
            var_a5 = arg0 + 0xD90;
            var_a7 = ((s8 *)&sp_);
            var_t1 = 0;
            do {
                temp_v0_2 = var_t1 + 0xD80;
                var_t1 += 0x18;
                temp_a2 = *var_a5;
                var_a5 += 0x18;
                var_t0 -= 1;
                M2C_FIELD(var_a7, void **, 0) = (void *) (arg0 + (*(s32 *)(arg0 + 0x14 + temp_v0_2) * 0x24) + 0x10F8);
                M2C_FIELD(var_a7, void **, 4) = (void *) (arg0 + (*(s32 *)(arg0 + 0x18 + temp_v0_2) * 0x24) + 0x1164);
                var_a7 += 8;
                *var_t3 = arg0 + (temp_a2 * 0x108) + 0xDE0;
                var_t3 += 4;
            } while (var_t0 != 0);
        }
        temp_v1 = arg0 + 0xA88;
        temp_fp = arg0 + 8;
        sp_.sp40 = temp_v1;
        temp_v0 = func_0046F6F8(temp_fp, arg0 + 0xAC0, arg0 + 0xD84, temp_t2, temp_a4, ((s8 *)&sp_), &sp_.sp20, temp_v1);
        if (temp_v0 != 0) {
            temp_a0_2 = M2C_FIELD(arg0, s32 *, 0xAE0);
            sp_.sp48 = 0;
            sp_.sp50 = temp_a0_2;
            temp_s7 = M2C_FIELD(arg0, s32 *, 0xDD4);
            sp_.sp58 = 0;
            sp_.sp54 = temp_a0_2 > 0;
            sp_.sp4C = M2C_FIELD(arg0, s32 *, 0xAC8);
            sp_.sp5C = 0;
            sp_.sp60 = 1;
            sp_.sp64 = 0;
            sp_.sp68 = 0;
            sp_.sp44 = 0;
            if (sp_.sp3C > 0) {
loop_11:
                temp_s5 = sp_.sp44 * M2C_FIELD(arg0, s32 *, 0xDD0) * 8;
                var_s6 = 0;
                if (sp_.sp38 > 0) {
loop_12:
                    temp_s3 = var_s6 * M2C_FIELD(arg0, s32 *, 0xDCC) * 8;
                    temp_s2 = arg0 + (func_0046CFE8(temp_s7, temp_s3, temp_s5, M2C_FIELD(arg0, s32 *, 0xD80)) * 0x14) + 0xAFC;
                    if (sp_.sp60 != 0) {
                        if (sp_.sp48 != 0) {
                            func_0046D038(func_0046CFA8(M2C_FIELD(arg0, s32 *, 0xAB4), temp_s2, temp_s3, temp_s5), M2C_FIELD(temp_s2, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xDCC) * 8, M2C_FIELD(arg0, s32 *, 0xDD0) * 8);
                            goto block_23;
                        }
                        var_s0 = 0;
                        if (sp_.sp48 < sp_.sp4C) {
                            var_a1 = 0;
loop_17:
                            var_s0 += 1;
                            temp_v0_3 = func_0046FA10(temp_fp, var_a1);
                            switch (temp_v0_3) {    /* irregular */
                            case 1:
                                var_a1 = var_s0;
                                if (var_s0 >= sp_.sp4C) {
                                    goto block_19;
                                }
                                goto loop_17;
                            case 2:
                                if (sp_.sp64 == 0) {
                                    temp_s0 = func_0046EA08(sp_.sp40, sp_.sp54);
                                    var_v0 = func_0046D770(arg0);
                                    if (var_v0 != 0) {
                                        sp_.sp68 = temp_s0;
                                        sp_.sp64 = 1;
                                        if (temp_s0 >= 0xFFD0) {
                                            if (temp_s0 <= 0xFFD7) {
                                                sp_.sp60 = 0;
                                                goto block_45;
                                            }
                                            if (temp_s0 == 0xFFD9) {
                                                temp_a0_3 = func_0046CFA8(M2C_FIELD(arg0, s32 *, 0xAB4), temp_s2, temp_s3, temp_s5);
                                                sp_.sp48 = 1;
                                                func_0046D038(temp_a0_3, M2C_FIELD(temp_s2, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xDCC) * 8, M2C_FIELD(arg0, s32 *, 0xDD0) * 8);
                                                goto block_62;
                                            }
                                            goto block_56;
                                        }
                                        goto block_56;
                                    }
                                    /* Duplicate return node #0x1.3c00000000000p+6 Try simplifying control flow for better match */
                                    return var_v0;
                                }
                                goto block_46;
                            default:
                                M2C_FIELD(arg0, s32 *, 4) = 1;
                                M2C_FIELD(arg0, s32 *, 0) = 4;
                                return 0;
                            }
                        } else {
block_19:
                            temp_a0_4 = M2C_FIELD(arg0, s32 *, 0xAB4);
                            if (sp_.sp4C == 1) {
                                func_0046FFE8(temp_fp, func_0046CFA8(temp_a0_4, temp_s2, temp_s3, temp_s5), M2C_FIELD(temp_s2, s32 *, 4));
                            } else {
                                func_00470068(temp_fp, func_0046CFA8(temp_a0_4, temp_s2, temp_s3, temp_s5), M2C_FIELD(temp_s2, s32 *, 4));
                            }
block_23:
                            if (var_s6 == (sp_.sp38 - 1)) {
                                func_0046D038(func_0046CFA8(M2C_FIELD(arg0, s32 *, 0xAB4), temp_s2, sp_.sp30, temp_s5), M2C_FIELD(temp_s2, s32 *, 4), temp_s7 - sp_.sp30, M2C_FIELD(arg0, s32 *, 0xDD0) * 8);
                            }
                            if (sp_.sp48 != 0) {
                                goto block_63;
                            }
                            goto block_45;
                        }
                    } else {
block_45:
block_46:
                        if (sp_.sp54 != 0) {
                            var_v1 = 0;
                            temp_v0_4 = sp_.sp50 - 1;
                            sp_.sp50 = temp_v0_4;
                            if (temp_v0_4 <= 0) {
                                sp_.sp5C = sp_.sp58;
                                var_v1 = 1;
                                sp_.sp58 = (sp_.sp58 + 1) & 7;
                                sp_.sp50 = M2C_FIELD(arg0, s32 *, 0xAE0);
                            }
                            if (var_v1 != 0) {
                                var_s0_2 = sp_.sp68;
                                if (sp_.sp64 == 0) {
                                    var_s0_2 = func_0046EAC8(sp_.sp40, sp_.sp64);
                                    var_v0 = func_0046D770(arg0);
                                    if (var_v0 != 0) {
                                        sp_.sp68 = var_s0_2;
                                        sp_.sp64 = 1;
                                        goto block_53;
                                    }
                                    /* Duplicate return node #0x1.3c00000000000p+6 Try simplifying control flow for better match */
                                    return var_v0;
                                }
block_53:
                                if (var_s0_2 >= 0xFFD0) {
                                    if (var_s0_2 > 0xFFD7) {
                                        sp_.sp48 = 1;
                                        if (var_s0_2 != 0xFFD9) {
                                            goto block_56;
                                        }
                                        goto block_62;
                                    }
                                    if (sp_.sp5C != (var_s0_2 - 0xFFD0)) {
                                        sp_.sp60 = 0;
                                    } else {
                                        sp_.sp60 = 1;
                                        sp_.sp64 = 0;
                                        func_0046F6C8(temp_fp, sp_.sp5C);
                                    }
                                    goto block_62;
                                }
block_56:
                                M2C_FIELD(arg0, s32 *, 4) = 1;
                                M2C_FIELD(arg0, s32 *, 0) = 7;
                                return 0;
                            }
                            goto block_62;
                        }
block_62:
block_63:
                        var_s6 += 1;
                        if (var_s6 >= sp_.sp38) {
                            goto block_64;
                        }
                        goto loop_12;
                    }
                } else {
block_64:
                    if (sp_.sp44 == (sp_.sp3C - 1)) {
                        if (M2C_FIELD(arg0, s32 *, 0xD80) == 0) {
                            func_0046D038(func_0046CFA8(M2C_FIELD(arg0, s32 *, 0xAB4), arg0 + 0xAFC, 0, sp_.sp34), temp_s7, temp_s7, M2C_FIELD(arg0, s32 *, 0xDD8) - sp_.sp34);
                        } else {
                            var_s6_2 = 0;
                            if (temp_s7 > 0) {
                                var_a1_2 = 0;
loop_72:
                                temp_a2_2 = var_s6_2;
                                var_s6_2 += 0x200;
                                temp_s0_2 = arg0 + (func_0046CFE8(temp_s7, var_a1_2, temp_s5, M2C_FIELD(arg0, s32 *, 0xD80)) * 0x14) + 0xAFC;
                                temp_a1 = M2C_FIELD(temp_s0_2, s32 *, 4);
                                func_0046D038(func_0046CFA8(M2C_FIELD(arg0, s32 *, 0xAB4), temp_s0_2, temp_a2_2, sp_.sp34), temp_a1, temp_a1, M2C_FIELD(arg0, s32 *, 0xDD8) - sp_.sp34);
                                if (var_s6_2 < temp_s7) {
                                    var_a1_2 = var_s6_2;
                                    goto loop_72;
                                }
                            }
                        }
                    }
                    temp_a0_5 = sp_.sp44 + 1;
                    sp_.sp44 = temp_a0_5;
                    if (temp_a0_5 >= sp_.sp3C) {
                        goto block_78;
                    }
                    goto loop_11;
                }
            } else {
block_78:
                var_v0 = 1;
                /* Duplicate return node #0x1.3c00000000000p+6 Try simplifying control flow for better match */
                return var_v0;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 4) = 1;
            M2C_FIELD(arg0, s32 *, 0) = 2;
            return temp_v0;
        }
    } else {
        return var_v0;
    }
}
