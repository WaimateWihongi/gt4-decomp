/* NON_MATCHING: functional draft, 85 of 88 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00109A78(M2C_UNK *);                   /* extern */
M2C_UNK func_00109AB8(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_00109D00(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_001C7BF8(s32, M2C_UNK);                /* extern */
void *func_001D3A60();                              /* extern */
M2C_UNK func_001D3AD0(void *);                      /* extern */
M2C_UNK func_0042FC98(s32, M2C_UNK);                /* extern */
s32 func_0057F238(s32, M2C_UNK);                    /* extern */
s32 func_005C1498(M2C_UNK, s32);                    /* extern */
M2C_UNK func_005C1628(s32);                         /* extern */

s32 func_001C7A88(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    struct StackFrame_001C7A88 { s8 pad0[0xC90]; s32 spC90; s8 pad1[0xC]; s32 spCA0; s8 pad2[0xAC]; } sp_;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_v1;
    s32 var_s6;

    temp_v1 = *(s32 *)0x622F4C;
    temp_s3 = temp_v1 + 0x3A41C;
    var_s6 = 0;
    func_0042FC98(temp_v1 + 0x3A368, 0x693E80);
    sp_.spC90 = func_005C1498(0x14004, 0);
loop_1:
    do {
        func_00109A78(&sp_.spCA0);
        func_001D3AD0(func_001D3A60());
        M2C_FIELD(func_001D3A60(), s32 *, 0x1C) = (s32) sp_.spC90;
        M2C_FIELD(func_001D3A60(), void **, 0x20) = (void *) ((s8 *)&sp_);
        temp_s1 = func_00109D00(&sp_.spCA0, (var_s6 != 0) ? 0x693E88 : 0x693E90, 0);
        func_00109AB8(&sp_.spCA0, 2);
        var_s6 = 0;
        if (func_0057F238(temp_s3, 0x693EA0) == 0) {
            func_001C7BF8(sp_.spC90, 0x693E88);
            goto loop_1;
        }
        var_s6 = func_0057F238(temp_s3, 0x693E88) == 0;
    } while (func_0057F238(temp_s3, 0x693EA8) != 0);
    func_005C1628(sp_.spC90);
    return temp_s1;
}
