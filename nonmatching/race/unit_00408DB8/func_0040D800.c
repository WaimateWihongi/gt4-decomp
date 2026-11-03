/* NON_MATCHING: functional draft, 121 of 124 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

f32 func_00344798(void *, f32);
f32 func_003447F8(void *, f32);
f32 func_00344828(void *, f32);
s32 func_0034C190(s32, s32);
void *func_0040D800(void *arg0, void *arg1, void *arg2) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    void *sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f21;
    s32 temp_v0;
    s32 var_a1;
    s32 var_s4;
    u8 temp_s2;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *var_v0;

    temp_v1 = arg1 + 0x104;
    sp40 = arg0;
    if ((arg2 == NULL) || (M2C_FIELD(temp_v1, u8 *, 0x441) != 0)) {
        return NULL;
    }
    var_s4 = 0;
    sp4C = 0;
    sp44 = (s32) M2C_FIELD(temp_v1, u8 *, 0x440);
    sp10 = func_00344798(arg1, 0x0.0p+0f);
    sp14 = func_003447F8(arg1, 0x0.0p+0f);
    var_f21 = 0x0.0p+0f;
    sp18 = func_00344828(arg1, 0x0.0p+0f);
    sp48 = 0;
    if (M2C_FIELD(arg2, s32 *, 0xF8A0) > 0) {
        var_a1 = 0;
        do {
            var_s4 += 1;
            temp_v0 = func_0034C190((s32) arg2, var_a1);
            temp_v0_2 = temp_v0 + 0x104;
            temp_s2 = M2C_FIELD(temp_v0_2, u8 *, 0x440);
            if ((temp_s2 != sp44) && (M2C_FIELD(temp_v0_2, u8 *, 0x441) == 0) && ((sp0 = func_00344798((void *) temp_v0, 0x0.0p+0f), temp_f0 = func_003447F8((void *) temp_v0, 0x0.0p+0f), sp4 = temp_f0, sp8 = func_00344828((void *) temp_v0, 0x0.0p+0f), sp30 = sp10, sp34 = sp14, sp38 = sp18, sp30 -= sp0, sp34 -= temp_f0, sp38 -= sp8, sp20 = sp30, temp_f2 = sp34, sp24 = temp_f2, temp_f1 = sp38, sp28 = temp_f1, temp_f0_2 = sp20, temp_f0_3 = (temp_f0_2 * temp_f0_2) + (temp_f2 * temp_f2) + (temp_f1 * temp_f1), (sp4C == 0)) || (temp_f0_3 < var_f21))) {
                sp48 = (s32) temp_s2;
                sp4C = 1;
                var_f21 = temp_f0_3;
            }
            var_a1 = var_s4;
        } while (var_s4 < M2C_FIELD(arg2, s32 *, 0xF8A0));
    }
    var_v0 = NULL;
    if (sp4C != 0) {
        temp_v0_3 = func_0034C190((s32) arg2, sp48);
        func_0040D618(sp40, arg1, temp_v0_3);
        var_v0 = temp_v0_3;
    }
    return var_v0;
}
