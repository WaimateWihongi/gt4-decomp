/* NON_MATCHING: functional draft, 33 of 60 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_004C0D60(s32, s32, void *, void **);       /* extern */
s32 func_004C81D8(s32, s32, u16, s32, s32);         /* extern */
M2C_UNK func_004C8BB0(s32, void *);                 /* extern */
M2C_UNK func_004C9428(void *, s32, s32);            /* extern */

s32 func_004C80E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    struct StackFrame_004C80E0 { s8 pad0[0x30]; void * sp30; s8 pad1[0xC]; } sp_;
    s32 temp_v0;
    s32 temp_v0_2;

    sp_.sp30 = NULL;
    func_004C9428(((s8 *)&sp_), arg4, (arg3 != 0) ? (arg3 + 4) : 0);
    temp_v0_2 = func_004C0D60(arg0, arg2, ((s8 *)&sp_), &sp_.sp30);
    if (temp_v0_2 < 0) {
        func_004C8BB0(arg0, sp_.sp30);
        return (((temp_v0_2 & 0x7F00) ^ 0x1100) != 0) ? temp_v0_2 : 0;
    }
    if (temp_v0_2 != 0) {
        if (sp_.sp30 != NULL) {
            temp_v0 = func_004C81D8(arg0, arg1, M2C_FIELD(sp_.sp30, u16 *, 8), M2C_FIELD(sp_.sp30, s32 *, 4), arg3);
            if (temp_v0 < 0) {
                func_004C8BB0(arg0, sp_.sp30);
                return temp_v0;
            }
        }
        goto block_8;
    }
block_8:
    func_004C8BB0(arg0, sp_.sp30);
    return 0;
}
