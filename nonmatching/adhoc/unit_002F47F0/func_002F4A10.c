/* NON_MATCHING: functional draft, 186 of 198 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_002F4900(s32, void *);                 /* extern */
M2C_UNK func_002F4988(s32);                         /* extern */
M2C_UNK func_002FB1C0(void **, M2C_UNK);            /* extern */
M2C_UNK func_002FB218(void **, u8);                 /* extern */
M2C_UNK func_002FF7E8(s32, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_002FF998(s32, u32 *);                  /* extern */
M2C_UNK func_002FFA40(s32, void *);                 /* extern */
void *func_003166B8(void *);                        /* extern */
void *func_00326750(s32, M2C_UNK, s32);             /* extern */
M2C_UNK func_00326798(void *, s32, M2C_UNK, s32);   /* extern */
M2C_UNK func_005A47D4(void *, void *, s32);         /* extern */
s32 *func_005C11A8();                               /* extern */
void *func_005C2560(M2C_UNK);                       /* extern */
M2C_UNK func_005EDE90(void *, s32, s32, void **);   /* extern */
s32 *func_005EE2B0();                            /* extern */

void func_002F4A10(s32 arg0, s32 arg1) {
    s32 sp44;
    struct StackFrame_002F4A10 { void * sp0; s8 pad0[0xC]; u32 sp10; s8 pad1[0xC]; void * sp20; s8 pad2[0xC]; void * sp30; s8 pad3[0xC]; s32 sp40; s8 pad4[0xC]; } sp_;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_s0_3;
    s32 temp_s0_5;
    s32 temp_s3_3;
    s32 temp_s6;
    s32 temp_v0;
    s32 temp_v0_5;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s1_2;
    void **temp_s0;
    void *temp_a2;
    void *temp_s0_2;
    void *temp_s0_4;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s3;
    void *temp_s3_2;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v1_2;
    void *var_v0;
    void *var_v1;

    if (M2C_FIELD((void *)0x659FA8, s32 *, 0xC) != 0) {
        var_v1 = func_005C2560(0x659FA8);
    } else {
        var_v1 = (void *)0x659FA8 + 0x10;
        M2C_FIELD((void *)0x659FA8, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659FA8, s32 *, 8) + 1);
    }
    sp_.sp0 = var_v1;
    func_002FFA40(arg1, ((s8 *)&sp_));
    temp_s3 = arg0 + 0x10;
    func_002FF998(arg1, &sp_.sp10);
    temp_a1 = M2C_FIELD(temp_s3, s32 *, 8);
    temp_a0 = M2C_FIELD(temp_s3, s32 *, 4);
    temp_v1 = (s32) (temp_a1 - temp_a0) >> 2;
    sp_.sp20 = NULL;
    if (sp_.sp10 < (u32) temp_v1) {
        temp_v1_2 = temp_a0 + (sp_.sp10 * 4);
        sp_.sp30 = temp_v1_2;
        if (temp_v1_2 != temp_a1) {
            var_v0 = temp_v1_2 + 4;
            do {
                var_v0 += 4;
            } while (var_v0 != temp_a1);
        }
        M2C_FIELD(temp_s3, s32 *, 8) = (s32) ((s32) M2C_FIELD(temp_s3, s32 *, 8) - (s32) (((s32) temp_a1 - (s32) (temp_v1_2))));
    } else {
        func_005EDE90(temp_s3, temp_a1, sp_.sp10 - temp_v1, &sp_.sp20);
    }
    var_s1 = 0;
    if ((s32) sp_.sp10 > 0) {
loop_12:
        func_002FFA40(arg1, ((s8 *)&sp_));
        temp_v0 = var_s1 * 4;
        var_s1 += 1;
        temp_s0 = M2C_FIELD(temp_s3, s32 *, 4) + temp_v0;
        temp_v0_2 = func_003166B8(((s8 *)&sp_));
        sp_.sp20 = temp_v0_2;
        if (temp_s0 != &sp_.sp20) {
            *temp_s0 = temp_v0_2;
        }
        if (var_s1 < (s32) sp_.sp10) {
            goto loop_12;
        }
    }
    func_002FF998(arg1, arg0 + 0x24);
    temp_s1 = arg0 + 0x2C;
    func_002FF998(arg1, arg0 + 0x28);
    func_002FF998(arg1, &sp_.sp10);
    func_002F4988(arg0);
    temp_s3_2 = M2C_FIELD(temp_s1, void **, 4);
    if ((u32) ((s32) (M2C_FIELD(temp_s1, void **, 0xC) - temp_s3_2) >> 2) < sp_.sp10) {
        temp_s0_2 = M2C_FIELD(temp_s1, void **, 8);
        temp_s6 = sp_.sp10 * 4;
        temp_s0_3 = temp_s0_2 - temp_s3_2;
        temp_v0_3 = func_00326750(temp_s6, 4, *func_005EE2B0(sp_.sp10));
        sp_.sp30 = temp_v0_3;
        func_005A47D4(temp_v0_3, temp_s3_2, temp_s0_3);
        temp_s0_4 = M2C_FIELD(temp_s1, void **, 4);
        sp_.sp30 = temp_s0_4;
        temp_s3_3 = (s32) (M2C_FIELD(temp_s1, void **, 0xC) - temp_s0_4) >> 2;
        if (temp_s0_4 != NULL) {
            func_00326798(temp_s0_4, temp_s3_3 * 4, 4, *func_005EE2B0());
        }
        M2C_FIELD(temp_s1, void **, 0xC) = (void *) (temp_v0_3 + temp_s6);
        M2C_FIELD(temp_s1, void **, 8) = (void *) (temp_v0_3 + ((temp_s0_3 >> 2) * 4));
        M2C_FIELD(temp_s1, void **, 4) = temp_v0_3;
    }
    var_s1_2 = 0;
    if ((s32) sp_.sp10 > 0) {
        do {
            var_s1_2 += 1;
            func_002FF7E8(arg1, &sp_.sp40, 5);
            func_002FB218(&sp_.sp20, sp44);
            temp_a2 = sp_.sp20;
            temp_v0_4 = M2C_FIELD(temp_a2, void **, 4);
            M2C_FIELD((temp_v0_4 + 0x50), M2C_UNK (**)(void *, s32, void *), 4)(temp_a2 + M2C_FIELD(temp_v0_4, s16 *, 0x50), arg1, temp_a2);
            func_002F4900(arg0, sp_.sp20);
            func_002FB1C0(&sp_.sp20, 2);
        } while (var_s1_2 < (s32) sp_.sp10);
    }
    temp_s1_2 = sp_.sp0 - 0x10;
    temp_v0_5 = M2C_FIELD(temp_s1_2, s32 *, 8) - 1;
    M2C_FIELD(temp_s1_2, s32 *, 8) = temp_v0_5;
    if (temp_v0_5 == 0) {
        temp_s0_5 = M2C_FIELD(temp_s1_2, s32 *, 4);
        func_00326798(temp_s1_2, temp_s0_5 + 0x10, 4, *func_005C11A8());
    }
}
