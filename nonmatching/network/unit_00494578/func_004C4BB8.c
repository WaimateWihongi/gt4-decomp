/* NON_MATCHING: functional draft, 74 of 79 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_004C4BB8(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    M2C_FIELD((void *)0x645288, s32 *, 0x48) = 0x85118C;
    *(M2C_UNK32 *)0x6452D4 = 0x645288;
    M2C_FIELD((void *)0x645288, s32 *, 0x40) = 0x645188;
    M2C_FIELD((void *)0x645288, s32 *, 0x3C) = 0x645280;
    M2C_FIELD((void *)0x645288, s32 *, 4) = 0x6452D8;
    M2C_FIELD((void *)0x645288, s32 *, 8) = 0x6452DC;
    M2C_FIELD((void *)0x645288, s32 *, 0x10) = 0x634F78;
    M2C_FIELD((void *)0x645288, s32 *, 0x14) = 0x644F78;
    M2C_FIELD((void *)0x645288, s32 *, 0x18) = 0x644F7A;
    M2C_FIELD((void *)0x645288, s32 *, 0x1C) = 0x644F7C;
    M2C_FIELD((void *)0x645288, s32 *, 0x20) = 0x644F7E;
    M2C_FIELD((void *)0x645288, s32 *, 0x24) = 0x644F80;
    M2C_FIELD((void *)0x645288, s32 *, 0x28) = 0x645038;
    M2C_FIELD((void *)0x645288, s32 *, 0x2C) = 0x645090;
    M2C_FIELD((void *)0x645288, s32 *, 0x34) = 0x645098;
    M2C_FIELD((void *)0x645288, s32 *, 0x38) = 0x645180;
    *(s8 *)0x85118C = 0;
    M2C_FIELD((void *)0x645288, s32 *, 0) = 0;
    M2C_FIELD((void *)0x645288, s32 *, 0xC) = 0;
    M2C_FIELD((void *)0x645288, s32 *, 0x30) = 0;
    M2C_FIELD((void *)0x645288, s32 *, 0x44) = 0;
}
