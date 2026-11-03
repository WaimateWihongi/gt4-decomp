/* NON_MATCHING: functional draft, 4 of 8 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0058D140(s32 arg0) {
    u32 temp_v0;

    temp_v0 = arg0 & 0xFF;
    return (temp_v0 - ((temp_v0 >> 4) * 6)) & 0xFF;
}
