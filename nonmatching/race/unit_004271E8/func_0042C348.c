/* NON_MATCHING: functional draft, 55 of 75 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0042A3D8(void *);
M2C_UNK func_0042B440(void *, s16, s16, void *, s32, f32, f32, f32); /* extern */

void func_0042C348(void *arg0, s32 arg1, void *arg2, f32 fparg0, f32 fparg1) {
    f32 temp_f21;
    f32 temp_f2;
    f32 var_f20;
    f32 var_f21;
    s16 temp_a1;
    s16 temp_a2_2;
    s32 temp_a2;
    s32 temp_a4;
    s32 temp_f0;
    s32 temp_v1;
    s32 var_a3;
    s32 var_a3_2;
    void *temp_v0;

    var_f21 = fparg0;
    temp_v0 = func_0042A3D8(M2C_FIELD(arg0, s32 *, 8) + (arg1 << 5));
    temp_f2 = M2C_FIELD(temp_v0, f32 *, 4);
    if (M2C_FIELD(temp_v0, u8 *, 0x12) != 0) {
        var_f21 = (temp_f2 + (temp_f2 + M2C_FIELD(temp_v0, f32 *, 0xC))) - var_f21;
    }
    temp_f0 = (s32) fparg1;
    var_a3 = 0;
    temp_v1 = M2C_FIELD(temp_v0, u16 *, 0x10) - 1;
    temp_a2 = temp_f0 + 1;
    if (temp_f0 >= 0) {
        var_a3 = (temp_v1 >= temp_f0) ? temp_f0 : temp_v1;
    }
    temp_a4 = M2C_FIELD(temp_v0, s32 *, 0);
    var_a3_2 = 0;
    temp_a1 = *(s16 *)((var_a3 * 2) + temp_a4);
    if (temp_a2 >= 0) {
        var_a3_2 = (temp_v1 >= temp_a2) ? temp_a2 : temp_v1;
    }
    temp_a2_2 = *(s16 *)((var_a3_2 * 2) + temp_a4);
    temp_f21 = (var_f21 - temp_f2) + M2C_FIELD(temp_v0, f32 *, 8);
    var_f20 = fparg1 - (f32) (s32) fparg1;
    if (temp_a1 == temp_a2_2) {
        var_f20 = 0x0.0p+0f;
    }
    if (var_f20 == 0x0.0p+0f) {
        func_0042B440(arg0, temp_a1, 0, arg2, temp_a4, temp_f21, 0x0.0p+0f, 0x0.0p+0f);
        return;
    }
    func_0042B440(arg0, temp_a1, temp_a2_2, arg2, temp_a4, temp_f21, temp_f21, var_f20);
}
