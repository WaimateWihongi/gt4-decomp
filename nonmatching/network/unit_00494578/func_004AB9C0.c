/* NON_MATCHING: functional draft, 25 of 33 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_004AB9C0(void *arg0) {
    M2C_UNK (*temp_v1)(s32, s32, M2C_UNK);
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x44);
    temp_v1 = M2C_FIELD(temp_v0, M2C_UNK (**)(s32, s32, M2C_UNK), 8);
    if (temp_v1 != NULL) {
        temp_v1(M2C_FIELD(temp_v0, s32 *, 4), M2C_FIELD(temp_v0, s32 *, 0xC), 0x10000000);
    }
    *(s64 *)0x12001040 = 0;
    *(s32 *)0x10003C00 = 0;
    M2C_FIELD((void *)0x10009000, s32 *, 0x20) = 0;
    M2C_FIELD((void *)0x10009000, s32 *, 0) = (s32) ((M2C_FIELD((void *)0x10009000, s32 *, 0) & 0xFEF0) | 0x10000105);
    M2C_SYNC();
    M2C_FIELD((void *)0x1000A000, s32 *, 0x20) = 0;
    M2C_FIELD((void *)0x1000A000, s32 *, 0) = (s32) (M2C_FIELD((void *)0x1000A000, s32 *, 0) | 0x100);
    M2C_SYNC();
}
