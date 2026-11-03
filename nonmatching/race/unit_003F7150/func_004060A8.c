/* NON_MATCHING: functional draft, 170 of 181 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

f32 func_00385958(void *);
int func_00385D38(int *);
s32 func_003864C8(s32 *);
float func_0057D1F0(float);
float func_0057D2B8(float);
void func_004060A8(void *arg0, s32 *arg1) {
    f32 sp0;
    s32 sp4;
    s32 sp8;
    f32 *temp_v0_3;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f21;
    f32 temp_f24;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 var_f0;
    f32 var_f20;
    f32 var_f20_2;
    s32 temp_s0;
    s32 temp_v0_2;
    s32 temp_v1;
    s64 temp_v0;

    temp_f24 = fabsf(M2C_FIELD(arg0, f32 *, 0xF8));
    var_f20 = temp_f24 / 0x1.bc71c60000000p+4f;
    if (var_f20 > 0x1.0000000000000p+0f) {
        var_f20 = 0x1.0000000000000p+0f;
    }
    temp_v1 = *arg1;
    temp_v0 = (s64) ((((MULTU_HI(temp_v1, 0x0900D309) << 0x20) | ((u64) (temp_v1 * 0x900D30900000000) >> 0x20)) + 1) << 0x20) >> 0x20;
    *arg1 = (s32) temp_v0;
    if (temp_v0 >= 0) {
        var_f0 = (f32) temp_v0;
    } else {
        var_f0 = 0x1.0000000000000p+1f * (f32) ((temp_v0 & 1) | ((u32) temp_v0 >> 1));
    }
    temp_f21 = (func_00385958(M2C_FIELD(arg0, s32 **, 0)) - 0x1.0000000000000p-1f) * 0x1.921fb40000000p+1f;
    temp_s0 = func_003864C8(M2C_FIELD(arg0, s32 **, 8));
    temp_v0_2 = func_00385D38(M2C_FIELD(arg0, s32 **, 0));
    sp8 = temp_v0_2;
    sp4 = temp_s0;
    sp0 = 0x0.0p+0f;
    temp_f0 = -M2C_FIELD(arg0, f32 *, 0xF8) * 0x1.9000000000000p+6f;
    temp_f20 = (var_f20 * ((0x1.8000000000000p+0f * (var_f0 * 0x1.0000000000000p-32f)) + -0x1.8000000000000p-1f) * temp_f0) + temp_f0;
    temp_f20_2 = temp_f20 * func_0057D1F0(temp_f21);
    temp_f2 = sp0 + (temp_f20_2 - (func_0057D2B8(temp_f21) * 0x1.c200000000000p+8f));
    sp0 = temp_f2;
    temp_f20_3 = temp_f2 + ((0x1.0000000000000p-1f - *(s32 *)temp_v0_2) * 0x1.0000000000000p-2f);
    sp0 = temp_f20_3;
    if (temp_f24 < 0x1.638e380000000p+0f) {
        temp_f2_2 = M2C_FIELD(arg0, f32 *, 0x110);
        temp_f1 = temp_f20_3 - (*(s32 *)sp4 * 0x1.4000000000000p+2f);
        sp0 = temp_f1;
        *(s32 *)sp4 = (f32) (*(s32 *)sp4 + (temp_f1 * temp_f2_2));
        *(s32 *)sp8 = (f32) (*(s32 *)sp8 + (*(s32 *)sp4 * temp_f2_2));
    } else {
        temp_f2_3 = M2C_FIELD(arg0, f32 *, 0x110);
        temp_f1_2 = temp_f20_3 - *(s32 *)sp4;
        sp0 = temp_f1_2;
        *(s32 *)sp4 = (f32) (*(s32 *)sp4 + (temp_f1_2 * temp_f2_3));
        *(s32 *)sp8 = (f32) (*(s32 *)sp8 + (*(s32 *)sp4 * temp_f2_3));
    }
    sp0 = 0x0.0p+0f;
    var_f20_2 = 0x0.0p+0f;
    if ((*(s32 *)func_00385D38(M2C_FIELD(arg0, s32 **, 0)) < 0x0.0p+0f) || (var_f20_2 = 0x1.0000000000000p+0f, (*(s32 *)func_00385D38(M2C_FIELD(arg0, s32 **, 0)) > 0x1.0000000000000p+0f))) {
        *(s32 *)func_00385D38(M2C_FIELD(arg0, s32 **, 0)) = var_f20_2;
        temp_v0_3 = func_003864C8(M2C_FIELD(arg0, s32 **, 8));
        *temp_v0_3 *= -0x1.9999980000000p-3f;
    }
}
