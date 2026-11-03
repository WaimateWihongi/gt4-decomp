/* NON_MATCHING: functional draft, 69 of 69 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_005869A8(void *arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_a4;
    void *var_a3;

    temp_a4 = M2C_FIELD(arg0, void **, 0x1C);
    M2C_FIELD(arg0, s32 *, 8) = 0;
    var_a3 = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(arg0, u16 *, 0x16) = (u16) (M2C_FIELD(arg0, u16 *, 0x16) & 0xFFFD);
    if (temp_a4 != NULL) {
        temp_a2 = ((u32) arg0 >> 0x10) | 0x3C020000;
        temp_a1 = ((s32) arg0 & 0xFFFF) | 0x34420000;
        M2C_FIELD(temp_a4, s32 *, 0) = temp_a2;
        M2C_FIELD(temp_a4, s32 *, 4) = temp_a1;
        temp_v1 = ((0x58B3E0U >> 2) & 0x03FFFFFF) | 0x08000000;
        M2C_FIELD(temp_a4, s32 *, 8) = temp_v1;
        M2C_FIELD(temp_a4, s32 *, 0xC) = 0;
        temp_v0 = ((s32) temp_a4 & 0x0FFFFFFF) | 0x20000000;
        M2C_FIELD(temp_v0, s32 *, 0) = temp_a2;
        M2C_FIELD(temp_v0, s32 *, 4) = temp_a1;
        M2C_FIELD(temp_v0, s32 *, 8) = temp_v1;
        M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
    }
    if ((M2C_FIELD(var_a3, s32 *, 0) != 0) && (((u32) M2C_FIELD(var_a3, u32 *, 4) >> 0x1A) == 9)) {
        temp_a0 = (((u32) temp_a4 >> 2) & 0x03FFFFFF) | 0x08000000;
loop_5:
        temp_v0_2 = (s32) var_a3 & 0x0FFFFFFF;
        if (temp_a4 != NULL) {
            M2C_FIELD(var_a3, s32 *, 0) = temp_a0;
            temp_v0_3 = temp_v0_2 | 0x20000000;
            temp_v1_2 = M2C_FIELD(var_a3, u16 *, 4) | 0x24030000;
            M2C_FIELD(var_a3, u16 *, 4) = temp_v1_2;
            M2C_FIELD(temp_v0_3, s32 *, 0) = temp_a0;
            M2C_FIELD(temp_v0_3, s32 *, 4) = temp_v1_2;
        } else {
            M2C_FIELD(var_a3, s32 *, 0) = 0x4D;
            *(s32 *)(temp_v0_2 | 0x20000000) = 0x4D;
        }
        var_a3 += 8;
        if ((M2C_FIELD(var_a3, s32 *, 0) != 0) && (((u32) M2C_FIELD(var_a3, u32 *, 4) >> 0x1A) == 9)) {
            goto loop_5;
        }
    }
}
