/* NON_MATCHING: functional draft, 57 of 57 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_00531F40(M2C_UNK arg0, s64 arg1, u8 arg2, u8 arg3, s32 arg4, s32 arg5) {
    s64 sp0;
    u8 sp10;
    u8 sp11;
    s32 sp20;
    s32 sp24;
    s32 sp60;
    s32 sp64;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_v0;
    void *temp_a4;

    var_v0 = 0x17;
    sp0 = arg1;
    if ((arg2 < 6U) && (arg3 < 0x100U) && (arg4 > 0)) {
        var_v0 = 0x1F;
        if (arg4 < 0x1FF) {
            var_v0 = 0x17;
            if (arg5 != 0) {
                var_v0 = 0x17;
                if (M2C_FIELD(*(void **)0x64B4B0, s32 (**)(s64), 0x70)(sp0) == 0) {
                    sp64 = 0;
                    sp60 = 0;
                    sp10 = arg2;
                    sp11 = arg3;
                    sp24 = arg4;
                    sp20 = arg5;
                    temp_a0 = sp64 + 1;
                    sp60 += arg4;
                    sp64 = temp_a0;
                    if (temp_a0 < 8) {
                        temp_a0_2 = temp_a0 * 8;
                        *(&sp24 + temp_a0_2) = 2;
                        *(&sp20 + temp_a0_2) = &sp10;
                        sp60 += 2;
                        sp64 += 1;
                    }
                    temp_a4 = *(void **)0x64B47C;
                    var_v0 = (M2C_FIELD(*(void **)0x64B4BC, s32 (**)(s32, s64, s32, s32 *, void *), 0x48)(*(s32 *)0x64B4F4, sp0, M2C_FIELD(temp_a4, s32 *, 0x6C), &sp20, temp_a4) == 0) ? 0 : 0x25;
                }
            }
        }
    }
    return var_v0;
}
