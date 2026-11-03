/* NON_MATCHING: functional draft, 56 of 60 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_004AFA20(void *, s32 *);                   /* extern */
M2C_UNK func_004AFE28(void *);                      /* extern */
M2C_UNK func_004AFE60(void *, M2C_UNK);             /* extern */
s32 func_004AFED8(void *, s32, M2C_UNK);            /* extern */
M2C_UNK func_004AFF60(void *);                      /* extern */
M2C_UNK func_00578168(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00578500(s32);                         /* extern */
M2C_UNK func_005A609C(void *, M2C_UNK *);           /* extern */

void func_00547E10(s32 arg0, s32 arg1) {
    s32 spD4;
    s32 spD8;
    struct StackFrame_00547E10 { s8 pad0[0xD0]; s32 spD0; s8 pad1[0x8]; s32 spDC; s8 pad2[0x70]; } sp_;

    func_004AFE28(((s8 *)&sp_));
    if (func_004AFED8(((s8 *)&sp_), arg0, 3) >= 0) {
        sp_.spD0 = 0;
        if (func_004AFA20(((s8 *)&sp_), &sp_.spD0) != 0) {
            func_00578500(M2C_FIELD((void *)0x86CA40, s32 *, 0));
            M2C_FIELD((void *)0x86CB40, s64 *, 0) = -1;
            M2C_FIELD((void *)0x86CB40, s32 *, 0x14) = 0;
            M2C_FIELD((void *)0x86CA40, s32 *, 0x40) = spD4;
            M2C_FIELD((void *)0x86CA40, s32 *, 0x44) = spD8;
            M2C_FIELD((void *)0x86CA40, s32 *, 0x48) = arg1;
            M2C_FIELD((void *)0x86CA40, s32 *, 0x4C) = 0x40000;
            M2C_FIELD((void *)0x86CA40, s8 *, 0x50) = 0;
            func_005A609C((void *)0x86CA40 + 0x50, &sp_.spDC);
            func_00578168(0x86CA40, 1, 0, 0);
        }
        func_004AFF60(((s8 *)&sp_));
    }
    func_004AFE60(((s8 *)&sp_), 2);
}
