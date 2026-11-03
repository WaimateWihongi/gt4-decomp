/* NON_MATCHING: functional draft, 206 of 209 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void *func_00515DD8(s16);                           /* extern */
M2C_UNK func_005173E8(M2C_UNK *, s16, M2C_UNK);     /* extern */
s32 func_00519A20(M2C_UNK, void *, M2C_UNK, M2C_UNK, s32, M2C_UNK, M2C_UNK *); /* extern */
s32 func_00532588(void *, s32, M2C_UNK, s32, M2C_UNK); /* extern */
s8 func_00536568(s32);                              /* extern */
M2C_UNK func_005A4724(); /* extern */
M2C_UNK func_005A609C(M2C_UNK *, void *, s8, u8, u8, u8, u8, u16, s16, s32, s32); /* extern */

s32 func_005178D8(s32 arg0, s16 arg1) {
    struct StackFrame_005178D8 { s8 pad0[0x14]; s32 sp14; s8 pad1[0x18]; s32 sp30; s8 pad2[0xC]; } sp_;
    s32 *temp_v0_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v1;
    s32 var_a3;
    s32 var_s0;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_3;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_s2;
    void *temp_s6;
    void *temp_v0;
    void *var_a4;
    void *var_v0_2;

    temp_v0 = func_00515DD8(arg1);
    var_v0 = 0xA;
    if ((temp_v0 != NULL) && (temp_s6 = M2C_FIELD((void *)0x854038, void **, 0x118), var_v0 = 8, (temp_s6 != NULL))) {
        if (M2C_FIELD(temp_v0, u8 *, 1) != 0) {
            if (arg0 != -1) {
                var_v0 = M2C_FIELD(((M2C_FIELD(temp_v0, u8 *, 1) * 4) + 0x854038), s32 (**)(s32, s16, M2C_UNK), 0x1F8)(arg0, arg1, 0x854038);
                if (var_v0 != 0) {
                    goto block_9;
                }
            } else {
                func_005173E8(&sp_.sp30, arg1, 0x854038);
                goto block_9;
            }
        } else {
block_9:
            temp_v1 = M2C_FIELD(temp_v0, u8 *, 0) * 0x228;
            temp_s2 = temp_v1 + 0x85C330;
            var_v0 = 0xA;
            if ((temp_s2 != NULL) && ((temp_a0 = M2C_FIELD(temp_v0, s32 *, 4), (temp_a0 == -1)) || (var_v0 = 8, (temp_a0 == M2C_FIELD(temp_s6, s32 *, 0x104))))) {
                var_s4 = 0x24;
                var_s3 = 0;
                func_005A609C(&sp_.sp14, temp_v0 + 0xC, func_00536568(M2C_FIELD(temp_v0, s32 *, 8)), M2C_FIELD(temp_v0, u8 *, 0), M2C_FIELD(temp_v0, u8 *, 1), M2C_FIELD(temp_v0, u8 *, 3), M2C_FIELD(temp_v0, u8 *, 2), (u16) M2C_FIELD(temp_v0, s32 *, 4), arg1, M2C_FIELD(temp_v0, s32 *, 0x2C), M2C_FIELD(temp_v0, s32 *, 0x30));
                func_005A4724(0x853C38, ((s8 *)&sp_), 0x24);
                if (M2C_FIELD(temp_s2, s32 *, 4) > 0) {
                    temp_a1 = M2C_FIELD(temp_s2, void **, 0x28);
                    var_s0 = 0;
                    var_a4 = temp_s2 + 8;
                    if (temp_a1 != NULL) {
                        var_a3 = M2C_FIELD(temp_a1, s32 *, 4) * M2C_FIELD(temp_a1, s32 *, 8);
                        if (var_a3 <= 0x1DA) {
                            var_v0_2 = var_a4;
loop_16:
                            temp_a0_2 = var_s4 + 0x853C38;
                            var_s4 += var_a3;
                            var_s3 += 1;
                            func_005A4724(temp_a0_2, M2C_FIELD(temp_v0, void **, 0x1C) + M2C_FIELD(var_v0_2, s32 *, 0x120), var_a3, var_a3, var_a4);
                            var_a4 = temp_s2 + 8;
                            temp_v0_2 = var_s0 + M2C_FIELD(temp_v0, s32 *, 0x3C);
                            var_s0 = var_s3 * 4;
                            *temp_v0_2 = M2C_FIELD(*(void **)0x64B47C, s32 *, 0x5C);
                            if (var_s3 < M2C_FIELD(temp_s2, s32 *, 4)) {
                                temp_a1_2 = M2C_FIELD((var_s0 + var_a4), void **, 0x20);
                                var_v0 = 0xA;
                                if (temp_a1_2 != NULL) {
                                    var_a3 = M2C_FIELD(temp_a1_2, s32 *, 4) * M2C_FIELD(temp_a1_2, s32 *, 8);
                                    var_v0_2 = var_s0 + var_a4;
                                    if ((0x1FE - var_s4) < var_a3) {
                                        goto block_19;
                                    }
                                    goto loop_16;
                                }
                            } else {
                                goto block_19;
                            }
                        } else {
                            goto block_19;
                        }
                    } else {
                        var_v0 = 0xA;
                    }
                } else {
block_19:
                    if (M2C_FIELD(temp_v0, u8 *, 1) != 0) {
                        if (arg0 == -1) {
                            var_v0_3 = func_00519A20(0x50, temp_s6, 0, 4, var_s4, 0x853C38, &sp_.sp30);
                        } else {
                            goto block_24;
                        }
                    } else {
block_24:
                        var_v0_3 = func_00532588(temp_s6, arg0, 4, var_s4, 0x853C38);
                    }
                    if (arg0 == -1) {
                        M2C_FIELD(temp_v0, s32 *, 0x34) = (s32) M2C_FIELD(*(s32 *)0x64B47C, s32 *, 0x5C);
                        func_005A4724(M2C_FIELD(temp_v0, s32 *, 0x20), M2C_FIELD(temp_v0, void **, 0x1C), *(s32 *)(0x85C330 + temp_v1));
                        goto block_31;
                    }
                    var_v0 = 0;
                    if (var_v0_3 == 0) {
                        *(s32 *)((arg0 * 4) + M2C_FIELD(temp_v0, s32 *, 0x38)) = M2C_FIELD(*(s32 *)0x64B47C, s32 *, 0x5C);
block_31:
                        var_v0 = 0;
                    }
                }
            }
        }
    }
    return var_v0;
}
