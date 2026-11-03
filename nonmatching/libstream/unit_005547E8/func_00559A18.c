/* NON_MATCHING: functional draft, 25 of 27 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void *func_00559A18(void *arg0, s32 arg1, s32 arg2) {
    u16 *temp_a1;
    u16 *temp_a1_2;
    u16 *temp_a3;
    void *var_v0;

    temp_a3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), u16 **, 0x3C);
    var_v0 = NULL;
    if ((temp_a3 != NULL) && ((s32) *temp_a3 >= arg1)) {
        temp_a1 = (arg1 * 2) + (temp_a3 + 2);
        var_v0 = NULL;
        if (*temp_a1 != 0xFFFF) {
            temp_a1_2 = temp_a3 + (*temp_a1 & 0xFFFE);
            if ((s32) *temp_a1_2 >= arg2) {
                var_v0 = temp_a3 + (M2C_FIELD(((arg2 * 2) + temp_a1_2), u16 *, 2) & 0xFFFE);
            }
        }
    }
    return var_v0;
}
