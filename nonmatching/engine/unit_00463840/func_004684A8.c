/* NON_MATCHING: functional draft, 121 of 124 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

f32 func_00468458(void *);
void func_004684A8(s32 arg0, s32 arg1, f32 fparg0) {
    f32 var_f0;
    f32 var_f12;
    s16 temp_a5;
    s16 temp_a5_3;
    s16 var_a5;
    s32 temp_a0;
    s32 temp_a5_2;
    s32 temp_s0_2;
    s32 temp_v1_2;
    s32 var_s2;
    s8 var_v0;
    u16 *temp_v1_3;
    u16 *var_a0_2;
    u32 temp_v0;
    u32 var_a0;
    void *temp_s0;
    void *temp_v1;

    if (arg1 == 0) {
        var_f0 = 0x1.e8e38c0000000p+5f;
    } else {
        var_f0 = 0x1.20e38c0000000p+6f;
    }
    var_f12 = (fparg0 - 0x1.0aaaa80000000p+4f) * (0x1.0000000000000p+0f / (var_f0 - 0x1.0aaaa80000000p+4f));
    if (var_f12 < 0x0.0p+0f) {
        var_f12 = 0x0.0p+0f;
    } else if (var_f12 > 0x1.0000000000000p+0f) {
        var_f12 = 0x1.0000000000000p+0f;
    }
    var_s2 = 0;
    func_00468478(arg0, var_f12, arg1);
    temp_s0 = M2C_FIELD(arg0, void **, 4);
    temp_v1 = M2C_FIELD(temp_s0, void **, 0x10140);
    if ((M2C_FIELD((temp_v1 + 0x30), s32 (**)(void *), 4)(temp_s0 + M2C_FIELD(temp_v1, s16 *, 0x30)) == 0) && (M2C_FIELD(temp_s0, s32 *, 0xF8A0) >= 2)) {
        var_v0 = M2C_FIELD(arg0, s8 *, 0x5C);
        var_a0 = 0;
loop_13:
        var_a0 += 1;
        if (var_v0 != 0) {
            var_s2 = 1;
        } else if (var_a0 < 8U) {
            var_v0 = M2C_FIELD((var_a0 + arg0), s8 *, 0x5C);
            goto loop_13;
        }
    }
    temp_s0_2 = arg0 + 0x8C;
    temp_v0 = M2C_BITWISE(u32, func_00468458((void *) arg0));
    temp_v1_2 = (s32) ((temp_v0 >> 0x1F) + temp_v0) >> 1;
    if (var_s2 == 0) {
        var_a0_2 = temp_s0_2 + ((temp_v1_2 * 2) + 0x30);
        temp_a5 = *var_a0_2 + 0x1000;
        var_a5 = (temp_a5 > 0xFFFF) ? -1 : temp_a5;
    } else {
        temp_a0 = temp_v1_2 * 2;
        temp_v1_3 = temp_s0_2 + (temp_a0 + 0x30);
        var_a0_2 = temp_s0_2 + (temp_a0 + 0x38);
        temp_a5_2 = *temp_v1_3 + (0x1000 / 3);
        *temp_v1_3 = (u16) ((temp_a5_2 > 0xFFFF) ? 0xFFFF : temp_a5_2);
        temp_a5_3 = *var_a0_2 + (0x2000 / 3);
        var_a5 = (temp_a5_3 > 0xFFFF) ? -1 : temp_a5_3;
    }
    *var_a0_2 = var_a5;
}
