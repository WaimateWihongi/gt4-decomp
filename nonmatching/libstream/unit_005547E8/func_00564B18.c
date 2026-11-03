/* NON_MATCHING: functional draft, 23 of 35 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0055F4B0();                            /* extern */

void func_00564B18(void *arg0, s32 arg1) {
    func_0055F4B0();
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((arg1 * 0xA8) + 0x64C728);
    M2C_FIELD(arg0, s32 *, 8) = (s32) ((arg1 * 0x6C) + 0x6551B8);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0x689C38;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
