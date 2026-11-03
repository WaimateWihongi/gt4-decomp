/* NON_MATCHING: functional draft, 355 of 365 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void *func_00359510(s32);                           /* extern */
f32 func_00359568();               /* extern */
f32 func_0036CC40(f32, f32);                        /* extern */
f32 func_0036CCD8(M2C_UNK, f32, M2C_UNK, f32);      /* extern */
s32 func_003F7C80();          /* extern */
f32 func_003F7CA8(s32, s32, f32, M2C_UNK);          /* extern */
f32 func_003F7E20(void *, s32);                     /* extern */
M2C_UNK func_0040CC58(void *);                      /* extern */

void func_003F7EA8(void *arg0) {
    s32 sp0;
    void *sp4;
    void *sp8;
    f32 *var_s0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f22_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f20;
    f32 var_f21;
    f32 var_f2;
    f32 var_f3;
    s32 temp_a1;
    s32 temp_s1;
    s32 temp_s7;
    s32 temp_v0_3;
    s32 var_a2;
    s32 var_condition_bit;
    s32 var_fp;
    s32 var_s5;
    s32 var_s5_2;
    s32 var_s5_3;
    u8 *var_s2;
    u8 temp_s1_2;
    u8 temp_s2;
    u8 var_a0;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s0_2;
    void *var_s0_3;

    var_s5 = 0;
    temp_s7 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_v0 = func_00359510(temp_s7);
    if (M2C_FIELD(temp_v0, u8 *, 1) != 0) {
        var_s0 = arg0 + 0x164;
        do {
            if (M2C_FIELD(temp_v0, u8 *, 0) != 1) {
                var_f0 = func_003F7CA8(temp_s7, var_s5, M2C_FIELD((arg0 + 0x104), f32 *, 0x468), 0);
            } else {
                var_f0 = func_003F7E20(arg0, var_s5);
            }
            *var_s0 = var_f0;
            var_s5 += 1;
            var_s0 += 0xEC;
        } while (var_s5 < (s32) M2C_FIELD(temp_v0, u8 *, 1));
    }
    func_0040CC58(arg0);
    if (func_003F7C80() != 0) {
        var_s5_2 = 0;
        if (M2C_FIELD(temp_v0, u8 *, 1) != 0) {
            sp4 = temp_v0 + 0xC;
            var_fp = 0x50;
            var_s0_2 = arg0 + 0x164;
            do {
                temp_f22 = M2C_FIELD(arg0, f32 *, 0x54C);
                temp_a0 = var_s5_2 + sp4;
                temp_s2 = M2C_FIELD(temp_a0, u8 *, 0x20);
                temp_s1 = *(s32 *)(0x620288 + M2C_FIELD(var_s0_2, u8 *, 0x89)) == 1;
                if (func_003F7C80(temp_a0, sp4) != 2) {
                    var_a2 = temp_s2 * 4;
                    if (temp_s1 != 0) {
                        var_f0_2 = 0x0.0p+0f;
                    } else if (M2C_FIELD(var_s0_2, f32 *, 0x60) != 0x0.0p+0f) {
                        if (M2C_FIELD(var_s0_2, f32 *, 0x28) < 0x0.0p+0f) {
                            var_f0_2 = func_0036CC40(M2C_FIELD(var_s0_2, f32 *, 0x30) - 0x1.921fb40000000p+1f, M2C_FIELD(var_s0_2, f32 *, 0)) * 0x1.0000000000000p-1f;
                            var_a2 = temp_s2 * 4;
                        } else {
                            var_a2 = temp_s2 * 4;
                            var_f0_3 = M2C_FIELD(var_s0_2, f32 *, 0x30) - M2C_FIELD(var_s0_2, f32 *, 0);
                            goto block_44;
                        }
                    } else {
                        var_a2 = temp_s2 * 4;
                        temp_f1 = *(f32 *)(0x845BF8 + var_a2);
                        temp_f3 = -temp_f1;
                        var_f0_2 = M2C_FIELD(var_s0_2, f32 *, 0x1C) - ((M2C_FIELD(var_s0_2, f32 *, 0) - M2C_FIELD((arg0 + var_fp), f32 *, 0x890)) * 0x1.0000000000000p-1f);
                        if (var_f0_2 < temp_f3) {
                            var_f0_2 = temp_f3;
                        } else if (temp_f1 < var_f0_2) {
                            var_f0_2 = temp_f1;
                        }
                    }
                } else {
                    var_a2 = temp_s2 * 4;
                    if (temp_s1 != 0) {
                        var_f0_2 = M2C_FIELD(var_s0_2, f32 *, 0);
                    } else if (M2C_FIELD(var_s0_2, f32 *, 0x60) != 0x0.0p+0f) {
                        if (!(M2C_FIELD(var_s0_2, f32 *, 0x28) < 0x0.0p+0f)) {
                            var_a2 = temp_s2 * 4;
                            var_f0_3 = M2C_FIELD(var_s0_2, f32 *, 0x30) + M2C_FIELD(var_s0_2, f32 *, 0);
block_44:
                            var_f0_2 = var_f0_3 * 0x1.0000000000000p-1f;
                        } else {
                            var_f0_2 = func_0036CCD8(0x3F000000, M2C_FIELD(var_s0_2, f32 *, 0x30) - 0x1.921fb40000000p+1f, 0x3F000000, M2C_FIELD(var_s0_2, f32 *, 0));
                            var_a2 = temp_s2 * 4;
                        }
                    } else {
                        var_a2 = temp_s2 * 4;
                        var_f0_2 = M2C_FIELD(var_s0_2, f32 *, 0x1C);
                    }
                }
                temp_v0_2 = var_a2 + 0x10;
                temp_f5 = M2C_FIELD(var_s0_2, f32 *, 0x18);
                temp_a1 = M2C_FIELD((void *)0x845BF0, s32 *, 4);
                var_a0 = var_a2 + 0x845BF8;
                var_f20 = *(f32 *)(0x845BF8 + var_a2);
                var_f2 = 0x1.0000000000000p+0f;
                var_f3 = (*(s32 *)(0x845BF0 + (s32) temp_v0_2) * (var_f0_2 - M2C_FIELD(var_s0_2, f32 *, 0x1C))) - (*(s32 *)(0x845BF8 + (s32) temp_v0_2) * temp_f5);
                if (temp_a1 != 0) {
                    var_a0 = M2C_FIELD((temp_v0 + temp_s2), u8 *, 8);
                    var_f2 = (M2C_FIELD(var_s0_2, f32 *, 0x4C) * (f32) var_a0) / M2C_FIELD((var_a2 + temp_s7), f32 *, 0x1040);
                }
                switch (temp_a1) {                  /* irregular */
                case 2:
                    var_f3 *= var_f2;
                    break;
                case 3:
                    var_f3 *= var_f2;
                    /* fallthrough */
                case 1:
                    var_f20 *= var_f2;
                    break;
                }
                temp_f0 = temp_f5 + (var_f3 * temp_f22);
                M2C_FIELD(var_s0_2, f32 *, 0x18) = temp_f0;
                M2C_FIELD(var_s0_2, f32 *, 0x1C) = (f32) (M2C_FIELD(var_s0_2, f32 *, 0x1C) + (temp_f0 * temp_f22));
                if (func_003F7C80((void *) var_a0, (void *) temp_a1, (void *) var_a2) == 2) {
                    temp_f1_2 = M2C_FIELD(var_s0_2, f32 *, 0);
                    temp_f2 = M2C_FIELD(var_s0_2, f32 *, 0x1C) - temp_f1_2;
                    if (!(var_f20 < temp_f2)) {
                        if (temp_f2 < -var_f20) {
                            var_f0_4 = temp_f1_2 - var_f20;
                            goto block_74;
                        }
                    } else {
                        var_f0_4 = temp_f1_2 + var_f20;
block_74:
                        M2C_FIELD(var_s0_2, f32 *, 0x18) = 0x0.0p+0f;
                        M2C_FIELD(var_s0_2, f32 *, 0x1C) = var_f0_4;
                    }
                } else {
                    temp_f1_3 = M2C_FIELD(var_s0_2, f32 *, 0x1C);
                    if (!(var_f20 < temp_f1_3)) {
                        temp_f0_2 = -var_f20;
                        if (temp_f1_3 < temp_f0_2) {
                            M2C_FIELD(var_s0_2, f32 *, 0x1C) = temp_f0_2;
                            M2C_FIELD(var_s0_2, f32 *, 0x18) = 0x0.0p+0f;
                        }
                    } else {
                        M2C_FIELD(var_s0_2, f32 *, 0x1C) = var_f20;
                        M2C_FIELD(var_s0_2, f32 *, 0x18) = 0x0.0p+0f;
                    }
                }
                var_s5_2 += 1;
                var_fp += 4;
                var_s0_2 += 0xEC;
            } while (var_s5_2 < (s32) M2C_FIELD(temp_v0, u8 *, 1));
        }
    }
    if (*(u8 *)0x620AF0 != 0) {
        var_s5_3 = 0;
        if (M2C_FIELD(temp_v0, u8 *, 1) != 0) {
            sp0 = temp_s7 + 8;
            var_s0_3 = arg0 + 0x164;
            sp8 = arg0 + 0x6DC;
            var_s2 = temp_v0 + 0x2C;
            do {
                temp_s1_2 = *var_s2;
                temp_v0_3 = (temp_s1_2 * 4) + 0x1050;
                temp_f22_2 = *(f32 *)(temp_s7 + temp_v0_3);
                temp_f20 = M2C_FIELD(var_s0_3, f32 *, 0x68) * *(s32 *)(sp0 + temp_v0_3);
                temp_f22_3 = temp_f22_2 + func_00359568(0x620B24, sp0, M2C_FIELD(sp8, f32 *, 0x10));
                temp_f0_3 = func_00359568(0x620B40, M2C_BITWISE(s32, temp_f22_3));
                if (!(temp_f20 >= 0x0.0p+0f)) {
                    var_f21 = temp_f20 + temp_f0_3;
                    var_condition_bit = var_f21 > 0x0.0p+0f;
                } else {
                    var_f21 = temp_f20 - temp_f0_3;
                    var_condition_bit = var_f21 < 0x0.0p+0f;
                }
                if (var_condition_bit) {
                    var_f21 = 0x0.0p+0f;
                }
                if (var_f21 != 0x0.0p+0f) {
                    temp_f1_4 = M2C_FIELD((void *)0x620B00, f32 *, 4);
                    var_f21 *= func_00359568(0x620B54, M2C_BITWISE(s32, temp_f22_3));
                    if (!(temp_f1_4 < var_f21)) {
                        temp_f0_4 = -temp_f1_4;
                        if (var_f21 < temp_f0_4) {
                            var_f21 = temp_f0_4;
                        }
                    } else {
                        var_f21 = temp_f1_4;
                    }
                    if (temp_s1_2 == 1) {
                        var_f21 = -var_f21;
                    }
                }
                temp_f6 = M2C_FIELD(var_s0_3, f32 *, 0xCC);
                var_s5_3 += 1;
                var_s2 += 1;
                temp_f2_2 = M2C_FIELD(var_s0_3, f32 *, 0xD0);
                temp_f3_2 = M2C_FIELD(arg0, f32 *, 0x54C);
                temp_f2_3 = temp_f2_2 + (((M2C_FIELD((void *)0x620B00, f32 *, 8) * (var_f21 - temp_f6)) - (M2C_FIELD((void *)0x620B00, f32 *, 0xC) * temp_f2_2)) * temp_f3_2);
                M2C_FIELD(var_s0_3, f32 *, 0xD0) = temp_f2_3;
                temp_f6_2 = temp_f6 + (temp_f2_3 * temp_f3_2);
                M2C_FIELD(var_s0_3, f32 *, 0xCC) = temp_f6_2;
                M2C_FIELD(var_s0_3, f32 *, 0) = (f32) (M2C_FIELD(var_s0_3, f32 *, 0) + temp_f6_2);
                var_s0_3 += 0xEC;
            } while (var_s5_3 < (s32) M2C_FIELD(temp_v0, u8 *, 1));
        }
    }
}
