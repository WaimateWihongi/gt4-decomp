/* NON_MATCHING: functional draft, 48 of 49 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_00449298(s32, s64, void *);                /* extern */

s32 func_00448B48(s64 arg0, void *arg1) {
    s32 sp0;
    s32 sp38;
    s32 sp8;
    s32 sp10;
    s32 sp18;
    s32 sp20;
    s32 sp28;
    s32 sp40;
    s32 sp30;
    struct StackFrame_00448B48 { s8 pad0[0x50]; } sp_;
    s32 var_a0;
    s32 var_v0;
    s64 temp_v1;

    temp_v1 = arg0 >> 0x20;
    if (temp_v1 == 0) {
        var_a0 = *(s32 *)0x623800;
        goto block_4;
    }
    var_v0 = 0;
    if (temp_v1 == 0x26) {
        var_a0 = *(s32 *)0x623804;
block_4:
        var_v0 = func_00449298(var_a0, (s64) ((arg0 & (0xFFFF0000U >> 0x20)) << 0x20) >> 0x20, ((s8 *)&sp_));
        if (var_v0 != 0) {
            var_v0 = 1;
            M2C_FIELD(arg1, s64 *, 0) = sp0;
            M2C_FIELD(arg1, s64 *, 0x40) = sp38;
            M2C_FIELD(arg1, s64 *, 8) = sp8;
            M2C_FIELD(arg1, s64 *, 0x10) = sp10;
            M2C_FIELD(arg1, s64 *, 0x18) = sp18;
            M2C_FIELD(arg1, s64 *, 0x20) = sp20;
            M2C_FIELD(arg1, s64 *, 0x28) = sp28;
            M2C_FIELD(arg1, u8 *, 0x30) = sp40;
            M2C_FIELD(arg1, s64 *, 0x38) = sp30;
        }
    }
    return var_v0;
}
