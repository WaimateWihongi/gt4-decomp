/* NON_MATCHING: functional draft, 131 of 148 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0034C190();                     /* extern */

s32 func_003FA508(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_s4;
    s32 temp_v0_3;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a4;
    s32 var_a4_2;
    s32 var_a5;
    s32 var_a6;
    s32 var_a6_2;
    s32 var_a7;
    s32 var_a7_2;
    s32 var_v0;
    s8 *var_v1;
    s8 temp_v0;
    s8 temp_v0_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v1;
    void *temp_v1_2;

    temp_s0 = func_0034C190() + 0x104;
    func_0034C190(arg0, arg2);
    var_v0 = 0;
    if (M2C_FIELD(temp_s0, s16 *, 0x4AC) != 0) {
        var_v0 = 0;
        if (((s32) M2C_FIELD(temp_s0, s16 *, 0x4AC) & 0xFFFFFF) != 1) {
            var_a5 = M2C_FIELD(temp_s0, u8 *, 0x4AE) - 1;
            if (var_a5 < 0) {
                temp_v1 = M2C_FIELD(arg0, void **, 0x10140);
                var_a5 = M2C_FIELD((temp_v1 + 0x150), s32 (**)(void *), 4)(arg0 + M2C_FIELD(temp_v1, s16 *, 0x150)) - 1;
            }
            temp_s0_2 = arg0 + 0xC;
            temp_a1 = var_a5 + 0xD400;
            var_a7 = 0x157529FF;
            var_a6 = 0x157529FF;
            var_a4 = 0;
            if (*(s32 *)(temp_s0_2 + temp_a1) > 0) {
                var_a1 = (var_a5 * 0x18) + 0xCDE0;
                var_a3 = (var_a5 * 6) + 0xD480;
                var_a2 = var_a1;
                do {
                    temp_v0 = *(s8 *)(temp_s0_2 + var_a3);
                    var_a3 += 1;
                    if (temp_v0 == arg1) {
                        var_a7 = *(s32 *)(temp_s0_2 + var_a2);
                        goto block_11;
                    }
                    var_v1 = temp_s0_2 + temp_a1;
                    if (temp_v0 == arg2) {
                        var_a6 = *(s32 *)(temp_s0_2 + var_a1);
block_11:
                        var_v1 = temp_s0_2 + temp_a1;
                    }
                    var_a4 += 1;
                    var_a1 += 4;
                    var_a2 += 4;
                } while (var_a4 < *var_v1);
            }
            var_v0 = 0;
            if (var_a7 != 0x157529FF) {
                temp_s4 = var_a7 - var_a6;
                if ((var_a6 != 0x157529FF) && (temp_s4 > 0)) {
                    var_a1_2 = var_a5 - 1;
                    if (var_a1_2 < 0) {
                        temp_v1_2 = M2C_FIELD(arg0, void **, 0x10140);
                        var_a1_2 = M2C_FIELD((temp_v1_2 + 0x150), s32 (**)(void *, s32), 4)(arg0 + M2C_FIELD(temp_v1_2, s16 *, 0x150), var_a1_2) - 1;
                    }
                    temp_a2 = var_a1_2 + 0xD400;
                    var_a7_2 = 0x157529FF;
                    var_a6_2 = 0x157529FF;
                    var_a4_2 = 0;
                    if (*(s32 *)(temp_s0_2 + temp_a2) > 0) {
                        var_a1_3 = (var_a1_2 * 0x18) + 0xCDE0;
                        var_a3_2 = (var_a1_2 * 6) + 0xD480;
                        var_a2_2 = var_a1_3;
                        do {
                            temp_v0_2 = *(s8 *)(temp_s0_2 + var_a3_2);
                            var_a3_2 += 1;
                            if (temp_v0_2 == arg1) {
                                var_a7_2 = *(s32 *)(temp_s0_2 + var_a2_2);
                            } else if (temp_v0_2 == arg2) {
                                var_a6_2 = *(s32 *)(temp_s0_2 + var_a1_3);
                            }
                            var_a4_2 += 1;
                            var_a1_3 += 4;
                            var_a2_2 += 4;
                        } while (var_a4_2 < *(s32 *)(temp_s0_2 + temp_a2));
                    }
                    var_v0 = 0;
                    if ((var_a7_2 != 0x157529FF) && (var_a6_2 != 0x157529FF)) {
                        temp_v0_3 = var_a7_2 - var_a6_2;
                        var_v0 = (temp_v0_3 <= 0) ? 0 : (temp_s4 < temp_v0_3);
                    }
                }
            }
        }
    }
    return var_v0;
}
