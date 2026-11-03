/* NON_MATCHING: functional draft, 13 of 17 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_00498AE0(void *arg0) {
    s32 *var_v1;
    s32 temp_a2;
    s32 var_a1;

    var_a1 = 0;
    temp_a2 = arg0 - M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(arg0, void **, 0) = arg0;
    if (M2C_FIELD(arg0, u16 *, 0xA) != 0) {
        var_v1 = arg0 + 0x10;
        do {
            *var_v1 += temp_a2;
            var_a1 += 1;
            var_v1 += 8;
        } while (var_a1 < (s32) M2C_FIELD(arg0, u16 *, 0xA));
    }
}
