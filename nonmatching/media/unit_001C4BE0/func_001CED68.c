/* NON_MATCHING: functional draft, 51 of 78 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_001CEEC0(s32, s32, s32, void *, s32);      /* extern */
M2C_UNK func_00435388(s32, s32, void *);            /* extern */
s32 func_004354F8(s32, s32);                        /* extern */
s32 func_00435768(s32, s32);                        /* extern */
M2C_UNK func_0043A408(void *, M2C_UNK);             /* extern */
M2C_UNK func_0043DC20(void *);                      /* extern */
M2C_UNK func_00444210(M2C_UNK *, M2C_UNK);          /* extern */

s32 func_001CED68(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct StackFrame_001CED68 { s8 pad0[0x8]; s32 sp8; s8 pad1[0x464]; s32 sp470; s8 pad2[0x4C]; s32 sp4C0; s8 pad3[0xC]; } sp_;
    M2C_UNK *var_s0;
    M2C_UNK *var_s0_2;
    s32 temp_v0;

    if (arg3 >= 0) {
        if (func_00435768(arg2, arg3) != 0) {
            if (func_004354F8(arg2, arg3) == 0) {
                goto block_3;
            }
            /* Duplicate return node #0x1.3000000000000p+4 Try simplifying control flow for better match */
            return 0;
        }
        goto block_18;
    }
block_3:
    func_0043DC20(((s8 *)&sp_));
    temp_v0 = func_001CEEC0(arg0, arg1, arg2, ((s8 *)&sp_), arg3);
    sp_.sp4C0 = temp_v0;
    if (temp_v0 != 0) {
        if ((((s8 *)&sp_) != (void *)-8) && (&sp_.sp8 != &sp_.sp470)) {
            var_s0 = &sp_.sp470 - 0x178;
loop_7:
            func_00444210(var_s0, 2);
            if (&sp_.sp8 != var_s0) {
                var_s0 -= 0x178;
                goto loop_7;
            }
        }
        func_0043A408(((s8 *)&sp_), 0);
        return temp_v0;
    }
    if (arg3 >= 0) {
        func_00435388(arg2, arg3, ((s8 *)&sp_));
    }
    if (((s8 *)&sp_) != (void *)-8) {
        var_s0_2 = &sp_.sp470;
        if (&sp_.sp8 != var_s0_2) {
            do {
                var_s0_2 -= 0x178;
                func_00444210(var_s0_2, 2);
            } while (&sp_.sp8 != var_s0_2);
        }
    }
    func_0043A408(((s8 *)&sp_), 0);
block_18:
    return 0;
}
