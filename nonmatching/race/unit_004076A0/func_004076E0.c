/* NON_MATCHING: functional draft, 101 of 102 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_00441300();                 /* extern */
s32 func_004454C0(void *, s32 *, s32);              /* extern */
s32 func_004462E0(void *);                          /* extern */
s32 func_00446320(void *);                          /* extern */
M2C_UNK func_00449E10(void *, s32);                 /* extern */

void func_004076E0(void *arg0, void *arg1) {
    s32 *temp_a1;
    s32 *temp_a1_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_s1;
    s32 var_s1_2;

    var_s1 = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD((arg0 + 0x4C), s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    temp_s0 = func_004462E0(arg1);
    temp_s6 = func_00446320(arg1);
    temp_s0_2 = func_00441300(temp_s0);
    do {
        temp_v0 = func_00441300(var_s1);
        temp_a0 = var_s1 & 0x1F;
        temp_v1 = ((var_s1 >> 5) * 4) + 0x40;
        var_s1 += 1;
        temp_a1 = arg0 + 8 + temp_v1;
        temp_v1_2 = 1 << temp_a0;
        temp_a2 = var_s1 < 0xD;
        if (temp_v0 == temp_s0_2) {
            temp_v0_2 = *temp_a1;
            if (!(temp_v0_2 & temp_v1_2)) {
                *temp_a1 = temp_v0_2 | temp_v1_2;
                M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) + 1);
            }
        }
    } while (temp_a2 != 0);
    var_s1_2 = 0;
    temp_s5 = func_00441300(temp_s6, temp_a1, temp_a2);
    do {
        temp_v0_3 = func_00441300(var_s1_2);
        temp_a0_2 = var_s1_2 & 0x1F;
        temp_v1_3 = ((var_s1_2 >> 5) * 4) + 0x40;
        var_s1_2 += 1;
        temp_a1_2 = arg0 + 0x54 + temp_v1_3;
        temp_v1_4 = 1 << temp_a0_2;
        temp_a2_2 = var_s1_2 < 0xD;
        if (temp_v0_3 == temp_s5) {
            temp_v0_4 = *temp_a1_2;
            if (!(temp_v0_4 & temp_v1_4)) {
                *temp_a1_2 = temp_v0_4 | temp_v1_4;
                M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) + 1);
            }
        }
    } while (temp_a2_2 != 0);
    if (M2C_FIELD(arg0, s32 *, 0xA8) == 0) {
        func_00449E10(arg0 + 0xB0, func_004454C0(arg1, temp_a1_2, temp_a2_2));
        M2C_FIELD(arg0, s32 *, 0xA8) = 1;
        M2C_FIELD(arg0, s64 *, 0x98) = (s64) M2C_FIELD(arg1, s64 *, 0x60);
        M2C_FIELD(arg0, s64 *, 0xA0) = (s64) M2C_FIELD(arg1, s64 *, 0x68);
    }
}
