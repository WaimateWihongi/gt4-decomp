/* NON_MATCHING: functional draft, 142 of 148 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s64 func_001CBEB0(M2C_UNK *);                       /* extern */
M2C_UNK func_001CD580(void *, s32);                 /* extern */
M2C_UNK func_001CD8A0(s64, s32, void *);            /* extern */
M2C_UNK func_005A48D8(u8 *, M2C_UNK, M2C_UNK);      /* extern */

s32 func_001CD5F8(void *arg0, void **arg1, s64 *arg2) {
    struct StackFrame_001CD5F8 { s8 pad0[0x30]; u8 sp30; s8 pad1[0x7B]; s8 spAC; s8 pad2[0x3]; s32 spB0; s8 pad3[0x18]; s32 spCC; s8 pad4[0x3E0]; s64 * sp4B0; s8 pad5[0x8]; } sp_;
    M2C_UNK *var_a0;
    M2C_UNK *var_s2;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_s1;
    s32 var_a1;
    s32 var_fp;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s64 temp_v0;
    s64 var_a1_2;
    u32 temp_v0_2;
    u8 *temp_v1_4;
    u8 var_v1;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_5;

    var_fp = 0;
    sp_.sp4B0 = arg2;
    temp_v1 = M2C_FIELD(arg0, void **, 0x4C);
    func_001CD580(((s8 *)&sp_), M2C_FIELD((temp_v1 + 0xC8), s32 (**)(void *), 4)(arg0 + M2C_FIELD(temp_v1, s16 *, 0xC8)));
    func_005A48D8(&sp_.sp30, 0, 0x7D);
    sp_.spAC = 0;
loop_1:
    temp_v1_2 = *arg1;
    temp_v1_3 = *arg1;
    temp_s1 = M2C_FIELD((temp_v1_2 + 0x68), s32 (**)(void *, void *, M2C_UNK *, s32, M2C_UNK), 4)(arg1 + M2C_FIELD(temp_v1_2, s16 *, 0x68), ((s8 *)&sp_), &sp_.spB0, var_fp, 0x10);
    var_v0 = 0;
    if (M2C_FIELD((temp_v1_3 + 0x28), s32 (**)(void *), 4)(arg1 + M2C_FIELD(temp_v1_3, s16 *, 0x28)) == 0) {
        var_v0_2 = temp_s1 < 0x10;
        if (temp_s1 > 0) {
            var_s2 = &sp_.spCC;
            var_s0 = temp_s1;
            var_a0 = var_s2;
            do {
                var_s2 += 0x40;
                temp_v0 = func_001CBEB0(var_a0) >> 0x20;
                temp_v0_2 = temp_v0 & 0x1FFFF;
                temp_v1_4 = &(&sp_.sp30)[temp_v0_2 >> 3];
                if ((s32) temp_v0_2 < 0x3E7) {
                    *temp_v1_4 |= 1 << (temp_v0 & 7);
                }
                var_s0 -= 1;
                var_a0 = var_s2;
            } while (var_s0 != 0);
            var_v0_2 = temp_s1 < 0x10;
        }
        var_fp += temp_s1;
        if (var_v0_2 != 0) {
            var_a1 = 0;
            if (sp_.sp30 == 0xFF) {
                do {
                    var_a1 += 1;
                } while ((&sp_.sp30)[var_a1] == 0xFF);
            }
            var_v1 = (&sp_.sp30)[var_a1];
            var_a1_2 = var_a1 * 8;
            if (var_v1 & 1) {
                do {
                    var_v1 = (u8) ((s32) var_v1 >> 1);
                    var_a1_2 += 1;
                } while (var_v1 & 1);
            }
            temp_a1 = var_a1_2 < 0x3E7;
            temp_a2 = (((0xFFFE0000 << 0x10) | 0xFFFF) << 0x10) | 0xFFFF;
            *sp_.sp4B0 = (*sp_.sp4B0 & temp_a2) | (((u64) (-1 << 0x2F) >> 0xF) & (((temp_a1 == 0) ? 0 : var_a1_2) << 0x20));
            temp_v1_5 = M2C_FIELD(arg0, void **, 0x4C);
            func_001CD8A0(*sp_.sp4B0, M2C_FIELD((temp_v1_5 + 0xC8), s32 (**)(void *, s32, s32), 4)(arg0 + M2C_FIELD(temp_v1_5, s16 *, 0xC8), temp_a1, temp_a2), arg0 + 0x24);
            var_v0 = 1;
        } else {
            goto loop_1;
        }
    }
    return var_v0;
}
