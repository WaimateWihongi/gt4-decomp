/* NON_MATCHING: functional draft, 107 of 115 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void *func_0021A850(s32);                           /* extern */

void func_002BD068(s32 arg0, void *arg1) {
    f32 *var_v0;
    f32 *var_v0_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f0_5;
    f32 var_f1;
    void *temp_v1;

    temp_f1 = M2C_FIELD(arg1, f32 *, 0);
    temp_v1 = func_0021A850(arg0 + 0xA0);
    if (temp_f1 != 0x0.0p+0f) {
        temp_f0 = M2C_FIELD(temp_v1, f32 *, 0) + temp_f1;
        M2C_FIELD(temp_v1, f32 *, 0) = temp_f0;
        if (temp_f0 < 0x0.0p+0f) {
            var_f0 = temp_f0 + 0x1.6800000000000p+8f;
loop_3:
            if (var_f0 < 0x0.0p+0f) {
                var_f0 += 0x1.6800000000000p+8f;
                goto loop_3;
            }
            M2C_FIELD(temp_v1, f32 *, 0) = var_f0;
        }
        var_f1 = M2C_FIELD(temp_v1, f32 *, 0);
        if (var_f1 > 0x1.6800000000000p+8f) {
            do {
                temp_f0_2 = var_f1 - 0x1.6800000000000p+8f;
                var_f1 = temp_f0_2;
            } while (temp_f0_2 > 0x1.6800000000000p+8f);
            M2C_FIELD(temp_v1, f32 *, 0) = temp_f0_2;
        }
    }
    temp_f1_2 = M2C_FIELD(arg1, f32 *, 4);
    var_v0 = temp_v1 + 4;
    if (temp_f1_2 != 0x0.0p+0f) {
        temp_f0_3 = M2C_FIELD(temp_v1, f32 *, 4) + temp_f1_2;
        M2C_FIELD(temp_v1, f32 *, 4) = temp_f0_3;
        if (temp_f0_3 < 0x0.0p+0f) {
            var_f0_2 = temp_f0_3 + 0x1.6800000000000p+8f;
loop_14:
            if (var_f0_2 < 0x0.0p+0f) {
                var_f0_2 += 0x1.6800000000000p+8f;
                goto loop_14;
            }
            M2C_FIELD(temp_v1, f32 *, 4) = var_f0_2;
            var_v0 = temp_v1 + 4;
        }
        var_f0_3 = *var_v0;
        if (var_f0_3 > 0x1.6800000000000p+8f) {
            do {
                var_f0_3 -= 0x1.6800000000000p+8f;
            } while (var_f0_3 > 0x1.6800000000000p+8f);
            *var_v0 = var_f0_3;
        }
    }
    temp_f1_3 = M2C_FIELD(arg1, f32 *, 8);
    var_v0_2 = temp_v1 + 8;
    if (temp_f1_3 != 0x0.0p+0f) {
        temp_f0_4 = M2C_FIELD(temp_v1, f32 *, 8) + temp_f1_3;
        M2C_FIELD(temp_v1, f32 *, 8) = temp_f0_4;
        if (temp_f0_4 < 0x0.0p+0f) {
            var_f0_4 = temp_f0_4 + 0x1.6800000000000p+8f;
loop_24:
            if (var_f0_4 < 0x0.0p+0f) {
                var_f0_4 += 0x1.6800000000000p+8f;
                goto loop_24;
            }
            M2C_FIELD(temp_v1, f32 *, 8) = var_f0_4;
            var_v0_2 = temp_v1 + 8;
        }
        var_f0_5 = *var_v0_2;
        if (var_f0_5 > 0x1.6800000000000p+8f) {
            do {
                var_f0_5 -= 0x1.6800000000000p+8f;
            } while (var_f0_5 > 0x1.6800000000000p+8f);
            *var_v0_2 = var_f0_5;
        }
    }
}
