/* NON_MATCHING: functional draft, 409 of 430 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0022F0F8(void *);                          /* extern */
s32 func_0022F2A0(void *);                          /* extern */
M2C_UNK func_0022F2F8(void *, s32);                 /* extern */
s32 func_0022F350(void *);                          /* extern */
M2C_UNK func_0022F3A8(void *, M2C_UNK);             /* extern */
M2C_UNK func_00230B68(void *, s32);                 /* extern */
M2C_UNK func_00230CF8(void *);                      /* extern */
void *func_002314A8();                        /* extern */
M2C_UNK func_00231508(void *, void *);              /* extern */
M2C_UNK func_00231798(void *, void *);              /* extern */
M2C_UNK func_00231A50(void *, void *);              /* extern */
M2C_UNK func_00231C48(void *);                      /* extern */
M2C_UNK func_00232210(void *);                      /* extern */
M2C_UNK func_0024B248(void *, M2C_UNK);             /* extern */
M2C_UNK func_0024BEB0(s32, f32, M2C_UNK);           /* extern */
M2C_UNK func_0024BEF8(s32, f32);                    /* extern */
M2C_UNK func_0024C060(s32);                         /* extern */
s32 func_0024D1B0(void *);                          /* extern */
M2C_UNK func_00250CE0(void *, void *);              /* extern */
M2C_UNK func_0025B498(void *, f32 *, f32 *);        /* extern */
M2C_UNK func_0025BA68(void *, f32, f32);            /* extern */
M2C_UNK func_00265E50(void *, M2C_UNK);             /* extern */
s32 func_00266590(s32);                             /* extern */
M2C_UNK func_002665A0(void *, s32);                 /* extern */
M2C_UNK func_00266830(void *, M2C_UNK);             /* extern */
M2C_UNK func_00266900(void *, M2C_UNK);             /* extern */
M2C_UNK func_00267808(void *, void *);              /* extern */
M2C_UNK func_00267930(void *, void *);              /* extern */
M2C_UNK func_0028B180(void *, void **);             /* extern */
M2C_UNK func_0028D8F0(void *, M2C_UNK);             /* extern */
M2C_UNK func_0028E8E8(void *, void *, s32);         /* extern */
M2C_UNK func_002A3A18(void *, s32 *, s32 *);        /* extern */
M2C_UNK func_002A3A30(void *, s32, s32);            /* extern */
M2C_UNK func_002ADEE0(void *, M2C_UNK);             /* extern */
void *func_00326750(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_0057B0F8(void *, f32, f32);            /* extern */

void func_0022FFD0(void *arg0) {
    s32 sp0;
    struct StackFrame_0022FFD0 { s8 pad0[0x10]; s32 sp10; s32 sp14; f32 sp18; f32 sp1C; void * sp20; void * sp24; s8 pad1[0x8]; } sp_;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f22;
    f32 var_f20;
    f32 var_f20_2;
    f32 var_f21;
    s32 temp_s0_3;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_v0_9;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    void **var_s0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a1;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a2_4;
    void *temp_a3;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1_2;
    void *temp_s2_3;
    void *temp_s3;
    void *temp_s3_2;
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *var_s0_2;

    temp_s0 = arg0 + 0x720;
    M2C_FIELD(arg0, s32 *, 0x1D00) = 0;
    M2C_FIELD(arg0, s32 *, 0x1D54) = (s32) (M2C_FIELD(arg0, s32 *, 0x1D54) + 1);
    temp_v0 = func_002314A8();
    if (temp_s0 != temp_v0) {
        M2C_FIELD(arg0, f32 *, 0x720) = (f32) M2C_FIELD(temp_v0, f32 *, 0);
        M2C_FIELD(temp_s0, f32 *, 4) = (f32) M2C_FIELD(temp_v0, f32 *, 4);
        M2C_FIELD(temp_s0, f32 *, 8) = (f32) M2C_FIELD(temp_v0, f32 *, 8);
        M2C_FIELD(temp_s0, f32 *, 0xC) = (f32) M2C_FIELD(temp_v0, f32 *, 0xC);
    }
    temp_v0_2 = arg0 + (M2C_FIELD(arg0, s32 *, 0x1D00) * 0x38);
    temp_v0_3 = temp_v0_2 + 0x730;
    M2C_FIELD(temp_v0_3, f32 *, 0x14) = 0x0.0p+0f;
    M2C_FIELD(temp_v0_3, f32 *, 0x20) = 0x1.0000000000000p+0f;
    M2C_FIELD(temp_v0_2, f32 *, 0x730) = 0x1.0000000000000p+0f;
    M2C_FIELD(temp_v0_3, f32 *, 0xC) = 0x0.0p+0f;
    M2C_FIELD(temp_v0_3, f32 *, 0x18) = 0x0.0p+0f;
    M2C_FIELD(temp_v0_3, f32 *, 4) = 0x0.0p+0f;
    M2C_FIELD(temp_v0_3, f32 *, 0x10) = 0x1.0000000000000p+0f;
    M2C_FIELD(temp_v0_3, f32 *, 0x1C) = 0x0.0p+0f;
    M2C_FIELD(temp_v0_3, f32 *, 8) = 0x0.0p+0f;
    M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x1D00) * 0x38) + arg0), f32 *, 0x754) = 0x1.0000000000000p+0f;
    temp_a0 = M2C_FIELD(arg0, void **, 0x6D8);
    temp_s0_2 = arg0 + 0x24;
    if ((temp_a0 != NULL) && (func_0024D1B0(temp_a0) != 0)) {
        temp_a3 = M2C_FIELD(arg0, void **, 0x6D8);
        temp_v0_4 = M2C_FIELD(temp_a3, void **, 4);
        M2C_FIELD((temp_v0_4 + 0x1C0), M2C_UNK (**)(void *, void *, void *, void *), 4)(temp_a3 + M2C_FIELD(temp_v0_4, s16 *, 0x1C0), arg0, temp_s0_2, temp_a3);
    }
    temp_s1 = M2C_FIELD(temp_s0_2, s32 *, 8);
    var_s0 = M2C_FIELD(temp_s0_2, void ***, 4);
    if (var_s0 != temp_s1) {
loop_7:
        if ((M2C_FIELD(arg0, s32 *, 0x1D48) != 0) && (M2C_FIELD(arg0, s32 *, 0x1D40) == 0)) {
            func_0022F3A8(arg0, 0);
        }
        func_00231508(arg0, *var_s0);
        temp_a2 = *var_s0;
        temp_v0_5 = M2C_FIELD(temp_a2, void **, 4);
        M2C_FIELD((temp_v0_5 + 0x2E8), M2C_UNK (**)(void *, void *, void *), 4)(temp_a2 + M2C_FIELD(temp_v0_5, s16 *, 0x2E8), arg0, temp_a2);
        temp_a1 = *var_s0;
        var_s0 += 4;
        func_00231798(arg0, temp_a1);
        if (var_s0 != temp_s1) {
            goto loop_7;
        }
    }
    temp_a0_2 = M2C_FIELD(arg0, void **, 0x1D10);
    if (temp_a0_2 != NULL) {
        func_00265E50(temp_a0_2, 1);
        func_00266830(M2C_FIELD(arg0, void **, 0x1D10), 0);
        func_00231A50(arg0, func_002314A8(arg0));
        func_00231508(arg0, M2C_FIELD(arg0, void **, 0x1D10));
        temp_a2_2 = M2C_FIELD(arg0, void **, 0x1D10);
        temp_v0_6 = M2C_FIELD(temp_a2_2, void **, 4);
        M2C_FIELD((temp_v0_6 + 0x2E8), M2C_UNK (**)(void *, void *, void *), 4)(temp_a2_2 + M2C_FIELD(temp_v0_6, s16 *, 0x2E8), arg0, temp_a2_2);
        func_00231798(arg0, M2C_FIELD(arg0, void **, 0x1D10));
        func_00231C48(arg0);
        func_00266900(M2C_FIELD(arg0, void **, 0x1D10), 0);
        func_00265E50(M2C_FIELD(arg0, void **, 0x1D10), 0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x6DC) != 0) {
        temp_s0_3 = func_0022F350(arg0);
        if (temp_s0_3 != func_0022F2A0(arg0)) {
            if (func_0022F2A0(arg0) != 0) {
                temp_s3 = M2C_FIELD(arg0, void **, 0x10);
                temp_s2 = func_0022F2A0(arg0);
                temp_v0_7 = func_00326750(0x20, 4, 0x6984C0);
                func_0028E8E8(temp_v0_7, arg0, temp_s2);
                M2C_FIELD(temp_v0_7, s32 *, 4) = 0x66E148;
                sp_.sp20 = temp_v0_7;
                func_0028B180(((s8 *)&sp_), &sp_.sp20);
                func_00250CE0(temp_s3, ((s8 *)&sp_));
                func_002ADEE0(((s8 *)&sp_), 2);
            }
            func_0022F2F8(arg0, func_0022F350(arg0));
            if (func_0022F2A0(arg0) != 0) {
                temp_s3_2 = M2C_FIELD(arg0, void **, 0x10);
                temp_s2_2 = func_0022F2A0(arg0);
                temp_v0_8 = func_00326750(0x20, 4, 0x6984C0);
                func_0028E8E8(temp_v0_8, arg0, temp_s2_2);
                M2C_FIELD(temp_v0_8, s32 *, 4) = 0x66ABD8;
                sp_.sp24 = temp_v0_8;
                func_0028B180(((s8 *)&sp_), &sp_.sp24);
                func_00250CE0(temp_s3_2, ((s8 *)&sp_));
                func_0028D8F0(((s8 *)&sp_), 2);
            }
        }
    }
    func_00232210(arg0);
    if (func_0022F0F8(arg0) != 0) {
        func_00230B68(arg0, func_0022F0F8(arg0));
        if (M2C_FIELD(arg0, s32 *, 0x1D50) != 0) {
            func_00230CF8(arg0);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x1D08) != 0) {
        temp_s1_2 = arg0 + 0x6EC;
        if (M2C_FIELD(arg0, s32 *, 0x1D48) != 0) {
            temp_s2_3 = arg0 + 0x6F8;
            var_s0_2 = arg0 + 0x704;
            if ((M2C_FIELD(arg0, s32 *, 0x6E0) == 0) && (M2C_FIELD(arg0, s32 *, 0x1D50) != 0)) {
                if (M2C_FIELD(arg0, s32 *, 0x1D40) != 0) {
                    temp_f12 = M2C_FIELD(arg0, f32 *, 0x1D2C);
                    var_f21 = temp_f12 - M2C_FIELD(temp_s1_2, f32 *, 8);
                    temp_f22 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), f32 *, 0xA0) * 0x1.3333320000000p-3f;
                    if (!(var_f21 >= 0x0.0p+0f)) {
                        var_f21 = -var_f21;
                    }
                    var_f20 = M2C_FIELD(arg0, f32 *, 0x1D30) - M2C_FIELD(temp_s2_3, f32 *, 8);
                    if (!(var_f20 >= 0x0.0p+0f)) {
                        var_f20 = -var_f20;
                    }
                    if (!(var_f21 < 0x1.0000000000000p+0f)) {
                        func_0057B0F8(temp_s1_2, temp_f12, temp_f22);
                    } else {
                        M2C_FIELD(temp_s1_2, f32 *, 8) = temp_f12;
                    }
                    if (!(var_f20 < 0x1.0000000000000p+0f)) {
                        func_0057B0F8(temp_s2_3, M2C_FIELD(arg0, f32 *, 0x1D30), temp_f22);
                    } else {
                        M2C_FIELD(temp_s2_3, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x1D30);
                    }
                    var_s0_2 = arg0 + 0x704;
                    if ((var_f21 < 0x1.0000000000000p+0f) && (var_f20 < 0x1.0000000000000p+0f)) {
                        temp_f12_2 = M2C_FIELD(arg0, f32 *, 0x1D34);
                        var_f20_2 = temp_f12_2 - M2C_FIELD(var_s0_2, f32 *, 8);
                        if (!(var_f20_2 >= 0x0.0p+0f)) {
                            var_f20_2 = -var_f20_2;
                        }
                        if (!(var_f20_2 < 0x1.0000000000000p+0f)) {
                            func_0057B0F8(var_s0_2, temp_f12_2, temp_f22);
                        } else {
                            M2C_FIELD(var_s0_2, f32 *, 8) = temp_f12_2;
                        }
                        if (var_f20_2 < 0x1.0000000000000p+0f) {
                            M2C_FIELD(arg0, s32 *, 0x1D40) = 0;
                        }
                        M2C_FIELD(arg0, s32 *, 0x1D44) = 1;
                    }
                } else {
                    var_s0_2 = arg0 + 0x704;
                }
                if (M2C_FIELD(arg0, s32 *, 0x1D44) != 0) {
                    func_002A3A18(M2C_FIELD(arg0, void **, 0x1D0C), &sp_.sp10, &sp_.sp14);
                    var_a1 = sp_.sp10;
                    var_a2 = sp_.sp14;
                    temp_v1 = M2C_FIELD(arg0, s32 *, 0x1D38) - var_a1;
                    temp_v0_9 = M2C_FIELD(arg0, s32 *, 0x1D3C) - var_a2;
                    if (temp_v1 == 0) {
                        if (temp_v0_9 == 0) {
                            M2C_FIELD(arg0, s32 *, 0x1D44) = 0;
                        } else {
                            goto block_62;
                        }
                    } else {
block_62:
                        if (temp_v1 < 0) {
                            var_a1 -= 1;
                            goto block_67;
                        }
                        if (temp_v1 > 0) {
                            var_a1 += 1;
block_67:
                            sp_.sp10 = var_a1;
                        }
                        if (temp_v0_9 < 0) {
                            var_a2 -= 1;
                            goto block_72;
                        }
                        if (temp_v0_9 > 0) {
                            var_a2 += 1;
block_72:
                            sp_.sp14 = var_a2;
                        }
                        func_002A3A30(M2C_FIELD(arg0, void **, 0x1D0C), var_a1, var_a2);
                    }
                }
            }
            if (func_0022F350(arg0) == 0) {
                func_002665A0(M2C_FIELD(arg0, void **, 0x1D0C), 0);
            } else {
                func_002665A0(M2C_FIELD(arg0, void **, 0x1D0C), func_00266590(func_0022F350(arg0)));
            }
            func_00267808(((s8 *)&sp_), M2C_FIELD(arg0, void **, 0x1D0C));
            func_0025B498(M2C_FIELD(arg0, void **, 0x1D0C), &sp_.sp18, &sp_.sp1C);
            sp_.sp18 *= 0x1.0000000000000p-1f;
            sp_.sp1C *= 0x1.0000000000000p-1f;
            func_0024C060(sp0);
            func_0024BEF8(sp0, M2C_FIELD(var_s0_2, f32 *, 8));
            func_0024BEB0(sp0, -sp_.sp18, 0);
            func_00267930(M2C_FIELD(arg0, void **, 0x1D0C), ((s8 *)&sp_));
            func_0025BA68(M2C_FIELD(arg0, void **, 0x1D0C), M2C_FIELD(temp_s1_2, f32 *, 8), M2C_FIELD(temp_s2_3, f32 *, 8));
            func_00231508(arg0, M2C_FIELD(arg0, void **, 0x1D0C));
            temp_a2_3 = M2C_FIELD(arg0, void **, 0x1D0C);
            temp_v0_10 = M2C_FIELD(temp_a2_3, void **, 4);
            M2C_FIELD((temp_v0_10 + 0x2E8), M2C_UNK (**)(void *, void *, void *), 4)(temp_a2_3 + M2C_FIELD(temp_v0_10, s16 *, 0x2E8), arg0, temp_a2_3);
            func_00231798(arg0, M2C_FIELD(arg0, void **, 0x1D0C));
            func_0024B248(((s8 *)&sp_), 2);
        }
    }
    temp_a0_3 = M2C_FIELD(arg0, void **, 0x6D8);
    if ((temp_a0_3 != NULL) && (func_0024D1B0(temp_a0_3) != 0)) {
        temp_a2_4 = M2C_FIELD(arg0, void **, 0x6D8);
        temp_v0_11 = M2C_FIELD(temp_a2_4, void **, 4);
        M2C_FIELD((temp_v0_11 + 0x1C8), M2C_UNK (**)(void *, void *, void *), 4)(temp_a2_4 + M2C_FIELD(temp_v0_11, s16 *, 0x1C8), arg0, temp_a2_4);
    }
}
