/* NON_MATCHING: functional draft, 50 of 53 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_004A1FA8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_004AAAF0(M2C_UNK);                     /* extern */
M2C_UNK func_004AAD78(M2C_UNK, s8);                 /* extern */

void func_004AA4A0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    s32 *var_s1;
    s32 var_v0;
    s8 temp_a1;
    s8 temp_v1;
    s8 temp_v1_2;

    M2C_FIELD((void *)0x70002000, s32 *, 0xEC4) = 0;
    temp_a1 = M2C_FIELD((void *)0x70002000, s8 *, 0xEBE);
    if (temp_a1 >= 0) {
        func_004AAD78(0x70002000, temp_a1);
        M2C_FIELD((void *)0x70002000, s8 *, 0xEBE) = -1;
    }
    temp_v1 = M2C_FIELD((void *)0x70002000, s8 *, 0xEBC);
    var_s1 = NULL;
    if (temp_v1 >= 0) {
        var_v0 = temp_v1 * 4;
        do {
            var_s1 = M2C_FIELD((((var_v0 + M2C_FIELD((void *)0x70002000, s8 *, 0xEBC)) * 4) + ((void *)0x70002000 + 0x14)), s32 **, 0xC30);
            func_004AAAF0(0x70002000);
            temp_v1_2 = M2C_FIELD((void *)0x70002000, s8 *, 0xEBC);
            var_v0 = temp_v1_2 * 4;
        } while (temp_v1_2 >= 0);
    }
    if (var_s1 != NULL) {
        *var_s1 = 0x91020000;
        func_004A1FA8(0x70002000, 0x10000);
    }
}
