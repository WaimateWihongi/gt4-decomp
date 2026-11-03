/* NON_MATCHING: functional draft, 76 of 97 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_00450310(void *arg0) {
    s32 *temp_a0_4;
    s32 *temp_v1_2;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_s2;
    s32 temp_v0_10;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a3;
    s32 var_s1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a1;
    void *temp_v0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, void **, 4);
        M2C_FIELD(arg0, void **, 4) = arg0;
        temp_s2 = arg0 - temp_v0;
        temp_v0_2 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_v0_2 != 0) {
            M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_v0_2 + temp_s2);
        }
        temp_v0_3 = M2C_FIELD(arg0, s32 *, 0x18);
        if (temp_v0_3 != 0) {
            M2C_FIELD(arg0, s32 *, 0x18) = (s32) (temp_v0_3 + temp_s2);
            var_a1 = 0;
            if (M2C_FIELD(arg0, u16 *, 0x10) != 0) {
                do {
                    temp_v1 = var_a1 * 4;
                    var_a1 += 1;
                    temp_v1_2 = temp_v1 + M2C_FIELD(arg0, s32 *, 0x18);
                    temp_v0_4 = *temp_v1_2;
                    if (temp_v0_4 != 0) {
                        *temp_v1_2 = temp_v0_4 + temp_s2;
                    }
                } while (var_a1 < (s32) M2C_FIELD(arg0, u16 *, 0x10));
            }
        }
        temp_a0 = M2C_FIELD(arg0, void **, 0x1C);
        temp_a0_2 = temp_a0 + temp_s2;
        if (temp_a0 != NULL) {
            M2C_FIELD(arg0, void **, 0x1C) = temp_a0_2;
            func_00498B28(temp_a0_2);
        }
        temp_v0_5 = M2C_FIELD(arg0, s32 *, 0x20);
        if (temp_v0_5 != 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) (temp_v0_5 + temp_s2);
        }
        temp_v0_6 = M2C_FIELD(arg0, s32 *, 0x24);
        if (temp_v0_6 != 0) {
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) (temp_v0_6 + temp_s2);
            var_a3 = 0;
            if (M2C_FIELD(arg0, u16 *, 0x14) != 0) {
                do {
                    temp_a2 = var_a3 * 0x10;
                    var_a3 += 1;
                    temp_a1 = temp_a2 + M2C_FIELD(arg0, s32 *, 0x24);
                    temp_v0_7 = M2C_FIELD(temp_a1, s32 *, 8);
                    if (temp_v0_7 != 0) {
                        M2C_FIELD(temp_a1, s32 *, 8) = (s32) (temp_v0_7 + temp_s2);
                    }
                    temp_a0_3 = temp_a2 + M2C_FIELD(arg0, s32 *, 0x24);
                    temp_v0_8 = M2C_FIELD(temp_a0_3, s32 *, 0xC);
                    if (temp_v0_8 != 0) {
                        M2C_FIELD(temp_a0_3, s32 *, 0xC) = (s32) (temp_v0_8 + temp_s2);
                    }
                } while (var_a3 < (s32) M2C_FIELD(arg0, u16 *, 0x14));
            }
        }
        temp_v0_9 = M2C_FIELD(arg0, s32 *, 0x28);
        if (temp_v0_9 != 0) {
            M2C_FIELD(arg0, s32 *, 0x28) = (s32) (temp_v0_9 + temp_s2);
            var_s1 = 0;
            if (M2C_FIELD(arg0, u16 *, 0x16) != 0) {
loop_22:
                temp_a1_2 = var_s1 * 4;
                temp_a0_4 = temp_a1_2 + M2C_FIELD(arg0, s32 *, 0x28);
                temp_v0_10 = *temp_a0_4;
                if (temp_v0_10 != 0) {
                    *temp_a0_4 = temp_v0_10 + temp_s2;
                    func_00498AE0(*(s32 *)(temp_a1_2 + M2C_FIELD(arg0, s32 *, 0x28)));
                }
                var_s1 += 1;
                if (var_s1 < (s32) M2C_FIELD(arg0, u16 *, 0x16)) {
                    goto loop_22;
                }
            }
        }
    }
}
