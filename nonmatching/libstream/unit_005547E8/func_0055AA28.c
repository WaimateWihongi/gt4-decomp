/* NON_MATCHING: functional draft, 31 of 57 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0055C9A0(s32, void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0055CFE8(void *);                      /* extern */
s32 func_0055D148(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0055D688(s32, M2C_UNK);                /* extern */
M2C_UNK func_00576100(M2C_UNK);                     /* extern */
M2C_UNK func_00576140(M2C_UNK);                     /* extern */

void func_0055AA28(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp0;
    struct StackFrame_0055AA28 { s8 pad0[0x1C]; s32 sp1C; s8 pad1[0x8]; s32 sp28; s32 sp2C; s32 sp30; } sp_;
    s32 temp_v0;

    func_0055CFE8(((s8 *)&sp_));
    sp_.sp28 = arg2;
    sp_.sp1C = M2C_FIELD(arg0, s32 *, 0x30);
    sp_.sp2C = arg3;
    sp_.sp30 |= 0xC8;
    func_00576100(0x655340);
    if (arg4 != 0) {
        temp_v0 = func_0055D148(((s8 *)&sp_), 0, 0x55CF28, 0, 0);
        if (temp_v0 != 0) {
            func_0055D688(temp_v0, 0);
        }
    } else {
        func_0055C9A0(sp0, ((s8 *)&sp_), 0x55CF28, 0, 0);
    }
    func_00576140(0x655340);
}
