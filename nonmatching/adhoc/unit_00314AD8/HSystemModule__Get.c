/* NON_MATCHING: functional draft, 399 of 419 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_002EA590(void *, M2C_UNK);             /* extern */
M2C_UNK func_002ECDE0(void *);                      /* extern */
M2C_UNK func_002ECE20(s32 *, s32);                  /* extern */
M2C_UNK func_002ED5C0(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_002EEEB0(void **, s32, void **);       /* extern */
M2C_UNK func_002EFBF0(s32 *);                       /* extern */
M2C_UNK func_003041A0(s32, s32 *);                  /* extern */
M2C_UNK func_003041B8(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_00306638(void **, s32, s32 *);         /* extern */
M2C_UNK func_00306800(s32, M2C_UNK, s32 *);         /* extern */
M2C_UNK func_003068A8(s32, void **, M2C_UNK);       /* extern */
M2C_UNK func_00306938(s32, void **, void **);       /* extern */
M2C_UNK func_00306D98(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_00309378(void **, M2C_UNK);            /* extern */
M2C_UNK func_00312318(void **, M2C_UNK);            /* extern */
M2C_UNK func_00314B20(void **, void **);            /* extern */
M2C_UNK func_00316E18(void **);                     /* extern */
M2C_UNK func_00317C80(s32 *);                       /* extern */
M2C_UNK func_00323B60(void **, M2C_UNK);            /* extern */
M2C_UNK func_00326798(void *, s32, M2C_UNK, s32);   /* extern */
M2C_UNK func_0057F260(M2C_UNK);                     /* extern */
s32 *func_005C11A8();                               /* extern */
void *func_005C2560(M2C_UNK);                       /* extern */
M2C_UNK func_005C2630(void **, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_00316EA8(s32 arg0) {
    s32 sp0;
    struct StackFrame_00316EA8 { s8 pad0[0x10]; s32 sp10; s8 pad1[0xC]; s32 sp20; s8 pad2[0xC]; void * sp30; s8 pad3[0xC]; void * sp40; s8 pad4[0xC]; void * sp50; s8 pad5[0xC]; void * sp60; s8 pad6[0xC]; void * sp70; s8 pad7[0xC]; s32 sp80; s8 pad8[0xC]; } sp_;
    s32 temp_s0;
    s32 temp_s0_10;
    s32 temp_s0_11;
    s32 temp_s0_12;
    s32 temp_s0_13;
    s32 temp_s0_14;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s0_7;
    s32 temp_s0_8;
    s32 temp_s0_9;
    s32 temp_s1_9;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s1_3;
    void *temp_s1_4;
    void *temp_s1_5;
    void *temp_s1_6;
    void *temp_s1_7;
    void *temp_s1_8;
    void *var_v1;
    void *var_v1_2;
    void *var_v1_3;
    void *var_v1_4;
    void *var_v1_5;
    void *var_v1_6;
    void *var_v1_7;

    func_002ECDE0(((s8 *)&sp_));
    func_00306D98(&sp_.sp10, 0x840AE8);
    temp_s0 = sp_.sp10;
    func_002ECE20(&sp_.sp20, sp0);
    func_00306800(temp_s0, 0x840AD0, &sp_.sp20);
    func_002ED5C0(&sp_.sp20, 2);
    func_002EFBF0(&sp_.sp20);
    temp_s2 = sp_.sp20;
    if (M2C_FIELD((void *)0x659FA8, s32 *, 0xC) != 0) {
        var_v1 = func_005C2560(0x659FA8);
    } else {
        var_v1 = (void *)0x659FA8 + 0x10;
        M2C_FIELD((void *)0x659FA8, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659FA8, s32 *, 8) + 1);
    }
    sp_.sp50 = var_v1;
    func_0057F260(0x69E1E8);
    func_005C2630(&sp_.sp50, 0, -1, 0x69E1E8);
    func_00314B20(&sp_.sp40, &sp_.sp50);
    func_002EEEB0(&sp_.sp30, temp_s2, &sp_.sp40);
    func_00309378(&sp_.sp30, 2);
    func_00312318(&sp_.sp40, 2);
    temp_s1 = sp_.sp50 - 0x10;
    temp_v0 = M2C_FIELD(temp_s1, s32 *, 8) - 1;
    M2C_FIELD(temp_s1, s32 *, 8) = temp_v0;
    if (temp_v0 == 0) {
        temp_s0_2 = M2C_FIELD(temp_s1, s32 *, 4);
        func_00326798(temp_s1, temp_s0_2 + 0x10, 4, *func_005C11A8());
    }
    func_00306800(sp_.sp10, 0x840AD8, &sp_.sp20);
    if (M2C_FIELD((void *)0x659FA8, s32 *, 0xC) != 0) {
        var_v1_2 = func_005C2560(0x659FA8);
    } else {
        var_v1_2 = (void *)0x659FA8 + 0x10;
        M2C_FIELD((void *)0x659FA8, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659FA8, s32 *, 8) + 1);
    }
    sp_.sp60 = var_v1_2;
    func_0057F260(0x69E1F0);
    func_005C2630(&sp_.sp60, 0, -1, 0x69E1F0);
    func_00314B20(&sp_.sp30, &sp_.sp60);
    temp_s1_2 = sp_.sp60 - 0x10;
    temp_v0_2 = M2C_FIELD(temp_s1_2, s32 *, 8) - 1;
    M2C_FIELD(temp_s1_2, s32 *, 8) = temp_v0_2;
    if (temp_v0_2 == 0) {
        temp_s0_3 = M2C_FIELD(temp_s1_2, s32 *, 4);
        func_00326798(temp_s1_2, temp_s0_3 + 0x10, 4, *func_005C11A8());
    }
    func_00316E18(&sp_.sp70);
    func_00314B20(&sp_.sp60, &sp_.sp70);
    temp_s1_3 = sp_.sp70 - 0x10;
    temp_v0_3 = M2C_FIELD(temp_s1_3, s32 *, 8) - 1;
    M2C_FIELD(temp_s1_3, s32 *, 8) = temp_v0_3;
    if (temp_v0_3 == 0) {
        temp_s0_4 = M2C_FIELD(temp_s1_3, s32 *, 4);
        func_00326798(temp_s1_3, temp_s0_4 + 0x10, 4, *func_005C11A8());
    }
    temp_s0_5 = sp_.sp10;
    if (M2C_FIELD((void *)0x659FA8, s32 *, 0xC) != 0) {
        var_v1_3 = func_005C2560(0x659FA8);
    } else {
        var_v1_3 = (void *)0x659FA8 + 0x10;
        M2C_FIELD((void *)0x659FA8, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659FA8, s32 *, 8) + 1);
    }
    sp_.sp70 = var_v1_3;
    func_0057F260(0x69E200);
    func_005C2630(&sp_.sp70, 0, -1, 0x69E200);
    func_00306938(temp_s0_5, &sp_.sp70, &sp_.sp30);
    temp_s1_4 = sp_.sp70 - 0x10;
    temp_v0_4 = M2C_FIELD(temp_s1_4, s32 *, 8) - 1;
    M2C_FIELD(temp_s1_4, s32 *, 8) = temp_v0_4;
    if (temp_v0_4 == 0) {
        temp_s0_6 = M2C_FIELD(temp_s1_4, s32 *, 4);
        func_00326798(temp_s1_4, temp_s0_6 + 0x10, 4, *func_005C11A8());
    }
    temp_s0_7 = sp_.sp10;
    if (M2C_FIELD((void *)0x659FA8, s32 *, 0xC) != 0) {
        var_v1_4 = func_005C2560(0x659FA8);
    } else {
        var_v1_4 = (void *)0x659FA8 + 0x10;
        M2C_FIELD((void *)0x659FA8, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659FA8, s32 *, 8) + 1);
    }
    sp_.sp70 = var_v1_4;
    func_0057F260(0x69E210);
    func_005C2630(&sp_.sp70, 0, -1, 0x69E210);
    func_00306938(temp_s0_7, &sp_.sp70, &sp_.sp60);
    temp_s1_5 = sp_.sp70 - 0x10;
    temp_v0_5 = M2C_FIELD(temp_s1_5, s32 *, 8) - 1;
    M2C_FIELD(temp_s1_5, s32 *, 8) = temp_v0_5;
    if (temp_v0_5 == 0) {
        temp_s0_8 = M2C_FIELD(temp_s1_5, s32 *, 4);
        func_00326798(temp_s1_5, temp_s0_8 + 0x10, 4, *func_005C11A8());
    }
    temp_s0_9 = sp_.sp10;
    if (M2C_FIELD((void *)0x659FA8, s32 *, 0xC) != 0) {
        var_v1_5 = func_005C2560(0x659FA8);
    } else {
        var_v1_5 = (void *)0x659FA8 + 0x10;
        M2C_FIELD((void *)0x659FA8, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659FA8, s32 *, 8) + 1);
    }
    sp_.sp70 = var_v1_5;
    func_0057F260(0x69E218);
    func_005C2630(&sp_.sp70, 0, -1, 0x69E218);
    func_003068A8(temp_s0_9, &sp_.sp70, 0x316DF8);
    temp_s1_6 = sp_.sp70 - 0x10;
    temp_v0_6 = M2C_FIELD(temp_s1_6, s32 *, 8) - 1;
    M2C_FIELD(temp_s1_6, s32 *, 8) = temp_v0_6;
    if (temp_v0_6 == 0) {
        temp_s0_10 = M2C_FIELD(temp_s1_6, s32 *, 4);
        func_00326798(temp_s1_6, temp_s0_10 + 0x10, 4, *func_005C11A8());
    }
    temp_s0_11 = sp_.sp10;
    if (M2C_FIELD((void *)0x659FA8, s32 *, 0xC) != 0) {
        var_v1_6 = func_005C2560(0x659FA8);
    } else {
        var_v1_6 = (void *)0x659FA8 + 0x10;
        M2C_FIELD((void *)0x659FA8, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659FA8, s32 *, 8) + 1);
    }
    sp_.sp70 = var_v1_6;
    func_0057F260(0x69E220);
    func_005C2630(&sp_.sp70, 0, -1, 0x69E220);
    func_003068A8(temp_s0_11, &sp_.sp70, 0x316E08);
    temp_s1_7 = sp_.sp70 - 0x10;
    temp_v0_7 = M2C_FIELD(temp_s1_7, s32 *, 8) - 1;
    M2C_FIELD(temp_s1_7, s32 *, 8) = temp_v0_7;
    if (temp_v0_7 == 0) {
        temp_s0_12 = M2C_FIELD(temp_s1_7, s32 *, 4);
        func_00326798(temp_s1_7, temp_s0_12 + 0x10, 4, *func_005C11A8());
    }
    temp_s0_13 = sp_.sp10;
    if (M2C_FIELD((void *)0x659FA8, s32 *, 0xC) != 0) {
        var_v1_7 = func_005C2560(0x659FA8);
    } else {
        var_v1_7 = (void *)0x659FA8 + 0x10;
        M2C_FIELD((void *)0x659FA8, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659FA8, s32 *, 8) + 1);
    }
    sp_.sp70 = var_v1_7;
    func_0057F260(0x69E230);
    func_005C2630(&sp_.sp70, 0, -1, 0x69E230);
    func_003068A8(temp_s0_13, &sp_.sp70, 0x316E10);
    temp_s1_8 = sp_.sp70 - 0x10;
    temp_v0_8 = M2C_FIELD(temp_s1_8, s32 *, 8) - 1;
    M2C_FIELD(temp_s1_8, s32 *, 8) = temp_v0_8;
    if (temp_v0_8 == 0) {
        temp_s0_14 = M2C_FIELD(temp_s1_8, s32 *, 4);
        func_00326798(temp_s1_8, temp_s0_14 + 0x10, 4, *func_005C11A8());
    }
    temp_s1_9 = sp_.sp10;
    func_00317C80(&sp_.sp80);
    func_00306638(&sp_.sp70, temp_s1_9, &sp_.sp80);
    func_00323B60(&sp_.sp70, 2);
    func_003041B8(&sp_.sp80, 2);
    func_003041A0(arg0, &sp_.sp10);
    func_00312318(&sp_.sp60, 2);
    func_00312318(&sp_.sp30, 2);
    func_002ED5C0(&sp_.sp20, 2);
    func_003041B8(&sp_.sp10, 2);
    func_002EA590(((s8 *)&sp_), 2);
    return arg0;
}
