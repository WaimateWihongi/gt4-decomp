/* NON_MATCHING: functional draft, 32 of 33 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_003294C0();                                /* extern */
M2C_UNK func_005A2ED0(M2C_UNK);                     /* extern */

s32 func_00329530(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    if (*(s32 *)0x620188 == 0) {
        M2C_FIELD((void *)0x842510, s32 *, 0) = func_003294C0();
        M2C_FIELD((void *)0x842510, s32 *, 0x18) = 0;
        M2C_FIELD((void *)0x842510, s32 *, 4) = 0;
        M2C_FIELD((void *)0x842510, s32 *, 8) = 0;
        M2C_FIELD((void *)0x842510, s32 *, 0xC) = 0;
        M2C_FIELD((void *)0x842510, s32 *, 0x10) = 0;
        M2C_FIELD((void *)0x842510, s32 *, 0x14) = 0;
        *(s32 *)0x620188 = 1;
        func_005A2ED0(0x3295E0);
    }
    return 0x842510;
}
