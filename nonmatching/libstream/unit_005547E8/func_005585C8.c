/* NON_MATCHING: functional draft, 60 of 61 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00557C70(s32, f32);                    /* extern */
M2C_UNK func_00558960(M2C_UNK);                     /* extern */
s32 func_00575098(void *, s32);                     /* extern */
s32 func_005782E8(M2C_UNK, M2C_UNK);                /* extern */
s32 func_00578610(s32);                             /* extern */
M2C_UNK func_005788B8(s32);                         /* extern */
s32 func_00578B50(M2C_UNK, M2C_UNK, s32, s32);      /* extern */
s32 func_005C1498(M2C_UNK);                         /* extern */

void func_005585C8(f32 fparg0) {
    struct StackFrame_005585C8 { s8 pad0[0x10]; } sp_;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    if (*(s32 *)0x64D260 == 0) {
        temp_v0 = func_005C1498(0x7A0);
        func_00557C70(temp_v0, fparg0);
        *(s32 *)0x873560 = temp_v0;
        *(s32 *)0x64D25C = func_005782E8(1, 1);
        temp_v0_2 = func_00575098(((s8 *)&sp_), func_00578610(func_00578B50(3, 2, 0x558578, 0)));
        *(s32 *)0x64D254 = temp_v0_2;
        func_005788B8(temp_v0_2);
        temp_v0_3 = func_00575098(((s8 *)&sp_), func_00578610(func_00578B50(2, 0, 0x5585A0, 0)));
        *(s32 *)0x64D258 = temp_v0_3;
        func_005788B8(temp_v0_3);
        func_00558960(0x3F800000);
        *(s32 *)0x64D260 = 1;
    }
}
