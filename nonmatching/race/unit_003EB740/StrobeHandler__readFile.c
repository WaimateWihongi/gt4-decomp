/* NON_MATCHING: functional draft, 25 of 28 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0048EDA0(s32);                             /* extern */
M2C_UNK func_004AE230(s32, void *, M2C_UNK);        /* extern */
M2C_UNK func_0057DA20(void *, M2C_UNK, s32, s32);   /* extern */

s32 func_003EC2B8(s32 arg0, s32 arg1, s32 arg2) {
    struct StackFrame_003EC2B8 { s8 pad0[0x40]; } sp_;
    s32 var_v0;

    if (arg2 != 0) {
        var_v0 = 0x6A3CE0;
    } else {
        var_v0 = func_0048EDA0(*(s32 *)0x624978);
    }
    func_0057DA20(((s8 *)&sp_), 0x6A3CD0, var_v0, arg1);
    func_004AE230(arg0, ((s8 *)&sp_), 1);
    return arg0;
}
