/* NON_MATCHING: functional draft, 172 of 199 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s8 *func_00353EB8();           /* extern */
void *func_00359510(s32);                           /* extern */

void func_0036CEE8(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f3;
    f32 var_f3_2;
    f32 var_f4;
    f32 var_f4_2;
    f32 var_f5;
    f32 var_f6;
    f32 var_f7;
    f32 var_f8;
    s32 temp_f1;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_v0;
    s32 var_v1;
    s8 temp_a0;
    u8 temp_a3;
    u8 temp_v0_3;
    void *temp_s1;
    void *temp_t0;
    void *temp_v0_2;
    void *var_a0;

    temp_s1 = arg0 + 0x104;
    temp_t0 = func_00359510(M2C_FIELD(arg0, s32 *, 0x10));
    if ((u32) (M2C_FIELD(temp_s1, u8 *, 0x466) - 1) >= 2U) {
        var_a2 = 0;
        if (M2C_FIELD(temp_s1, u8 *, 0x467) == 0) {
            var_f3 = 0x0.0p+0f;
            var_a1 = 0;
            temp_a3 = M2C_FIELD(temp_t0, u8 *, 1);
            var_f6 = 0x0.0p+0f;
            var_f7 = 0x0.0p+0f;
            var_f8 = 0x0.0p+0f;
            var_f4 = 0x0.0p+0f;
            var_f5 = 0x0.0p+0f;
loop_7:
            if (var_a1 < (s32) temp_a3) {
                temp_a0 = M2C_FIELD((var_a1 + temp_t0), s8 *, 0x3C);
                temp_v0 = var_a1 * 0x3B;
                var_a1 += 1;
                temp_v0_2 = arg0 + (temp_v0 * 4) + 0x164;
                if (temp_a0 > 0) {
                    temp_f0 = M2C_FIELD(temp_v0_2, f32 *, 0x38);
                    var_a2 += 1;
                    var_f4 += M2C_FIELD(temp_v0_2, f32 *, 0x74);
                    var_f3 += M2C_FIELD(temp_v0_2, f32 *, 0x70);
                    var_f5 += temp_f0 * temp_f0;
                }
                goto loop_7;
            }
            if (var_a2 != 0) {
                var_f3 *= (var_f5 / (f32) var_a2) + 0x1.9999980000000p-4f;
            }
            if (var_f3 < 0x0.0p+0f) {
                var_f3 = -var_f3;
            }
            var_f3_2 = var_f3 * 0x1.54fdf20000000p-11f;
            if (var_f3_2 > 0x1.54fdf20000000p-2f) {
                var_f3_2 = 0x1.54fdf20000000p-2f;
            }
            temp_f4 = var_f4 / 0x1.323ffe0000000p+14f;
            var_f4_2 = temp_f4 * temp_f4;
            if (var_f4_2 > 0x1.54fdf20000000p-2f) {
                var_f4_2 = 0x1.54fdf20000000p-2f;
            }
            temp_f2 = M2C_FIELD(temp_s1, f32 *, 0x610);
            temp_f3 = var_f3_2 + var_f4_2;
            if (temp_f2 > 0x1.47ae140000000p-7f) {
                var_f7 = (temp_f2 * 0x1.0000000000000p+3f) + 0x1.0000000000000p-2f;
            }
            var_a2_2 = 0;
            if (temp_a3 != 0) {
                var_a1 = (s32) (temp_t0 + 0x3C);
                var_a0 = arg0 + 0x164;
                do {
                    if (M2C_FIELD(temp_s1, u8 *, 0x4BC) == 0) {
                        temp_f0_2 = M2C_FIELD(var_a0, f32 *, 0xA0);
                        var_v0 = var_a2_2 < (s32) temp_a3;
                        if (temp_f0_2 > 0x0.0p+0f) {
                            temp_f0_3 = temp_f0_2 / 0x1.323ffe0000000p+14f;
                            if (!(temp_f0_3 > 0x1.0000000000000p+0f)) {
                                var_f6 += temp_f0_3;
                            } else {
                                var_f6 += 0x1.0000000000000p+0f;
                                var_v0 = var_a2_2 < (s32) temp_a3;
                            }
                        }
                        var_v1 = 0;
                        if (var_v0 != 0) {
                            var_v1 = *(s32 *)var_a1 > 0;
                        }
                        if ((var_v1 != 0) && ((temp_v0_3 = M2C_FIELD(var_a0, u8 *, 0x89), (temp_v0_3 == 1)) || (temp_v0_3 == 0xA) || (temp_v0_3 == 0xB) || (temp_v0_3 == 0x15))) {
                            var_f1 = (M2C_FIELD(var_a0, f32 *, 0x48) / 0x1.6f7ffe0000000p+11f) * (M2C_FIELD(temp_s1, f32 *, 0x53C) * 0x1.0000000000000p-6f);
                            if (var_f1 < 0x0.0p+0f) {
                                var_f1 = -var_f1;
                            }
                            if (var_f1 > 0x1.0000000000000p-2f) {
                                var_f1 = 0x1.0000000000000p-2f;
                            }
                            var_f8 += var_f1;
                        }
                    }
                    var_a2_2 += 1;
                    var_a1 += 1;
                    var_a0 += 0xEC;
                } while (var_a2_2 < (s32) temp_a3);
            }
            var_f1_2 = var_f6 + var_f8;
            if (var_f1_2 < temp_f3) {
                var_f1_2 = temp_f3;
            }
            if (var_f1_2 < var_f7) {
                var_f1_2 = var_f7;
            }
            temp_f1 = (s32) (var_f1_2 * 0x1.0000000000000p+8f);
            M2C_FIELD(func_00353EB8(arg0, (s8 *) var_a1, var_a2_2, temp_a3), s8 *, 1) = (s8) ((temp_f1 >= 0x80) ? 0x7F : temp_f1);
            return;
        }
    }
    M2C_FIELD(func_00353EB8(arg0), s8 *, 1) = 0;
    *func_00353EB8(arg0) = 0;
}
