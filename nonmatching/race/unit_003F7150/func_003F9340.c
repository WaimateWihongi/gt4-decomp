/* NON_MATCHING: functional draft, 65 of 71 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void *func_00359510(s32);                           /* extern */

void func_003F9340(void *arg0, s32 arg1, f32 *arg2) {
    f32 *var_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a7;
    u8 temp_a1;
    u8 temp_v1_2;
    void *temp_v0;
    void *temp_v1_3;
    void *var_a3;

    temp_v0 = func_00359510(M2C_FIELD(arg0, s32 *, 0x10));
    var_a7 = 0;
    if (M2C_FIELD(temp_v0, u8 *, 1) != 0) {
        var_a2 = arg2;
        var_a3 = arg0 + 0x164;
        do {
            temp_v0_2 = var_a7 + 0x10;
            var_a7 += 1;
            temp_a1 = *(u8 *)(temp_v0 + 4 + temp_v0_2);
            temp_v1 = temp_a1 * 4;
            if (temp_a1 < 2U) {
                M2C_FIELD(var_a3, f32 *, 0x64) = (f32) (M2C_FIELD(var_a3, f32 *, 0x64) * *(s32 *)(arg1 + temp_v1));
                temp_f0 = *(s32 *)var_a2 * *(s32 *)(arg1 + 8 + temp_v1);
                *var_a2 = temp_f0;
                temp_v1_2 = *(u8 *)(temp_v0 + 0xC + temp_v0_2);
                if (temp_v1_2 < 2U) {
                    temp_v1_3 = (((temp_v1_2 | (temp_a1 * 2)) & 0xFF) * 4) + arg1;
                    *var_a2 = temp_f0 * M2C_FIELD(temp_v1_3, f32 *, 0x10);
                    temp_f0_2 = M2C_FIELD(var_a3, f32 *, 0x64) * M2C_FIELD(temp_v1_3, f32 *, 0x20);
                    M2C_FIELD(var_a3, f32 *, 0x64) = temp_f0_2;
                    temp_f0_3 = temp_f0_2 + M2C_FIELD(temp_v1_3, f32 *, 0x30);
                    M2C_FIELD(var_a3, f32 *, 0x64) = temp_f0_3;
                    if (temp_f0_3 > 0x1.0000000000000p+0f) {
                        M2C_FIELD(var_a3, f32 *, 0x64) = 0x1.0000000000000p+0f;
                    }
                }
            }
            var_a2 += 4;
            var_a3 += 0xEC;
        } while (var_a7 < (s32) M2C_FIELD(temp_v0, u8 *, 1));
    }
}
