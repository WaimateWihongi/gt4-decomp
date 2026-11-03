/* NON_MATCHING: functional draft, 196 of 203 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00230EC0(s32, void *, f32 *);          /* extern */
s32 func_002319C0(s32);                             /* extern */
s32 func_00233E08(s32);                             /* extern */
M2C_UNK func_00250CE0(s32, M2C_UNK *);              /* extern */
s32 func_00251098(s32, s32, s32, M2C_UNK);          /* extern */
s32 func_002512D0(s32, s32, s32);                   /* extern */
M2C_UNK func_002512E8(s32, s32, s32, s32);          /* extern */
M2C_UNK func_0026BB40(void *, s32, s32);            /* extern */
M2C_UNK func_002A95E0(M2C_UNK *, void **);          /* extern */
M2C_UNK func_002AA7B0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_002AB508(M2C_UNK *, M2C_UNK);          /* extern */
void *func_00326750(); /* extern */

s32 func_00251300(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    struct StackFrame_00251300 { s8 pad0[0x4]; f32 sp4; s8 pad1[0x8]; s32 sp10; s8 pad2[0xC]; void * sp20; void * sp24; void * sp28; s32 sp2C; s32 sp30; s32 sp34; s8 pad3[0x8]; } sp_;
    s32 temp_a3;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a1;
    s32 var_s1;
    s32 var_v0;
    u8 temp_s2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;

    sp_.sp2C = arg3;
    var_s1 = 0;
    func_00230EC0(arg3, ((s8 *)&sp_), &sp_.sp4);
    temp_v0 = func_002319C0(sp_.sp2C);
    sp_.sp30 = temp_v0;
    temp_v0_2 = func_00251098(arg0, arg1, arg2, (func_00233E08(temp_v0) == 0) ? 4 : 8);
    sp_.sp34 = temp_v0_2;
    temp_a3 = func_002512D0(arg0, arg1, arg2);
    var_a1 = arg1 * 2;
    if (temp_v0_2 >= 0) {
        var_a0 = arg0 + 0xC;
        if ((temp_a3 >= 0) && (temp_v0_2 != temp_a3)) {
            temp_s3 = *(s32 *)(0x619280 + (temp_a3 * 4));
            temp_v0_3 = func_00326750(0x30, 4, 0x6997D8, temp_a3);
            func_0026BB40(temp_v0_3, sp_.sp2C, sp_.sp30);
            M2C_FIELD(temp_v0_3, s32 *, 0x20) = temp_s3;
            M2C_FIELD(temp_v0_3, s32 *, 0x24) = (s32) (arg1 | 0x10);
            M2C_FIELD(temp_v0_3, f32 *, 0x28) = sp0;
            M2C_FIELD(temp_v0_3, f32 *, 0x2C) = sp_.sp4;
            M2C_FIELD(temp_v0_3, s32 *, 4) = 0x66D910;
            sp_.sp20 = temp_v0_3;
            var_s1 = 1;
            func_002A95E0(&sp_.sp10, &sp_.sp20);
            func_00250CE0(arg0, &sp_.sp10);
            func_002AB508(&sp_.sp10, 2);
            var_a1 = arg1 * 2;
            var_a0 = arg0 + 0xC;
            M2C_FIELD((arg2 + var_a1 + var_a0), s8 *, 0x70) = 1;
        }
        temp_s2 = M2C_FIELD((arg2 + var_a1 + var_a0), u8 *, 0x70);
        if (temp_s2 != 0) {
            temp_s4 = *(s32 *)(0x619280 + (sp_.sp34 * 4));
            temp_v0_4 = func_00326750(0x34, 4, 0x6997D8);
            func_0026BB40(temp_v0_4, sp_.sp2C, sp_.sp30);
            M2C_FIELD(temp_v0_4, s32 *, 0x20) = temp_s4;
            M2C_FIELD(temp_v0_4, s32 *, 0x24) = (s32) (arg1 | 0x10);
            M2C_FIELD(temp_v0_4, f32 *, 0x28) = sp0;
            M2C_FIELD(temp_v0_4, f32 *, 0x2C) = sp_.sp4;
            M2C_FIELD(temp_v0_4, s32 *, 4) = 0x66D768;
            var_s1 = 1;
            M2C_FIELD(temp_v0_4, s32 *, 0x30) = (s32) (temp_s2 >= 2U);
            sp_.sp24 = temp_v0_4;
            func_002A95E0(&sp_.sp10, &sp_.sp24);
            func_00250CE0(arg0, &sp_.sp10);
            func_002AA7B0(&sp_.sp10, 2);
            func_002512E8(arg0, arg1, arg2, sp_.sp34);
        }
        goto block_10;
    }
    var_v0 = 0;
    if (M2C_FIELD((arg2 + (arg1 * 2) + arg0), u8 *, 0x7C) == 0) {
        if (temp_a3 >= 0) {
            temp_s3_2 = *(s32 *)(0x619280 + (temp_a3 * 4));
            temp_v0_5 = func_00326750(0x30, 4, 0x6997D8, temp_a3);
            func_0026BB40(temp_v0_5, sp_.sp2C, sp_.sp30);
            M2C_FIELD(temp_v0_5, s32 *, 0x20) = temp_s3_2;
            M2C_FIELD(temp_v0_5, s32 *, 0x24) = (s32) (arg1 | 0x10);
            M2C_FIELD(temp_v0_5, f32 *, 0x28) = sp0;
            M2C_FIELD(temp_v0_5, f32 *, 0x2C) = sp_.sp4;
            M2C_FIELD(temp_v0_5, s32 *, 4) = 0x66D910;
            sp_.sp28 = temp_v0_5;
            var_s1 = 1;
            func_002A95E0(&sp_.sp10, &sp_.sp28);
            func_00250CE0(arg0, &sp_.sp10);
            func_002AB508(&sp_.sp10, 2);
            func_002512E8(arg0, arg1, arg2, sp_.sp34);
        }
block_10:
        var_v0 = var_s1;
    }
    return var_v0;
}
