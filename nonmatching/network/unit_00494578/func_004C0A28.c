/* NON_MATCHING: functional draft, 156 of 185 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void *func_004C8C20(void *, s32, s32 *, s32 *);     /* extern */

s32 func_004C0A28(void *arg0, void **arg1, s32 *arg2, s32 *arg3) {
    s32 **var_v0_2;
    s32 *temp_a0;
    s32 *temp_a2;
    s32 *temp_a3;
    s32 *temp_t0;
    s32 *temp_v0;
    s32 *temp_v0_5;
    s32 *temp_v1_3;
    s32 *var_a2;
    s32 *var_a2_2;
    s32 *var_a3;
    s32 *var_v1;
    s32 temp_v0_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_t0;
    s32 var_t1_2;
    s32 var_t2;
    s32 var_t3;
    s32 var_v0;
    u16 temp_a0_3;
    u16 temp_a0_4;
    u16 temp_a0_5;
    u16 temp_a0_7;
    u16 temp_v1;
    u16 temp_v1_2;
    u16 var_a3_2;
    u8 temp_v0_3;
    u8 var_t1;
    void *temp_a0_2;
    void *temp_a0_6;
    void *temp_v0_4;
    void *var_t0_2;

    var_a2 = arg2;
    var_a3 = arg3;
    var_a1 = 0;
    if (*M2C_FIELD(arg0, s32 **, 0x2C) == 0x65) {
        var_a3 = M2C_FIELD(arg0, s32 **, 0x30);
        temp_t0 = var_a3;
        if (M2C_FIELD(var_a3, u16 *, 0x548) != 0x7FFF) {
            temp_v0 = M2C_FIELD(var_a3, s32 **, 0x54C);
            if (temp_v0 != NULL) {
                temp_v1 = M2C_FIELD(var_a3, u16 *, 0x550);
                var_a2 = temp_v0;
                if (temp_v1 != 0) {
                    var_a3 = (s32 *) temp_v1;
                    do {
                        temp_v0_2 = *var_a2;
                        var_a2 += 0x1C;
                        var_a3 -= 1;
                        var_a1 = (temp_v0_2 & 0xC00000) ? (var_a1 + 1) : var_a1;
                    } while (var_a3 != NULL);
                }
            }
        }
        temp_v0_3 = M2C_FIELD(temp_t0, u8 *, 0x498);
        if (temp_v0_3 != 0) {
            var_t0 = 0;
            var_t1 = temp_v0_3;
            var_a3 = temp_t0 + 0x4A0;
            var_a2 = temp_t0;
            do {
                var_t0 += 0x1C;
                temp_a0 = *var_a3;
                var_a3 += 4;
                var_a1 = (*var_a2 & 0xC00000) ? (var_a1 + 1) : var_a1;
                if (temp_a0 != NULL) {
                    var_a1 = (*temp_a0 & 0xC00000) ? (var_a1 + 1) : var_a1;
                }
                var_t1 -= 1;
                var_a2 = temp_t0 + var_t0;
            } while (var_t1 != 0);
        }
    }
    temp_a0_2 = M2C_FIELD(arg0, void **, 0x34);
    if ((M2C_FIELD(temp_a0_2, u8 *, 0x11) != 0) && (M2C_FIELD(temp_a0_2, s32 *, 0) & 0xC00000)) {
        var_a1 = (M2C_FIELD(temp_a0_2, s8 *, 0xE) == 0) ? (var_a1 + 1) : var_a1;
    }
    if (var_a1 != 0) {
        temp_v0_4 = func_004C8C20(arg0, var_a1 * 2, var_a2, var_a3);
        *arg1 = temp_v0_4;
        if (temp_v0_4 == NULL) {
            *arg1 = NULL;
            return -1;
        }
        var_t0_2 = temp_v0_4;
        var_a1_2 = 0;
        if (*M2C_FIELD(arg0, s32 **, 0x2C) == 0x65) {
            temp_a3 = M2C_FIELD(arg0, s32 **, 0x30);
            var_v1 = temp_a3;
            if (M2C_FIELD(temp_a3, u16 *, 0x548) != 0x7FFF) {
                temp_v0_5 = M2C_FIELD(temp_a3, s32 **, 0x54C);
                if (temp_v0_5 != NULL) {
                    temp_v1_2 = M2C_FIELD(temp_a3, u16 *, 0x550);
                    var_a2_2 = temp_v0_5;
                    if (temp_v1_2 != 0) {
                        var_a3_2 = temp_v1_2;
                        do {
                            if ((*var_a2_2 & 0xC00000) && ((temp_a0_3 = (u16) *var_a2_2, (var_a1_2 == 0)) || (M2C_FIELD(var_t0_2, u16 *, -2) != temp_a0_3))) {
                                M2C_FIELD(var_t0_2, u16 *, 0) = temp_a0_3;
                                var_t0_2 += 2;
                                var_a1_2 += 1;
                            }
                            var_a3_2 -= 1;
                            var_a2_2 += 0x1C;
                        } while (var_a3_2 != 0);
                    }
                    var_v1 = M2C_FIELD(arg0, s32 **, 0x30);
                }
            }
            var_t1_2 = 0;
            if (M2C_FIELD(var_v1, u8 *, 0x498) != 0) {
                var_t3 = 0x4A0;
                var_t2 = 0;
                do {
                    temp_a2 = var_v1 + var_t2;
                    var_t2 += 0x1C;
                    if (*temp_a2 & 0xC00000) {
                        temp_a0_4 = *temp_a2;
                        if ((var_a1_2 == 0) || (var_v0_2 = M2C_FIELD(arg0, s32 **, 0x30) + var_t3, (M2C_FIELD(var_t0_2, u16 *, -2) != temp_a0_4))) {
                            M2C_FIELD(var_t0_2, u16 *, 0) = temp_a0_4;
                            var_t0_2 += 2;
                            var_a1_2 += 1;
                            goto block_38;
                        }
                    } else {
block_38:
                        var_v0_2 = M2C_FIELD(arg0, s32 **, 0x30) + var_t3;
                    }
                    temp_v1_3 = *var_v0_2;
                    var_t3 += 4;
                    if ((temp_v1_3 != NULL) && (*temp_v1_3 & 0xC00000)) {
                        temp_a0_5 = (u16) *temp_v1_3;
                        if ((var_a1_2 == 0) || (var_v1 = M2C_FIELD(arg0, s32 **, 0x30), (M2C_FIELD(var_t0_2, u16 *, -2) != temp_a0_5))) {
                            M2C_FIELD(var_t0_2, u16 *, 0) = temp_a0_5;
                            var_t0_2 += 2;
                            var_a1_2 += 1;
                            goto block_44;
                        }
                    } else {
block_44:
                        var_v1 = M2C_FIELD(arg0, s32 **, 0x30);
                    }
                    var_t1_2 += 1;
                } while (var_t1_2 < (s32) M2C_FIELD(var_v1, u8 *, 0x498));
            }
        }
        temp_a0_6 = M2C_FIELD(arg0, void **, 0x34);
        if (M2C_FIELD(temp_a0_6, u8 *, 0x11) != 0) {
            var_v0 = var_a1_2;
            if (M2C_FIELD(temp_a0_6, s32 *, 0) & 0xC00000) {
                var_v0 = var_a1_2;
                if ((M2C_FIELD(temp_a0_6, s8 *, 0xE) == 0) && ((temp_a0_7 = (u16) M2C_FIELD(temp_a0_6, s32 *, 0), (var_a1_2 == 0)) || (var_v0 = var_a1_2, (M2C_FIELD(var_t0_2, u16 *, -2) != temp_a0_7)))) {
                    M2C_FIELD(var_t0_2, u16 *, 0) = temp_a0_7;
                    var_a1_2 += 1;
                    goto block_52;
                }
            }
        } else {
block_52:
            var_v0 = var_a1_2;
        }
        return var_v0;
    }
    *arg1 = NULL;
    return 0;
}
