/* NON_MATCHING: functional draft, 171 of 172 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00486FF8(s32, f32 *, f32 *);           /* extern */
M2C_UNK func_00487830(s32, f32 *, M2C_UNK);         /* extern */
M2C_UNK func_004878C0(s32, f32 *, f32);             /* extern */
M2C_UNK func_004887D8(s32, f32 *, f32 *);           /* extern */
M2C_UNK func_00488948(s32, f32 *, f32 *);           /* extern */
M2C_UNK func_0048D4C0();         /* extern */
f32 func_0059D2A0(f32);                             /* extern */

void func_00488B98(s32 arg0, f32 *arg1, M2C_UNK arg2, f32 *arg3, f32 *arg4) {
    s32 sp34;
    s32 sp38;
    s32 sp24;
    s32 sp28;
    struct StackFrame_00488B98 { f32 sp0; f32 sp4; f32 sp8; s8 pad0[0x4]; f32 sp10; f32 sp14; f32 sp18; s8 pad1[0x4]; f32 sp20; s8 pad2[0xC]; f32 sp30; s8 pad3[0xC]; } sp_;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 var_f20;

    func_0048D4C0(((s8 *)&sp_));
    func_0048D4C0(&sp_.sp10, arg3, arg4);
    temp_f0 = M2C_RSQRTS(0x1.0000000000000p+0f, (sp_.sp0 * sp_.sp0) + (sp_.sp4 * sp_.sp4) + (sp_.sp8 * sp_.sp8));
    temp_f4 = sp_.sp4 * temp_f0;
    sp_.sp8 *= temp_f0;
    sp_.sp0 *= temp_f0;
    sp_.sp4 = temp_f4;
    temp_f1 = sp_.sp10;
    temp_f3 = M2C_RSQRTS(0x1.0000000000000p+0f, (temp_f1 * temp_f1) + (sp_.sp14 * sp_.sp14) + (sp_.sp18 * sp_.sp18));
    sp_.sp10 = temp_f1 * temp_f3;
    temp_f2 = sp_.sp14 * temp_f3;
    temp_f1_2 = sp_.sp18 * temp_f3;
    sp_.sp14 = temp_f2;
    sp_.sp18 = temp_f1_2;
    if (((sp_.sp0 * sp_.sp10) + (temp_f4 * temp_f2) + (sp_.sp8 * temp_f1_2)) > -0x1.0000000000000p-1f) {
        func_004887D8(arg0, ((s8 *)&sp_), &sp_.sp10);
    } else {
        func_00487830(arg0, arg1, 0x3FC90FDA);
        func_00486FF8(arg0, &sp_.sp20, ((s8 *)&sp_));
        func_00488948(arg0, &sp_.sp20, &sp_.sp10);
    }
    func_00486FF8(arg0, &sp_.sp30, arg1);
    var_f20 = 0x1.921fb40000000p+0f - func_0059D2A0(M2C_MINS(M2C_MAXS((sp_.sp30 * M2C_FIELD(arg3, f32 *, 0)) + (sp34 * M2C_FIELD(arg3, f32 *, 4)) + (sp38 * M2C_FIELD(arg3, f32 *, 8)), -0x1.0000000000000p+0f), 0x1.0000000000000p+0f));
    func_0048D4C0(&sp_.sp20, &sp_.sp30, arg3);
    if (((sp_.sp10 * sp_.sp20) + (sp_.sp14 * sp24) + (sp_.sp18 * sp28)) < 0x0.0p+0f) {
        var_f20 = 0x1.921fb40000000p+2f - var_f20;
    }
    func_004878C0(arg0, &sp_.sp10, var_f20);
}
