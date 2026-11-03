/* NON_MATCHING: functional draft, 472 of 489 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

f32 func_00391CD8();
s32 func_00396800(void *);
int func_003E5A30(void *, void *, void *);
void func_00398B70(void *arg0, void *arg1) {
    s32 spC0;
    struct StackFrame_00398B70 { s8 pad0[0x40]; f32 sp40; f32 sp44; f32 sp48; f32 sp4C; f32 sp50; f32 sp54; f32 sp58; f32 sp5C; f32 sp60; f32 sp64; f32 sp68; f32 sp6C; s32 sp70; s8 pad1[0x3C]; s32 spB0; s8 pad2[0x28]; s16 spDC; s16 spDE; f32 spE0; f32 spE4; f32 spE8; s8 pad3[0x4]; s32 spF0; s8 pad4[0xC]; } sp_;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f23;
    f32 temp_f24;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 var_f12;
    f32 var_f12_2;
    f32 var_f13;
    f32 var_f13_2;
    f32 var_f14;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f1_4;
    f32 var_f1_5;
    f32 var_f1_6;
    f32 var_f22;
    f32 var_f23;
    f32 var_f24;
    s32 *var_s2;
    s32 temp_f1_2;
    s32 temp_f1_3;
    s32 temp_f1_4;
    s32 temp_f1_5;
    s32 temp_f1_6;
    s32 temp_s1_2;
    s32 temp_s7;
    s32 temp_v1_5;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_s1;
    s32 var_s1_3;
    s32 var_s2_2;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_v0;
    void *temp_a2;
    void *temp_s1;
    void *temp_s3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_6;
    void *var_s1_2;
    void *var_s3;

    temp_s1 = M2C_FIELD(M2C_FIELD(arg1, void **, 0x80), void **, 4);
    temp_s3 = M2C_FIELD(temp_s1, void **, 0x8C);
    if (temp_s3 != NULL) {
        temp_a2 = M2C_FIELD(arg1, void **, 0x84);
        temp_v1 = M2C_FIELD(temp_a2, void **, 0x64);
        temp_v0 = M2C_FIELD((temp_v1 + 0xD0), void *(**)(void *, M2C_UNK, void *), 4)(temp_a2 + M2C_FIELD(temp_v1, s16 *, 0xD0), 0, temp_a2);
        temp_v1_2 = M2C_FIELD(temp_v0, void **, 0);
        if (M2C_FIELD((temp_v1_2 + 0x100), s32 (**)(void *), 4)(temp_v0 + M2C_FIELD(temp_v1_2, s16 *, 0x100)) == 0) {
            func_00399300((s8 *) arg0, 0);
            func_00398B58((s32 *) arg0);
            return;
        }
        var_s1 = 0;
        temp_s7 = M2C_FIELD(temp_v0, s32 *, 0x9B8);
        sp_.spF0 = func_00396800(temp_s1);
        var_s4 = 0;
        var_f23 = 0x0.0p+0f;
        var_f24 = 0x0.0p+0f;
        func_003B6FD0(M2C_FIELD(arg1, void **, 0x60));
        func_00457700(((s8 *)&sp_));
        var_v0 = temp_s7 < 2;
        if (temp_s7 > 0) {
            var_a1 = 0;
            do {
                func_00372080(temp_v0, var_a1);
                temp_v0_2 = M2C_FIELD(temp_v0, void **, 0);
                sp_.sp40 = M2C_FIELD((temp_v0_2 + 0x20), f32 (**)(void *, M2C_UNK), 4)(temp_v0 + M2C_FIELD(temp_v0_2, s16 *, 0x20), 0);
                temp_v0_3 = M2C_FIELD(temp_v0, void **, 0);
                sp_.sp44 = M2C_FIELD((temp_v0_3 + 0x28), f32 (**)(void *, M2C_UNK), 4)(temp_v0 + M2C_FIELD(temp_v0_3, s16 *, 0x28), 0);
                temp_v0_4 = M2C_FIELD(temp_v0, void **, 0);
                sp_.sp48 = M2C_FIELD((temp_v0_4 + 0x30), f32 (**)(void *, M2C_UNK), 4)(temp_v0 + M2C_FIELD(temp_v0_4, s16 *, 0x30), 0);
                sp_.sp4C = 0x1.0000000000000p+0f;
                temp_v1_3 = M2C_FIELD(temp_v0, void **, 0);
                temp_v0_5 = M2C_FIELD((temp_v1_3 + 0xF8), void *(**)(void *), 4)(temp_v0 + M2C_FIELD(temp_v1_3, s16 *, 0xF8));
                sp_.sp50 = M2C_FIELD(temp_v0_5, f32 *, 0);
                sp_.sp54 = M2C_FIELD(temp_v0_5, f32 *, 0x10);
                sp_.sp5C = 0x1.0000000000000p+0f;
                sp_.sp58 = M2C_FIELD(temp_v0_5, f32 *, 0x20);
                temp_v1_4 = M2C_FIELD(temp_v0, void **, 0);
                if (M2C_FIELD((temp_v1_4 + 0x100), s32 (**)(void *), 4)(temp_v0 + M2C_FIELD(temp_v1_4, s16 *, 0x100)) != 0) {
                    temp_v0_6 = M2C_FIELD(temp_v0, void **, 0);
                    sp_.sp60 = sp_.sp40 - M2C_FIELD((temp_v0_6 + 0xE0), f32 (**)(void *, M2C_UNK), 4)(temp_v0 + M2C_FIELD(temp_v0_6, s16 *, 0xE0), 1);
                    temp_v0_7 = M2C_FIELD(temp_v0, void **, 0);
                    sp_.sp64 = sp_.sp44 - M2C_FIELD((temp_v0_7 + 0xE8), f32 (**)(void *, M2C_UNK), 4)(temp_v0 + M2C_FIELD(temp_v0_7, s16 *, 0xE8), 1);
                    temp_v0_8 = M2C_FIELD(temp_v0, void **, 0);
                    temp_f0 = M2C_FIELD((temp_v0_8 + 0xF0), f32 (**)(void *, M2C_UNK), 4)(temp_v0 + M2C_FIELD(temp_v0_8, s16 *, 0xF0), 1);
                    sp_.sp6C = 0x1.0000000000000p+0f;
                    sp_.sp68 = sp_.sp48 - temp_f0;
                } else {
                    sp_.sp60 = 0x0.0p+0f;
                    sp_.sp64 = 0x0.0p+0f;
                    sp_.sp68 = 0x0.0p+0f;
                    sp_.sp6C = 0x1.0000000000000p+0f;
                }
                func_00457F60(temp_s3, &sp_.sp70, (s32) arg1, (s32) &sp_.sp40, (s32) &sp_.sp50, (s32) &sp_.sp60);
                sp_.spDC = -1;
                sp_.spE0 = sp_.sp40;
                sp_.spE8 = sp_.sp48;
                sp_.spDE = -1;
                sp_.spE4 = sp_.sp44 + 0x1.4000000000000p+2f;
                temp_v1_5 = ((func_003E5A30((void *) sp_.spF0, &sp_.spB0, &sp_.sp40) == 0) ? 0 : spC0) & 0x18;
                switch (temp_v1_5) {                /* irregular */
                case 24:
                    var_s1 = 1;
                    break;
                case 8:
                    var_f24 = 0x1.0000000000000p+0f;
                    var_s1 = 2;
                    break;
                case 16:
                    var_f23 = 0x1.0000000000000p+0f;
                    var_s1 = 1;
                    break;
                }
                var_s4 += 1;
                func_00457738((s32) ((s8 *)&sp_), (s32) &sp_.sp70);
                var_a1 = var_s4;
            } while (var_s4 < temp_s7);
            var_v0 = temp_s7 < 2;
        }
        temp_s1_2 = (var_v0 == 0) ? 0 : var_s1;
        if (temp_s1_2 != 0) {
            var_f1 = (f32) temp_s1_2 * 0x1.0000000000000p-2f;
        } else {
            var_f1 = 0x1.0000000000000p-3f;
        }
        temp_f3 = M2C_FIELD(arg0, f32 *, 0x16C);
        temp_f1 = var_f1 - temp_f3;
        if (temp_f1 < 0x0.0p+0f) {
            var_f1_2 = M2C_MAXS(temp_f1, -0x1.c71c740000000p-6f);
        } else {
            var_f1_2 = M2C_MINS(temp_f1, 0x1.c71c740000000p-6f);
        }
        temp_f3_2 = temp_f3 + var_f1_2;
        M2C_FIELD(arg0, f32 *, 0x16C) = temp_f3_2;
        temp_f1_2 = (s32) (temp_f3_2 * 0x1.fffc000000000p+14f);
        func_0055CD18((void *)0x6518C8, 2, temp_f1_2, temp_f1_2);
        if (M2C_FIELD(M2C_FIELD(temp_s3, void **, 0x14), s32 *, 0) != 0) {

        }
        if (M2C_FIELD(M2C_FIELD(temp_s3, void **, 0x18), s32 *, 0) != 0) {

        }
        var_s3 = arg0 + 4;
        var_s1_2 = ((s8 *)&sp_);
        var_s2 = arg0 + 0x24;
        var_s4_2 = 4;
        temp_f20 = *(f32 *)0x6213E0 * func_00391CD8(/* extra? */ 0x1.0000000000000p+0f, /* extra? */ 0x1.0000000000000p+0f);
        do {
            if (*var_s2 != 0) {
                temp_f0_2 = M2C_FIELD(var_s1_2, f32 *, 0);
                var_f12 = -0x1.0000000000000p+0f;
                if (!(temp_f0_2 < -0x1.0000000000000p+0f)) {
                    var_f12 = 0x1.0000000000000p+0f;
                    if (!(temp_f0_2 > 0x1.0000000000000p+0f)) {
                        var_f12 = temp_f0_2;
                    }
                }
                temp_f0_3 = M2C_FIELD(var_s1_2, f32 *, 4);
                var_f13 = -0x1.0000000000000p+0f;
                var_f12_2 = var_f12 * temp_f20;
                if (!(temp_f0_3 < -0x1.0000000000000p+0f)) {
                    var_f13 = 0x1.0000000000000p+0f;
                    if (!(temp_f0_3 > 0x1.0000000000000p+0f)) {
                        var_f13 = temp_f0_3;
                    }
                }
                var_f13_2 = var_f13 * temp_f20;
                var_f1_3 = M2C_MAXS(var_f12_2, var_f13_2);
                var_f14 = M2C_FIELD(var_s1_2, f32 *, 8);
                if (temp_s7 != 1) {
                    var_f13_2 = var_f1_3;
                    var_f14 = 0x1.0000000000000p+0f;
                    var_f12_2 = var_f13_2;
                }
                if (var_f1_3 < 0x0.0p+0f) {
                    var_f1_3 = -var_f1_3;
                }
                var_a1_2 = 0x7FFFFFFE;
                if (!(var_f1_3 >= 0x1.0000000000000p+0f)) {
                    temp_f1_3 = (s32) (var_f1_3 * 0x1.fffffe0000000p+30f);
                    var_a1_2 = (temp_f1_3 <= 0x7FFFFFFE) ? temp_f1_3 : 0x7FFFFFFE;
                }
                func_00462A88(var_s3, (void *) var_a1_2, 0, 0x40, var_f12_2, var_f13_2, var_f14);
            }
            var_s4_2 -= 1;
            var_s3 += 0x24;
            var_s1_2 += 0xC;
            var_s2 += 0x24;
        } while (var_s4_2 >= 0);
        temp_f24 = var_f24 * temp_f20;
        temp_f23 = var_f23 * temp_f20;
        var_f1_4 = temp_f24;
        if (temp_f24 < 0x0.0p+0f) {
            var_f1_4 = -temp_f24;
        }
        var_s2_2 = 0x7FFFFFFE;
        if (!(var_f1_4 >= 0x1.0000000000000p+0f)) {
            temp_f1_4 = (s32) (var_f1_4 * 0x1.fffffe0000000p+30f);
            var_s2_2 = (temp_f1_4 <= 0x7FFFFFFE) ? temp_f1_4 : 0x7FFFFFFE;
        }
        var_f1_5 = temp_f23;
        if (temp_f23 < 0x0.0p+0f) {
            var_f1_5 = -temp_f23;
        }
        var_s1_3 = 0x7FFFFFFE;
        if (!(var_f1_5 >= 0x1.0000000000000p+0f)) {
            temp_f1_5 = (s32) (var_f1_5 * 0x1.fffffe0000000p+30f);
            var_s1_3 = (temp_f1_5 <= 0x7FFFFFFE) ? temp_f1_5 : 0x7FFFFFFE;
        }
        var_f22 = 0x0.0p+0f;
        func_00462A88(arg0 + 0xB8, (void *) var_s2_2, 0, 0x40, temp_f24, 0x0.0p+0f, 0x1.0000000000000p+0f);
        func_00462A88(arg0 + 0xDC, (void *) var_s2_2, 0, 0x40, 0x0.0p+0f, temp_f24, 0x1.0000000000000p+0f);
        func_00462A88(arg0 + 0x100, (void *) var_s1_3, 0, 0x40, 0x0.0p+0f, temp_f23, 0x1.0000000000000p+0f);
        func_00462A88(arg0 + 0x124, (void *) var_s1_3, 0, 0x40, temp_f23, 0x0.0p+0f, 0x1.0000000000000p+0f);
        temp_v1_6 = M2C_FIELD(temp_v0, void **, 0);
        if (M2C_FIELD((temp_v1_6 + 0x130), s32 (**)(void *), 4)(temp_v0 + M2C_FIELD(temp_v1_6, s16 *, 0x130)) & 1) {
            var_f22 = 0x1.0000000000000p+0f;
        }
        var_f1_6 = var_f22;
        if (var_f22 < 0x0.0p+0f) {
            var_f1_6 = -var_f22;
        }
        var_a1_3 = 0x7FFFFFFE;
        if (!(var_f1_6 >= 0x1.0000000000000p+0f)) {
            temp_f1_6 = (s32) (var_f1_6 * 0x1.fffffe0000000p+30f);
            var_a1_3 = (temp_f1_6 <= 0x7FFFFFFE) ? temp_f1_6 : 0x7FFFFFFE;
        }
        func_00462A88(arg0 + 0x148, (void *) var_a1_3, 0, 0x40, var_f22, var_f22, 0x1.0000000000000p+0f);
    }
}
