/* NON_MATCHING: functional draft, 80 of 90 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void *func_00359510();                              /* extern */

f32 func_003F7CA8(void *arg0, s32 arg1, f32 fparg0) {
    f32 temp_f0;
    f32 var_f1;
    s32 var_a2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_3;
    u32 var_v1_2;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a0_3;
    u8 var_v0_2;
    u8 var_v0_3;
    void *temp_a1;
    void *temp_v0;

    temp_v0 = func_00359510();
    var_f1 = 0x0.0p+0f;
    temp_a0 = M2C_FIELD(temp_v0, u8 *, 1);
    temp_a1 = temp_v0 + 0xC;
    if (arg1 >= (s32) temp_a0) {
        var_v1 = 0;
    } else {
        var_v1 = M2C_FIELD((arg1 + temp_a1), s8 *, 0x30) > 0;
    }
    var_a2 = arg1 + 0x10;
    if (var_v1 != 0) {
        temp_a0_2 = *(u8 *)(temp_a1 + var_a2);
        var_f1 = fparg0;
        if (temp_a0_2 < 2U) {
            if (var_f1 >= 0x0.0p+0f) {
                var_v0 = temp_a0_2 * 4;
            } else {
                var_v0_2 = 1 - temp_a0_2;
                goto block_20;
            }
            goto block_21;
        }
    } else {
        var_v1_2 = 0;
        if (arg1 < (s32) temp_a0) {
            var_v1_2 = (u32) M2C_FIELD((arg1 + temp_a1), s8 *, 0x30) >> 0x1F;
        }
        if (var_v1_2 != 0) {
            var_f1 = 0x0.0p+0f;
            var_v1_3 = 0;
            if (M2C_FIELD(arg0, u8 *, 0x10D0) == 1) {
                var_v1_3 = 1;
                var_f1 = -fparg0 * M2C_FIELD(arg0, f32 *, 0x10CC);
            }
            var_a2 = arg1 + 0x10;
            if (var_v1_3 != 0) {
                var_v0_2 = *(u8 *)(temp_a1 + var_a2);
                if (var_v0_2 < 2U) {
                    if (!(fparg0 >= 0x0.0p+0f)) {
                        var_v0_2 = 1 - var_v0_2;
                    }
block_20:
                    var_v0 = var_v0_2 * 4;
block_21:
                    var_f1 *= M2C_FIELD((var_v0 + arg0), f32 *, 0x10C);
                }
            } else {
                goto block_22;
            }
        } else {
block_22:
            var_a2 = arg1 + 0x10;
        }
    }
    temp_a0_3 = *(u8 *)(temp_a1 + var_a2);
    var_v0_3 = 0;
    if (arg1 < (s32) M2C_FIELD(temp_v0, u8 *, 1)) {
        var_v0_3 = M2C_FIELD((temp_v0 + var_a2), u8 *, 4);
    }
    temp_f0 = M2C_FIELD(((var_v0_3 * 4) + arg0), f32 *, 0x1008);
    if (temp_a0_3 == 0) {
        var_f1 -= temp_f0;
    } else if (temp_a0_3 == 1) {
        var_f1 += temp_f0;
    }
    return var_f1;
}
