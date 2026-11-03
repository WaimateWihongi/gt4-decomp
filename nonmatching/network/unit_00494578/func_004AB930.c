/* NON_MATCHING: functional draft, 37 of 37 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_004AB930(void *arg0) {
    s32 temp_a4;
    s32 temp_v0;

    temp_a4 = M2C_FIELD((void *)0x10009000, s32 *, 0x30);
    temp_v0 = (temp_a4 & 0x0FFFFFFF) | 0x20000000;
    M2C_FIELD(arg0, s32 *, 0x44) = temp_v0;
    *(s32 *)0x10003C00 = 0x800000;
    *(s64 *)0x12001040 = 1;
    M2C_FIELD((void *)0x10009000, s32 *, 0x10) = (s32) M2C_FIELD(temp_v0, s32 *, 4);
    M2C_FIELD((void *)0x10009000, s32 *, 0x20) = (s32) M2C_FIELD(temp_v0, s32 *, 0);
    M2C_FIELD((void *)0x10009000, s32 *, 0x30) = (s32) (temp_a4 + 0x10);
    M2C_FIELD((void *)0x10009000, s32 *, 0) = (s32) ((M2C_FIELD((void *)0x10009000, s32 *, 0) & ~0x10F) | 0x100);
    M2C_SYNC();
    if (M2C_FIELD(temp_v0, s32 *, 8) != 1) {
        M2C_FIELD(arg0, s8 *, 0x15) = 0;
    }
}
