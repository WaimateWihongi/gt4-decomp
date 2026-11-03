/* NON_MATCHING: functional draft, 181 of 182 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_003AFEC8(s32, f32);                        /* extern */
M2C_UNK func_0049FD50(M2C_UNK, void *, M2C_UNK, void *); /* extern */
void *func_004A5B70(M2C_UNK);                       /* extern */

void func_003AB570(void *arg0, s32 arg1, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, f32 fparg4, f32 fparg5) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 var_f0;
    f32 var_f4;
    f32 var_f5;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_s0;
    void *temp_s1;

    temp_s0 = func_004A5B70(5);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x20);
    temp_s1 = func_004A5B70(2);
    if (!(temp_v1 & 2)) {
        temp_f20 = M2C_MINS(M2C_MAXS(fparg4, 0x0.0p+0f), 0x1.0000000000000p+0f);
        temp_f21 = M2C_MINS(M2C_MAXS(fparg5, 0x0.0p+0f), 0x1.0000000000000p+0f);
        var_f0 = M2C_MINS(temp_f20, temp_f21);
        var_f4 = M2C_MAXS(temp_f20, temp_f21);
        var_f5 = 0x0.0p+0f;
    } else {
        var_f5 = 0x1.0000000000000p-1f;
        temp_f20_2 = M2C_MINS(M2C_MAXS((fparg4 * 0x1.0000000000000p-1f) + 0x1.0000000000000p-1f, 0x0.0p+0f), 0x1.0000000000000p+0f);
        temp_f21_2 = M2C_MINS(M2C_MAXS((fparg5 * 0x1.0000000000000p-1f) + 0x1.0000000000000p-1f, 0x0.0p+0f), 0x1.0000000000000p+0f);
        var_f0 = M2C_MINS(temp_f20_2, temp_f21_2);
        var_f4 = M2C_MAXS(temp_f20_2, temp_f21_2);
    }
    temp_v1_2 = temp_v1 & 1;
    switch (temp_v1_2) {                            /* irregular */
    case 1:
        temp_f0 = fparg0 + fparg2;
        temp_f3 = fparg1 + fparg3;
        temp_f1 = temp_f0 - (fparg2 * var_f0);
        temp_f2 = temp_f0 - (fparg2 * var_f5);
        temp_f0_2 = temp_f0 - (fparg2 * var_f4);
        M2C_FIELD(temp_s0, f32 *, 0) = temp_f0_2;
        M2C_FIELD(temp_s0, f32 *, 4) = fparg1;
        M2C_FIELD(temp_s0, f32 *, 0xC) = temp_f0_2;
        M2C_FIELD(temp_s0, f32 *, 0x10) = temp_f3;
        M2C_FIELD(temp_s0, f32 *, 0x18) = temp_f1;
        M2C_FIELD(temp_s0, f32 *, 0x1C) = fparg1;
        M2C_FIELD(temp_s0, f32 *, 0x24) = temp_f1;
        M2C_FIELD(temp_s0, f32 *, 0x28) = temp_f3;
        M2C_FIELD(temp_s0, f32 *, 0x30) = temp_f2;
        M2C_FIELD(temp_s0, f32 *, 0x34) = fparg1;
        M2C_FIELD(temp_s0, f32 *, 0x3C) = temp_f2;
        M2C_FIELD(temp_s0, f32 *, 0x40) = temp_f3;
        break;
    case 0:
        M2C_FIELD(temp_s0, f32 *, 0) = fparg0;
        temp_f0_3 = fparg1 + fparg3;
        temp_f3_2 = fparg0 + fparg2;
        temp_f1_2 = temp_f0_3 - (fparg3 * var_f0);
        temp_f2_2 = temp_f0_3 - (fparg3 * var_f5);
        temp_f0_4 = temp_f0_3 - (fparg3 * var_f4);
        M2C_FIELD(temp_s0, f32 *, 4) = temp_f0_4;
        M2C_FIELD(temp_s0, f32 *, 0xC) = temp_f3_2;
        M2C_FIELD(temp_s0, f32 *, 0x10) = temp_f0_4;
        M2C_FIELD(temp_s0, f32 *, 0x18) = fparg0;
        M2C_FIELD(temp_s0, f32 *, 0x1C) = temp_f1_2;
        M2C_FIELD(temp_s0, f32 *, 0x24) = temp_f3_2;
        M2C_FIELD(temp_s0, f32 *, 0x28) = temp_f1_2;
        M2C_FIELD(temp_s0, f32 *, 0x30) = fparg0;
        M2C_FIELD(temp_s0, f32 *, 0x34) = temp_f2_2;
        M2C_FIELD(temp_s0, f32 *, 0x3C) = temp_f3_2;
        M2C_FIELD(temp_s0, f32 *, 0x40) = temp_f2_2;
        break;
    }
    M2C_FIELD(temp_s0, s32 *, 8) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x14) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x20) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x2C) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x38) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x44) = 0;
    temp_v0 = func_003AFEC8(arg1, M2C_FIELD(arg0, f32 *, 0xC));
    M2C_FIELD(temp_s1, s32 *, 0) = 0;
    M2C_FIELD(temp_s1, s32 *, 4) = 0;
    M2C_FIELD(temp_s1, s32 *, 8) = temp_v0;
    M2C_FIELD(temp_s1, s32 *, 0xC) = temp_v0;
    M2C_FIELD(temp_s1, s32 *, 0x10) = temp_v0;
    M2C_FIELD(temp_s1, s32 *, 0x14) = temp_v0;
    func_0049FD50(6, temp_s0, 0, temp_s1);
}
