/* NON_MATCHING: functional draft, 29 of 30 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_004490F8(void *arg0, void *arg1) {
    s32 *temp_a0;
    s32 *temp_v0;
    s32 temp_a2;

    temp_a2 = arg1 + 0x10;
    M2C_FIELD(arg0, void **, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = temp_a2;
    temp_a0 = temp_a2 + (M2C_FIELD(arg1, s32 *, 8) * 8);
    if (M2C_FIELD(arg1, u16 *, 4) & 1 & 0xFFFF) {
        M2C_FIELD(arg0, s32 **, 0xC) = temp_a0;
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (temp_a0 + 8);
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (temp_a0 + 0x208);
        temp_v0 = temp_a0 + *temp_a0;
        M2C_FIELD(arg0, s32 **, 0x18) = temp_v0;
        M2C_FIELD(arg0, void **, 0x1C) = (void *) (temp_v0 + 8);
        M2C_FIELD(arg0, s32 **, 0x20) = (s32 *) (temp_v0 + *temp_v0);
        return;
    }
    M2C_FIELD(arg0, s32 **, 0x20) = temp_a0;
}
