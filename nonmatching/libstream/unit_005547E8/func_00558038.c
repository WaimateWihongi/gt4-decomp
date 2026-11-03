/* NON_MATCHING: functional draft, 43 of 43 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_004AF8B8(void *, void *, s32, s32);        /* extern */
M2C_UNK func_006111F0(void *, s32, s32);            /* extern */

s32 func_00558038(void *arg0, s32 arg1) {
    struct StackFrame_00558038 { s8 pad0[0x4]; } sp_;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s4;
    s32 var_v0;
    void *temp_s3;

    var_s4 = 0;
    temp_s3 = arg0 + 0x630;
loop_3:
    if ((arg1 != 0) || (var_v0 = var_s4, ((M2C_FIELD(temp_s3, s32 *, 8) < 0x5000) != 0))) {
        temp_v0 = M2C_FIELD(temp_s3, s32 *, 0xC);
        if (((temp_v0 < 0) ? 0 : temp_v0) >= 0x800) {
            temp_v0_2 = func_004AF8B8(arg0, ((s8 *)&sp_), M2C_FIELD(arg0, s32 *, 0x75C), 0x800);
            var_s4 += temp_v0_2;
            func_006111F0(temp_s3, M2C_FIELD(arg0, s32 *, 0x75C), temp_v0_2);
            var_v0 = var_s4;
            if (temp_v0_2 == 0x800) {
                goto loop_3;
            }
        } else {
            var_v0 = var_s4;
        }
    }
    return var_v0;
}
