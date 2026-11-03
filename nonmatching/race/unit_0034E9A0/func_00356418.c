/* NON_MATCHING: functional draft, 439 of 491 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

f32 func_00345198(void *);                          /* extern */
f32 func_00355410(void *, u8, s32, s32, s32, s32, s32, s32, f32); /* extern */
M2C_UNK func_00355E88(void *, f32);                 /* extern */
f32 func_00355F08(void *, f32 *, f32 *, s32 *, f32); /* extern */
f32 func_00356168(void *);                          /* extern */
f32 func_003561D0(void *);                          /* extern */
f32 func_00356300(void *);                          /* extern */

void func_00356418(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    struct StackFrame_00356418 { s8 pad0[0x10]; f32 sp10; f32 sp14; s8 pad1[0x8]; f32 sp20; f32 sp24; s8 pad2[0x8]; } sp_;
    f32 *temp_v1;
    f32 *var_a1;
    f32 *var_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f1;
    f32 temp_f1_10;
    f32 temp_f1_11;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    f32 temp_f1_7;
    f32 temp_f1_8;
    f32 temp_f1_9;
    f32 temp_f20;
    f32 temp_f20_10;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f20_5;
    f32 temp_f20_6;
    f32 temp_f20_7;
    f32 temp_f20_8;
    f32 temp_f20_9;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f22_3;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f25;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f12;
    f32 var_f12_2;
    f32 var_f1;
    f32 var_f21;
    f32 var_f21_2;
    f32 var_f22;
    f32 var_f2;
    s32 *var_a3;
    s32 *var_s2;
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_v0;
    u8 temp_a1;
    void *temp_s4;
    void *temp_s6;
    void *temp_v0;
    void *temp_v1_2;
    void *var_a1_2;
    void *var_s0;

    temp_s4 = arg0 + 0x104;
    temp_a1 = M2C_FIELD(temp_s4, u8 *, 0x522);
    temp_f24 = M2C_FIELD(arg0, f32 *, 0x54C);
    temp_s6 = M2C_FIELD(arg0, s32 *, 0x10) + 0x234;
    M2C_FIELD(temp_s4, f32 *, 0x51C) = 0x0.0p+0f;
    var_f12 = M2C_FIELD(temp_s4, f32 *, 0x494);
    if (temp_a1 == 3) {
        var_f12 = M2C_FIELD(temp_s4, f32 *, 0x488);
    }
    temp_f20 = func_00355410(arg0, temp_a1, arg2, arg3, arg4, arg5, arg6, arg7, var_f12) * (f32) M2C_FIELD(temp_s4, s16 *, 0x4FA) * 0x1.b7860e0000000p-14f;
    temp_f3 = *(f32 *)0x843904;
    var_f21 = (((temp_f20 + (*(f32 *)0x8438C4 * func_003561D0(arg0))) * temp_f3) / (0x1.0000000000000p+0f - temp_f3)) / (0x1.0000000000000p+1f * *(f32 *)0x8438C0);
    if (var_f21 > 0x1.0000000000000p+0f) {
        var_f21 = 0x1.0000000000000p+0f;
    } else if (var_f21 < -0x1.0000000000000p+0f) {
        var_f21 = -0x1.0000000000000p+0f;
    }
    temp_f0 = func_00356168(arg0);
    temp_f2 = temp_f0 + (*(f32 *)0x843900 * (0x1.0000000000000p+0f - temp_f0));
    if (temp_f2 < var_f21) {
        var_f21 = temp_f2;
    }
    var_s1 = 0;
    var_s2 = ((s8 *)&sp_);
    var_s0 = arg0 + 0x164;
    do {
        var_f12_2 = M2C_FIELD(var_s0, f32 *, 0x20);
        if (var_f12_2 < 0x0.0p+0f) {
            var_f12_2 = -var_f12_2;
        }
        var_v0 = 1;
        if (!(var_f12_2 < 0x1.1c71c60000000p-2f)) {
            var_v0 = 0;
        }
        var_f0 = M2C_FIELD(var_s0, f32 *, 0x80);
        var_s0 += 0xEC;
        *var_s2 = var_v0;
        var_s2 += 4;
        if (var_f0 < 0x0.0p+0f) {
            var_f0 = -var_f0;
        }
        temp_f1 = *(f32 *)0x8438E0;
        var_f0_2 = var_f0 * var_f12_2 * 0x1.0652460000000p-10f;
        if (temp_f1 < var_f0_2) {
            var_f0_2 = temp_f1;
        }
        var_s1 += 1;
        func_00355E88(arg0, var_f0_2 * temp_f24);
    } while (var_s1 < 2);
    temp_f25 = (M2C_FIELD(temp_s6, f32 *, 0x90) * 0x1.921fb40000000p+2f * 0x1.3999980000000p+3f * 0x1.6619980000000p+9f) / 0x1.610a3c0000000p+5f;
    if (var_f21 > 0x0.0p+0f) {
        sp_.sp24 = var_f21;
        temp_f22 = *(f32 *)0x8438D8 * *(f32 *)0x8438C8;
        sp_.sp20 = var_f21;
        temp_f20_2 = func_00356300(arg0);
        temp_f20_3 = (temp_f20_2 * *(f32 *)0x84390C) - (func_00345198(arg0) * *(f32 *)0x843908);
        if (temp_f20_3 > 0x0.0p+0f) {
            temp_f20_4 = temp_f20_3 - *(f32 *)0x843910;
            if (!(temp_f20_4 < 0x0.0p+0f)) {
                temp_f20_5 = temp_f20_4 * 0x1.0000000000000p-1f;
                temp_f2_2 = var_f21 * (temp_f20_5 + 0x1.0000000000000p+0f);
                temp_f1_2 = var_f21 * (0x1.0000000000000p+0f - temp_f20_5);
                sp_.sp24 = temp_f2_2;
                sp_.sp20 = temp_f1_2;
                if (temp_f2_2 > 0x1.0000000000000p+0f) {
                    sp_.sp24 = 0x1.0000000000000p+0f;
                    sp_.sp20 = temp_f1_2 - (temp_f2_2 - 0x1.0000000000000p+0f);
                }
                if (sp_.sp20 < -0x1.0000000000000p+0f) {
                    sp_.sp20 = -0x1.0000000000000p+0f;
                }
            }
        } else if (temp_f20_3 < 0x0.0p+0f) {
            temp_f20_6 = temp_f20_3 + *(s32 *)0x843910;
            if (!(temp_f20_6 > 0x0.0p+0f)) {
                temp_f20_7 = temp_f20_6 * 0x1.0000000000000p-1f;
                temp_f2_3 = var_f21 * (0x1.0000000000000p+0f - temp_f20_7);
                temp_f1_3 = var_f21 * (temp_f20_7 + 0x1.0000000000000p+0f);
                sp_.sp20 = temp_f2_3;
                sp_.sp24 = temp_f1_3;
                if (temp_f2_3 > 0x1.0000000000000p+0f) {
                    sp_.sp20 = 0x1.0000000000000p+0f;
                    sp_.sp24 = temp_f1_3 - (temp_f2_3 - 0x1.0000000000000p+0f);
                }
                if (sp_.sp24 < -0x1.0000000000000p+0f) {
                    sp_.sp24 = -0x1.0000000000000p+0f;
                }
            }
        }
        var_s1_2 = 0;
        var_a1 = &sp_.sp10;
        var_a2 = arg0 + 0x184;
        var_a3 = ((s8 *)&sp_);
        do {
            *var_a1 = 0x0.0p+0f;
            if (M2C_FIELD(var_a3, s32 *, 0) == 0) {
                temp_f2_4 = *var_a2;
                temp_v1 = &(&sp_.sp20)[var_s1_2];
                temp_f0_2 = *(s32 *)temp_v1 * ((*(s32 *)0x8438C0 * temp_f25) / temp_f2_4);
                *temp_v1 = temp_f0_2;
                if (temp_f2_4 < 0x0.0p+0f) {
                    *temp_v1 = -temp_f0_2;
                }
                temp_f1_4 = *temp_v1;
                if (!(temp_f22 < temp_f1_4)) {
                    temp_f0_3 = -temp_f22;
                    if (temp_f1_4 < temp_f0_3) {
                        *temp_v1 = temp_f0_3;
                    }
                } else {
                    *temp_v1 = temp_f22;
                }
                temp_f0_4 = ((&sp_.sp20)[var_s1_2] * temp_f2_4) / temp_f25;
                *var_a1 = temp_f0_4;
                if (temp_f2_4 < 0x0.0p+0f) {
                    *var_a1 = -temp_f0_4;
                }
            } else {
                temp_f1_5 = *var_a1;
                if (M2C_FIELD(temp_s4, f32 *, 0x48C) == temp_f1_5) {
                    M2C_FIELD(var_a3, f32 *, 0x20) = temp_f22;
                    *var_a1 = temp_f1_5;
                }
            }
            var_s1_2 += 1;
            var_a1 += 4;
            var_a2 += 0xEC;
            var_a3 += 4;
        } while (var_s1_2 < 2);
        var_f22 = sp_.sp10;
        var_f21_2 = sp_.sp14;
        temp_f20_8 = (var_f22 + var_f21_2) * temp_f24;
        var_f1 = 0x0.0p+0f;
        if (temp_f20_8 > 0x0.0p+0f) {
            temp_f20_9 = func_00355F08(arg0, var_a1, var_a2, var_a3, temp_f20_8) / temp_f20_8;
            var_f22 = sp_.sp10 * temp_f20_9;
            var_f21_2 = sp_.sp14 * temp_f20_9;
            sp_.sp24 *= temp_f20_9;
            sp_.sp10 = var_f22;
            sp_.sp20 *= temp_f20_9;
            sp_.sp14 = var_f21_2;
            var_f1 = 0x0.0p+0f;
        }
        if (var_f22 > 0x0.0p+0f) {
            var_f1 = var_f22 + 0x0.0p+0f;
        }
        if (var_f21_2 > 0x0.0p+0f) {
            var_f1 += var_f21_2;
        }
        M2C_FIELD(temp_s4, f32 *, 0x51C) = (f32) (var_f1 / *(f32 *)0x8438C0);
        if (M2C_FIELD(temp_s4, u8 *, 0x520) == 0) {
            sp_.sp20 = -sp_.sp20;
            sp_.sp24 = -sp_.sp24;
        }
        temp_v0 = arg0 + 0x164;
        temp_v1_2 = arg0 + 0x250;
        M2C_FIELD(temp_v0, f32 *, 0x84) = (f32) (M2C_FIELD(temp_v0, f32 *, 0x84) + sp_.sp20);
        M2C_FIELD(temp_v1_2, f32 *, 0x84) = (f32) (M2C_FIELD(temp_v1_2, f32 *, 0x84) + sp_.sp24);
        return;
    }
    sp_.sp14 = var_f21;
    temp_f24_2 = *(f32 *)0x8438D8 * *(f32 *)0x8438D0;
    sp_.sp10 = var_f21;
    temp_f20_10 = func_00356300(arg0);
    temp_f1_6 = (temp_f20_10 * *(f32 *)0x843918) - (func_00345198(arg0) * *(f32 *)0x843914);
    if (temp_f1_6 > 0x0.0p+0f) {
        temp_f1_7 = temp_f1_6 - *(f32 *)0x84391C;
        if (!(temp_f1_7 < 0x0.0p+0f)) {
            temp_f1_8 = temp_f1_7 * 0x1.0000000000000p-1f;
            temp_f22_2 = var_f21 * (temp_f1_8 + 0x1.0000000000000p+0f);
            temp_f21 = var_f21 * (0x1.0000000000000p+0f - temp_f1_8);
            sp_.sp10 = temp_f22_2;
            sp_.sp14 = temp_f21;
            if (temp_f22_2 < -0x1.0000000000000p+0f) {
                sp_.sp10 = -0x1.0000000000000p+0f;
                sp_.sp14 = temp_f21 - (temp_f22_2 + 0x1.0000000000000p+0f);
            }
            if (sp_.sp14 > 0x0.0p+0f) {
                sp_.sp14 = 0x0.0p+0f;
            }
        }
    } else if (temp_f1_6 < 0x0.0p+0f) {
        temp_f1_9 = temp_f1_6 + *(s32 *)0x84391C;
        if (!(temp_f1_9 > 0x0.0p+0f)) {
            temp_f1_10 = temp_f1_9 * 0x1.0000000000000p-1f;
            temp_f21_2 = var_f21 * (0x1.0000000000000p+0f - temp_f1_10);
            temp_f22_3 = var_f21 * (temp_f1_10 + 0x1.0000000000000p+0f);
            sp_.sp14 = temp_f21_2;
            sp_.sp10 = temp_f22_3;
            if (temp_f21_2 < -0x1.0000000000000p+0f) {
                sp_.sp14 = -0x1.0000000000000p+0f;
                sp_.sp10 = temp_f22_3 - (temp_f21_2 + 0x1.0000000000000p+0f);
            }
            if (sp_.sp10 > 0x0.0p+0f) {
                sp_.sp10 = 0x0.0p+0f;
            }
        }
    }
    var_a1_2 = arg0 + 0x164;
    var_s1_3 = 0;
    do {
        temp_v0_2 = var_s1_3 * 4;
        var_s1_3 += 1;
        var_f2 = *(&sp_.sp10 + temp_v0_2);
        if (*(((s8 *)&sp_) + temp_v0_2) == 0) {
            temp_f1_11 = M2C_FIELD(var_a1_2, f32 *, 0x20);
            var_f2 *= (*(s32 *)0x8438C0 * temp_f25) / temp_f1_11;
            if (temp_f1_11 < 0x0.0p+0f) {
                var_f2 = -var_f2;
            }
            temp_f0_5 = -temp_f24_2;
            if (var_f2 < temp_f0_5) {
                var_f2 = temp_f0_5;
            } else if (temp_f24_2 < var_f2) {
                var_f2 = temp_f24_2;
            }
        }
        if (M2C_FIELD(temp_s4, u8 *, 0x520) == 0) {
            var_f2 = -var_f2;
        }
        M2C_FIELD(var_a1_2, f32 *, 0x84) = (f32) (M2C_FIELD(var_a1_2, f32 *, 0x84) + var_f2);
        var_a1_2 += 0xEC;
    } while (var_s1_3 < 2);
}
