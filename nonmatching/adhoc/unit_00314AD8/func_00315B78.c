/* NON_MATCHING: functional draft, 260 of 280 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_002ED5C0(void **, M2C_UNK);            /* extern */
s32 func_002EF9B0(void *);                          /* extern */
M2C_UNK func_00312318(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_00312370(s32 *, s32);                  /* extern */
M2C_UNK func_00314B20(s32, void **, void *);        /* extern */
M2C_UNK func_00314B88(void **, s32, void **);       /* extern */
M2C_UNK func_00326798(void *, s32, M2C_UNK, s32);   /* extern */
s32 func_0057F260(M2C_UNK);                         /* extern */
s32 *func_005C11A8();                               /* extern */
void *func_005C2560(); /* extern */
M2C_UNK func_005C2630(void **, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_005CE388(void **, s32, M2C_UNK, void **, M2C_UNK, M2C_UNK); /* extern */

s32 func_00315B78(s32 arg0, s32 arg1, void **arg2, s32 arg3) {
    s32 sp0;
    struct StackFrame_00315B78 { s8 pad0[0x10]; void * sp10; s8 pad1[0xC]; s32 sp20; s8 pad2[0xC]; void * sp30; s8 pad3[0xC]; void * sp40; s8 pad4[0xC]; s32 sp50; s8 pad5[0xC]; } sp_;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s1_2;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 var_s6;
    void *temp_a1;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a2_4;
    void *temp_a2_5;
    void *temp_a2_6;
    void *temp_s1;
    void *temp_s1_3;
    void *temp_s1_4;
    void *temp_s1_5;
    void *temp_s1_6;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v0_6;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *var_v1;
    void *var_v1_2;

    sp_.sp50 = arg0;
    if (M2C_FIELD((void *)0x659FA8, s32 *, 0xC) != 0) {
        var_v1 = func_005C2560(0x659FA8, arg1, arg2, arg3, 0x659FA8);
    } else {
        var_v1 = (void *)0x659FA8 + 0x10;
        M2C_FIELD((void *)0x659FA8, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659FA8, s32 *, 8) + 1);
    }
    sp_.sp10 = var_v1;
    func_005C2630(&sp_.sp10, 0, -1, 0x69E1C8, func_0057F260(0x69E1C8));
    func_00314B88(((s8 *)&sp_), arg1, &sp_.sp10);
    temp_s1 = sp_.sp10 - 0x10;
    temp_v0 = M2C_FIELD(temp_s1, s32 *, 8) - 1;
    M2C_FIELD(temp_s1, s32 *, 8) = temp_v0;
    if (temp_v0 == 0) {
        temp_s0 = M2C_FIELD(temp_s1, s32 *, 4);
        func_00326798(temp_s1, temp_s0 + 0x10, 4, *func_005C11A8());
    }
    var_s6 = 1;
    temp_v1 = M2C_FIELD(sp0, void **, 4);
    temp_a2 = *M2C_FIELD((temp_v1 + 0x70), void **(**)(void *, M2C_UNK, void *), 4)(sp0 + M2C_FIELD(temp_v1, s16 *, 0x70), 0, sp0);
    temp_v0_2 = M2C_FIELD(temp_a2, void **, 4);
    M2C_FIELD((temp_v0_2 + 0x18), M2C_UNK (**)(void **, void *, void *), 4)(&sp_.sp10, temp_a2 + M2C_FIELD(temp_v0_2, s16 *, 0x18), temp_a2);
loop_20:
    if (var_s6 < func_002EF9B0(sp0)) {
        temp_v1_2 = M2C_FIELD(sp0, void **, 4);
        func_00312370(&sp_.sp20, M2C_FIELD((temp_v1_2 + 0x70), s32 (**)(void *, s32, void *), 4)(sp0 + M2C_FIELD(temp_v1_2, s16 *, 0x70), var_s6, sp0));
        temp_s1_2 = sp_.sp20;
        if (M2C_FIELD((void *)0x659FA8, s32 *, 0xC) != 0) {
            var_v1_2 = func_005C2560(0x659FA8);
        } else {
            var_v1_2 = (void *)0x659FA8 + 0x10;
            M2C_FIELD((void *)0x659FA8, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659FA8, s32 *, 8) + 1);
        }
        sp_.sp40 = var_v1_2;
        func_005C2630(&sp_.sp40, 0, -1, 0x69E1D0, func_0057F260(0x69E1D0));
        func_00314B88(&sp_.sp30, temp_s1_2, &sp_.sp40);
        temp_s1_3 = sp_.sp40 - 0x10;
        temp_v0_3 = M2C_FIELD(temp_s1_3, s32 *, 8) - 1;
        M2C_FIELD(temp_s1_3, s32 *, 8) = temp_v0_3;
        if (temp_v0_3 == 0) {
            temp_s0_2 = M2C_FIELD(temp_s1_3, s32 *, 4);
            func_00326798(temp_s1_3, temp_s0_2 + 0x10, 4, *func_005C11A8());
        }
        temp_a2_2 = sp_.sp30;
        temp_v1_3 = M2C_FIELD(temp_a2_2, void **, 4);
        temp_a1 = *M2C_FIELD((temp_v1_3 + 0x70), void **(**)(void *, M2C_UNK, void *), 4)(temp_a2_2 + M2C_FIELD(temp_v1_3, s16 *, 0x70), 0, temp_a2_2);
        temp_v1_4 = M2C_FIELD(temp_a1, void **, 4);
        temp_s0_3 = M2C_FIELD((temp_v1_4 + 0x58), s32 (**)(void *, void *), 4)(temp_a1 + M2C_FIELD(temp_v1_4, s16 *, 0x58), temp_a1);
        if (temp_s0_3 < func_002EF9B0(*arg2)) {
            temp_a2_3 = *arg2;
            temp_v1_5 = M2C_FIELD(temp_a2_3, void **, 4);
            temp_a2_4 = *M2C_FIELD((temp_v1_5 + 0x68), void **(**)(void *, s32, void *), 4)(temp_a2_3 + M2C_FIELD(temp_v1_5, s16 *, 0x68), temp_s0_3, temp_a2_3);
            temp_v0_4 = M2C_FIELD(temp_a2_4, void **, 4);
            M2C_FIELD((temp_v0_4 + 0x18), M2C_UNK (**)(void **, void *, void *), 4)(&sp_.sp40, temp_a2_4 + M2C_FIELD(temp_v0_4, s16 *, 0x18), temp_a2_4);
            func_005CE388(&sp_.sp10, M2C_FIELD(sp_.sp10, s32 *, -0x10), 0, &sp_.sp40, 0, -1);
            temp_s1_4 = sp_.sp40 - 0x10;
            temp_v0_5 = M2C_FIELD(temp_s1_4, s32 *, 8) - 1;
            M2C_FIELD(temp_s1_4, s32 *, 8) = temp_v0_5;
            if (temp_v0_5 == 0) {
                temp_s0_4 = M2C_FIELD(temp_s1_4, s32 *, 4);
                func_00326798(temp_s1_4, temp_s0_4 + 0x10, 4, *func_005C11A8());
            }
        }
        if (func_002EF9B0(sp_.sp30) >= 2U) {
            temp_a2_5 = sp_.sp30;
            temp_v1_6 = M2C_FIELD(temp_a2_5, void **, 4);
            temp_a2_6 = *M2C_FIELD((temp_v1_6 + 0x70), void **(**)(void *, M2C_UNK, void *), 4)(temp_a2_5 + M2C_FIELD(temp_v1_6, s16 *, 0x70), 1, temp_a2_5);
            temp_v0_6 = M2C_FIELD(temp_a2_6, void **, 4);
            M2C_FIELD((temp_v0_6 + 0x18), M2C_UNK (**)(void **, void *, void *), 4)(&sp_.sp40, temp_a2_6 + M2C_FIELD(temp_v0_6, s16 *, 0x18), temp_a2_6);
            func_005CE388(&sp_.sp10, M2C_FIELD(sp_.sp10, s32 *, -0x10), 0, &sp_.sp40, 0, -1);
            temp_s1_5 = sp_.sp40 - 0x10;
            temp_v0_7 = M2C_FIELD(temp_s1_5, s32 *, 8) - 1;
            M2C_FIELD(temp_s1_5, s32 *, 8) = temp_v0_7;
            if (temp_v0_7 == 0) {
                temp_s0_5 = M2C_FIELD(temp_s1_5, s32 *, 4);
                func_00326798(temp_s1_5, temp_s0_5 + 0x10, 4, *func_005C11A8());
            }
        }
        func_002ED5C0(&sp_.sp30, 2);
        var_s6 += 1;
        func_00312318(&sp_.sp20, 2);
        goto loop_20;
    }
    func_00314B20(sp_.sp50, &sp_.sp10, sp0);
    temp_s1_6 = sp_.sp10 - 0x10;
    temp_v0_8 = M2C_FIELD(temp_s1_6, s32 *, 8) - 1;
    M2C_FIELD(temp_s1_6, s32 *, 8) = temp_v0_8;
    if (temp_v0_8 == 0) {
        temp_s0_6 = M2C_FIELD(temp_s1_6, s32 *, 4);
        func_00326798(temp_s1_6, temp_s0_6 + 0x10, 4, *func_005C11A8());
    }
    func_002ED5C0(((s8 *)&sp_), 2);
    return sp_.sp50;
}
