/* NON_MATCHING: functional draft, 230 of 233 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_00498F88(void *arg0, s32 arg1, f32 fparg0) {
    f32 temp_f0;
    f32 var_f2;
    f32 var_f3;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 var_a5;
    s32 temp_a0;
    s32 temp_a6;
    s32 temp_v1_2;
    s32 var_s1;
    s32 var_t9;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    u16 temp_a2;
    u16 temp_a4;
    u16 temp_v1;
    u16 temp_v1_3;
    u16 var_a3;
    u16 var_v0;
    u16 var_v0_5;
    u16 var_v1;
    void *temp_a0_2;
    void *temp_t0;

    temp_t0 = M2C_FIELD(arg0, void **, 0x24);
    if ((temp_t0 != NULL) && (M2C_FIELD(temp_t0, s32 *, 4) != 0)) {
        var_s1 = 0;
        if (M2C_FIELD(temp_t0, u16 *, 0) != 0) {
            var_t9 = 0;
            do {
                temp_a0 = M2C_FIELD(temp_t0, s32 *, 4);
                if (arg1 >= 0) {
                    if (*(s32 *)(var_t9 + temp_a0) == arg1) {
                        goto block_9;
                    }
                } else {
block_9:
                    temp_a0_2 = var_t9 + temp_a0;
                    temp_v0 = M2C_FIELD(temp_a0_2, s16 *, 0x1C);
                    var_a5 = temp_v0;
                    if (temp_v0 <= 0) {
                        var_f3 = M2C_FIELD(temp_a0_2, f32 *, 0x14);
                        var_a3 = M2C_FIELD(temp_a0_2, u16 *, 0x10);
                        temp_a6 = M2C_FIELD(temp_a0_2, s32 *, 0xC);
                        var_f2 = var_f3 + fparg0;
                        var_v1 = var_a3;
                        if (fabsf(*(s32 *)((var_a3 * 8) + temp_a6)) <= var_f2) {
                            temp_a4 = M2C_FIELD(temp_a0_2, u16 *, 2);
loop_12:
                            temp_v1 = M2C_FIELD(temp_a0_2, u16 *, 0x12);
                            var_f2 -= fabsf(*(s32 *)((var_v1 * 8) + temp_a6));
                            M2C_FIELD(temp_a0_2, u16 *, 0x10) = temp_v1;
                            if (temp_a4 != 1) {
                                if ((s32) temp_a4 < 2) {
                                    var_a3 = temp_v1 & 0xFFFF;
                                    if (temp_a4 != 0) {

                                    } else {
                                        var_a3 = M2C_FIELD(temp_a0_2, u16 *, 0x10);
                                        var_v0 = var_a3 + 1;
                                        if (var_a3 == (M2C_FIELD(temp_a0_2, u16 *, 6) - 1)) {
                                            M2C_FIELD(temp_a0_2, u16 *, 0x12) = 0U;
                                        } else {
                                            goto block_32;
                                        }
                                    }
                                    goto block_33;
                                }
                                if (temp_a4 == 2) {
                                    var_a3 = M2C_FIELD(temp_a0_2, u16 *, 0x10);
                                    var_v0 = var_a3 + 1;
                                    if (var_a3 != (M2C_FIELD(temp_a0_2, u16 *, 6) - 1)) {
block_32:
                                        M2C_FIELD(temp_a0_2, u16 *, 0x12) = var_v0;
                                        goto block_33;
                                    }
                                } else {
                                    var_a3 = M2C_FIELD(temp_a0_2, u16 *, 0x10);
                                    goto block_33;
                                }
                            } else {
                                if (temp_v1 & 0xFFFF) {
                                    var_a3 = M2C_FIELD(temp_a0_2, u16 *, 0x10);
                                    if (var_a3 == (M2C_FIELD(temp_a0_2, u16 *, 6) - 1)) {
                                        M2C_FIELD(temp_a0_2, u8 *, 0x1E) = -1U;
                                    }
                                } else {
                                    M2C_FIELD(temp_a0_2, u8 *, 0x1E) = (u8) temp_a4;
                                    var_a3 = M2C_FIELD(temp_a0_2, u16 *, 0x10);
                                }
                                M2C_FIELD(temp_a0_2, u16 *, 0x12) = (u16) (M2C_FIELD(temp_a0_2, u16 *, 0x10) + (s8) M2C_FIELD(temp_a0_2, u8 *, 0x1E));
block_33:
                                temp_v1_2 = var_a3 * 8;
                                var_v0_2 = var_a5 << 0x10;
                                if (*(s32 *)(temp_v1_2 + temp_a6) < 0x0.0p+0f) {
                                    temp_v0_2 = var_a5 + 1;
                                    M2C_FIELD(temp_a0_2, s16 *, 0x1C) = temp_v0_2;
                                    var_a5 = temp_v0_2;
                                    var_v0_2 = var_a5 << 0x10;
                                }
                                if (var_v0_2 <= 0) {
                                    var_v1 = var_a3;
                                    if (!(fabsf(*(s32 *)(temp_v1_2 + temp_a6)) <= var_f2)) {
                                        goto block_37;
                                    }
                                    goto loop_12;
                                }
                                goto block_7;
                            }
                        } else {
block_37:
                            if (var_f2 < 0x0.0p+0f) {
loop_39:
                                var_v0_3 = var_a5 << 0x10;
                                if ((*(s32 *)((var_a3 * 8) + temp_a6) < 0x0.0p+0f) && (var_f3 > 0x0.0p+0f)) {
                                    temp_v0_3 = var_a5 + 1;
                                    M2C_FIELD(temp_a0_2, s16 *, 0x1C) = temp_v0_3;
                                    var_a5 = temp_v0_3;
                                    var_v0_3 = var_a5 << 0x10;
                                }
                                if (var_v0_3 <= 0) {
                                    temp_a2 = M2C_FIELD(temp_a0_2, u16 *, 0x10);
                                    temp_v1_3 = M2C_FIELD(temp_a0_2, u16 *, 2);
                                    M2C_FIELD(temp_a0_2, u16 *, 0x12) = temp_a2;
                                    if (temp_v1_3 != 1) {
                                        if ((s32) temp_v1_3 < 2) {
                                            var_v0_4 = var_a3 * 8;
                                            if (temp_v1_3 != 0) {

                                            } else {
                                                if (!(temp_a2 & 0xFFFF)) {
                                                    var_v0_5 = M2C_FIELD(temp_a0_2, u16 *, 6) + 0xFFFF;
                                                } else {
                                                    goto block_63;
                                                }
                                                goto block_64;
                                            }
                                            goto block_65;
                                        }
                                        var_v0_4 = var_a3 * 8;
                                        if (temp_v1_3 != 2) {
                                            goto block_65;
                                        }
                                        if (!(temp_a2 & 0xFFFF)) {
                                            M2C_FIELD(temp_a0_2, u16 *, 0x12) = 1U;
                                        } else {
block_63:
                                            var_v0_5 = temp_a2 + 0xFFFF;
                                            goto block_64;
                                        }
                                    } else {
                                        if (temp_a2 & 0xFFFF) {
                                            if (var_a3 == (M2C_FIELD(temp_a0_2, u16 *, 6) - 1)) {
                                                M2C_FIELD(temp_a0_2, u8 *, 0x1E) = (u8) temp_v1_3;
                                            }
                                        } else {
                                            M2C_FIELD(temp_a0_2, u8 *, 0x1E) = -1U;
                                        }
                                        var_v0_5 = temp_a2 - (s8) M2C_FIELD(temp_a0_2, u8 *, 0x1E);
block_64:
                                        M2C_FIELD(temp_a0_2, u16 *, 0x10) = var_v0_5;
                                        var_a3 = var_v0_5 & 0xFFFF;
                                        var_v0_4 = var_a3 * 8;
block_65:
                                        var_f2 += fabsf(*(s32 *)(var_v0_4 + temp_a6));
                                        var_f3 = var_f2;
                                        if (var_f2 < 0x0.0p+0f) {
                                            goto loop_39;
                                        }
                                    }
                                } else {
block_7:
                                    var_f2 = 0x0.0p+0f;
                                }
                            }
                        }
                        M2C_FIELD(temp_a0_2, f32 *, 0x14) = var_f2;
                        temp_f0 = M2C_MAXS(var_f2, 0x0.0p+0f) / fabsf(*(s32 *)((var_a3 * 8) + temp_a6));
                        M2C_FIELD(temp_a0_2, s8 *, 0x1F) = 1;
                        M2C_FIELD(temp_a0_2, f32 *, 0x18) = (f32) (0x1.0000000000000p+0f - temp_f0);
                    }
                }
                var_s1 += 1;
                var_t9 += 0x20;
            } while (var_s1 < (s32) M2C_FIELD(temp_t0, u16 *, 0));
        }
    }
}
