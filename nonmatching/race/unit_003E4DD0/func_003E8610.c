/* NON_MATCHING: functional draft, 46 of 63 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_003E8438(s32 *, void *, s32, s32, s32, M2C_UNK, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32); /* extern */
s32 func_003E8BA8();                                /* extern */
M2C_UNK func_004A5F00(f32 *, f32 *, f32);           /* extern */

void func_003E8610(s32 *arg0, void *arg1) {
    struct StackFrame_003E8610 { s8 pad0[0x30]; f32 sp30; f32 sp34; s8 pad1[0x8]; } sp_;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    s32 temp_s3;
    u8 temp_s1;
    void *temp_s0;

    temp_s0 = *arg0 + (M2C_FIELD(arg1, s32 *, 0xC) << 6);
    temp_s1 = M2C_FIELD(temp_s0, u8 *, 2);
    temp_s3 = func_003E8BA8();
    func_004A5F00(&sp_.sp30, &sp_.sp34, M2C_FIELD(temp_s0, f32 *, 0x14));
    temp_f6 = M2C_FIELD(temp_s0, f32 *, 8);
    temp_f5 = M2C_FIELD(arg1, f32 *, 0);
    temp_f4 = M2C_FIELD(arg1, f32 *, 4);
    temp_f1 = M2C_FIELD(arg1, f32 *, 8);
    temp_f2 = (sp_.sp30 + sp_.sp34) * temp_f6;
    temp_f0 = (sp_.sp34 - sp_.sp30) * temp_f6;
    func_003E8438(arg0, ((s8 *)&sp_), ((temp_s1 >> 6) << 5) + 0x6A3AB0, temp_s3, temp_s3, 4, temp_f5 + temp_f0, temp_f4 + temp_f2, temp_f1, temp_f5 - temp_f2, temp_f4 + temp_f0, temp_f1, temp_f5 + temp_f2, temp_f4 - temp_f0, temp_f1, temp_f5 - temp_f0, temp_f4 - temp_f2, temp_f1);
}
