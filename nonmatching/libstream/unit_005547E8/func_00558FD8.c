/* NON_MATCHING: functional draft, 177 of 212 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00558DB0(void *, s32, s32, M2C_UNK);   /* extern */
M2C_UNK func_00558E28(void *, s32, s32, M2C_UNK);   /* extern */
M2C_UNK func_0055CFE8(void *, s64, void *);         /* extern */
void *func_0055D0B0(void *, s32);                   /* extern */
M2C_UNK func_0055D688(void *, M2C_UNK);             /* extern */
M2C_UNK func_0055D6D0(void *, M2C_UNK);             /* extern */
M2C_UNK func_00576100(s32);                         /* extern */
M2C_UNK func_00576140(s32);                         /* extern */

void func_00558FD8(void *arg0) {
    struct StackFrame_00558FD8 { s8 pad0[0x40]; } sp_;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_s4;
    s32 temp_s4_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s5;
    s32 var_s5_2;
    s32 var_s6;
    u16 var_v1;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a2_2;
    void *temp_s0;
    void *temp_s2;
    void *var_a0;
    void *var_a1;
    void *var_s3;

    var_s5 = 0;
    var_a1 = NULL;
    temp_s4 = M2C_FIELD(arg0, s32 *, 0x48);
    temp_a2 = M2C_FIELD(arg0, s32 *, 0x34);
    var_a0 = M2C_FIELD(arg0, void **, 0x30);
    temp_s4_2 = (temp_s4 < 0xC8) ? 0xC8 : temp_s4;
    if (temp_a2 > 0) {
        var_v1 = (u16) M2C_FIELD(var_a0, s16 *, 2);
        if ((temp_s4_2 >= M2C_FIELD(var_a0, s16 *, 2)) && (M2C_FIELD(var_a0, s16 *, 4) >= temp_s4_2)) {
            M2C_FIELD(arg0, s32 *, 4) = 0;
            goto block_14;
        }
loop_7:
        if ((var_a1 == NULL) || (M2C_FIELD(var_a1, s16 *, 4) >= temp_s4_2) || (temp_s4_2 >= (s16) var_v1)) {
            var_s5 += 1;
            var_a1 = var_a0;
            var_a0 += 0x10;
            if (var_s5 < temp_a2) {
                var_v1 = M2C_FIELD(var_a0, u16 *, 2);
                if ((temp_s4_2 >= (s16) var_v1) && (M2C_FIELD(var_a0, s16 *, 4) >= temp_s4_2)) {
                    M2C_FIELD(arg0, s32 *, 4) = var_s5;
block_14:
                    M2C_FIELD(arg0, s32 *, 0x1C) = -1;
                } else {
                    goto loop_7;
                }
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x1C) = var_s5;
            M2C_FIELD(arg0, s32 *, 4) = (s32) (var_s5 - 1);
        }
    }
    temp_a0 = M2C_FIELD(arg0, s32 *, 4);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_a0 != M2C_FIELD(arg0, s32 *, 0x20)) {
        if (temp_v1 == M2C_FIELD(arg0, s32 *, 8)) {
            goto block_19;
        }
    } else {
block_19:
        M2C_FIELD(arg0, s32 *, 4) = temp_v1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_a0;
    }
    var_s5_2 = 0;
    var_s3 = arg0;
    var_s6 = 0;
    do {
        temp_s2 = arg0 + var_s6;
        temp_v1_2 = M2C_FIELD(temp_s2, s32 *, 4);
        temp_a0_2 = M2C_FIELD(temp_s2, void **, 0);
        if (temp_v1_2 == M2C_FIELD(temp_s2, s32 *, 8)) {
            if (temp_a0_2 != NULL) {
                if (temp_v1_2 >= 0) {
                    func_00558DB0(arg0, var_s5_2, temp_s4_2, 1);
                    func_00558E28(arg0, var_s5_2, temp_s4_2, 1);
                    temp_a0_3 = M2C_FIELD(temp_s2, void **, 0);
                    if (temp_a0_3 != NULL) {
                        M2C_FIELD(temp_a0_3, s8 *, 0x2C) = 1;
                        M2C_FIELD(temp_a0_3, s16 *, 0x90) = (s16) M2C_FIELD(temp_s2, s32 *, 0x10);
                        M2C_FIELD(temp_a0_3, s32 *, 0x74) = (s32) M2C_FIELD(arg0, s32 *, 0x40);
                        M2C_FIELD(temp_a0_3, s16 *, 0x66) = (s16) M2C_FIELD(temp_s2, s16 *, 0xE);
                        M2C_FIELD(temp_a0_3, s16 *, 0x64) = (s16) M2C_FIELD(temp_s2, s16 *, 0xC);
                        M2C_FIELD(temp_a0_3, s8 *, 0x1F) = 1;
                        M2C_FIELD(temp_a0_3, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x3C);
                        M2C_FIELD(temp_a0_3, s8 *, 0x25) = (s8) (M2C_FIELD(arg0, s32 *, 0x50) ^ 1);
                    }
                }
            } else {
                goto block_29;
            }
        } else {
            if (temp_a0_2 != NULL) {
                func_0055D688(temp_a0_2, 0);
                M2C_FIELD(temp_s2, void **, 0) = NULL;
            }
block_29:
            if (M2C_FIELD(temp_s2, s32 *, 4) >= 0) {
                func_00558DB0(arg0, var_s5_2, temp_s4_2, 0);
                func_00558E28(arg0, var_s5_2, temp_s4_2, 0);
                temp_a2_2 = M2C_FIELD(arg0, void **, 0x30);
                M2C_FIELD(temp_s2, u32 *, 0x14) = (u32) ((u32) M2C_FIELD(((M2C_FIELD(temp_s2, s32 *, 4) * 0x10) + temp_a2_2), u32 *, 0xC) >> 3);
                func_0055CFE8(((s8 *)&sp_), *(s64 *)0x6C8BD0, temp_a2_2);
                func_00576100(0x655340);
                temp_s0 = func_0055D0B0(((s8 *)&sp_), M2C_FIELD(arg0, s32 *, 0x3C));
                func_00576140(0x655340);
                M2C_FIELD(var_s3, void **, 0) = temp_s0;
                if (temp_s0 != NULL) {
                    M2C_FIELD(temp_s0, void **, 0x10) = arg0;
                    M2C_FIELD(temp_s0, s32 *, 0x30) = 4;
                    M2C_FIELD(temp_s0, s16 *, 0x92) = 3;
                    M2C_FIELD(temp_s0, s32 *, 0x3C) = (s32) M2C_FIELD(arg0, s32 *, 0x38);
                    M2C_FIELD(temp_s0, s16 *, 0x94) = 0xA;
                    M2C_FIELD(temp_s0, s32 *, 0x44) = var_s5_2;
                    M2C_FIELD(temp_s0, s8 *, 0x2D) = 1;
                    M2C_FIELD(temp_s0, s8 *, 0x2E) = 1;
                    M2C_FIELD(temp_s0, s8 *, 0x2A) = 1;
                    M2C_FIELD(temp_s0, s32 *, 0x8C) = (s32) (M2C_FIELD(var_s3, s32 *, 0x14) * 8);
                    temp_a0_4 = M2C_FIELD(var_s3, void **, 0);
                    if (temp_a0_4 != NULL) {
                        M2C_FIELD(temp_a0_4, s8 *, 0x2C) = 1;
                        M2C_FIELD(temp_a0_4, s16 *, 0x90) = (s16) M2C_FIELD(var_s3, s32 *, 0x10);
                        M2C_FIELD(temp_a0_4, s32 *, 0x74) = (s32) M2C_FIELD(arg0, s32 *, 0x40);
                        M2C_FIELD(temp_a0_4, s16 *, 0x64) = (s16) M2C_FIELD(var_s3, s16 *, 0xC);
                        M2C_FIELD(temp_a0_4, s16 *, 0x66) = (s16) M2C_FIELD(var_s3, s16 *, 0xE);
                        M2C_FIELD(temp_a0_4, s8 *, 0x1F) = 1;
                        M2C_FIELD(temp_a0_4, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x3C);
                        M2C_FIELD(temp_a0_4, s8 *, 0x25) = (s8) (M2C_FIELD(arg0, s32 *, 0x50) ^ 1);
                    }
                    func_0055D6D0(temp_s0, 1);
                }
            }
            M2C_FIELD(temp_s2, s32 *, 8) = M2C_FIELD(temp_s2, s32 *, 4);
        }
        var_s5_2 += 1;
        var_s3 += 0x18;
        var_s6 += 0x18;
    } while (var_s5_2 < 2);
}
