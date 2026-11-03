/* NON_MATCHING: functional draft, 133 of 138 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void *func_0038DC00(void **);                       /* extern */
M2C_UNK func_00421D30(void *, void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00421E50(f32 *, void *, f32 *);        /* extern */
M2C_UNK func_00487830(void *, f32 *, f32);          /* extern */

void func_003B1FA8(void *arg0, void **arg1, f32 *arg2, f32 *arg3, f32 *arg4) {
    struct StackFrame_003B1FA8 { s8 pad0[0x10]; f32 sp10; f32 sp14; f32 sp18; s8 pad1[0x4]; f32 sp20; s8 pad2[0xC]; f32 sp30; s8 pad3[0xC]; f32 sp40; f32 sp44; f32 sp48; s8 pad4[0x4]; } sp_;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 temp_f22;
    f32 temp_f22_2;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;

    temp_s1 = func_0038DC00(arg1);
    temp_v0 = *arg1;
    temp_v0_2 = *arg1;
    temp_f22 = M2C_FIELD((temp_v0 + 0x70), f32 (**)(void *, M2C_UNK), 4)(arg1 + M2C_FIELD(temp_v0, s16 *, 0x70), 0);
    temp_v0_3 = *arg1;
    temp_f21 = M2C_FIELD((temp_v0_2 + 0x78), f32 (**)(void *, M2C_UNK), 4)(arg1 + M2C_FIELD(temp_v0_2, s16 *, 0x78), 0);
    temp_f0 = M2C_FIELD((temp_v0_3 + 0x80), f32 (**)(void *, M2C_UNK), 4)(arg1 + M2C_FIELD(temp_v0_3, s16 *, 0x80), 0);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xC);
    sp_.sp10 = temp_f22;
    sp_.sp14 = temp_f21;
    sp_.sp20 = temp_f1;
    sp_.sp18 = temp_f0;
    func_00487830(((s8 *)&sp_), &sp_.sp10, temp_f1);
    func_00421D30(((s8 *)&sp_), arg0 + 0x14, 0, 0, 0);
    temp_v0_4 = *arg1;
    temp_v0_5 = *arg1;
    temp_f22_2 = -M2C_FIELD((temp_v0_4 + 0x70), f32 (**)(void *, M2C_UNK), 4)(arg1 + M2C_FIELD(temp_v0_4, s16 *, 0x70), 0);
    temp_v0_6 = *arg1;
    temp_f21_2 = M2C_FIELD((temp_v0_5 + 0x78), f32 (**)(void *, M2C_UNK), 4)(arg1 + M2C_FIELD(temp_v0_5, s16 *, 0x78), 0);
    temp_f0_2 = M2C_FIELD((temp_v0_6 + 0x80), f32 (**)(void *, M2C_UNK), 4)(arg1 + M2C_FIELD(temp_v0_6, s16 *, 0x80), 0);
    sp_.sp10 = temp_f22_2;
    temp_f1_2 = M2C_FIELD(arg0, f32 *, 0xC);
    sp_.sp14 = temp_f21_2;
    sp_.sp30 = temp_f1_2;
    sp_.sp18 = -temp_f0_2;
    func_00487830(((s8 *)&sp_), &sp_.sp10, temp_f1_2);
    sp_.sp40 = -M2C_FIELD(temp_s1, f32 *, 0x58);
    sp_.sp44 = M2C_FIELD(temp_s1, f32 *, 0x5C);
    sp_.sp48 = -M2C_FIELD(temp_s1, f32 *, 0x60);
    func_00421E50(&sp_.sp10, ((s8 *)&sp_), &sp_.sp40);
    *arg2 = (sp_.sp10 + M2C_FIELD(temp_s1, f32 *, 0x58)) * M2C_FIELD(temp_s1, f32 *, 0x64);
    *arg3 = (sp_.sp14 - M2C_FIELD(temp_s1, f32 *, 0x5C)) * M2C_FIELD(temp_s1, f32 *, 0x64);
    *arg4 = (sp_.sp18 + M2C_FIELD(temp_s1, f32 *, 0x60)) * M2C_FIELD(temp_s1, f32 *, 0x64);
    M2C_FIELD(arg0, f32 *, 0xC) = 0x0.0p+0f;
    M2C_FIELD(arg0, s32 *, 8) = 1;
}
