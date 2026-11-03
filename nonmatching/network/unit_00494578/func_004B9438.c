/* NON_MATCHING: functional draft, 19 of 26 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_004B9438(u16 *arg0) {
    s32 var_a1_2;
    s32 var_v1;
    u16 *var_a0;
    u16 *var_a1;
    u16 temp_v1;

    var_a0 = arg0;
    var_v1 = 0;
    if (*var_a0 != 0) {
        var_a1 = var_a0;
        do {
            var_a1 += 2;
            var_v1 += 1;
        } while (*var_a1 != 0);
    }
    if (var_v1 > 0) {
        var_a1_2 = var_v1;
        do {
            temp_v1 = *var_a0;
            if ((u32) ((temp_v1 + 0xCFC0) & 0xFFFF) < 0x60U) {
                *var_a0 = temp_v1 + 0x60;
            }
            var_a1_2 -= 1;
            var_a0 += 2;
        } while (var_a1_2 != 0);
    }
}
