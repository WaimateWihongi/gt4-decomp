/* NON_MATCHING: functional draft, 78 of 78 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0054FB38(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0054FE50(s32, s32, s32, s32);              /* extern */
s32 func_0054FE68();                                /* extern */
s32 func_00562778(s32);                             /* extern */

void func_005632B8(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s5;
    void *var_s4;

    var_s5 = 6;
    func_0054FB38(6, 0xE);
    temp_v0 = arg0 + 0xF;
    temp_v1 = arg1 + 0xF;
    temp_a0 = arg0 + 0x1E;
    temp_a2 = temp_v0 < 0;
    temp_a3 = temp_v1 < 0;
    temp_a1 = arg1 + 0x1E;
    M2C_FIELD((void *)0x874340, s32 *, 0) = 0xA000;
    var_s4 = (void *)0x874340;
    M2C_FIELD((void *)0x874340, s32 *, 8) = func_0054FE50(temp_a0, temp_a1, temp_a2, temp_a3);
    temp_s0 = ((s32) ((temp_a2 != 0) ? temp_a0 : temp_v0) >> 4) * ((s32) ((temp_a3 != 0) ? temp_a1 : temp_v1) >> 4) * 0x180;
    temp_v0_2 = func_0054FE68();
    M2C_FIELD((void *)0x874340, s32 *, 0x28) = temp_s0;
    M2C_FIELD((void *)0x874340, s32 *, 0x10) = temp_v0_2;
    M2C_FIELD((void *)0x874340, s32 *, 0x18) = temp_s0;
    M2C_FIELD((void *)0x874340, s32 *, 0x20) = temp_s0;
    M2C_FIELD((void *)0x874340, s32 *, 0x30) = (s32) (arg0 * arg1 * 8);
    do {
        var_s5 -= 1;
        M2C_FIELD(var_s4, s32 *, 4) = func_00562778(M2C_FIELD(var_s4, s32 *, 0));
        var_s4 += 8;
    } while (var_s5 >= 0);
}
