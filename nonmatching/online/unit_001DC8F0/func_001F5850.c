/* NON_MATCHING: functional draft, 162 of 174 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_001F1368(s32);                             /* extern */
M2C_UNK func_00215298(M2C_UNK);                     /* extern */
M2C_UNK func_002ED590(s32, s32 *);                  /* extern */
M2C_UNK func_002ED5A8(s32, s32 *);                  /* extern */
M2C_UNK func_002ED5C0(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_002EEEB0(M2C_UNK *, s32, s32 *);       /* extern */
M2C_UNK func_002EFBF0(s32 *);                       /* extern */
M2C_UNK func_002FC870(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_002FE278(s32 *, s32);                  /* extern */
M2C_UNK func_00309378(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_00312318(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_00314B20(s32 *, s32 *);                /* extern */
M2C_UNK func_00326798(void *, s32, M2C_UNK, s32);   /* extern */
s32 func_004F4C70(M2C_UNK);                         /* extern */
void *func_004F4EB8(s32, s32);                      /* extern */
M2C_UNK func_0057F260(void *);                      /* extern */
s32 *func_005C11A8();                               /* extern */
s32 func_005C2560(M2C_UNK);                         /* extern */
M2C_UNK func_005C2630(s32 *, M2C_UNK, M2C_UNK, void *); /* extern */

s32 func_001F5850(s32 arg0, s32 arg1) {
    s32 sp0;
    struct StackFrame_001F5850 { s8 pad0[0x10]; s32 sp10; s8 pad1[0xC]; s32 sp20; s8 pad2[0xC]; s32 sp30; s8 pad3[0xC]; s32 sp40; s8 pad4[0xC]; s32 sp50; s8 pad5[0xC]; s32 sp60; s8 pad6[0xC]; s32 sp70; s32 sp74; s8 pad7[0x8]; } sp_;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s7;
    s32 temp_v0;
    s32 var_s6;
    s32 var_v1;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s2;

    sp_.sp74 = arg0;
loop_2:
    if (func_004F4C70(0x645570) == 0) {
        func_00215298(1);
        goto loop_2;
    }
    if (func_001F1368(arg1) == 0) {
        sp_.sp70 = 0;
        func_002ED590(sp_.sp74, &sp_.sp70);
    } else {
        var_s6 = 0;
        func_002EFBF0(((s8 *)&sp_));
        temp_s7 = M2C_FIELD(M2C_FIELD((void *)0x645570, void **, 0x5A8), s32 *, 0x5B30);
        if (temp_s7 > 0) {
            do {
                temp_a1 = var_s6;
                var_s6 += 1;
                temp_s2 = func_004F4EB8(0x645570, temp_a1);
                func_002EFBF0(&sp_.sp10);
                temp_s0 = sp_.sp10;
                func_002FE278(&sp_.sp30, M2C_FIELD(temp_s2, s32 *, 0x1C));
                temp_s1 = temp_s2 + 0x20;
                func_002EEEB0(&sp_.sp20, temp_s0, &sp_.sp30);
                func_00309378(&sp_.sp20, 2);
                func_002FC870(&sp_.sp30, 2);
                var_v1 = 0x659FB8;
                temp_s0_2 = sp_.sp10;
                if (M2C_FIELD((void *)0x659FA8, s32 *, 0xC) != 0) {
                    var_v1 = func_005C2560(0x659FA8);
                } else {
                    M2C_FIELD((void *)0x659FA8, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659FA8, s32 *, 8) + 1);
                }
                sp_.sp50 = var_v1;
                func_0057F260(temp_s1);
                func_005C2630(&sp_.sp50, 0, -1, temp_s1);
                func_00314B20(&sp_.sp40, &sp_.sp50);
                func_002EEEB0(&sp_.sp20, temp_s0_2, &sp_.sp40);
                func_00309378(&sp_.sp20, 2);
                func_00312318(&sp_.sp40, 2);
                temp_s1_2 = sp_.sp50 - 0x10;
                temp_v0 = M2C_FIELD(temp_s1_2, s32 *, 8) - 1;
                M2C_FIELD(temp_s1_2, s32 *, 8) = temp_v0;
                if (temp_v0 == 0) {
                    temp_s0_3 = M2C_FIELD(temp_s1_2, s32 *, 4);
                    func_00326798(temp_s1_2, temp_s0_3 + 0x10, 4, *func_005C11A8());
                }
                temp_s0_4 = sp_.sp10;
                func_002FE278(&sp_.sp60, M2C_FIELD(temp_s2, s32 *, 0x40));
                func_002EEEB0(&sp_.sp20, temp_s0_4, &sp_.sp60);
                func_00309378(&sp_.sp20, 2);
                func_002FC870(&sp_.sp60, 2);
                func_002EEEB0(&sp_.sp20, sp0, &sp_.sp10);
                func_00309378(&sp_.sp20, 2);
                func_002ED5C0(&sp_.sp10, 2);
            } while (var_s6 < temp_s7);
        }
        func_002ED5A8(sp_.sp74, ((s8 *)&sp_));
        func_002ED5C0(((s8 *)&sp_), 2);
    }
    return sp_.sp74;
}
