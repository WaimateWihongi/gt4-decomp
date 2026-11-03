/* NON_MATCHING: functional draft, 71 of 72 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_0049ECF8(void *arg0) {
    s16 var_a4;
    s16 var_v1;
    s32 temp_a0;
    s32 temp_a1;
    s32 var_a6;
    s32 var_t0;
    s32 var_v0;
    s8 var_a7;
    void *var_a3;

    var_a7 = 0;
    M2C_FIELD(arg0, void **, 0xB18) = NULL;
    var_a3 = arg0 + 0x3E0;
    M2C_FIELD(arg0, u16 *, 0xB1C) = 0U;
    var_a4 = (M2C_FIELD(arg0, s8 *, 0x48) | 7) & ~0x31;
    var_t0 = 7;
    do {
        M2C_FIELD(var_a3, s8 *, 9) = -1;
        if (M2C_FIELD(var_a3, u8 *, 8) != 0) {
            var_a6 = 1;
            M2C_FIELD(var_a3, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0xB18);
            M2C_FIELD(arg0, void **, 0xB18) = var_a3;
            M2C_FIELD(arg0, u16 *, 0xB1C) = (u16) (M2C_FIELD(arg0, u16 *, 0xB1C) + 1);
            temp_a1 = (M2C_FIELD(var_a3, s32 *, 0x20) | M2C_FIELD(var_a3, s32 *, 0x24) | M2C_FIELD(var_a3, s32 *, 0x28)) != 0;
            temp_a0 = (M2C_FIELD(var_a3, s32 *, 0x40) | M2C_FIELD(var_a3, s32 *, 0x44) | M2C_FIELD(var_a3, s32 *, 0x48)) != 0;
            if (M2C_FIELD(var_a3, f32 *, 0x6C) != 0x0.0p+0f) {
                var_a6 = 0;
            }
            var_v1 = var_a4 | 0x10;
            if (var_a6 == 0) {
                if ((temp_a1 != 0) || (var_v0 = var_a7 < 4, (temp_a0 != 0))) {
                    var_a4 |= 0x20;
                    var_v1 = var_a4 | 0x10;
                    goto block_8;
                }
            } else {
block_8:
                var_a4 = ((temp_a0 ^ 0) != 0) ? var_v1 : var_a4;
                var_v0 = var_a7 < 4;
            }
            if ((var_v0 != 0) && ((temp_a1 != 0) || (temp_a0 != 0)) && (var_a6 != 0)) {
                M2C_FIELD(var_a3, s8 *, 9) = var_a7;
                var_a7 += 1;
            }
        }
        var_t0 -= 1;
        var_a3 += 0xD0;
    } while (var_t0 >= 0);
    M2C_FIELD(arg0, s8 *, 0x48) = var_a4;
    M2C_FIELD(arg0, s16 *, 0xB1E) = (s16) var_a7;
}
