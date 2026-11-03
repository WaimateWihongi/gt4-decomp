/* NON_MATCHING: functional draft, 129 of 130 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_00471550(void *arg0, s32 arg1, s32 arg2) {
    s32 *temp_a1;
    s32 *var_s0;
    s32 *var_t3;
    s32 *var_t9;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_a5;
    s32 temp_a7;
    s32 temp_t2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_s1;
    s32 var_s3;
    s32 var_s6;
    s32 var_t2;
    s32 var_t8;
    s32 var_v0;
    s32 var_v1;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_t0_3;
    void *temp_t0_4;
    void *temp_t0_5;
    void *temp_t0_6;
    void *var_s2;
    void *var_t0;
    void *var_t1;

    var_s6 = 0;
    var_s0 = arg0 + (arg1 << 8) + 0x434;
    var_s2 = arg0;
    var_s1 = arg0 + 0x10;
    do {
        var_t1 = arg0;
        var_t9 = var_s1 + 0x730;
        var_s3 = 7;
loop_2:
        var_t2 = 0;
        var_t0 = M2C_FIELD(((arg1 * 4) + arg0), s32 *, 0x734) + (arg2 << 8);
        var_t3 = var_s2 + 0x34;
        var_t8 = 7;
loop_3:
        temp_t0 = var_t0 + 4;
        temp_t0_2 = temp_t0 + 4;
        temp_t0_3 = temp_t0_2 + 4;
        temp_t0_4 = temp_t0_3 + 4;
        temp_a7 = M2C_FIELD(temp_t0, s32 *, 4) * M2C_FIELD(var_t1, s32 *, 0x3C);
        temp_t0_5 = temp_t0_4 + 4;
        temp_a5 = M2C_FIELD(temp_t0_2, s32 *, 4) * M2C_FIELD(var_t1, s32 *, 0x40);
        temp_t0_6 = temp_t0_5 + 4;
        temp_a4 = M2C_FIELD(temp_t0_3, s32 *, 4) * M2C_FIELD(var_t1, s32 *, 0x44);
        temp_a2 = M2C_FIELD(temp_t0_5, s32 *, 4);
        temp_a3 = M2C_FIELD(temp_t0_4, s32 *, 4) * M2C_FIELD(var_t1, s32 *, 0x48);
        temp_v0 = (M2C_FIELD(var_t0, s32 *, 0) * M2C_FIELD(var_t1, s32 *, 0x34)) + (M2C_FIELD(var_t0, s32 *, 4) * M2C_FIELD(var_t1, s32 *, 0x38));
        temp_a0 = M2C_FIELD(temp_t0_6, s32 *, 4);
        var_t0 = temp_t0_6 + 4 + 4;
        var_a1 = *var_t3;
        var_v1 = temp_v0 + temp_a7 + temp_a5 + temp_a4 + temp_a3 + (temp_a2 * M2C_FIELD(var_t1, s32 *, 0x4C)) + (temp_a0 * M2C_FIELD(var_t1, s32 *, 0x50));
        var_t3 += 4;
        if (var_v1 < 0) {
            var_v1 = -var_v1;
            var_a1 = -var_a1;
        }
        var_t8 -= 1;
        var_t2 += ((var_v1 >> 0xF) * var_a1) + ((s32) ((var_v1 & 0x7FFF) * var_a1) >> 0xF);
        if (var_t8 >= 0) {
            goto loop_3;
        }
        var_a0 = var_t2;
        var_v0 = *var_s0;
        if (var_t2 < 0) {
            var_a0 = -var_t2;
            var_v0 = -var_v0;
        }
        temp_a1 = var_t9;
        var_t9 += 4;
        var_s3 -= 1;
        var_s0 += 4;
        var_s1 += 4;
        var_t1 += 0x20;
        temp_t2 = ((var_a0 >> 0xF) * var_v0) + ((s32) ((var_a0 & 0x7FFF) * var_v0) >> 0xF);
        *temp_a1 = (s32) (((temp_t2 < 0) * 0x1FFFF) + temp_t2) >> 0x11;
        if (var_s3 >= 0) {
            goto loop_2;
        }
        var_s6 += 1;
        var_s2 += 0x20;
    } while (var_s6 < 8);
}
