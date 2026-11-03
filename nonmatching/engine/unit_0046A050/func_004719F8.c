/* NON_MATCHING: functional draft, 294 of 312 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_004719F8(s32 arg0, s32 arg1, void *arg2, s32 arg3) {
    struct StackFrame_004719F8 { s8 pad0[0x100]; s32 sp100; s8 pad1[0xC]; } sp_;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    s32 temp_a4;
    s32 temp_a4_2;
    s32 temp_a4_3;
    s32 temp_a5;
    s32 temp_a5_2;
    s32 temp_a6;
    s32 temp_a6_2;
    s32 temp_a6_3;
    s32 temp_a6_4;
    s32 temp_a6_5;
    s32 temp_a6_6;
    s32 temp_a6_7;
    s32 temp_a7;
    s32 temp_a7_2;
    s32 temp_a7_3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s2_3;
    s32 temp_s3;
    s32 temp_s5;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t0_3;
    s32 temp_t0_4;
    s32 temp_t0_5;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_t3_2;
    s32 temp_t3_3;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_12;
    s32 temp_v0_13;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_9;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_a5;
    s32 var_a5_2;
    s32 var_s7;
    s32 var_s7_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v1;
    s32 var_v1_2;
    u8 temp_v0_8;
    void *var_t1;
    void *var_t2;
    void *var_t8;
    void *var_t8_2;
    void *var_t9;

    var_t9 = arg2;
    var_t2 = arg0 + (arg1 << 8) + 0x75C;
    var_t1 = arg0 + (arg1 * 0x108) + 0x130;
    sp_.sp100 = arg3;
    var_t8 = ((s8 *)&sp_);
    var_s7 = 8;
    do {
        temp_t0 = M2C_FIELD(var_t2, s32 *, 0x20);
        temp_s5 = M2C_FIELD(var_t2, s32 *, 0xE0);
        temp_a3 = M2C_FIELD(var_t2, s32 *, 0x40);
        temp_s3 = M2C_FIELD(var_t2, s32 *, 0xA0);
        temp_a4 = M2C_FIELD(var_t2, s32 *, 0x80);
        temp_a6 = M2C_FIELD(var_t2, s32 *, 0x60);
        temp_a1 = M2C_FIELD(var_t2, s32 *, 0xC0);
        if ((temp_t0 | temp_s5 | (temp_a3 | temp_s3) | (temp_a4 | temp_a6 | temp_a1)) != 0) {
            temp_s0 = temp_a3 * M2C_FIELD(var_t1, s32 *, 0x40);
            temp_s2 = temp_a1 * M2C_FIELD(var_t1, s32 *, 0xC0);
            temp_s1 = temp_a4 * M2C_FIELD(var_t1, s32 *, 0x80);
            temp_a7 = M2C_FIELD(var_t2, s32 *, 0) * M2C_FIELD(var_t1, s32 *, 0);
            temp_a3_2 = temp_s0 + temp_s2;
            temp_v0 = (temp_s0 - temp_s2) * 0x16A;
            temp_a5 = temp_a7 - temp_s1;
            temp_a4_2 = temp_a7 + temp_s1;
            if (temp_v0 < 0) {
                var_v0 = (temp_v0 >> 8) | 0xFF000000;
            } else {
                var_v0 = temp_v0 >> 8;
            }
            temp_a2 = var_v0 - temp_a3_2;
            temp_s2_2 = temp_a4_2 - temp_a3_2;
            temp_s1_2 = temp_a5 - temp_a2;
            temp_t3 = temp_t0 * M2C_FIELD(var_t1, s32 *, 0x20);
            temp_a0 = temp_a6 * M2C_FIELD(var_t1, s32 *, 0x60);
            temp_a6_2 = temp_s3 * M2C_FIELD(var_t1, s32 *, 0xA0);
            temp_a7_2 = temp_a4_2 + temp_a3_2;
            temp_t0_2 = temp_s5 * M2C_FIELD(var_t1, s32 *, 0xE0);
            temp_s0_2 = temp_a5 + temp_a2;
            temp_a1_2 = temp_a6_2 + temp_a0;
            temp_a6_3 = temp_a6_2 - temp_a0;
            temp_v1 = temp_t3 + temp_t0_2;
            temp_a0_2 = temp_t3 - temp_t0_2;
            temp_v0_2 = (temp_v1 - temp_a1_2) * 0x16A;
            temp_t0_3 = temp_v1 + temp_a1_2;
            if (temp_v0_2 < 0) {
                var_a5 = (temp_v0_2 >> 8) | 0xFF000000;
            } else {
                var_a5 = temp_v0_2 >> 8;
            }
            temp_v0_3 = (temp_a6_3 + temp_a0_2) * 0x1D9;
            if (temp_v0_3 >= 0) {
                var_v1 = temp_v0_3 >> 8;
            } else {
                var_v1 = (temp_v0_3 >> 8) | 0xFF000000;
            }
            temp_v0_4 = temp_a0_2 * 0x115;
            var_v0_2 = temp_v0_4 >> 8;
            if (temp_v0_4 < 0) {
                var_v0_2 |= 0xFF000000;
            }
            temp_v0_5 = temp_a6_3 * -0x29D;
            var_v0_3 = temp_v0_5 >> 8;
            if (temp_v0_5 < 0) {
                var_v0_3 |= 0xFF000000;
            }
            temp_a6_4 = (var_v0_3 + var_v1) - temp_t0_3;
            temp_a0_3 = var_a5 - temp_a6_4;
            temp_t3_2 = (var_v0_2 - var_v1) + temp_a0_3;
            M2C_FIELD(var_t8, s32 *, 0) = (s32) (temp_a7_2 + temp_t0_3);
            M2C_FIELD(var_t8, s32 *, 0xE0) = (s32) (temp_a7_2 - temp_t0_3);
            var_t2 += 4;
            M2C_FIELD(var_t8, s32 *, 0x20) = (s32) (temp_s0_2 + temp_a6_4);
            var_t1 += 4;
            M2C_FIELD(var_t8, s32 *, 0xC0) = (s32) (temp_s0_2 - temp_a6_4);
            M2C_FIELD(var_t8, s32 *, 0x40) = (s32) (temp_s1_2 + temp_a0_3);
            M2C_FIELD(var_t8, s32 *, 0xA0) = (s32) (temp_s1_2 - temp_a0_3);
            M2C_FIELD(var_t8, s32 *, 0x80) = (s32) (temp_s2_2 + temp_t3_2);
            M2C_FIELD(var_t8, s32 *, 0x60) = (s32) (temp_s2_2 - temp_t3_2);
        } else {
            temp_v0_6 = M2C_FIELD(var_t2, s32 *, 0);
            var_t2 += 4;
            temp_v1_2 = M2C_FIELD(var_t1, s32 *, 0);
            var_t1 += 4;
            temp_v0_7 = temp_v0_6 * temp_v1_2;
            M2C_FIELD(var_t8, s32 *, 0xE0) = temp_v0_7;
            M2C_FIELD(var_t8, s32 *, 0) = temp_v0_7;
            M2C_FIELD(var_t8, s32 *, 0x20) = temp_v0_7;
            M2C_FIELD(var_t8, s32 *, 0x40) = temp_v0_7;
            M2C_FIELD(var_t8, s32 *, 0x60) = temp_v0_7;
            M2C_FIELD(var_t8, s32 *, 0x80) = temp_v0_7;
            M2C_FIELD(var_t8, s32 *, 0xA0) = temp_v0_7;
            M2C_FIELD(var_t8, s32 *, 0xC0) = temp_v0_7;
        }
        var_s7 -= 1;
        var_t8 += 4;
    } while (var_s7 > 0);
    var_t8_2 = ((s8 *)&sp_);
    var_s7_2 = 8;
    do {
        temp_t2 = M2C_FIELD(var_t8_2, s32 *, 4);
        temp_t1 = M2C_FIELD(var_t8_2, s32 *, 0x1C);
        temp_a2_2 = M2C_FIELD(var_t8_2, s32 *, 8);
        temp_t0_4 = M2C_FIELD(var_t8_2, s32 *, 0x14);
        temp_a1_3 = M2C_FIELD(var_t8_2, s32 *, 0x10);
        temp_a6_5 = M2C_FIELD(var_t8_2, s32 *, 0xC);
        temp_a3_3 = M2C_FIELD(var_t8_2, s32 *, 0x18);
        if ((temp_t2 | temp_t1 | (temp_a2_2 | temp_t0_4) | (temp_a1_3 | temp_a6_5 | temp_a3_3)) == 0) {
            temp_v0_8 = *(u8 *)(0x6ACA50 + (((s32) (M2C_FIELD(var_t8_2, s32 *, 0) + 0x10) >> 5) & 0x3FF));
            var_t8_2 += 0x20;
            M2C_FIELD(var_t9, s32 *, 0x1C) = (s32) temp_v0_8;
            M2C_FIELD(var_t9, s32 *, 0) = (s32) temp_v0_8;
            M2C_FIELD(var_t9, s32 *, 4) = (s32) temp_v0_8;
            M2C_FIELD(var_t9, s32 *, 8) = (s32) temp_v0_8;
            M2C_FIELD(var_t9, s32 *, 0xC) = (s32) temp_v0_8;
            M2C_FIELD(var_t9, s32 *, 0x10) = (s32) temp_v0_8;
            M2C_FIELD(var_t9, s32 *, 0x14) = (s32) temp_v0_8;
            M2C_FIELD(var_t9, s32 *, 0x18) = (s32) temp_v0_8;
        } else {
            temp_a3_4 = temp_a2_2 + temp_a3_3;
            temp_v0_9 = (temp_a2_2 - temp_a3_3) * 0x16A;
            temp_v1_3 = M2C_FIELD(var_t8_2, s32 *, 0);
            temp_a5_2 = temp_v1_3 - temp_a1_3;
            temp_a4_3 = temp_v1_3 + temp_a1_3;
            if (temp_v0_9 < 0) {
                var_v0_4 = (temp_v0_9 >> 8) | 0xFF000000;
            } else {
                var_v0_4 = temp_v0_9 >> 8;
            }
            temp_a2_3 = var_v0_4 - temp_a3_4;
            temp_a1_4 = temp_t0_4 + temp_a6_5;
            temp_a6_6 = temp_t0_4 - temp_a6_5;
            temp_v1_4 = temp_t2 + temp_t1;
            temp_s2_3 = temp_a4_3 - temp_a3_4;
            temp_s1_3 = temp_a5_2 - temp_a2_3;
            temp_v0_10 = (temp_v1_4 - temp_a1_4) * 0x16A;
            temp_a0_4 = temp_t2 - temp_t1;
            temp_a7_3 = temp_a4_3 + temp_a3_4;
            temp_s0_3 = temp_a5_2 + temp_a2_3;
            temp_t0_5 = temp_v1_4 + temp_a1_4;
            if (temp_v0_10 < 0) {
                var_a5_2 = (temp_v0_10 >> 8) | 0xFF000000;
            } else {
                var_a5_2 = temp_v0_10 >> 8;
            }
            temp_v0_11 = (temp_a6_6 + temp_a0_4) * 0x1D9;
            if (temp_v0_11 >= 0) {
                var_v1_2 = temp_v0_11 >> 8;
            } else {
                var_v1_2 = (temp_v0_11 >> 8) | 0xFF000000;
            }
            temp_v0_12 = temp_a0_4 * 0x115;
            var_v0_5 = temp_v0_12 >> 8;
            if (temp_v0_12 < 0) {
                var_v0_5 |= 0xFF000000;
            }
            temp_v0_13 = temp_a6_6 * -0x29D;
            var_v0_6 = temp_v0_13 >> 8;
            if (temp_v0_13 < 0) {
                var_v0_6 |= 0xFF000000;
            }
            temp_a6_7 = (var_v0_6 + var_v1_2) - temp_t0_5;
            temp_a0_5 = var_a5_2 - temp_a6_7;
            temp_t3_3 = (var_v0_5 - var_v1_2) + temp_a0_5;
            M2C_FIELD(var_t9, s32 *, 0) = (s32) *(s32 *)(0x6ACA50 + (((s32) (temp_a7_3 + temp_t0_5 + 0x10) >> 5) & 0x3FF));
            M2C_FIELD(var_t9, s32 *, 0x1C) = (s32) *(s32 *)(0x6ACA50 + (((s32) ((temp_a7_3 - temp_t0_5) + 0x10) >> 5) & 0x3FF));
            M2C_FIELD(var_t9, s32 *, 4) = (s32) *(s32 *)(0x6ACA50 + (((s32) (temp_s0_3 + temp_a6_7 + 0x10) >> 5) & 0x3FF));
            M2C_FIELD(var_t9, s32 *, 0x18) = (s32) *(s32 *)(0x6ACA50 + (((s32) ((temp_s0_3 - temp_a6_7) + 0x10) >> 5) & 0x3FF));
            M2C_FIELD(var_t9, s32 *, 8) = (s32) *(s32 *)(0x6ACA50 + (((s32) (temp_s1_3 + temp_a0_5 + 0x10) >> 5) & 0x3FF));
            M2C_FIELD(var_t9, s32 *, 0x14) = (s32) *(s32 *)(0x6ACA50 + (((s32) ((temp_s1_3 - temp_a0_5) + 0x10) >> 5) & 0x3FF));
            M2C_FIELD(var_t9, s32 *, 0x10) = (s32) *(s32 *)(0x6ACA50 + (((s32) (temp_s2_3 + temp_t3_3 + 0x10) >> 5) & 0x3FF));
            var_t8_2 += 0x20;
            M2C_FIELD(var_t9, s32 *, 0xC) = (s32) *(s32 *)(0x6ACA50 + (((s32) ((temp_s2_3 - temp_t3_3) + 0x10) >> 5) & 0x3FF));
        }
        var_s7_2 -= 1;
        var_t9 += sp_.sp100 * 4;
    } while (var_s7_2 > 0);
}
