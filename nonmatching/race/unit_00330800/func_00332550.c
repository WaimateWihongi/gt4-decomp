/* NON_MATCHING: functional draft, 113 of 115 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_003326E8(s32, s32, s32, s32, s32, s32, s32, s32, f32); /* extern */
M2C_UNK func_004A74B4(void *, f32);                 /* extern */
M2C_UNK func_004A7550(void *);                      /* extern */
M2C_UNK func_004A7844(f32, f32, M2C_UNK);           /* extern */

void func_00332550(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, f32 fparg4, f32 fparg5, f32 fparg6, f32 fparg7, f32 arg_sp0) {
    s32 sp14;
    s32 sp0;
    struct StackFrame_00332550 { s8 pad0[0x20]; f32 sp20; f32 sp24; s8 pad1[0x18]; } sp_;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f24;
    f32 var_f26;
    f32 var_f27;
    f32 var_f28;

    var_f28 = fparg0;
    temp_f24 = fparg4 / fparg3;
    func_003326E8(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, fparg3);
    func_004A7550(((s8 *)&sp_));
    temp_f12 = 0x1.0000000000000p+1f * fparg7;
    temp_f0 = M2C_RSQRTS(fparg2 * 0x1.0624dc0000000p-10f, (fparg3 * fparg3) + 0x1.0000000000000p+0f) * 0x1.0000000000000p-1f;
    if (var_f28 < 0x1.9999980000000p-4f) {
        var_f28 = 0x1.3880000000000p+13f;
    }
    temp_f0_2 = (temp_f0 * sp14) / (0x1.0000000000000p+1f * fparg1);
    var_f27 = fparg6 * temp_f0_2;
    var_f26 = fparg5 * temp_f0_2;
    if (temp_f24 > 0x1.0000000000000p+0f) {
        var_f26 /= temp_f24;
    } else {
        var_f27 *= temp_f24;
    }
    sp_.sp24 += ((var_f27 / var_f28) * sp14) + (0x1.0000000000000p+1f * arg_sp0);
    sp_.sp20 += ((var_f26 / var_f28) * sp0) + temp_f12;
    func_004A74B4(((s8 *)&sp_), temp_f12);
    func_004A7844(var_f26, var_f27, 0);
}
