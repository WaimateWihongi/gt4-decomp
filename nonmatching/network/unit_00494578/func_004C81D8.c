/* NON_MATCHING: functional draft, 138 of 148 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_004C4070(void *, s32 *, M2C_UNK);      /* extern */
void *func_004C8C20(s32, M2C_UNK, void *);          /* extern */

s32 func_004C81D8(s32 arg0, void **arg1, void *arg2, s32 *arg3, u8 *arg4) {
    void **sp0;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 var_a1;
    s16 var_v0_2;
    s16 var_v0_3;
    s16 var_v1_3;
    s32 *var_s2;
    s32 var_s4;
    s32 var_v0;
    s32 var_v1;
    u8 temp_v0_2;
    u8 var_s1;
    u8 var_v1_2;
    void *temp_v0;
    void *var_a0;
    void *var_a2;
    void *var_s3;

    var_a2 = arg2;
    var_s2 = arg3;
    var_s4 = var_a2 - 1;
    sp0 = arg1;
    var_s3 = *arg1;
    if (var_a2 != NULL) {
        var_v1 = *var_s2;
loop_2:
        if (var_v1 & 0x100000) {
            var_s1 = M2C_FIELD(var_s2, u8 *, 4);
        } else {
            if (!(var_v1 & 0xC00000)) {
                var_v1_2 = M2C_FIELD((void *) M2C_FIELD(var_s2, u8 *, 4), u8 *, 3) & 0xF;
            } else {
                var_v1_2 = M2C_FIELD(var_s2, u8 *, 6);
            }
            var_s1 = var_v1_2;
        }
        temp_v0 = func_004C8C20(arg0, 0x20, var_a2);
        var_v0 = 0x80000300;
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, u8 *, 0x11) = var_s1;
            M2C_FIELD(temp_v0, s32 *, 0x18) = 0;
            func_004C4070(temp_v0, var_s2, 0x10);
            if (arg4 == NULL) {
                M2C_FIELD(temp_v0, u8 *, 0x10) = 0U;
            } else {
                M2C_FIELD(temp_v0, u8 *, 0x10) = (u8) *arg4;
                M2C_FIELD(temp_v0, u8 *, 0x11) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x11) + *arg4);
            }
            var_a2 = (void *) M2C_FIELD(var_s2, s32 *, 0);
            if (!((s32) var_a2 & 0x100000)) {
                temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0x11);
                if (!((s32) var_a2 & 0xC00000)) {
                    var_v0_2 = (temp_v0_2 * 0x28) + ((M2C_FIELD((void *) M2C_FIELD(var_s2, u8 *, 4), u8 *, 5) & 0x1F) * 2);
                } else {
                    var_v0_2 = temp_v0_2 * 0x28;
                }
                var_v1_3 = var_v0_2;
                if ((s32) var_a2 & 0xC00000) {
                    var_v0_3 = M2C_FIELD(var_s2, s16 *, 0xC);
                } else {
                    var_v0_3 = M2C_FIELD(var_s2, s16 *, 8);
                }
                var_a1 = var_v0_2 + var_v0_3;
            } else {
                var_a1 = (s16) M2C_FIELD(var_s2, u8 *, 6);
                var_v1_3 = var_a1;
            }
            M2C_FIELD(temp_v0, s16 *, 0x12) = var_v1_3;
            var_s2 += 0x10;
            M2C_FIELD(temp_v0, s16 *, 0x14) = var_a1;
            if (var_s3 == NULL) {
                M2C_FIELD(temp_v0, void **, 0x1C) = NULL;
                var_s3 = temp_v0;
            } else {
                temp_v1 = M2C_FIELD(var_s3, s16 *, 0x14);
                if (temp_v1 >= var_a1) {
                    if (temp_v1 != var_a1) {
                        var_a0 = M2C_FIELD(var_s3, void **, 0x1C);
                        goto block_40;
                    }
                    if ((u8) M2C_FIELD(temp_v0, u8 *, 0x10) >= (u8) M2C_FIELD(var_s3, u8 *, 0x10)) {
                        var_a0 = M2C_FIELD(var_s3, void **, 0x1C);
block_40:
                        var_a2 = var_s3;
loop_42:
                        if (var_a0 == NULL) {
                            M2C_FIELD(var_a2, void **, 0x1C) = temp_v0;
                            M2C_FIELD(temp_v0, void **, 0x1C) = NULL;
                        } else {
                            temp_v1_2 = M2C_FIELD(var_a0, s16 *, 0x14);
                            if (temp_v1_2 >= var_a1) {
                                if (temp_v1_2 != var_a1) {
                                    var_a2 = var_a0;
                                    goto block_41;
                                }
                                if ((u8) M2C_FIELD(temp_v0, u8 *, 0x10) >= (u8) M2C_FIELD(var_a0, u8 *, 0x10)) {
                                    var_a2 = var_a0;
block_41:
                                    var_a0 = M2C_FIELD(var_a2, void **, 0x1C);
                                    goto loop_42;
                                }
                                goto block_52;
                            }
block_52:
                            M2C_FIELD(temp_v0, void **, 0x1C) = var_a0;
                            M2C_FIELD(var_a2, void **, 0x1C) = temp_v0;
                        }
                    } else {
                        goto block_39;
                    }
                } else {
block_39:
                    M2C_FIELD(temp_v0, void **, 0x1C) = var_s3;
                    var_s3 = temp_v0;
                }
            }
            var_s4 -= 1;
            if (var_s4 != -1) {
                var_v1 = *var_s2;
                goto loop_2;
            }
            goto block_58;
        }
    } else {
block_58:
        *sp0 = var_s3;
        var_v0 = 0;
    }
    return var_v0;
}
