/* NON_MATCHING: functional draft, 26 of 34 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

int func_005ADCA0();
void func_004A0D00(s32 arg0, s32 arg1) {
    struct StackFrame_004A0D00 { s8 pad0[0x20]; } sp_;
    s32 temp_s0;
    void *temp_v0;
    void *temp_v1;

    temp_v1 = *(void * *)(0x629DC8 + (arg0 * 4));
    temp_s0 = (arg0 * 0xC) + 0x10;
    temp_v0 = temp_s0 + 0x70002050;
    M2C_FIELD(temp_v1, s32 *, 0) = arg1;
    M2C_FIELD(temp_v1, s32 *, 0x10) = 0;
    M2C_FIELD(temp_v1, s32 *, 0x30) = 0;
    M2C_FIELD(temp_v1, s32 *, 0x40) = 0;
    M2C_FIELD(temp_v1, s32 *, 0x50) = 0;
    M2C_FIELD(temp_v1, s32 *, 0x80) = 0;
    M2C_FIELD(temp_v0, s8 *, 0xD) = 0;
    M2C_FIELD(temp_v0, s8 *, 0xC) = 0;
    M2C_FIELD((temp_s0 + 0x70002000), s32 *, 0x64) = func_005ADCA0(((s8 *)&sp_), /* extra? */ 1, /* extra? */ 1);
}
