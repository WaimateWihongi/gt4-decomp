/* NON_MATCHING: functional draft, 115 of 116 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s8 func_004AA858(void *arg0, s16 arg1) {
    s16 temp_a0;
    s16 temp_v0;
    s16 var_a4;
    s32 *temp_a0_3;
    s32 temp_a0_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_a5;
    s32 var_a5_2;
    s8 temp_a0_4;
    s8 temp_a1;
    s8 temp_a4;
    s8 temp_v1_2;
    s8 var_a2;
    s8 var_a2_2;
    s8 var_t1;
    s8 var_v0;
    void *temp_a1_2;
    void *temp_a6;
    void *temp_a7;
    void *temp_v0_2;
    void *temp_v1;

    var_v0 = -1;
    if ((s32) M2C_FIELD(arg0, u16 *, 0xEC0) >= arg1) {
        var_a2 = M2C_FIELD(arg0, s8 *, 0xEB8);
        var_t1 = -1;
        var_a4 = 0;
        if (var_a2 >= 0) {
            var_a5 = var_a2 * 4;
            do {
                temp_v1 = ((var_a5 + var_a2) * 4) + arg0;
                temp_v0 = M2C_FIELD(temp_v1, s16 *, 0xC3E);
                temp_a0 = temp_v0 - arg1;
                if ((var_t1 < 0) && (temp_a0 >= 0)) {
                    var_t1 = var_a2;
                    if (var_a4 < temp_a0) {
                        var_a4 = temp_a0;
                    }
                } else {
                    var_a4 = (var_a4 < temp_v0) ? temp_v0 : var_a4;
                }
                var_a2 = M2C_FIELD(temp_v1, s8 *, 0xC3B);
                var_a5 = var_a2 * 4;
            } while (var_a2 >= 0);
        }
        M2C_FIELD(arg0, u16 *, 0xEC0) = (u16) var_a4;
        temp_a0_2 = (var_t1 * 0x14) + 0xC30;
        temp_a6 = arg0 + temp_a0_2;
        if (M2C_FIELD(temp_a6, s16 *, 0xE) != arg1) {
            temp_v1_2 = M2C_FIELD(arg0, s8 *, 0xEBF);
            var_v0 = -1;
            if (temp_v1_2 >= 0) {
                var_a2_2 = temp_v1_2;
                var_a5_2 = var_a2_2 * 4;
                temp_v1_3 = (var_a2_2 * 0x14) + 0xC30;
                temp_a7 = arg0 + temp_v1_3;
                M2C_FIELD(arg0, s8 *, 0xEBF) = (s8) M2C_FIELD(temp_a7, u8 *, 0xB);
                temp_a4 = M2C_FIELD(temp_a6, s8 *, 0xC);
                if (temp_a4 >= 0) {
                    M2C_FIELD(((temp_a4 * 0x14) + arg0), s8 *, 0xC3D) = var_a2_2;
                }
                M2C_FIELD(temp_a7, s8 *, 8) = 0;
                temp_v0_2 = arg0 + 0x10;
                temp_a0_3 = temp_v0_2 + temp_a0_2;
                *(s32 *)(temp_v0_2 + temp_v1_3) = *(s32 *)temp_a0_3;
                M2C_FIELD(temp_a7, s8 *, 0xD) = var_t1;
                M2C_FIELD(temp_a7, s8 *, 0xC) = temp_a4;
                M2C_FIELD(temp_a7, s16 *, 0xE) = arg1;
                *temp_a0_3 += arg1 << 0xB;
                M2C_FIELD(temp_a6, s8 *, 0xC) = var_a2_2;
                M2C_FIELD(temp_a6, s16 *, 0xE) = (s16) ((u16) M2C_FIELD(temp_a6, s16 *, 0xE) - arg1);
                goto block_25;
            }
        } else {
            temp_a1 = M2C_FIELD(temp_a6, s8 *, 0xA);
            temp_a0_4 = M2C_FIELD(temp_a6, s8 *, 0xB);
            if (temp_a1 >= 0) {
                M2C_FIELD(((temp_a1 * 0x14) + arg0), s8 *, 0xC3B) = temp_a0_4;
            } else {
                M2C_FIELD(arg0, s8 *, 0xEB8) = temp_a0_4;
            }
            if (temp_a0_4 < 0) {
                M2C_FIELD(arg0, s8 *, 0xEB9) = temp_a1;
            } else {
                M2C_FIELD(((temp_a0_4 * 0x14) + arg0), s8 *, 0xC3A) = temp_a1;
            }
            M2C_FIELD(((var_t1 * 0x14) + arg0), s8 *, 0xC38) = 0;
            var_a2_2 = var_t1;
            var_a5_2 = var_t1 * 4;
block_25:
            var_v0 = var_a2_2;
            temp_v1_4 = (var_a5_2 + var_a2_2) * 4;
            temp_a1_2 = arg0 + (temp_v1_4 + 0xC30);
            M2C_FIELD(temp_a1_2, s32 *, 0x14) = 0;
            M2C_FIELD((temp_v1_4 + arg0), s32 *, 0xC48) = 0;
            M2C_FIELD(temp_a1_2, s8 *, 9) = 0;
        }
    }
    return var_v0;
}
