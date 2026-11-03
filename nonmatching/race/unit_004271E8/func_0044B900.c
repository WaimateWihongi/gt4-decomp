/* NON_MATCHING: functional draft, 163 of 163 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_0044B900(void *arg0, void *arg1, s32 arg2, u8 *arg3) {
    u32 sp0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t2;
    s32 temp_t2_2;
    s32 temp_t8;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 var_s7;
    u32 temp_v0;
    u8 temp_fp;
    u8 temp_fp_2;
    u8 temp_s0_3;
    u8 temp_t8_2;
    u8 temp_t9_3;
    u8 var_s0;
    u8 var_s1;
    u8 var_s2;
    u8 var_s3;
    u8 var_t1;
    u8 var_t2;
    u8 var_t8;
    u8 var_t9;
    void *temp_t0;
    void *var_t3;

    var_s7 = 1;
    temp_fp = *arg3;
    var_s3 = M2C_FIELD(arg1, u8 *, 7);
    var_s1 = M2C_FIELD(arg1, u8 *, 0);
    var_t1 = M2C_FIELD(arg1, u8 *, 1);
    temp_fp_2 = (temp_fp >= 0xEU) ? 0xDU : temp_fp;
    var_t2 = M2C_FIELD(arg1, u8 *, 2);
    sp0 = 0;
    var_s2 = M2C_FIELD(arg1, u8 *, 3);
    var_s0 = M2C_FIELD(arg1, u8 *, 4);
    var_t8 = M2C_FIELD(arg1, u8 *, 5);
    var_t9 = M2C_FIELD(arg1, u8 *, 6);
    if (temp_fp_2 != 0) {
        var_t3 = arg3 + 1;
        do {
            temp_s1 = (M2C_FIELD(((var_s1 ^ M2C_FIELD(var_t3, u8 *, 0)) + arg2), u8 *, 0x100) + M2C_FIELD(var_t3, u8 *, 8)) & 0xFF;
            temp_t2 = *(s32 *)(arg2 + ((var_t2 + M2C_FIELD(var_t3, u8 *, 2)) & 0xFF)) ^ M2C_FIELD(var_t3, u8 *, 0xA);
            temp_s0 = (M2C_FIELD(((var_s0 ^ M2C_FIELD(var_t3, u8 *, 4)) + arg2), u8 *, 0x100) + M2C_FIELD(var_t3, u8 *, 0xC)) & 0xFF;
            temp_t9 = *(s32 *)(arg2 + ((var_t9 + M2C_FIELD(var_t3, u8 *, 6)) & 0xFF)) ^ M2C_FIELD(var_t3, u8 *, 0xE);
            temp_t1 = ((*(s32 *)(arg2 + ((var_t1 + M2C_FIELD(var_t3, u8 *, 1)) & 0xFF)) ^ M2C_FIELD(var_t3, u8 *, 9)) + temp_s1) & 0xFF;
            temp_s1_2 = (temp_s1 + temp_t1) & 0xFF;
            temp_s2 = (M2C_FIELD(((var_s2 ^ M2C_FIELD(var_t3, u8 *, 3)) + arg2), u8 *, 0x100) + M2C_FIELD(var_t3, u8 *, 0xB) + temp_t2) & 0xFF;
            temp_t8 = ((*(s32 *)(arg2 + ((var_t8 + M2C_FIELD(var_t3, u8 *, 5)) & 0xFF)) ^ M2C_FIELD(var_t3, u8 *, 0xD)) + temp_s0) & 0xFF;
            temp_s0_2 = (temp_s0 + temp_t8) & 0xFF;
            temp_s3 = (M2C_FIELD(((var_s3 ^ M2C_FIELD(var_t3, u8 *, 7)) + arg2), u8 *, 0x100) + M2C_FIELD(var_t3, u8 *, 0xF) + temp_t9) & 0xFF;
            temp_t2_2 = (temp_t2 + temp_s2 + temp_s1_2) & 0xFF;
            temp_s1_3 = (temp_s1_2 + temp_t2_2) & 0xFF;
            temp_t9_2 = (temp_t9 + temp_s3 + temp_s0_2) & 0xFF;
            temp_s2_2 = (temp_s2 + temp_t1) & 0xFF;
            temp_t1_2 = (temp_t1 + temp_s2_2) & 0xFF;
            temp_s3_2 = (temp_s3 + temp_t8) & 0xFF;
            temp_s0_3 = (temp_s0_2 + temp_t9_2 + temp_s1_3) & 0xFF;
            var_s1 = (temp_s1_3 + temp_s0_3) & 0xFF;
            temp_t8_2 = (temp_t8 + temp_s3_2 + temp_t1_2) & 0xFF;
            temp_t9_3 = (temp_t9_2 + temp_t2_2) & 0xFF;
            var_s3 = (temp_s3_2 + temp_s2_2) & 0xFF;
            var_t1 = temp_s0_3;
            var_s2 = temp_t8_2;
            var_s0 = (temp_t2_2 + temp_t9_3) & 0xFF;
            var_t2 = (temp_t1_2 + temp_t8_2) & 0xFF;
            temp_v0 = sp0 + 1;
            var_t8 = temp_t9_3;
            sp0 = temp_v0;
            var_t9 = (temp_s2_2 + var_s3) & 0xFF;
            var_t3 += 0x10;
            var_s7 += 0x10;
        } while (temp_v0 < temp_fp_2);
    }
    temp_t0 = var_s7 + arg3;
    M2C_FIELD(arg0, s8 *, 0) = (s8) (var_s1 ^ *(arg3 + var_s7));
    M2C_FIELD(arg0, s8 *, 7) = (s8) (var_s3 ^ M2C_FIELD(temp_t0, u8 *, 7));
    M2C_FIELD(arg0, s8 *, 3) = (s8) (var_s2 ^ M2C_FIELD(temp_t0, u8 *, 3));
    M2C_FIELD(arg0, s8 *, 4) = (s8) (var_s0 ^ M2C_FIELD(temp_t0, u8 *, 4));
    M2C_FIELD(arg0, s8 *, 1) = (s8) (var_t1 + M2C_FIELD(temp_t0, u8 *, 1));
    M2C_FIELD(arg0, s8 *, 2) = (s8) (var_t2 + M2C_FIELD(temp_t0, u8 *, 2));
    M2C_FIELD(arg0, s8 *, 5) = (s8) (var_t8 + M2C_FIELD(temp_t0, u8 *, 5));
    M2C_FIELD(arg0, s8 *, 6) = (s8) (var_t9 + M2C_FIELD(temp_t0, u8 *, 6));
}
