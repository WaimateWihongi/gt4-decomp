/* NON_MATCHING: functional draft, 43 of 49 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00576788(s32);                         /* extern */
M2C_UNK func_005767C0(s32);                         /* extern */
M2C_UNK func_0060EC10(void *, M2C_UNK);             /* extern */

s32 func_004F2308(void *arg0, s8 *arg1, s32 arg2) {
    s32 temp_s4;
    s32 var_s1;
    s32 var_s6;
    s8 *var_s2;
    s8 temp_s0;
    void *temp_v0;

    temp_s4 = arg0 + 8;
    var_s6 = 0;
    var_s2 = arg1;
    var_s1 = arg2 - 1;
    func_00576788(temp_s4);
    if (var_s1 != -1) {
loop_2:
        temp_v0 = M2C_FIELD(arg0, void **, 0x194);
        temp_s0 = M2C_FIELD((temp_v0 + M2C_FIELD(temp_v0, s32 *, 4)), s8 *, 0xC);
        func_0060EC10(temp_v0, 1);
        *var_s2 = temp_s0;
        var_s2 += 1;
        if (temp_s0 == 0) {
            var_s6 = 1;
            M2C_FIELD(arg0, s32 *, 0x190) = (s32) (M2C_FIELD(arg0, s32 *, 0x190) - 1);
        } else {
            var_s1 -= 1;
            if (var_s1 != -1) {
                goto loop_2;
            }
        }
    }
    func_005767C0(temp_s4);
    return var_s6;
}
