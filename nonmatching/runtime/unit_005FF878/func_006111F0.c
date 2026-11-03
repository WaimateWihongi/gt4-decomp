/* NON_MATCHING: functional draft, 47 of 55 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_006112C0(void *, u32, s32, s32);       /* extern */

void func_006111F0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 var_s1;
    u32 temp_a1;
    u32 temp_v1_2;

    var_s1 = arg2;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_v1 = temp_v0 < 0;
    if (((temp_v1 != 0) ? 0 : temp_v0) < var_s1) {
        var_s1 = (temp_v1 == 0) ? temp_v0 : 0;
    }
    func_006112C0(arg0, M2C_FIELD(arg0, u32 *, 0x20), arg1, var_s1);
    temp_v1_2 = M2C_FIELD(arg0, u32 *, 0x20) + var_s1;
    temp_a1 = temp_v1_2 - M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, u32 *, 0x20) = temp_v1_2;
    if (temp_a1 >= (u32) M2C_FIELD(arg0, u32 *, 0)) {
        M2C_FIELD(arg0, u32 *, 0x20) = temp_a1;
    }
    temp_a0 = M2C_FIELD(arg0, s32 *, 0xC) - var_s1;
    temp_v1_3 = ((temp_a0 >= 0) ? temp_a0 : 0) + M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + var_s1);
    M2C_FIELD(arg0, s32 *, 0xC) = temp_a0;
    if (temp_v1_3 < M2C_FIELD(arg0, s32 *, 0x10)) {
        M2C_FIELD(arg0, s32 *, 0x10) = temp_v1_3;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) - var_s1);
}
