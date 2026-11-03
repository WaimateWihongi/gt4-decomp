/* NON_MATCHING: functional draft, 97 of 105 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00326798(void *, s32, M2C_UNK, s32);   /* extern */
M2C_UNK func_005769F0(M2C_UNK);                     /* extern */
M2C_UNK func_00576A28(M2C_UNK);                     /* extern */
s32 func_0057F260(void *);                          /* extern */
s32 *func_005C11A8();                               /* extern */
void *func_005C2560(void *);                        /* extern */
M2C_UNK func_005C2630(void **, M2C_UNK, M2C_UNK, void *, s32); /* extern */

void func_002B7310(void *arg0, void **arg1) {
    s32 sp0;
    struct StackFrame_002B7310 { s8 pad0[0x10]; } sp_;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    void **temp_s2;
    void *temp_a0;
    void *temp_s0_3;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_v1;
    void *var_v1;
    void *var_v1_2;

    func_005769F0(0x8386A8);
    temp_v1 = *arg1;
    temp_v0 = M2C_FIELD(temp_v1, s32 *, -0x10);
    temp_s2 = arg0 + 0xC;
    if (temp_v0 == 0) {
        if (M2C_FIELD((void *)0x659FA8, s32 *, 0xC) != 0) {
            var_v1 = func_005C2560((void *)0x659FA8);
        } else {
            var_v1 = (void *)0x659FA8 + 0x10;
            M2C_FIELD((void *)0x659FA8, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659FA8, s32 *, 8) + 1);
        }
        *((s8 *)&sp_) = var_v1;
        func_005C2630(((s8 *)&sp_), 0, -1, (void *)0x69C118, func_0057F260((void *)0x69C118));
        if (((s8 *)&sp_) != temp_s2) {
            temp_s1 = M2C_FIELD(arg0, void **, 0xC) - 0x10;
            temp_v0_2 = M2C_FIELD(temp_s1, s32 *, 8) - 1;
            M2C_FIELD(temp_s1, s32 *, 8) = temp_v0_2;
            if (temp_v0_2 == 0) {
                temp_s0 = M2C_FIELD(temp_s1, s32 *, 4);
                func_00326798(temp_s1, temp_s0 + 0x10, 4, *func_005C11A8());
            }
            var_v1_2 = sp0;
            temp_a0 = var_v1_2 - 0x10;
            if (M2C_FIELD(temp_a0, s32 *, 0xC) == 0) {
                M2C_FIELD(temp_a0, s32 *, 8) = (s32) (M2C_FIELD(temp_a0, s32 *, 8) + 1);
            } else {
                var_v1_2 = func_005C2560(temp_a0);
            }
            M2C_FIELD(arg0, void **, 0xC) = var_v1_2;
        }
        temp_s1_2 = sp0 - 0x10;
        temp_v0_3 = M2C_FIELD(temp_s1_2, s32 *, 8) - 1;
        M2C_FIELD(temp_s1_2, s32 *, 8) = temp_v0_3;
        if (temp_v0_3 == 0) {
            temp_s0_2 = M2C_FIELD(temp_s1_2, s32 *, 4);
            func_00326798(temp_s1_2, temp_s0_2 + 0x10, 4, *func_005C11A8());
        }
    } else {
        *(s32 *)(temp_v1 + temp_v0) = 0;
        temp_s0_3 = *arg1;
        func_005C2630(temp_s2, 0, -1, temp_s0_3, func_0057F260(temp_s0_3));
    }
    func_00576A28(0x8386A8);
}
