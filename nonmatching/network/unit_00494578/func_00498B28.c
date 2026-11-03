/* NON_MATCHING: functional draft, 67 of 92 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00499418(s32, s32, s32);               /* extern */

void *func_00498B28(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 *temp_v0_4;
    s32 *temp_v0_5;
    s32 *temp_v0_6;
    s32 *temp_v1_2;
    s32 *var_a0_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_a2_2;
    void *temp_a1;

    var_a2 = arg2;
    temp_s1 = arg0 - M2C_FIELD(arg0, void **, 4);
    if (temp_s1 != 0) {
        M2C_FIELD(arg0, void **, 4) = arg0;
        temp_v0 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_v0 != 0) {
            M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_v0 + temp_s1);
        }
        temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x18);
        if (temp_v0_2 != 0) {
            M2C_FIELD(arg0, s32 *, 0x18) = (s32) (temp_v0_2 + temp_s1);
        }
        temp_v0_3 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (temp_v0_3 != 0) {
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_v0_3 + temp_s1);
            var_a1 = 0;
            if (M2C_FIELD(arg0, u16 *, 0x16) != 0) {
                var_a0 = 0;
                do {
                    temp_v0_4 = var_a0 + M2C_FIELD(arg0, s32 *, 0x1C);
                    *temp_v0_4 += temp_s1;
                    var_a1 += 1;
                    var_a0 += 0xC;
                } while (var_a1 < (s32) M2C_FIELD(arg0, u16 *, 0x16));
            }
        }
        temp_v0_5 = M2C_FIELD(arg0, s32 **, 0x20);
        temp_v0_6 = temp_v0_5 + temp_s1;
        if (temp_v0_5 != NULL) {
            M2C_FIELD(arg0, s32 **, 0x20) = temp_v0_6;
            var_a1_2 = *temp_v0_6 - 1;
            var_a0_2 = temp_v0_6 + 4;
            if (var_a1_2 != -1) {
                var_a2 = -1;
                do {
                    temp_v0_7 = *var_a0_2;
                    if (temp_v0_7 != 0) {
                        *var_a0_2 = temp_v0_7 + temp_s1;
                    }
                    var_a1_2 -= 1;
                    var_a0_2 += 4;
                } while (var_a1_2 != -1);
            }
        }
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x24);
        temp_a0_2 = temp_a0 + temp_s1;
        if (temp_a0 != 0) {
            M2C_FIELD(arg0, s32 *, 0x24) = temp_a0_2;
            func_00499418(temp_a0_2, temp_s1, var_a2);
        }
        temp_a1 = M2C_FIELD(arg0, void **, 0x28);
        if (temp_a1 != NULL) {
            M2C_FIELD(arg0, void **, 0x28) = (void *) (temp_a1 + temp_s1);
            temp_v0_8 = M2C_FIELD(temp_a1, s32 *, 0xC);
            if (temp_v0_8 != 0) {
                M2C_FIELD(temp_a1, s32 *, 0xC) = (s32) (temp_v0_8 + temp_s1);
                var_a2_2 = 0;
                if (M2C_FIELD(temp_a1, u16 *, 0) != 0) {
loop_21:
                    temp_v1 = var_a2_2 * 4;
                    var_a2_2 += 1;
                    temp_v1_2 = temp_v1 + M2C_FIELD(temp_a1, s32 *, 0xC);
                    temp_v0_9 = *temp_v1_2;
                    if (temp_v0_9 != 0) {
                        *temp_v1_2 = temp_v0_9 + temp_s1;
                    }
                    if (var_a2_2 < (s32) M2C_FIELD(temp_a1, u16 *, 0)) {
                        goto loop_21;
                    }
                }
            }
        }
    }
    return arg0;
}
