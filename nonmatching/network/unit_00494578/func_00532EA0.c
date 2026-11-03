/* NON_MATCHING: functional draft, 87 of 87 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_005A48D8(void *, M2C_UNK, M2C_UNK);    /* extern */

s32 func_00532EA0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    struct StackFrame_00532EA0 { s8 pad0[0x40]; } sp_;
    s32 temp_a5;
    s32 var_s7;
    void *temp_a6;

    if (M2C_FIELD(arg0, s32 *, 0x164) == 0) {
        var_s7 = 1;
        if (arg5 != 0) {
            var_s7 = arg5 != 1;
        }
        func_005A48D8(((s8 *)&sp_), 0, 0x34);
        temp_a5 = *(s32 *)0x64B4F8;
        temp_a6 = *(void **)0x64B4B8;
        if (M2C_FIELD(temp_a6, s32 (**)(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, void *), 0)(((s8 *)&sp_), arg0 + 0x164, 0x5368F8, 0x536A78, 0x536C40, temp_a5, temp_a6, arg1, arg2, temp_a5, arg3, arg4, var_s7, arg6, 0x5366B8, 0x536758, 0x5368F8, 0x536A78, 0x536C40, arg0) != 0) {
            M2C_FIELD(*(void **)0x64B4B8, M2C_UNK (**)(s32), 4)(M2C_FIELD(arg0, s32 *, 0x164));
            M2C_FIELD(arg0, s32 *, 0x164) = 0;
            return 0x25;
        }
        /* Duplicate return node #0x1.8000000000000p+2 Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
