/* NON_MATCHING: functional draft, 5 of 6 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0057F4F8(u64, u64);                    /* extern */

void func_0057F480(u64 arg0) {
    func_0057F4F8(arg0, arg0 >> 0x3F);
}
