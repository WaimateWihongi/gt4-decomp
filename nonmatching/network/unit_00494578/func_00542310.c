/* NON_MATCHING: functional draft, 26 of 43 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_005412E8();         /* extern */

s32 func_00542310(s32 arg0, void *arg1) {
    struct StackFrame_00542310 { void * sp0; s8 pad0[0xC]; } sp_;
    s32 var_v0;
    u32 var_s0;
    void *temp_a1;
    void *var_a2;

    var_a2 = arg1;
    sp_.sp0 = var_a2;
    if (var_a2 != NULL) {
        var_s0 = 0;
        if (M2C_FIELD(var_a2, s32 *, 4) != 0) {
            func_005412E8(arg0, var_a2 + 4, var_a2);
            var_a2 = sp_.sp0;
            var_s0 = 0;
        }
        var_v0 = 0 * 4;
        do {
            var_s0 += 1;
            temp_a1 = var_a2 + var_v0;
            if (M2C_FIELD(temp_a1, s32 *, 0xC) != 0) {
                func_005412E8(arg0, temp_a1 + 0xC, var_a2);
                var_a2 = sp_.sp0;
            }
            var_v0 = var_s0 * 4;
        } while (var_s0 < 0x40U);
        if (M2C_FIELD(var_a2, s32 *, 0x10C) != 0) {
            func_005412E8(arg0, var_a2 + 0x10C, var_a2);
        }
        func_005412E8(arg0, ((s8 *)&sp_));
    }
    return 0;
}
