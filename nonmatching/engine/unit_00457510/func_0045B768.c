/* NON_MATCHING: functional draft, 9 of 18 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0045B2C0(s32);                             /* extern */
M2C_UNK func_0045B7B0(s32, s32, s32);               /* extern */

s32 func_0045B768(s32 arg0, s32 arg1, s32 arg2) {
    func_0045B7B0(arg0, arg1, func_0045B2C0(arg2));
    return arg0;
}
