/* NON_MATCHING: functional draft, 76 of 77 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_004CA4D0(s32, M2C_UNK);                /* extern */
M2C_UNK func_004CB040(s32);                         /* extern */
M2C_UNK func_00574DA8(void *, M2C_UNK);             /* extern */
M2C_UNK func_00575DA0(void *);                      /* extern */
M2C_UNK func_005C1628(void *);                      /* extern */
M2C_UNK func_0060C130(void *, s32);                 /* extern */

void func_004CB7B0(void *arg0, s32 arg1) {
    void *sp0;
    void *sp10;
    s32 temp_a0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v1;
    void *var_s0;

    M2C_FIELD(arg0, s32 *, 0x78) = 0x689568;
    func_004CB040(M2C_FIELD(arg0, s32 *, 4));
    temp_a0 = M2C_FIELD(arg0, s32 *, 4);
    var_s0 = arg0 + 8;
    if (temp_a0 != 0) {
        func_004CA4D0(temp_a0, 3);
        var_s0 = arg0 + 8;
    }
    temp_v1 = M2C_FIELD(var_s0, void **, 4);
    temp_v0 = M2C_FIELD(temp_v1, void **, 8);
    sp10 = temp_v0;
    sp0 = temp_v0;
    sp10 = temp_v1;
    if (sp0 != temp_v1) {
        do {
            func_00575DA0(M2C_FIELD(sp0, void **, 0x14));
            temp_v0_2 = M2C_FIELD(var_s0, void **, 4);
            sp10 = temp_v0_2;
        } while (sp0 != temp_v0_2);
    }
    if (M2C_FIELD(var_s0, s32 *, 8) != 0) {
        func_0060C130(var_s0, M2C_FIELD(M2C_FIELD(var_s0, void **, 4), s32 *, 4));
        temp_v0_3 = M2C_FIELD(var_s0, void **, 4);
        M2C_FIELD(temp_v0_3, void **, 8) = temp_v0_3;
        M2C_FIELD(M2C_FIELD(var_s0, void **, 4), s32 *, 4) = 0;
        temp_v0_4 = M2C_FIELD(var_s0, void **, 4);
        M2C_FIELD(temp_v0_4, void **, 0xC) = temp_v0_4;
        M2C_FIELD(var_s0, s32 *, 8) = 0;
    }
    func_00574DA8(arg0 + 0x1C, 2);
    if (M2C_FIELD(var_s0, s32 *, 8) != 0) {
        func_0060C130(var_s0, M2C_FIELD(M2C_FIELD(var_s0, void **, 4), s32 *, 4));
        temp_v0_5 = M2C_FIELD(var_s0, void **, 4);
        M2C_FIELD(temp_v0_5, void **, 8) = temp_v0_5;
        M2C_FIELD(M2C_FIELD(var_s0, void **, 4), s32 *, 4) = 0;
        temp_v0_6 = M2C_FIELD(var_s0, void **, 4);
        M2C_FIELD(temp_v0_6, void **, 0xC) = temp_v0_6;
        M2C_FIELD(var_s0, s32 *, 8) = 0;
    }
    func_00575DA0(M2C_FIELD(var_s0, void **, 4));
    if (arg1 & 1) {
        func_005C1628(arg0);
    }
}
