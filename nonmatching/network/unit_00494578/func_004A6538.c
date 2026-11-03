/* NON_MATCHING: functional draft, 72 of 79 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0049FE28();                            /* extern */

void func_004A6538(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, s32 arg_sp0) {
    s32 temp_a3;
    void *temp_a0;
    void *temp_v1;

    func_0049FE28();
    temp_a0 = M2C_FIELD(arg0, void **, 0x1F8);
    temp_v1 = temp_a0 + 0x10;
    temp_a3 = M2C_FIELD(arg0, s32 *, 0x248);
    M2C_FIELD(temp_a0, s32 *, 0) = 0x10000004;
    M2C_FIELD(temp_a0, s32 *, 8) = 0x11000000;
    M2C_FIELD(temp_a0, s32 *, 0xC) = 0x50000004;
    M2C_FIELD(temp_a0, s32 *, 4) = 0;
    M2C_FIELD(arg0, void **, 0x1F8) = (void *) (M2C_FIELD(arg0, void **, 0x1F8) + 0x50);
    M2C_FIELD(temp_a0, s64 *, 0x10) = (s64) ((0x64000000 << 0x20) | 0x8001);
    M2C_FIELD(temp_v1, s64 *, 8) = 0x43C310;
    M2C_FIELD(temp_v1, s64 *, 0x10) = (s64) ((M2C_FIELD(arg0, u16 *, 0x4A) | 0x116) & 0xFFFF);
    M2C_FIELD(temp_v1, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0xC24);
    M2C_FIELD(temp_v1, s32 *, 0x1C) = 0x3F800000;
    M2C_FIELD(temp_v1, s16 *, 0x20) = arg5;
    M2C_FIELD(temp_v1, s16 *, 0x22) = arg6;
    M2C_FIELD(temp_v1, s32 *, 0x24) = 0;
    M2C_FIELD(temp_v1, s16 *, 0x28) = arg1;
    M2C_FIELD(temp_v1, s16 *, 0x2A) = arg2;
    M2C_FIELD(temp_v1, s32 *, 0x2C) = temp_a3;
    M2C_FIELD(temp_v1, s16 *, 0x30) = arg7;
    M2C_FIELD(temp_v1, s16 *, 0x32) = (s16) arg_sp0;
    M2C_FIELD(temp_v1, s32 *, 0x34) = 0;
    M2C_FIELD(temp_v1, s16 *, 0x38) = arg3;
    M2C_FIELD(temp_v1, s16 *, 0x3A) = arg4;
    M2C_FIELD(temp_v1, s32 *, 0x3C) = temp_a3;
}
