/* NON_MATCHING: functional draft, 22 of 36 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0052B6A0(void *, s64, s32, u32);       /* extern */

s32 func_0052B610(void *arg0) {
    s32 sp0;
    struct StackFrame_0052B610 { s8 pad0[0x10]; s32 sp10; u32 sp14; s8 pad1[0x8]; } sp_;

    sp_.sp14 = 0;
loop_1:
    sp_.sp14 = 0;
    if (M2C_FIELD(*(void **)0x64B4B0, s32 (**)(s32, void *, s32 *, s32), 0x34)(M2C_FIELD(arg0, s32 *, 0), ((s8 *)&sp_), &sp_.sp10, M2C_FIELD(arg0, s32 *, 0x4C)) == 0) {
        if (sp_.sp14 != 0) {
            if (sp_.sp14 >= 2U) {
                func_0052B6A0(arg0, sp0, sp_.sp10, sp_.sp14);
            }
            goto block_5;
        }
    } else {
block_5:
        if (sp_.sp14 != 0) {
            goto loop_1;
        }
    }
    return 0;
}
