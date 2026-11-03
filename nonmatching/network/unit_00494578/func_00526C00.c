/* NON_MATCHING: functional draft, 66 of 68 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00523D48(void *, u16 *);               /* extern */
s16 func_00525648(M2C_UNK, M2C_UNK);                /* extern */
s32 func_00527488(void *, s32, M2C_UNK, s16 **, M2C_UNK, u8, s16 *, s16 **); /* extern */
s32 func_00528600(void *, void *, u16, s32, s32, void *, s32); /* extern */

s32 func_00526C00(void *arg0, s32 arg1, void *arg2) {
    s32 sp2;
    M2C_UNK sp0;
    s16 sp10;
    u8 sp12;
    s16 *sp20;
    s32 sp24;
    s32 sp60;
    s32 sp64;
    u16 sp70;
    s16 temp_v0;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_a6;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_v0;
    void *temp_a5;

    temp_s0 = arg1 & 0xFFFF;
    sp0 = M2C_UNALIGNED32(M2C_FIELD(arg2, M2C_UNK *, 0));
    func_00523D48(arg0, &sp70);
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x88);
    if ((temp_a1 != 0) && (temp_a5 = (sp2 * 0x18) + temp_a1, temp_a6 = M2C_FIELD(temp_a5, s32 *, 0), (*(s32 *)((sp70 * 4) + temp_a6) != 0))) {
        temp_s0_2 = temp_s0 * 0x44;
        temp_a4 = M2C_FIELD(temp_a5, s32 *, 0x10) + 1;
        temp_a3 = M2C_FIELD(arg0, s32 *, 0x84) + temp_s0_2;
        M2C_FIELD(temp_a5, s32 *, 0x10) = temp_a4;
        *(s32 *)((temp_s0 * 4) + temp_a6) = temp_a3;
        var_v0 = func_00528600(arg0, temp_a5, sp70, temp_a3, temp_a4, temp_a5, temp_a6);
        if (var_v0 == 0) {
            temp_v0 = func_00525648(7, 4);
            sp12 = sp2;
            sp20 = &sp10;
            sp64 = 0;
            sp60 = 0;
            sp10 = temp_v0;
            sp24 = 4;
            sp60 = 4;
            sp64 = 1;
            var_v0 = func_00527488(arg0, M2C_FIELD(arg0, s32 *, 0x84) + temp_s0_2, 0xF000, &sp20, 1, sp2, &sp10, &sp20);
            if (var_v0 == 0) {
                goto block_4;
            }
        }
    } else {
block_4:
        var_v0 = 0;
    }
    return var_v0;
}
