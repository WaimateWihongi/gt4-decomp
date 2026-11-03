/* NON_MATCHING: functional draft, 83 of 83 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

f32 func_0057D2B8(f32);                             /* extern */
f32 func_0059D2A0(void *, void *, f32 *, s32, s32, s32, s32, s32, f32); /* extern */

void func_00422150(void *arg0, void *arg1, f32 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f2;

    temp_f20 = 0x1.921fb40000000p+0f - func_0059D2A0(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, M2C_MINS(M2C_MAXS(M2C_FIELD(arg0, f32 *, 0xC), -0x1.0000000000000p+0f), 0x1.0000000000000p+0f));
    temp_f0 = func_0057D2B8(temp_f20);
    if (temp_f0 != 0x0.0p+0f) {
        temp_f2 = 0x1.0000000000000p+0f / temp_f0;
        M2C_FIELD(arg1, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) * temp_f2);
        M2C_FIELD(arg1, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) * temp_f2);
        M2C_FIELD(arg1, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) * temp_f2);
    } else {
        M2C_FIELD(arg1, f32 *, 8) = 0x0.0p+0f;
        M2C_FIELD(arg1, f32 *, 0) = 0x1.0000000000000p+0f;
        M2C_FIELD(arg1, f32 *, 4) = 0x0.0p+0f;
    }
    *arg2 = 0x1.0000000000000p+1f * temp_f20;
}
