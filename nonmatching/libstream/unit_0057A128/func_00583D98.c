/* NON_MATCHING: functional draft, 25 of 25 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_00583D98(void *arg0, u32 arg1) {
    M2C_FIELD((void *)0x875878, s32 *, 0x10) = 0;
    M2C_FIELD((void *)0x875878, void **, 0) = arg0;
    M2C_FIELD((void *)0x875878, s32 *, 0xC) = (s32) ((s32) (arg0 + 0xFF) & 0xFFFFFF00);
    M2C_FIELD((void *)0x875878, s32 *, 8) = (s32) ((s32) (arg0 + ((arg1 <= 0xFFFFFF00U) ? arg1 : -0x100U)) & 0xFFFFFF00);
    M2C_FIELD((void *)0x875878, s32 *, 0x14) = 0;
    M2C_FIELD((void *)0x875878, u32 *, 4) = arg1;
    return func_00583DF8();
}
