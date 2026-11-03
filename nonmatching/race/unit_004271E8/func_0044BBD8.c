/* NON_MATCHING: functional draft, 186 of 187 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_0044BBD8(void *arg0, void *arg1, s32 arg2, u8 *arg3) {
    u32 sp0;
    s32 temp_a5;
    s32 temp_a6;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s4;
    s32 temp_s4_2;
    s32 temp_s5;
    s32 temp_s5_2;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t0_3;
    s32 temp_t1;
    s32 temp_t3;
    s32 temp_t3_2;
    s32 temp_t9;
    s32 temp_t9_2;
    s8 var_s1;
    s8 var_s2;
    s8 var_s3;
    s8 var_s4;
    s8 var_s5;
    s8 var_t0;
    s8 var_t3;
    s8 var_t9;
    u8 *temp_a7;
    u8 temp_a0;
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_fp;
    u8 temp_fp_2;
    u8 temp_t2;
    u8 temp_t3_3;
    u8 temp_v0;
    u8 temp_v1_2;
    void *temp_v1;
    void *var_t8;

    temp_fp = *arg3;
    temp_fp_2 = (temp_fp >= 0xEU) ? 0xDU : temp_fp;
    temp_v1 = (temp_fp_2 * 0x10) + arg3;
    var_s5 = M2C_FIELD(arg1, u8 *, 7) ^ M2C_FIELD(temp_v1, u8 *, 8);
    var_s4 = (M2C_FIELD(arg1, u8 *, 6) - M2C_FIELD(temp_v1, u8 *, 7)) & 0xFF;
    var_s1 = (M2C_FIELD(arg1, u8 *, 5) - M2C_FIELD(temp_v1, u8 *, 6)) & 0xFF;
    var_t9 = M2C_FIELD(arg1, u8 *, 3) ^ M2C_FIELD(temp_v1, u8 *, 4);
    var_s3 = (M2C_FIELD(arg1, u8 *, 2) - M2C_FIELD(temp_v1, u8 *, 3)) & 0xFF;
    var_t3 = M2C_FIELD(arg1, u8 *, 4) ^ M2C_FIELD(temp_v1, u8 *, 5);
    var_s2 = (M2C_FIELD(arg1, u8 *, 1) - M2C_FIELD(temp_v1, u8 *, 2)) & 0xFF;
    var_t0 = M2C_FIELD(arg1, u8 *, 0) ^ M2C_FIELD(temp_v1, u8 *, 1);
    sp0 = 0;
    if (temp_fp_2 != 0) {
        var_t8 = temp_v1;
        do {
            temp_t0 = (var_t0 - var_s2) & 0xFF;
            temp_s2 = (var_s3 - var_t9) & 0xFF;
            temp_s3 = (var_t3 - var_s1) & 0xFF;
            temp_s4 = (var_s1 - temp_s3) & 0xFF;
            temp_t9 = (var_s4 - var_s5) & 0xFF;
            temp_s5 = (var_s5 - temp_t9) & 0xFF;
            temp_t0_2 = (temp_t0 - temp_s3) & 0xFF;
            temp_t3 = ((var_s2 - temp_t0) - temp_s4) & 0xFF;
            temp_s2_2 = (temp_s2 - temp_t9) & 0xFF;
            temp_t9_2 = (temp_t9 - temp_s2_2) & 0xFF;
            temp_s1 = ((var_t9 - temp_s2) - temp_s5) & 0xFF;
            temp_s5_2 = (temp_s5 - temp_s1) & 0xFF;
            temp_t0_3 = (temp_t0_2 - temp_s2_2) & 0xFF;
            temp_s3_2 = ((temp_s3 - temp_t0_2) - temp_t9_2) & 0xFF;
            temp_t3_2 = (temp_t3 - temp_s1) & 0xFF;
            temp_s4_2 = ((temp_s4 - temp_t3) - temp_s5_2) & 0xFF;
            sp0 += 1;
            temp_a7 = arg2 + (((temp_t9_2 - temp_s3_2) - M2C_FIELD(var_t8, u8 *, -4)) & 0xFF);
            temp_a5 = M2C_FIELD(((temp_s4_2 ^ M2C_FIELD(var_t8, u8 *, -1)) + arg2), u8 *, 0x100) - M2C_FIELD(var_t8, u8 *, -9);
            temp_v1_2 = M2C_FIELD(var_t8, u8 *, -8);
            temp_t2 = *(u8 *)(arg2 + (((temp_s5_2 - temp_s4_2) - M2C_FIELD(var_t8, u8 *, 0)) & 0xFF));
            temp_a6 = M2C_FIELD((((temp_s3_2 ^ M2C_FIELD(var_t8, u8 *, -5)) & 0xFF) + arg2), u8 *, 0x100) - M2C_FIELD(var_t8, u8 *, -0xD);
            temp_t3_3 = *(u8 *)(arg2 + ((temp_t3_2 - M2C_FIELD(var_t8, u8 *, -3)) & 0xFF));
            temp_t1 = M2C_FIELD(((((temp_s2_2 - temp_t0_3) & 0xFF) ^ M2C_FIELD(var_t8, u8 *, -6)) + arg2), u8 *, 0x100) - M2C_FIELD(var_t8, u8 *, -0xE);
            temp_a2 = *(u8 *)(arg2 + ((temp_t0_3 - M2C_FIELD(var_t8, u8 *, -7)) & 0xFF));
            var_s1 = (M2C_FIELD(((((temp_s1 - temp_t3_2) & 0xFF) ^ M2C_FIELD(var_t8, u8 *, -2)) + arg2), u8 *, 0x100) - M2C_FIELD(var_t8, u8 *, -0xA)) & 0xFF;
            temp_a1 = M2C_FIELD(var_t8, u8 *, -0xB);
            var_s4 = temp_a5 & 0xFF;
            temp_a0 = M2C_FIELD(var_t8, u8 *, -0xC);
            var_s3 = temp_a6 & 0xFF;
            temp_v0 = M2C_FIELD(var_t8, u8 *, -0xF);
            var_t8 -= 0x10;
            var_s2 = temp_t1 & 0xFF;
            var_s5 = temp_t2 ^ temp_v1_2;
            var_t3 = temp_t3_3 ^ temp_a1;
            var_t9 = *temp_a7 ^ temp_a0;
            var_t0 = temp_a2 ^ temp_v0;
        } while (sp0 < temp_fp_2);
    }
    M2C_FIELD(arg0, s8 *, 7) = var_s5;
    M2C_FIELD(arg0, s8 *, 1) = var_s2;
    M2C_FIELD(arg0, s8 *, 2) = var_s3;
    M2C_FIELD(arg0, s8 *, 5) = var_s1;
    M2C_FIELD(arg0, s8 *, 6) = var_s4;
    M2C_FIELD(arg0, s8 *, 0) = var_t0;
    M2C_FIELD(arg0, s8 *, 3) = var_t9;
    M2C_FIELD(arg0, s8 *, 4) = var_t3;
}
