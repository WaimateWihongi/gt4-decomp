/* NON_MATCHING: functional draft, 33 of 34 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void **func_005BC6E8();                             /* extern */
s32 *func_005BCA88(M2C_UNK);                        /* extern */
M2C_UNK func_005BD650();                            /* extern */
M2C_UNK func_005BD7A0(M2C_UNK);                     /* extern */
M2C_UNK func_005C17B8(s32 *, s32, M2C_UNK);         /* extern */
s32 func_00616488();                                /* extern */

s32 func_005C1C00(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    s32 sp0;
    s32 *temp_v0;
    s32 var_v1;
    void *temp_v0_2;

    sp0 = 0x68A2B8;
    temp_v0 = func_005BCA88(4);
    *temp_v0 = 0x68A2B8;
    func_005C17B8(temp_v0, func_00616488(), 0x6164E8);
    func_005BD650();
    sp0 = 0x68A3F8;
    func_005BD7A0(0x6D5DE8);
    temp_v0_2 = *func_005BC6E8();
    var_v1 = 0;
    if (temp_v0_2 != NULL) {
        var_v1 = M2C_FIELD(temp_v0_2, s32 *, 0x14) == 0;
    }
    return var_v1;
}
