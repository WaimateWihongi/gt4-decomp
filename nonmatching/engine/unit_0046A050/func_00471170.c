/* NON_MATCHING: functional draft, 242 of 260 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_00471170(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    void *sp0;
    void *sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    void *sp38;
    s32 *var_t2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a3;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_s0;
    s32 temp_s4;
    s32 temp_t1;
    s32 temp_t8;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a2;
    s32 var_a6;
    s32 var_a6_2;
    s32 var_a6_3;
    s32 var_fp;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t0_3;
    s32 var_t3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v1_3;

    sp4 = arg1;
    sp0 = arg0;
    sp8 = arg2;
    spC = arg3;
    sp10 = 0;
    sp24 = arg0 + 4;
    sp34 = 0x730;
    sp38 = arg0 + 0xC;
    do {
        sp18 = M2C_FIELD(sp38, s32 *, 0);
        temp_lo = (s32) M2C_FIELD(sp0, s32 *, 0x24) / sp18;
        temp_v0_2 = M2C_FIELD(sp38, s32 *, 4);
        var_t2 = *(s32 * *)(sp24 + sp34);
        temp_lo_2 = (s32) M2C_FIELD(sp0, s32 *, 0x2C) / temp_v0_2;
        sp1C = temp_lo;
        if (temp_v0_2 > 0) {
            temp_v1 = temp_lo_2 * 8;
            sp14 = temp_v0_2;
            sp20 = temp_v1;
            var_a2 = spC;
            sp30 = temp_v1;
            do {
                temp_s0 = var_a2 + sp20;
                if (sp18 > 0) {
                    sp28 = temp_lo * 8;
                    var_fp = sp18;
                    var_t3 = sp8;
                    sp2C = sp1C * 8;
                    do {
                        temp_t8 = var_t3 + sp28;
                        temp_t1 = M2C_FIELD(sp4, s32 *, 0);
                        temp_a3 = M2C_FIELD(sp4, s32 *, 4);
                        temp_s4 = M2C_FIELD(sp4, s32 *, 8);
                        switch (sp10) {             /* irregular */
                        case 0:
                            var_t0 = var_a2;
                            if (var_a2 < temp_s0) {
                                var_v0 = var_t0 < temp_a3;
loop_16:
                                var_a6 = var_t3;
                                if (var_t3 < temp_t8) {
                                    do {
                                        temp_a0 = (temp_t1 < var_a6) ? (temp_t1 - 1) : var_a6;
                                        var_a6 += temp_lo;
                                        temp_v0_3 = ((temp_a0 + (((var_v0 == 0) ? (temp_a3 - 1) : var_t0) * temp_t1)) * 3) + temp_s4;
                                        *var_t2 = ((s32) ((M2C_FIELD(temp_v0_3, u8 *, 0) * 0x2645) + (M2C_FIELD(temp_v0_3, u8 *, 1) * 0x4B22) + (M2C_FIELD(temp_v0_3, u8 *, 2) * 0xE97)) >> 0xF) - 0x80;
                                        var_t2 += 4;
                                    } while (var_a6 < temp_t8);
                                }
                                var_t0 += temp_lo_2;
                                if (var_t0 < temp_s0) {
                                    var_v0 = var_t0 < temp_a3;
                                    goto loop_16;
                                }
                            }
                            break;
                        case 1:
                            var_t0_2 = var_a2;
                            if (var_a2 < temp_s0) {
                                var_v0_2 = var_t0_2 < temp_a3;
loop_25:
                                var_a6_2 = var_t3;
                                if (var_t3 < temp_t8) {
                                    do {
                                        temp_a0_2 = (temp_t1 < var_a6_2) ? (temp_t1 - 1) : var_a6_2;
                                        var_a6_2 += temp_lo;
                                        temp_v1_3 = ((temp_a0_2 + (((var_v0_2 == 0) ? (temp_a3 - 1) : var_t0_2) * temp_t1)) * 3) + temp_s4;
                                        *var_t2 = ((s32) ((-(M2C_FIELD(temp_v1_3, u8 *, 0) * 0x1597) - (M2C_FIELD(temp_v1_3, u8 *, 1) * 0x2A68)) + (M2C_FIELD(temp_v1_3, u8 *, 2) << 0xE) + 0x800000) >> 0xF) - 0x100;
                                        var_t2 += 4;
                                    } while (var_a6_2 < temp_t8);
                                }
                                var_t0_2 += temp_lo_2;
                                if (var_t0_2 < temp_s0) {
                                    var_v0_2 = var_t0_2 < temp_a3;
                                    goto loop_25;
                                }
                            }
                            break;
                        case 2:
                            var_t0_3 = var_a2;
                            if (var_a2 < temp_s0) {
                                var_v0_3 = var_t0_3 < temp_a3;
                                do {
                                    var_a6_3 = var_t3;
                                    if (var_t3 < temp_t8) {
                                        do {
                                            temp_a0_3 = (temp_t1 < var_a6_3) ? (temp_t1 - 1) : var_a6_3;
                                            var_a6_3 += temp_lo;
                                            temp_v0_4 = ((temp_a0_3 + (((var_v0_3 == 0) ? (temp_a3 - 1) : var_t0_3) * temp_t1)) * 3) + temp_s4;
                                            *var_t2 = ((s32) ((((M2C_FIELD(temp_v0_4, u8 *, 0) << 0xE) - (M2C_FIELD(temp_v0_4, u8 *, 1) * 0x3597)) - (M2C_FIELD(temp_v0_4, u8 *, 2) * 0xA68)) + 0x800000) >> 0xF) - 0x100;
                                            var_t2 += 4;
                                        } while (var_a6_3 < temp_t8);
                                    }
                                    var_t0_3 += temp_lo_2;
                                    var_v0_3 = var_t0_3 < temp_a3;
                                } while (var_t0_3 < temp_s0);
                            }
                            break;
                        }
                        var_fp -= 1;
                        var_t3 += sp2C;
                    } while (var_fp != 0);
                }
                temp_v1_2 = sp14 - 1;
                sp14 = temp_v1_2;
                var_a2 += sp30;
            } while (temp_v1_2 != 0);
        }
        temp_v0 = sp10 + 1;
        sp10 = temp_v0;
        sp34 += 4;
        sp38 += 8;
    } while (temp_v0 < 3);
}
