/* NON_MATCHING: functional draft, 317 of 324 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_001C2388(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f0_5;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f4;
    s32 *var_t3;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s5;
    s32 temp_t3;
    s32 temp_t9;
    s32 temp_v0;
    s32 temp_v0_4;
    s32 temp_v0_6;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a3;
    s32 var_a4;
    s32 var_a4_2;
    s32 var_a4_3;
    s32 var_a7;
    s32 var_s0;
    s32 var_t0;
    s32 var_t1;
    s32 var_t1_2;
    s32 var_t8;
    s32 var_v0;
    u32 temp_a1;
    u32 temp_a2;
    u32 temp_v1;
    u32 var_a1_3;
    u32 var_t2;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_5;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0);
    var_t1 = 0;
    var_t2 = 0;
    var_a3 = 0;
    var_t0 = 0;
    var_t8 = 0;
    temp_s2 = M2C_FIELD(arg1, s32 *, 8);
    temp_f7 = temp_f1 + 0x1.0000000000000p+0f;
    temp_f6 = 0x1.0000000000000p+0f - temp_f1;
    temp_t3 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_v1 = M2C_FIELD(arg1, s32 *, 0) - arg2;
    temp_t9 = M2C_FIELD(arg1, s32 *, 0x14);
    var_s0 = temp_t3 != 0;
    temp_s1 = (temp_s2 * arg3) + arg2;
    var_a7 = temp_t3;
    temp_a2 = M2C_FIELD(arg1, s32 *, 4) - arg3;
loop_1:
    temp_v0 = temp_s1 + var_a3;
    temp_s5 = var_t0;
    var_a4 = temp_v0;
    var_a1 = var_a7;
    var_t0 += *(s32 *)(temp_t9 + (temp_v0 + var_t1));
    if (var_a7 != 0) {
        do {
            temp_v0_2 = temp_t9 + var_a4;
            var_a4 += temp_s2;
            var_a1 -= 1;
            var_t0 += *temp_v0_2;
        } while (var_a1 != 0);
    }
    var_a4_2 = temp_s1 + var_t1;
    var_a1_2 = var_a7;
    if (var_a7 != 0) {
        do {
            temp_v0_3 = temp_t9 + var_a4_2;
            var_a4_2 += 1;
            var_a1_2 -= 1;
            var_t0 += *temp_v0_3;
        } while (var_a1_2 != 0);
    }
    if (var_s0 != 0) {
        if ((var_t0 != 0) || (var_t2 >= (u32) (temp_t3 * 2))) {
            var_s0 = 0;
            var_a7 = temp_t3;
            goto block_11;
        }
        goto block_32;
    }
block_11:
    temp_v0_4 = *(s32 *)((var_a7 * 4) + M2C_FIELD(arg0, s32 *, 0x18));
    if (temp_v0_4 >= 0) {
        var_f0 = (f32) temp_v0_4;
    } else {
        var_f0 = 0x1.0000000000000p+1f * (f32) ((temp_v0_4 & 1) | ((u32) temp_v0_4 >> 1));
    }
    if (var_a7 >= 0) {
        var_f0_2 = (f32) var_a7;
    } else {
        var_f0_2 = 0x1.0000000000000p+1f * (f32) ((var_a7 & 1) | ((u32) var_a7 >> 1));
    }
    if ((s32) var_t2 >= 0) {
        var_f1 = (f32) var_t2;
    } else {
        var_f1 = 0x1.0000000000000p+1f * (f32) ((var_t2 & 1) | (var_t2 >> 1));
    }
    if (var_t0 >= 0) {
        var_f0_3 = (f32) var_t0;
    } else {
        var_f0_3 = 0x1.0000000000000p+1f * (f32) ((var_t0 & 1) | ((u32) var_t0 >> 1));
    }
    temp_f0 = (var_f0_3 * (var_f0_2 * var_f0_2)) / (var_f1 * var_f1);
    var_v0 = 0;
    if (!((var_f0 * temp_f7) < temp_f0)) {
        if (!(temp_f0 < (var_f0 * temp_f6))) {
            var_t8 = 0;
            var_a7 += 1;
            goto block_32;
        }
        if (var_t8 == 0) {
            var_t8 = 1;
block_32:
            var_t2 += 1;
            var_v0 = 0;
            if ((u32) ((temp_v1 < temp_a2) ? temp_v1 : temp_a2) >= var_t2) {
                temp_a1 = M2C_FIELD(arg0, u32 *, 8);
                var_a3 += 1;
                var_t1 += temp_s2;
                if ((u32) var_a7 >= temp_a1) {
                    if (var_t8 != 0) {
                        var_t0 = temp_s5;
                        var_t2 -= 1;
                        var_t8 = 0;
                    }
                    var_t1_2 = var_a7 * var_a7;
                    temp_a2_2 = temp_a1 + M2C_FIELD(arg0, s32 *, 0x10);
                    if ((s32) var_t2 >= 0) {
                        var_f4 = (f32) var_t2;
                    } else {
                        var_f4 = 0x1.0000000000000p+1f * (f32) ((var_t2 & 1) | (var_t2 >> 1));
                    }
                    if (var_a7 != temp_a2_2) {
                        var_t3 = (var_a7 * 4) + M2C_FIELD(arg0, s32 *, 0x18);
                        var_a4_3 = var_a3;
loop_42:
                        var_t1_2 += temp_a1;
                        temp_a3 = var_a4_3 + 1;
                        var_a1_3 = var_t2;
                        temp_f5 = (f32) temp_a3 * var_f4;
                        if (var_t2 != 0) {
                            do {
                                temp_v0_5 = temp_t9 + var_a4_3;
                                var_a4_3 += temp_s2;
                                var_a1_3 -= 1;
                                var_t0 += *temp_v0_5;
                            } while (var_a1_3 != 0);
                        }
                        temp_v0_6 = *var_t3;
                        if (temp_v0_6 < 0) {
                            var_f0_4 = 0x1.0000000000000p+1f * (f32) ((temp_v0_6 & 1) | ((u32) temp_v0_6 >> 1));
                        } else {
                            var_f0_4 = (f32) temp_v0_6;
                        }
                        if (var_t0 >= 0) {
                            var_f1_2 = (f32) var_t0;
                        } else {
                            var_f1_2 = 0x1.0000000000000p+1f * (f32) ((var_t0 & 1) | ((u32) var_t0 >> 1));
                        }
                        if (var_t1_2 >= 0) {
                            var_f0_5 = (f32) var_t1_2;
                        } else {
                            var_f0_5 = 0x1.0000000000000p+1f * (f32) ((var_t1_2 & 1) | ((u32) var_t1_2 >> 1));
                        }
                        temp_f0_2 = (var_f1_2 * var_f0_5) / temp_f5;
                        var_v0 = 0;
                        if (!((var_f0_4 * temp_f7) < temp_f0_2)) {
                            if (!(temp_f0_2 < (var_f0_4 * temp_f6))) {
                                var_t8 = 0;
                                var_t3 += 4;
                                var_a7 += 1;
                                goto block_65;
                            }
                            if (var_t8 == 0) {
                                var_t8 = 1;
block_65:
                                var_a4_3 = temp_a3;
                                if (var_a7 == temp_a2_2) {
                                    goto block_66;
                                }
                                goto loop_42;
                            }
                        }
                    } else {
block_66:
                        M2C_FIELD(arg0, u32 *, 0x30) = var_t2;
                        var_v0 = 1;
                        M2C_FIELD(arg0, s32 *, 0x20) = arg2;
                        M2C_FIELD(arg0, s32 *, 0x24) = arg3;
                        M2C_FIELD(arg0, s32 *, 0x28) = var_a7;
                        M2C_FIELD(arg0, u32 *, 0x2C) = var_t2;
                    }
                } else {
                    goto loop_1;
                }
            }
        }
    }
    return var_v0;
}
