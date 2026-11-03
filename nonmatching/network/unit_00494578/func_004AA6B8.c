/* NON_MATCHING: functional draft, 56 of 57 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_004AAD78(M2C_UNK, s8, s8, void *);     /* extern */

void func_004AA6B8(s32 arg0) {
    s32 temp_a2;
    s32 var_t1;
    s8 temp_a2_2;
    s8 temp_v1;
    s8 var_a1;
    void *temp_a3;

    if ((arg0 >= 0) && (var_a1 = M2C_FIELD((void *)0x70002000, s8 *, 0xEBA), (var_a1 >= 0))) {
        var_t1 = var_a1 * 4;
loop_3:
        temp_a2 = ((var_t1 + var_a1) * 4) + 0xC30;
        temp_a3 = temp_a2 + 0x70002000;
        if (*(s32 *)((void *)0x70002000 + 0x10 + temp_a2) == arg0) {
            temp_a2_2 = M2C_FIELD(temp_a3, s8 *, 0xA);
            temp_v1 = M2C_FIELD(temp_a3, s8 *, 0xB);
            if (temp_a2_2 >= 0) {
                M2C_FIELD(((temp_a2_2 * 0x14) + 0x70002000), s8 *, 0xC3B) = temp_v1;
            } else {
                M2C_FIELD((void *)0x70002000, s8 *, 0xEBA) = temp_v1;
            }
            if (temp_v1 >= 0) {
                M2C_FIELD(((temp_v1 * 0x14) + 0x70002000), s8 *, 0xC3A) = temp_a2_2;
            } else {
                M2C_FIELD((void *)0x70002000, s8 *, 0xEBB) = temp_a2_2;
            }
            M2C_FIELD((((var_t1 + var_a1) * 4) + 0x70002000), s8 *, 0xC38) = 0;
            func_004AAD78(0x70002000, var_a1, temp_a2_2, temp_a3);
            return;
        }
        var_a1 = M2C_FIELD(temp_a3, s8 *, 0xB);
        var_t1 = var_a1 * 4;
        if (var_a1 < 0) {

        } else {
            goto loop_3;
        }
    }
}
