/* NON_MATCHING: functional draft, 62 of 75 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0054D3A8();                            /* extern */
M2C_UNK func_0054D470();                            /* extern */
M2C_UNK func_0054D530(M2C_UNK, M2C_UNK);            /* extern */

void func_0054D0F0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    *(s32 *)0x10002010 = 0x40000000;
    M2C_SYNC();
    do {

    } while (*(s32 *)0x10002010 < 0);
    *(s32 *)0x10002000 = 0;
    M2C_SYNC();
    do {

    } while (*(s32 *)0x10002010 < 0);
    func_0054D3A8();
    func_0054D470();
    *(s128 *)0x10007010 = M2C_FIELD((void *)0x64C460, s128 *, 0);
    M2C_SYNC();
    *(s128 *)0x10007010 = M2C_FIELD((void *)0x64C460, s128 *, 0x10);
    M2C_SYNC();
    *(s32 *)0x10002000 = 0x60000000;
    M2C_SYNC();
    do {

    } while (*(s32 *)0x10002010 < 0);
    func_0054D530(0, 0);
    *(s32 *)0x10002010 = 0x40000000;
    M2C_SYNC();
    do {

    } while (*(s32 *)0x10002010 < 0);
    *(s32 *)0x10002000 = 0;
    M2C_SYNC();
    do {

    } while (*(s32 *)0x10002010 < 0);
}
