/* NON_MATCHING: functional draft, 212 of 220 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

float func_00351358(int, float);
void func_003513F8(void *arg0, void *arg1, void *arg2, f32 fparg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f21;
    f32 var_f0;
    f32 var_f12;
    f32 var_f1;
    f32 var_f20;
    f32 var_f20_2;
    s8 temp_v0;
    s8 var_v0;
    s8 var_v0_2;
    s8 var_v0_3;
    s8 var_v1;
    s8 var_v1_2;
    u8 var_v0_4;

    M2C_FIELD(arg0, s8 *, 0x44) = 0;
    temp_f21 = M2C_FIELD(arg0, f32 *, 0x20);
    if (M2C_FIELD(arg2, u8 *, 0x1D8) != 0) {
        var_f20 = fparg0 - temp_f21;
        if (temp_f21 >= 0x0.0p+0f) {
            if (fparg0 <= temp_f21) {
                var_v0 = 1;
            } else {
                var_v0 = -1;
            }
            M2C_FIELD(arg0, s8 *, 0x44) = var_v0;
            M2C_FIELD(arg0, s8 *, 0x45) = var_v0;
        } else {
            var_f20 = -var_f20;
            if (temp_f21 <= fparg0) {
                var_v0_2 = -1;
                var_v1 = 1;
            } else {
                var_v0_2 = 1;
                var_v1 = -1;
            }
            M2C_FIELD(arg0, s8 *, 0x45) = var_v0_2;
            M2C_FIELD(arg0, s8 *, 0x44) = var_v1;
        }
        var_f20_2 = var_f20 * M2C_FIELD(arg1, f32 *, 0xFC8);
        M2C_FIELD(arg0, f32 *, 0x3C) = 0x1.0000000000000p+0f;
        if (var_f20_2 > 0x1.0000000000000p+0f) {
            var_f20_2 = 0x1.0000000000000p+0f;
        } else if (var_f20_2 < -0x1.0000000000000p+0f) {
            var_f20_2 = -0x1.0000000000000p+0f;
        }
    } else {
        if ((temp_f21 > -0x1.1c71c60000000p-6f) && (temp_f21 < 0x1.1c71c60000000p-6f)) {
            var_f1 = func_00351358(0, M2C_FIELD(arg0, f32 *, 0x28));
            if (temp_f21 < fparg0) {
                var_v0_3 = -1;
                goto block_29;
            }
            if (!(fparg0 < temp_f21)) {
                M2C_FIELD(arg0, s8 *, 0x45) = 0;
                var_f20_2 = 0x0.0p+0f;
            } else {
                var_v0_3 = 1;
block_29:
                var_f20_2 = 0x1.0000000000000p+0f;
                M2C_FIELD(arg0, s8 *, 0x45) = var_v0_3;
            }
            M2C_FIELD(arg0, s8 *, 0x44) = -1;
        } else {
            var_f20_2 = 0x0.0p+0f;
            if (temp_f21 > 0x0.0p+0f) {
                temp_f12 = M2C_FIELD(arg0, f32 *, 0x28);
                if (fparg0 <= temp_f21) {
                    var_f1 = func_00351358(1, temp_f12);
                    M2C_FIELD(arg0, s8 *, 0x44) = 1;
                    var_f20_2 = ((fparg0 - temp_f21) * var_f1) / temp_f21;
                    M2C_FIELD(arg0, s8 *, 0x45) = 1;
                } else {
                    var_f1 = func_00351358(0, temp_f12);
                    if (!(fparg0 < 0x1.1c71c60000000p-6f) || !(fparg0 > -0x1.1c71c60000000p-6f)) {
                        var_f20_2 = ((fparg0 - temp_f21) * var_f1) / fparg0;
                    }
                    M2C_FIELD(arg0, s8 *, 0x44) = -1;
                    M2C_FIELD(arg0, s8 *, 0x45) = -1;
                }
            } else {
                temp_f12_2 = M2C_FIELD(arg0, f32 *, 0x28);
                if (temp_f21 <= fparg0) {
                    var_f1 = func_00351358(1, temp_f12_2);
                    var_v1_2 = 1;
                    M2C_FIELD(arg0, s8 *, 0x45) = -1;
                    var_f20_2 = ((fparg0 - temp_f21) * var_f1) / temp_f21;
                } else {
                    var_f1 = func_00351358(0, temp_f12_2);
                    if (!(fparg0 < 0x1.1c71c60000000p-6f) || !(fparg0 > -0x1.1c71c60000000p-6f)) {
                        var_f20_2 = ((fparg0 - temp_f21) * var_f1) / fparg0;
                    }
                    var_v1_2 = -1;
                    M2C_FIELD(arg0, s8 *, 0x45) = 1;
                }
                M2C_FIELD(arg0, s8 *, 0x44) = var_v1_2;
            }
        }
        var_f0 = 0x1.0000000000000p+0f;
        M2C_FIELD(arg0, f32 *, 0x3C) = var_f1;
        if ((var_f20_2 > 0x1.0000000000000p+0f) || (var_f0 = -0x1.0000000000000p+0f, (var_f20_2 < -0x1.0000000000000p+0f))) {
            var_f20_2 = var_f0;
        }
        temp_v0 = M2C_FIELD(arg0, s8 *, 0x44);
        if (temp_v0 == 0) {
            var_f20_2 = 0x0.0p+0f;
        } else {
            if (temp_v0 >= 0) {
                var_f12 = temp_f21;
                var_v0_4 = *(u8 *)0x620D8D;
            } else {
                var_f12 = fparg0;
                var_v0_4 = *(u8 *)0x620D8C;
            }
            if (var_v0_4 != 0) {
                temp_f0 = (f32) var_v0_4 * 0x1.1c71c60000000p-2f;
                if (var_f12 < 0x0.0p+0f) {
                    var_f12 = -var_f12;
                }
                if (var_f12 < temp_f0) {
                    var_f20_2 *= var_f12 / temp_f0;
                }
            }
        }
    }
    M2C_FIELD(arg0, f32 *, 0x38) = var_f20_2;
}
