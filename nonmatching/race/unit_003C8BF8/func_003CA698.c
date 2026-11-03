/* NON_MATCHING: functional draft, 268 of 274 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_003CA698(void *arg0, void *arg1, f32 fparg0, f32 fparg1) {
    struct StackFrame_003CA698 { s8 pad0[0x30]; f32 sp30; f32 sp34; s32 sp38; f32 sp3C; f32 sp40; s32 sp44; f32 sp48; f32 sp4C; s32 sp50; f32 sp54; f32 sp58; s32 sp5C; f32 sp60; s8 pad1[0x2C]; f32 sp90; s8 pad2[0xC]; f32 spA0; f32 spA4; s8 pad3[0x8]; f32 spB0; f32 spB4; s8 pad4[0x8]; f32 spC0; f32 spC4; s8 pad5[0x8]; f32 spD0; f32 spD4; s8 pad6[0x8]; f32 spE0; f32 spE4; s8 pad7[0x8]; s32 spF0; s8 pad8[0xC]; } sp_;
    f32 *var_s5;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f14;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    f32 temp_f5;
    f32 var_f3;
    f32 var_f8;
    s32 var_s6;
    void *temp_s1;
    void *var_s2;
    void *var_s3;

    var_s3 = arg0 + 0xD0;
    var_s2 = arg0 + 0x24;
    var_s6 = 0;
    sp_.sp30 = -0x1.8000000000000p+0f;
    sp_.sp3C = 0x1.8000000000000p+0f;
    sp_.sp48 = -0x1.6000000000000p+0f;
    sp_.sp54 = 0x1.6000000000000p+0f;
    sp_.sp58 = 0x1.1000000000000p+1f;
    sp_.sp34 = 0x1.1000000000000p+1f;
    sp_.sp38 = 0;
    sp_.spF0 = 0;
    sp_.sp40 = 0x1.1000000000000p+1f;
    sp_.sp44 = 0;
    sp_.sp4C = 0x1.1000000000000p+1f;
    sp_.sp50 = 0;
    sp_.sp5C = 0;
    func_0048AF20(&sp_.sp90, fparg0);
    var_s5 = &sp_.sp60;
    do {
        func_0048A3B8(&sp_.sp90, var_s5, &(&sp_.sp30)[sp_.spF0]);
        temp_s1 = ((s8 *)&sp_) + (sp_.spF0 * 4);
        temp_f20 = fparg1 + 0x1.47ae140000000p-6f;
        M2C_FIELD(temp_s1, f32 *, 0) = (f32) (M2C_FIELD(arg1, f32 *, 0) + M2C_FIELD(var_s5, f32 *, 0));
        M2C_FIELD(temp_s1, f32 *, 4) = (f32) (M2C_FIELD(arg1, f32 *, 4) + M2C_FIELD(var_s5, f32 *, 4));
        temp_f14 = M2C_FIELD(arg1, f32 *, 8) + M2C_FIELD(var_s5, f32 *, 8);
        M2C_FIELD(temp_s1, f32 *, 8) = temp_f14;
        func_003CA668(arg0, var_s6, 0, M2C_FIELD(temp_s1, f32 *, 0), M2C_FIELD(temp_s1, f32 *, 4), temp_f14);
        func_003CA668(arg0, var_s6, 1, (M2C_FIELD(temp_s1, f32 *, 0) * 0x1.3333340000000p-1f) + (M2C_FIELD(var_s2, f32 *, 0) * 0x1.9999980000000p-2f), temp_f20, (M2C_FIELD(temp_s1, f32 *, 8) * 0x1.3333340000000p-1f) + (M2C_FIELD(var_s2, f32 *, 8) * 0x1.9999980000000p-2f));
        func_003CA668(arg0, var_s6, 2, (M2C_FIELD(temp_s1, f32 *, 0) * 0x1.99999c0000000p-2f) + (M2C_FIELD(var_s2, f32 *, 0) * 0x1.3333320000000p-1f), temp_f20, (M2C_FIELD(temp_s1, f32 *, 8) * 0x1.99999c0000000p-2f) + (M2C_FIELD(var_s2, f32 *, 8) * 0x1.3333320000000p-1f));
        temp_f5 = M2C_FIELD(var_s3, f32 *, -0x10);
        if ((temp_f5 != 0x0.0p+0f) || (M2C_FIELD(var_s3, f32 *, 0) != 0x0.0p+0f)) {
            sp_.spB0 = M2C_FIELD(var_s2, f32 *, -0x24);
            sp_.spB4 = M2C_FIELD(var_s2, f32 *, -0x1C);
            sp_.spC0 = M2C_FIELD(var_s2, f32 *, 0);
            sp_.spC4 = M2C_FIELD(var_s2, f32 *, 8);
            sp_.spE0 = sp_.spC0;
            temp_f1 = sp_.spC4;
            sp_.spE4 = temp_f1;
            sp_.spE0 -= sp_.spB0;
            temp_f1_2 = temp_f1 - sp_.spB4;
            sp_.spE4 = temp_f1_2;
            temp_f0 = sp_.spE0;
            sp_.spD4 = temp_f1_2;
            sp_.spD0 = temp_f0;
            sp_.spA0 = temp_f0;
            sp_.spA4 = temp_f1_2;
            temp_f4 = (temp_f0 * temp_f0) + (temp_f1_2 * temp_f1_2);
            if (temp_f4 >= 0x1.a36e2c0000000p-14f) {
                temp_f2 = M2C_RSQRTS(0x1.0000000000000p+0f, temp_f4);
                var_f3 = temp_f5;
                var_f8 = M2C_FIELD(var_s3, f32 *, 0);
                sp_.spA0 = temp_f0 * temp_f2;
                sp_.spA4 *= temp_f2;
                if (temp_f4 < 0x1.47ae100000000p-9f) {
                    temp_f1_3 = (temp_f4 - 0x1.a36e2c0000000p-14f) / 0x1.3a929e0000000p-9f;
                    var_f8 *= temp_f1_3;
                    var_f3 *= temp_f1_3;
                }
                sp_.spB0 = sp_.spA4 * var_f3;
                sp_.spB4 = -sp_.spA0 * var_f3;
                sp_.spC0 = sp_.spA0 * var_f8;
                temp_f2_2 = sp_.spA4 * var_f8;
                sp_.spC4 = temp_f2_2;
                temp_f1_4 = sp_.spB0 + sp_.spC0;
                temp_f0_2 = sp_.spB4 + temp_f2_2;
                M2C_FIELD(var_s2, f32 *, -0x18) = (f32) (M2C_FIELD(var_s2, f32 *, -0x18) + temp_f1_4);
                M2C_FIELD(var_s2, f32 *, -0x10) = (f32) (M2C_FIELD(var_s2, f32 *, -0x10) + temp_f0_2);
                M2C_FIELD(var_s2, f32 *, -0xC) = (f32) (M2C_FIELD(var_s2, f32 *, -0xC) + (temp_f1_4 * 0x1.0000000000000p-1f));
                M2C_FIELD(var_s2, f32 *, -4) = (f32) (M2C_FIELD(var_s2, f32 *, -4) + (temp_f0_2 * 0x1.0000000000000p-1f));
            }
        }
        var_s6 += 1;
        var_s3 += 4;
        var_s2 += 0x30;
        var_s5 += 0xC;
        sp_.spF0 += 3;
    } while (var_s6 < 4);
}
