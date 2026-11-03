/* NON_MATCHING: functional draft, 21 of 49 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00397868(u64, M2C_UNK *);              /* extern */
M2C_UNK func_00407348(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00446F90(void *);                      /* extern */
M2C_UNK func_00446FC8(void *, M2C_UNK);             /* extern */
M2C_UNK func_00447238(void *, s32);                 /* extern */
s64 func_00447730(void *);                          /* extern */
M2C_UNK func_005A5DC8(M2C_UNK *, M2C_UNK);          /* extern */

void func_00395078(void *arg0, s32 arg1) {
    struct StackFrame_00395078 { s8 pad0[0xB0]; s32 spB0; s8 pad1[0x7C]; } sp_;
    void *temp_v1;

    func_00446F90(((s8 *)&sp_));
    func_00447238(((s8 *)&sp_), arg1);
    func_00397868((u64) (func_00447730(((s8 *)&sp_)) << 0x20) >> 0x20, &sp_.spB0);
    func_005A5DC8(&sp_.spB0, 0x6A0340);
    func_00407348(arg0 + 0x8C, &sp_.spB0, 0, 0);
    temp_v1 = M2C_FIELD(arg0, void **, 0x8C);
    M2C_FIELD(arg0, s32 *, 0x9C) = (s32) M2C_FIELD(temp_v1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0xA0) = (s32) M2C_FIELD(temp_v1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xA4) = (s32) M2C_FIELD(temp_v1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0xA8) = (s32) M2C_FIELD(temp_v1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0xAC) = (s32) M2C_FIELD(temp_v1, s32 *, 0x14);
    func_00446FC8(((s8 *)&sp_), 2);
}
