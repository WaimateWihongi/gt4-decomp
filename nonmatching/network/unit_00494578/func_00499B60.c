/* NON_MATCHING: functional draft, 51 of 51 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_004A4CA8(s32, void *, s32, s32, s32, s32, s32); /* extern */

void func_00499B60(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    struct StackFrame_00499B60 { s8 pad0[0x10]; } sp_;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v1;
    void *temp_v0_2;

    temp_s0 = M2C_FIELD((void *)0x70002000, s32 *, 0x1FC) - 0x60;
    M2C_FIELD((void *)0x70002000, s32 *, 0x1FC) = temp_s0;
    *(s32 *)0x624C6C = func_004A4CA8(temp_s0, ((s8 *)&sp_), arg3, arg4, arg5, arg6, ((arg0 >> 6) & 0xFFFF) | (((arg2 >> 6) & 0xFF) << 0x10) | (arg1 << 0x18));
    *(s32 *)0x624C64 = temp_s0 & 0x0FFFFFFF;
    temp_v0 = M2C_FIELD((void *)0x70002000, s32 *, 0x1FC);
    temp_v1 = temp_v0 - 0x20;
    M2C_FIELD((void *)0x70002000, s32 *, 0x1FC) = temp_v1;
    M2C_FIELD(temp_v1, s64 *, 0) = (s64) ((0x10000000 << 0x20) | 0x8001);
    M2C_FIELD(temp_v1, s64 *, 8) = 0xE;
    temp_v0_2 = temp_v0 - 0x10;
    M2C_FIELD(temp_v0_2, s64 *, 0) = 0;
    M2C_FIELD(temp_v0_2, s64 *, 8) = 0x3F;
    *(s32 *)0x624C68 = temp_v1 & 0x0FFFFFFF;
}
