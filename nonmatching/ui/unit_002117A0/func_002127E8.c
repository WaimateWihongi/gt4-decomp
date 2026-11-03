/* NON_MATCHING: functional draft, 129 of 158 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_002550A0(void **, M2C_UNK *);          /* extern */
M2C_UNK func_002550B8(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_002556B0(M2C_UNK *);                   /* extern */
s32 func_00305570();                  /* extern */
M2C_UNK func_0030ADA0(void *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00326798(void *, s32, M2C_UNK, s32);   /* extern */
M2C_UNK func_0057F260(s32);                         /* extern */
s32 *func_005C11A8();                               /* extern */
void *func_005C2560(void *);                        /* extern */
M2C_UNK func_005C2630(void **, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_005D8BE8(M2C_UNK *, s32, void **);     /* extern */

void func_002127E8(s32 arg0, void **arg1) {
    s32 sp0;
    struct StackFrame_002127E8 { s8 pad0[0x10]; void * sp10; s8 pad1[0xC]; s32 sp20; s8 pad2[0xC]; void * sp30; s32 sp34; s8 pad3[0x8]; } sp_;
    M2C_UNK (*temp_a2)(void *, void **, M2C_UNK);
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    void *temp_a0;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s1_3;
    void *temp_s1_4;
    void *temp_s3;
    void *temp_v0;
    void *var_v1;
    void *var_v1_2;
    void *var_v1_3;

    func_002556B0(((s8 *)&sp_));
    func_0030ADA0(*arg1, ((s8 *)&sp_), 0x82B4E0, 0);
    if (sp0 != NULL) {
        temp_v0 = M2C_FIELD(sp0, void **, 4);
        temp_s1 = temp_v0 + 0x190;
        temp_s3 = sp0 + M2C_FIELD(temp_v0, s16 *, 0x190);
        temp_s0 = func_00305570(*arg1, sp0);
        if (M2C_FIELD((void *)0x659FA8, s32 *, 0xC) == 0) {
            var_v1 = (void *)0x659FA8 + 0x10;
            M2C_FIELD((void *)0x659FA8, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659FA8, s32 *, 8) + 1);
        } else {
            var_v1 = func_005C2560((void *)0x659FA8);
        }
        sp_.sp10 = var_v1;
        func_0057F260(temp_s0);
        func_005C2630(&sp_.sp10, 0, -1, temp_s0);
        temp_a2 = M2C_FIELD(temp_s1, M2C_UNK (**)(void *, void **, M2C_UNK), 4);
        temp_a2(temp_s3, &sp_.sp10, temp_a2);
        temp_s1_2 = sp_.sp10 - 0x10;
        temp_v0_2 = M2C_FIELD(temp_s1_2, s32 *, 8) - 1;
        M2C_FIELD(temp_s1_2, s32 *, 8) = temp_v0_2;
        if (temp_v0_2 == 0) {
            temp_s0_2 = M2C_FIELD(temp_s1_2, s32 *, 4);
            func_00326798(temp_s1_2, temp_s0_2 + 0x10, 4, *func_005C11A8());
        }
        temp_s0_3 = func_00305570(sp0);
        if (M2C_FIELD((void *)0x659FA8, s32 *, 0xC) == 0) {
            var_v1_2 = (void *)0x659FA8 + 0x10;
            M2C_FIELD((void *)0x659FA8, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659FA8, s32 *, 8) + 1);
        } else {
            var_v1_2 = func_005C2560((void *)0x659FA8);
        }
        sp_.sp10 = var_v1_2;
        func_0057F260(temp_s0_3);
        func_005C2630(&sp_.sp10, 0, -1, temp_s0_3);
        var_v1_3 = sp_.sp10;
        temp_a0 = var_v1_3 - 0x10;
        if (M2C_FIELD(temp_a0, s32 *, 0xC) == 0) {
            M2C_FIELD(temp_a0, s32 *, 8) = (s32) (M2C_FIELD(temp_a0, s32 *, 8) + 1);
        } else {
            var_v1_3 = func_005C2560(temp_a0);
        }
        sp_.sp30 = var_v1_3;
        func_002550A0(&sp_.sp30 + 4, ((s8 *)&sp_));
        func_005D8BE8(&sp_.sp20, arg0 + 0x10, &sp_.sp30);
        func_002550B8(&sp_.sp34, 2);
        temp_s1_3 = sp_.sp30 - 0x10;
        temp_v0_3 = M2C_FIELD(temp_s1_3, s32 *, 8) - 1;
        M2C_FIELD(temp_s1_3, s32 *, 8) = temp_v0_3;
        if (temp_v0_3 == 0) {
            temp_s0_4 = M2C_FIELD(temp_s1_3, s32 *, 4);
            func_00326798(temp_s1_3, temp_s0_4 + 0x10, 4, *func_005C11A8());
        }
        temp_s1_4 = sp_.sp10 - 0x10;
        temp_v0_4 = M2C_FIELD(temp_s1_4, s32 *, 8) - 1;
        M2C_FIELD(temp_s1_4, s32 *, 8) = temp_v0_4;
        if (temp_v0_4 == 0) {
            temp_s0_5 = M2C_FIELD(temp_s1_4, s32 *, 4);
            func_00326798(temp_s1_4, temp_s0_5 + 0x10, 4, *func_005C11A8());
        }
    }
    func_002550B8(((s8 *)&sp_), 2);
}
