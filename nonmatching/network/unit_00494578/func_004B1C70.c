/* NON_MATCHING: functional draft, 169 of 169 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_004AC430(s32, M2C_UNK);                    /* extern */
M2C_UNK func_004B16D8();                            /* extern */
M2C_UNK func_004B3840(void *, s32, s32);            /* extern */
s32 func_004B3BD8(s32, M2C_UNK);                    /* extern */
M2C_UNK func_004B3BE8(void *, s32, s32, s32);       /* extern */
M2C_UNK func_00548640(s32, s32, s32, M2C_UNK);      /* extern */
void *func_00549130(s32, s32, M2C_UNK *);           /* extern */
s32 func_00550D28(s32, M2C_UNK, M2C_UNK, void *);   /* extern */
M2C_UNK func_00550D88(s32, s32, s32);               /* extern */
M2C_UNK func_00550E90(s32);                         /* extern */
M2C_UNK func_00577F80();                            /* extern */
s32 func_00578CB0(s32);                             /* extern */
s32 func_0057F260(s32);                             /* extern */
M2C_UNK func_005A4724(void *, s32, s32);            /* extern */

void func_004B1C70(void *arg0) {
    struct StackFrame_004B1C70 { s8 pad0[0x3F]; s32 sp3F; s8 pad1[0x3D]; s32 sp80; s8 pad2[0x2C]; } sp_;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2_2;
    s32 temp_s2_3;
    s32 temp_s4;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    void *temp_s2;
    void *temp_s3;
    void *temp_sp;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *var_a0;

    func_004B16D8();
    if (M2C_FIELD(arg0, s32 *, 0xB0) != 0) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 0xB4);
        temp_s4 = (s32) &sp_.sp3F & ~0x3F;
loop_3:
        temp_v0 = func_00549130(temp_s0, M2C_FIELD(arg0, s32 *, 0xEC), &sp_.sp80);
        if (temp_v0 == NULL) {
            func_00577F80();
            goto loop_3;
        }
        temp_s2 = arg0 + 0xC4;
        temp_a1 = M2C_UNALIGNED32(M2C_FIELD(temp_v0, M2C_UNK *, 2)) + M2C_FIELD(arg0, s32 *, 0xBC) + M2C_FIELD(arg0, s32 *, 0xEC);
        M2C_FIELD(arg0, s32 *, 0xB8) = temp_a1;
        func_00548640(temp_s4, temp_a1, 0x40, 1);
        temp_s0_2 = (M2C_FIELD(temp_s4, s32 *, 8) + 0x3F) & ~0x3F;
        temp_v0_2 = func_004AC430(temp_s0_2, 1);
        func_00548640(temp_v0_2, M2C_FIELD(arg0, s32 *, 0xB8), temp_s0_2, 1);
        func_004B3840(temp_s2, temp_v0_2, temp_s0_2);
        temp_v1 = M2C_FIELD(arg0, void **, 0xC4);
        temp_s1 = M2C_FIELD((temp_v1 + 0x10), s32 (**)(void *), 4)(temp_s2 + M2C_FIELD(temp_v1, s16 *, 0x10));
        temp_v0_3 = func_004B3BD8(M2C_FIELD(arg0, s32 *, 0xD4), 8);
        func_004B3BE8(arg0 + 0xD4, temp_s1, func_00578CB0(temp_v0_3), temp_v0_3);
        return;
    }
    temp_s2_2 = (s32) &sp_.sp3F & ~0x3F;
    temp_s0_3 = func_0057F260(M2C_FIELD(arg0, s32 *, 0xA8));
    temp_v0_4 = func_0057F260(M2C_FIELD(arg0, s32 *, 0xB4));
    temp_sp = ((s8 *)&sp_) - (((u32) (temp_s0_3 + temp_v0_4 + 0x11) >> 4) * 0x10);
    func_005A4724(temp_sp, M2C_FIELD(arg0, s32 *, 0xA8), temp_s0_3);
    var_a0 = temp_sp + temp_s0_3;
    if (M2C_FIELD(var_a0, s8 *, -1) != 0x2F) {
        M2C_FIELD(var_a0, s8 *, 0) = 0x2F;
        var_a0 = temp_sp + (temp_s0_3 + 1);
    }
    temp_s3 = arg0 + 0xC4;
    func_005A4724(var_a0, M2C_FIELD(arg0, s32 *, 0xB4), temp_v0_4 + 1);
    temp_a0 = M2C_FIELD(arg0, s32 *, 0xBC);
    M2C_FIELD(arg0, s32 *, 0xB8) = temp_a0;
    temp_v0_5 = func_00550D28(temp_a0 << 0xB, 0x7FFFFFFF, 0x8000, temp_sp);
    func_00550D88(temp_v0_5, temp_s2_2, 0x40);
    func_00550E90(temp_v0_5);
    temp_s0_4 = (M2C_FIELD(temp_s2_2, s32 *, 8) + 0x7FF) & ~0x7FF;
    temp_s2_3 = func_004AC430(temp_s0_4, 1);
    temp_v0_6 = func_00550D28(M2C_FIELD(arg0, s32 *, 0xB8) << 0xB, 0x7FFFFFFF, 0x8000, temp_sp);
    func_00550D88(temp_v0_6, temp_s2_3, temp_s0_4);
    func_00550E90(temp_v0_6);
    func_004B3840(temp_s3, temp_s2_3, temp_s0_4);
    temp_v1_2 = M2C_FIELD(arg0, void **, 0xC4);
    temp_s1_2 = M2C_FIELD((temp_v1_2 + 0x10), s32 (**)(void *), 4)(temp_s3 + M2C_FIELD(temp_v1_2, s16 *, 0x10));
    temp_v0_7 = func_004B3BD8(M2C_FIELD(arg0, s32 *, 0xD4), 8);
    func_004B3BE8(arg0 + 0xD4, temp_s1_2, func_00578CB0(temp_v0_7), temp_v0_7);
}
