/* NON_MATCHING: functional draft, 27 of 30 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_004992F8(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_a4;
    s32 var_a5;
    void *temp_a2;
    void *temp_v1;

    temp_a2 = M2C_FIELD(arg0, void **, 0x24);
    if ((temp_a2 != NULL) && (M2C_FIELD(temp_a2, s32 *, 4) != 0)) {
        var_a5 = 0;
        if (M2C_FIELD(temp_a2, u16 *, 0) != 0) {
            var_a4 = 0;
            do {
                temp_a0 = M2C_FIELD(temp_a2, s32 *, 4);
                if (arg1 >= 0) {
                    if (*(s32 *)(var_a4 + temp_a0) == arg1) {
                        goto block_7;
                    }
                } else {
block_7:
                    temp_v1 = var_a4 + temp_a0;
                    M2C_FIELD(temp_v1, u16 *, 0x1C) = (u16) (M2C_FIELD(temp_v1, u16 *, 0x1C) - 1);
                }
                var_a5 += 1;
                var_a4 += 0x20;
            } while (var_a5 < (s32) M2C_FIELD(temp_a2, u16 *, 0));
        }
    }
}
