/* NON_MATCHING: functional draft, 184 of 207 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00206B60(s32, s32);                    /* extern */
M2C_UNK func_00206D18(s32);                         /* extern */
s32 func_0020EEA0(void *, void **);                 /* extern */
M2C_UNK func_0020FCE0(s32 *, M2C_UNK);              /* extern */
s32 func_0020FD38(void *, void **, s32 *);          /* extern */
s32 func_0024DB78(s32 *, void *);                   /* extern */
M2C_UNK func_002550B8(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_002556B0(s32 *);                       /* extern */
s32 func_00261BC8();                                /* extern */
M2C_UNK func_00269940(s32 *, s32 *);                /* extern */
M2C_UNK func_00326798(void *, s32, M2C_UNK, s32);   /* extern */
s32 func_0057F260(s32);                             /* extern */
M2C_UNK func_005A2F88(void *);                      /* extern */
s32 *func_005C11A8();                               /* extern */
void *func_005C2560(void *);                        /* extern */
M2C_UNK func_005C2630(void **, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_005CD320(void **, s32, M2C_UNK, s32);      /* extern */

s32 func_00207590(s32 arg0, void *arg1) {
    struct StackFrame_00207590 { void * sp0; s8 pad0[0x1C]; s32 sp20; s32 sp24; s8 pad1[0x8]; void * sp30; s8 pad2[0xC]; s32 sp40; s8 pad3[0xC]; s32 sp50; s8 pad4[0xC]; } sp_;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_v0;
    void *temp_a0;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s1_3;
    void *temp_v1;
    void *var_a0;
    void *var_v1;
    void *var_v1_2;
    void *var_v1_3;

    if (func_00261BC8() != 0) {
        goto block_1;
    }
    if (M2C_FIELD((void *)0x659FA8, s32 *, 0xC) != 0) {
        var_v1 = func_005C2560((void *)0x659FA8);
    } else {
        var_v1 = (void *)0x659FA8 + 0x10;
        M2C_FIELD((void *)0x659FA8, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659FA8, s32 *, 8) + 1);
    }
    *((s8 *)&sp_) = var_v1;
    func_005C2630(((s8 *)&sp_), 0, -1, 0x697468, func_0057F260(0x697468));
    sp_.sp20 = 0x666D50;
    sp_.sp24 = arg0 + 0xAC;
    temp_v0 = func_0020FD38(arg1, ((s8 *)&sp_), &sp_.sp20);
    sp_.sp20 = 0x666D50;
    func_0020FCE0(&sp_.sp20, 0);
    temp_s1 = sp_.sp0 - 0x10;
    temp_v0_2 = M2C_FIELD(temp_s1, s32 *, 8) - 1;
    M2C_FIELD(temp_s1, s32 *, 8) = temp_v0_2;
    if (temp_v0_2 == 0) {
        temp_s0 = M2C_FIELD(temp_s1, s32 *, 4);
        func_00326798(temp_s1, temp_s0 + 0x10, 4, *func_005C11A8());
    }
    var_v0 = 1;
    if (temp_v0 == 0) {
        var_v1_2 = M2C_FIELD(arg1, void **, 0xC);
        temp_a0 = var_v1_2 - 0x10;
        if (M2C_FIELD(temp_a0, s32 *, 0xC) == 0) {
            M2C_FIELD(temp_a0, s32 *, 8) = (s32) (M2C_FIELD(temp_a0, s32 *, 8) + 1);
        } else {
            var_v1_2 = func_005C2560(temp_a0);
        }
        sp_.sp0 = var_v1_2;
        temp_s2 = func_005CD320(((s8 *)&sp_), 0x697470, 0, func_0057F260(0x697470)) == 0;
        temp_s1_2 = var_v1_2 - 0x10;
        temp_v0_3 = M2C_FIELD(temp_s1_2, s32 *, 8) - 1;
        M2C_FIELD(temp_s1_2, s32 *, 8) = temp_v0_3;
        if (temp_v0_3 == 0) {
            temp_s0_2 = M2C_FIELD(temp_s1_2, s32 *, 4);
            func_00326798(temp_s1_2, temp_s0_2 + 0x10, 4, *func_005C11A8());
        }
        var_v0 = 0;
        if (temp_s2 != 0) {
            func_00206D18(arg0);
            if (M2C_FIELD((void *)0x659FA8, s32 *, 0xC) != 0) {
                var_v1_3 = func_005C2560((void *)0x659FA8);
            } else {
                var_v1_3 = (void *)0x659FA8 + 0x10;
                M2C_FIELD((void *)0x659FA8, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659FA8, s32 *, 8) + 1);
            }
            sp_.sp30 = var_v1_3;
            if (func_0020EEA0(arg1, &sp_.sp30) == 0x5B) {
                func_0020EEA0(arg1, &sp_.sp30);
                temp_v1 = sp_.sp30;
                temp_v0_4 = M2C_FIELD(temp_v1, s32 *, -0x10);
                if (temp_v0_4 == 0) {
                    var_a0 = (void *)0x697480;
                } else {
                    *(s32 *)(temp_v1 + temp_v0_4) = 0;
                    var_a0 = sp_.sp30;
                }
                func_005A2F88(var_a0);
                func_0020EEA0(arg1, &sp_.sp30);
                func_0020EEA0(arg1, &sp_.sp30);
loop_30:
                func_002556B0(&sp_.sp40);
                func_00269940(&sp_.sp50, &sp_.sp40);
                if (func_0024DB78(&sp_.sp50, arg1) != 0x7D) {
                    func_00206B60(arg0, sp_.sp40);
                    sp_.sp50 = 0x667528;
                    func_0020FCE0(&sp_.sp50, 0);
                    func_002550B8(&sp_.sp40, 2);
                    goto loop_30;
                }
                sp_.sp50 = 0x667528;
                func_0020FCE0(&sp_.sp50, 0);
                func_002550B8(&sp_.sp40, 2);
            }
            temp_s1_3 = sp_.sp30 - 0x10;
            temp_v0_5 = M2C_FIELD(temp_s1_3, s32 *, 8) - 1;
            M2C_FIELD(temp_s1_3, s32 *, 8) = temp_v0_5;
            if (temp_v0_5 == 0) {
                temp_s0_3 = M2C_FIELD(temp_s1_3, s32 *, 4);
                func_00326798(temp_s1_3, temp_s0_3 + 0x10, 4, *func_005C11A8());
            } else {
block_1:
            }
            var_v0 = 1;
        }
    }
    return var_v0;
}
