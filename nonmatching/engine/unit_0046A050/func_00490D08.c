/* NON_MATCHING: functional draft, 140 of 142 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

f32 func_00490640(void *);                          /* extern */
M2C_UNK func_004906C8(void *, f32);                 /* extern */
f32 func_00490830(void *, s32, M2C_UNK);            /* extern */
M2C_UNK func_00490FC8(void *, f32, f32);            /* extern */
s32 func_00491AC0(void *);                          /* extern */
s32 func_004940E8(void *, s32, M2C_UNK, s32);       /* extern */
s32 func_0057F260(s32);                             /* extern */
M2C_UNK func_005A609C(s32, s32);                    /* extern */

void func_00490D08(void *arg0, s32 arg1) {
    struct StackFrame_00490D08 { s32 sp0; s8 pad0[0x2C]; } sp_;
    f32 temp_f20;
    s32 temp_a1;
    s32 temp_s3;
    s32 temp_sp;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_s5;

    temp_s5 = arg0 + 0x84;
    M2C_FIELD(temp_s5, f32 *, 0x10) = 0x0.0p+0f;
    M2C_FIELD(temp_s5, s32 *, 0xC) = -1;
    M2C_FIELD(temp_s5, s32 *, 0x18) = 1;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    sp_.sp0 = 0;
    M2C_FIELD(temp_s5, f32 *, 8) = 0x0.0p+0f;
    M2C_FIELD(temp_s5, s32 *, 4) = 0;
    M2C_FIELD(temp_s5, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s8 *, 0xE) * M2C_FIELD(arg0, f32 *, 0x28));
    temp_v0 = func_0057F260(arg1);
    temp_sp = ((s8 *)&sp_) - (((u32) (temp_v0 + 0x10) >> 4) * 0x10);
    func_005A609C(temp_sp, arg1);
    if (M2C_FIELD(arg0, s32 *, 0x84) != temp_v0) {
loop_2:
        M2C_FIELD(arg0, s32 *, 0x88) = 0;
        temp_s3 = temp_sp + M2C_FIELD(arg0, s32 *, 0x84);
        temp_v0_2 = func_00491AC0(M2C_FIELD(arg0, void **, 0x14));
        M2C_FIELD(arg0, s32 *, 0x90) = -1;
        M2C_FIELD(arg0, s32 *, 0x94) = 0;
        M2C_FIELD(arg0, s32 *, 0x98) = 0;
        M2C_FIELD(arg0, f32 *, 0x8C) = (f32) temp_v0_2;
        if (func_004940E8(arg0, 0x493408, 1, temp_s3) >= 0) {
            M2C_FIELD(arg0, s32 *, 0x90) = -1;
        } else if (M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x84) + arg1), s8 *, -1) != 0xA) {
            temp_f20 = (M2C_FIELD(arg0, f32 *, 0x5C) - M2C_FIELD(arg0, f32 *, 0x54)) - func_00490640(arg0);
            func_00490FC8(temp_s5, temp_f20, (f32) func_00491AC0(M2C_FIELD(arg0, void **, 0x14)));
        }
        M2C_FIELD(arg0, s32 *, 0x84) = M2C_FIELD(arg0, s32 *, 0x84);
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        if (func_004940E8(arg0, 0x4933E0, 0, temp_s3) < 0) {
loop_11:
            temp_a1 = M2C_FIELD(arg0, s32 *, 0x84);
            if ((temp_a1 < temp_v0) && (*(s32 *)(temp_sp + temp_a1) == 0x20)) {
                M2C_FIELD(arg0, s32 *, 0x84) = (s32) (temp_a1 + 1);
                goto loop_11;
            }
            M2C_FIELD(arg0, s32 *, 0x30) = 0;
            if ((M2C_FIELD(arg0, s32 *, 0x98) != 0) && (temp_a1 < temp_v0) && (*(s32 *)(temp_sp + temp_a1) == 0xA)) {
                M2C_FIELD(arg0, s32 *, 0x84) = (s32) (temp_a1 + 1);
            }
            func_004906C8(arg0, func_00490830(arg0, temp_a1, 0x20));
            M2C_FIELD(arg0, s32 *, 0x78) = 0;
        } else {
            sp_.sp0 = 1;
        }
        if (sp_.sp0 == 0) {
            if (M2C_FIELD(arg0, s32 *, 0x84) != temp_v0) {
                goto loop_2;
            }
        }
    }
}
