/* NON_MATCHING: functional draft, 44 of 52 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_005593F8(void *, s32);                 /* extern */
s32 func_0055C588(M2C_UNK, s32, s32, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_00576100(M2C_UNK);                     /* extern */
M2C_UNK func_00576140(M2C_UNK);                     /* extern */

void func_00559470(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *temp_a0;
    s32 *temp_v0_2;
    s32 *temp_v1;
    s32 temp_a4;
    s32 temp_a5;
    s32 var_a1;
    s32 var_a2;
    void *temp_v0;

    func_00576100(0x655340);
    temp_a5 = arg0 + 4;
    temp_v0 = arg1 + ((arg2 * 8) + 0x10);
    temp_a4 = arg0 + 8;
    var_a1 = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(temp_v0, s32 *, 8);
    var_a2 = 1;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(temp_v0, s32 *, 0xC);
    do {
        temp_v0_2 = arg0 + var_a1;
        temp_a0 = temp_a5 + var_a1;
        temp_v1 = temp_a4 + var_a1;
        var_a1 += 0x18;
        var_a2 -= 1;
        *temp_v0_2 = 0;
        *temp_v1 = -1;
        *temp_a0 = -1;
    } while (var_a2 >= 0);
    M2C_FIELD(arg0, s32 *, 0x38) = func_0055C588(0x6518C8, var_a1, var_a2, -1, temp_a4, temp_a5);
    func_005593F8(arg0, arg3);
    func_00576140(0x655340);
}
