/* NON_MATCHING: functional draft, 51 of 75 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00105280(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_001052E0(M2C_UNK *, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_003993D0(void *);                      /* extern */
M2C_UNK func_00399490(void *, f32, M2C_UNK);        /* extern */
M2C_UNK func_003994C0(void *, f32, f32);            /* extern */
M2C_UNK func_00399550(void *, s32 *, void *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00399998(void *, s32 *, void *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_004A1638(M2C_UNK);                     /* extern */
M2C_UNK func_004AB040(M2C_UNK);                     /* extern */

void func_0033E6E0(s32 *arg1, s32 arg2, void *arg3, f32 fparg0, f32 fparg1, f32 fparg2) {
    struct StackFrame_0033E6E0 { s8 pad0[0x2C]; s32 sp2C; s8 pad1[0x90]; s32 spC0; s8 pad2[0x3C]; } sp_;
    u32 temp_a3;

    func_003993D0(((s8 *)&sp_));
    func_004A1638(5);
    func_004AB040(6);
    temp_a3 = M2C_FIELD(arg3, u32 *, 0xC);
    func_001052E0(&sp_.spC0, 1, M2C_FIELD(arg3, s32 *, 8), (s32) (temp_a3 + (temp_a3 >> 0x1F)) >> 1);
    func_00399490(((s8 *)&sp_), fparg0, 0x3FAA9FBE);
    func_003994C0(((s8 *)&sp_), fparg1, fparg2);
    if (*arg1 == M2C_FIELD(arg3, s32 *, 0)) {
        func_00399550(((s8 *)&sp_), arg1, arg3, arg2, 0x3F800000, 0x3F800000, 0x3F800000, 0x3F800000);
    } else {
        func_00399998(((s8 *)&sp_), arg1, arg3, arg2, 0, 0x3F800000, 0x3F800000, 0x3F800000);
    }
    func_00105280(&sp_.spC0, 2);
    func_00105280(&sp_.sp2C, 2);
}
