/* NON_MATCHING: functional draft, 157 of 166 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

f32 func_00344798(s32, M2C_UNK);                    /* extern */
f32 func_003447F8(s32, M2C_UNK);                    /* extern */
f32 func_00344828(s32, M2C_UNK);                    /* extern */
f32 func_003448B8(s32, M2C_UNK);                    /* extern */
f32 func_00344AA8(s32, s32, M2C_UNK);               /* extern */
f32 func_00344B40(s32, s32, M2C_UNK);               /* extern */
f32 func_00344C08(s32, s32, M2C_UNK);               /* extern */
void *func_00359538(s32, void *);                   /* extern */
s32 func_003CC840();                             /* extern */
s32 func_00429870(s32, M2C_UNK);                    /* extern */

void func_003CD188(s32 arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4, s32 arg5, f32 fparg0) {
    M2C_UNK var_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f21_2;
    s32 temp_a1_2;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v1;
    u32 temp_s2;
    u8 temp_s1;
    void *temp_a1;
    void *var_s0;

    temp_v0 = func_00429870(func_003CC840(), 0x6A2F78);
    temp_s2 = ((arg5 ^ 0) != 0) ? 5U : ((arg4 != 0) ? 4U : arg3);
    temp_s3 = (temp_v0 < 0) ? 0 : temp_v0;
    switch (temp_s2) {
    case 0:
        if (fparg0 < 0x0.0p+0f) {
            var_a0 = func_003CC840(arg0);
            var_a1 = 0x6A2F90;
        } else {
            var_a0 = func_003CC840(arg0);
            var_a1 = 0x6A2FA8;
        }
block_11:
        var_v1 = func_00429870(var_a0, var_a1);
        var_s1 = arg0 + 0xC;
        if (var_v1 < 0) {
        default:
            var_v1 = temp_s3;
            var_s1 = arg0 + 0xC;
        }
        break;
    case 1:
        var_a0 = func_003CC840(arg0);
        var_a1 = 0x6A2FC0;
        goto block_11;
    case 2:
        if (fparg0 < 0x0.0p+0f) {
            var_a0 = func_003CC840(arg0);
            var_a1 = 0x6A2FD8;
        } else {
            var_a0 = func_003CC840(arg0);
            var_a1 = 0x6A2FF0;
        }
        goto block_11;
    case 3:
        var_a0 = func_003CC840(arg0);
        var_a1 = 0x6A3008;
        goto block_11;
    case 4:
        var_a0 = func_003CC840(arg0);
        var_a1 = 0x6A3020;
        goto block_11;
    }
    temp_s0 = arg1 * 4;
    M2C_FIELD((temp_s0 + var_s1), s32 *, 0xC0) = var_v1;
    temp_s3_2 = arg0 + 4;
    M2C_FIELD((temp_s0 + temp_s3_2), f32 *, 0x140) = func_003448B8(arg2, 0);
    var_s2 = 0;
    temp_f21 = func_00344798(arg2, 0);
    temp_f20 = func_003447F8(arg2, 0);
    temp_f0 = func_00344828(arg2, 0);
    temp_a1 = (arg1 * 0xC) + var_s1;
    M2C_FIELD(temp_a1, f32 *, 0x150) = temp_f21;
    M2C_FIELD(temp_a1, f32 *, 0x154) = temp_f20;
    M2C_FIELD(temp_a1, f32 *, 0x158) = temp_f0;
    temp_s1 = M2C_FIELD(func_00359538(arg2, temp_a1), u8 *, 1);
    if (temp_s1 != 0) {
        var_s0 = (arg1 * 0x30) + temp_s3_2 + 0x1A8;
        do {
            temp_f21_2 = func_00344AA8(arg2, var_s2, 0);
            temp_f0_2 = func_00344B40(arg2, var_s2, 0);
            temp_a1_2 = var_s2;
            var_s2 += 1;
            M2C_FIELD(var_s0, f32 *, 0) = func_00344C08(arg2, temp_a1_2, 0);
            M2C_FIELD(var_s0, f32 *, -8) = temp_f21_2;
            M2C_FIELD(var_s0, f32 *, -4) = temp_f0_2;
            var_s0 += 0xC;
        } while (var_s2 < (s32) temp_s1);
    }
}
