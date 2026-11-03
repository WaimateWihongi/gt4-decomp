/* NON_MATCHING: functional draft, 57 of 59 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s8 func_004AAA20(M2C_UNK, s32);                     /* extern */
M2C_UNK func_004AAD78(M2C_UNK, s8);                 /* extern */

void func_004AA570(s32 arg0, s32 arg1) {
    s32 var_a3;
    s8 temp_a1;
    s8 temp_a2;
    s8 temp_v0;
    void *temp_v1;

    temp_a1 = M2C_FIELD((void *)0x70002000, s8 *, 0xEBE);
    if (temp_a1 >= 0) {
        func_004AAD78(0x70002000, temp_a1);
        M2C_FIELD((void *)0x70002000, s8 *, 0xEBE) = -1;
    }
    temp_v0 = func_004AAA20(0x70002000, arg0);
    var_a3 = temp_v0 * 4;
    if (temp_v0 >= 0) {
        temp_a2 = M2C_FIELD((void *)0x70002000, s8 *, 0xEBA);
        if (temp_a2 >= 0) {
            M2C_FIELD(((temp_a2 * 0x14) + 0x70002000), s8 *, 0xC3A) = temp_v0;
        } else {
            M2C_FIELD((void *)0x70002000, s8 *, 0xEBB) = temp_v0;
            var_a3 = temp_v0 * 4;
        }
        temp_v1 = ((var_a3 + temp_v0) * 4) + 0xC30 + 0x70002000;
        M2C_FIELD(temp_v1, s8 *, 0xA) = -1;
        M2C_FIELD(temp_v1, s8 *, 0xB) = temp_a2;
        M2C_FIELD((void *)0x70002000, s8 *, 0xEBA) = temp_v0;
        M2C_FIELD(temp_v1, s8 *, 8) = 2;
    }
    M2C_FIELD((((var_a3 + temp_v0) * 4) + 0x70002000), s32 *, 0xC48) = arg1;
    if (temp_v0 >= 0) {

    }
}
