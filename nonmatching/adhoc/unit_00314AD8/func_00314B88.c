/* NON_MATCHING: functional draft, 142 of 170 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

char * func_00314AD8(void *);
s32 func_0057F260(const char *);
char * func_005A6DC8(const char *, const char *);
void * func_005C11A8(void);
char * func_005C2560(void *);
void func_00314B88(void *arg0, void *arg1, void *arg2) {
    s32 sp0;
    struct StackFrame_00314B88 { s8 pad0[0x10]; s8 * sp10; s8 pad1[0xF]; s32 sp20; s8 pad2[0xC]; s32 sp30; s8 pad3[0xC]; s32 sp40; s8 pad4[0xC]; s32 sp50; s8 pad5[0xC]; void * sp60; s8 * sp64; s8 pad6[0x3]; s32 sp68; s8 pad7[0x4]; } sp_;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s8 *temp_a3;
    s8 *temp_s1;
    s8 *temp_s1_2;
    s8 *temp_v1;
    s8 *var_s2;
    s8 *var_s3;
    s8 *var_v1;
    s8 *var_v1_2;

    sp_.sp60 = arg0;
    func_002EFBF0(((s8 *)&sp_));
    temp_v1 = *(s32 *)arg2;
    temp_v0 = M2C_FIELD(temp_v1, s32 *, -0x10);
    if (temp_v0 == 0) {
        sp_.sp64 = (s8 *)0x69E1B0;
    } else {
        *(temp_v1 + temp_v0) = 0;
        sp_.sp64 = *(s32 *)arg2;
    }
    sp_.sp68 = M2C_FIELD(*(s32 *)arg2, s32 *, -0x10);
    var_s3 = func_00314AD8(arg1);
    var_s2 = func_005A6DC8(var_s3, sp_.sp64);
    if (var_s2 != NULL) {
        do {
            if (M2C_FIELD((void *)0x659FA8, s32 *, 0xC) == 0) {
                var_v1 = (void *)0x659FA8 + 0x10;
                M2C_FIELD((void *)0x659FA8, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659FA8, s32 *, 8) + 1);
            } else {
                var_v1 = func_005C2560((void *)0x659FA8);
            }
            sp_.sp10 = var_v1;
            temp_a3 = var_s3;
            var_s3 = &var_s2[sp_.sp68];
            func_005C5028(&sp_.sp10, var_v1, &var_v1[M2C_FIELD(var_v1, s32 *, -0x10)], temp_a3, var_s2);
            func_00314B20(&sp_.sp30, &sp_.sp10);
            func_002EEEB0(&sp_.sp20, sp0, &sp_.sp30);
            func_00309378(&sp_.sp20, 2);
            func_00312318(&sp_.sp30, 2);
            var_s2 = func_005A6DC8(var_s3, sp_.sp64);
            temp_s1 = sp_.sp10 - 0x10;
            temp_v0_2 = M2C_FIELD(temp_s1, s32 *, 8) - 1;
            M2C_FIELD(temp_s1, s32 *, 8) = temp_v0_2;
            if (temp_v0_2 == 0) {
                temp_s0 = M2C_FIELD(temp_s1, s32 *, 4);
                func_00326798(temp_s1, temp_s0 + 0x10, 4, *(s32 *)func_005C11A8());
            }
        } while (var_s2 != NULL);
    }
    if (M2C_FIELD((void *)0x659FA8, s32 *, 0xC) == 0) {
        var_v1_2 = (void *)0x659FA8 + 0x10;
        M2C_FIELD((void *)0x659FA8, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659FA8, s32 *, 8) + 1);
    } else {
        var_v1_2 = func_005C2560((void *)0x659FA8);
    }
    sp_.sp10 = var_v1_2;
    func_005C2630(&sp_.sp10, 0U, -1U, var_s3, func_0057F260(var_s3));
    func_00314B20(&sp_.sp50, &sp_.sp10);
    func_002EEEB0(&sp_.sp40, sp0, &sp_.sp50);
    func_00309378(&sp_.sp40, 2);
    func_00312318(&sp_.sp50, 2);
    func_002ED5A8(sp_.sp60, ((s8 *)&sp_));
    temp_s1_2 = sp_.sp10 - 0x10;
    temp_v0_3 = M2C_FIELD(temp_s1_2, s32 *, 8) - 1;
    M2C_FIELD(temp_s1_2, s32 *, 8) = temp_v0_3;
    if (temp_v0_3 == 0) {
        temp_s0_2 = M2C_FIELD(temp_s1_2, s32 *, 4);
        func_00326798(temp_s1_2, temp_s0_2 + 0x10, 4, *(s32 *)func_005C11A8());
    }
    func_002ED5C0(((s8 *)&sp_), 2);
}
