/* NON_MATCHING: functional draft, 300 of 308 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_003857A8(s32 *);
s32 func_003857C0(s32 *);
int func_00385B48(int *);
s32 func_00385CA8(s32 *);
s32 func_00385D48(s32 *);
s32 func_00385DB8(s32 *);
int func_00385DD8(int *);
s32 func_00385F60(void **);
int func_00386518(int *);
s32 func_003865A8(s32 *);
s32 func_003865B8(s32 *);
s32 func_003865C8(s32 *);
s32 func_003865D8(s32 *);
int func_00402270(void *, int);
float func_0057D2B8(float);
void func_00406650(void *arg0) {
    f32 sp0;
    f32 sp4;
    f32 sp10;
    f32 sp14;
    f32 sp20;
    f32 sp24;
    f32 sp30;
    s32 sp34;
    s32 sp38;
    f32 sp40;
    s32 sp44;
    s32 sp48;
    f32 sp50;
    s32 sp54;
    s32 sp58;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_10;
    f32 temp_f1_11;
    f32 temp_f1_12;
    f32 temp_f1_13;
    f32 temp_f1_14;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    f32 temp_f1_7;
    f32 temp_f1_8;
    f32 temp_f1_9;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 temp_f3_5;
    f32 temp_f3_6;
    f32 temp_f4;
    f32 var_f2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    sp0 = fabsf(M2C_BITWISE(f32, func_003857A8(M2C_FIELD(arg0, s32 **, 0))));
    temp_f0 = fabsf(M2C_BITWISE(f32, func_003857C0(M2C_FIELD(arg0, s32 **, 0))));
    sp4 = temp_f0;
    temp_f3 = M2C_MINS(sp0, temp_f0);
    temp_f2 = 0x1.0000000000000p+0f / (0x0.0p+0f - 0x1.921fb40000000p-1f);
    temp_f1 = temp_f2 * (0x0.0p+0f - (0x1.921fb40000000p-1f * 0x1.921fb40000000p+0f));
    sp10 = temp_f2 * (0x1.921fb40000000p+0f - 0x0.0p+0f);
    sp24 = 0x1.921fb40000000p+0f;
    sp14 = temp_f1;
    sp20 = 0x0.0p+0f;
    temp_f20 = func_0057D2B8(M2C_MINS(M2C_MAXS((sp10 * temp_f3) + temp_f1, 0x0.0p+0f), 0x1.921fb40000000p+0f)) * 0x1.41b2f40000000p-4f;
    temp_s0 = func_003865B8(M2C_FIELD(arg0, s32 **, 8));
    temp_v0 = func_003865A8(M2C_FIELD(arg0, s32 **, 8));
    sp30 = 0x0.0p+0f;
    sp34 = temp_s0;
    sp38 = temp_v0;
    temp_f4 = M2C_FIELD(arg0, f32 *, 0x110);
    temp_f2_2 = sp30 + ((temp_f20 - *(s32 *)temp_v0) * 0x1.9000000000000p+6f);
    sp30 = temp_f2_2;
    temp_f2_3 = temp_f2_2 - (*(s32 *)temp_s0 * 0x1.4000000000000p+4f);
    sp30 = temp_f2_3;
    temp_f1_2 = *(s32 *)temp_s0 + (temp_f2_3 * temp_f4);
    *(s32 *)temp_s0 = temp_f1_2;
    *(s32 *)temp_v0 = (f32) (*(s32 *)temp_v0 + (temp_f1_2 * temp_f4));
    sp30 = 0x0.0p+0f;
    temp_s0_2 = func_00385D48(M2C_FIELD(arg0, s32 **, 0));
    *(s32 *)temp_s0_2 = (f32) *(s32 *)func_003865A8(M2C_FIELD(arg0, s32 **, 8));
    if (func_00402270(M2C_FIELD(arg0, void **, 0x14), *M2C_FIELD(arg0, s32 **, 0x10)) == 3) {
        temp_s0_3 = func_003865D8(M2C_FIELD(arg0, s32 **, 8));
        temp_v0_2 = func_003865C8(M2C_FIELD(arg0, s32 **, 8));
        sp40 = 0x0.0p+0f;
        sp44 = temp_s0_3;
        sp48 = temp_v0_2;
        temp_s0_4 = func_00386518(M2C_FIELD(arg0, s32 **, 8));
        temp_v0_3 = func_00385DB8(M2C_FIELD(arg0, s32 **, 0));
        sp50 = 0x0.0p+0f;
        sp54 = temp_s0_4;
        sp58 = temp_v0_3;
        if ((*(s32 *)func_00385B48(M2C_FIELD(arg0, s32 **, 0)) >= 0x1.9999980000000p-4f) && (*(s32 *)func_00385B48(M2C_FIELD(arg0, s32 **, 0)) <= 0x1.cccccc0000000p-1f)) {
            temp_f3_2 = M2C_FIELD(arg0, f32 *, 0x110);
            temp_f1_3 = sp40 + ((0x1.00e9940000000p+0f - *(s32 *)sp48) * 0x1.0000000000000p+6f);
            sp40 = temp_f1_3;
            temp_f1_4 = temp_f1_3 - (*(s32 *)sp44 * 0x1.0000000000000p+4f);
            sp40 = temp_f1_4;
            *(s32 *)sp44 = (f32) (*(s32 *)sp44 + (temp_f1_4 * temp_f3_2));
            *(s32 *)sp48 = (f32) (*(s32 *)sp48 + (*(s32 *)sp44 * temp_f3_2));
            sp40 = 0x0.0p+0f;
            temp_f3_3 = M2C_FIELD(arg0, f32 *, 0x110);
            temp_f1_5 = sp50 + ((-0x1.9999980000000p-5f - *(s32 *)sp58) * 0x1.0000000000000p+6f);
            sp50 = temp_f1_5;
            temp_f1_6 = temp_f1_5 - (*(s32 *)sp54 * 0x1.0000000000000p+4f);
            sp50 = temp_f1_6;
            *(s32 *)sp54 = (f32) (*(s32 *)sp54 + (temp_f1_6 * temp_f3_3));
            *(s32 *)sp58 = (f32) (*(s32 *)sp58 + (*(s32 *)sp54 * temp_f3_3));
            sp50 = 0x0.0p+0f;
        } else {
            if (!(*(s32 *)func_00385DD8(M2C_FIELD(arg0, s32 **, 0)) >= 0x1.9999980000000p-4f)) {
                goto block_15;
            }
            if (!(*(s32 *)func_00385DD8(M2C_FIELD(arg0, s32 **, 0)) <= 0x1.cccccc0000000p-1f)) {
block_15:
                temp_f3_4 = M2C_FIELD(arg0, f32 *, 0x110);
                temp_f1_7 = sp40 + ((0x0.0p+0f - *(f32 *) sp48) * 0x1.0000000000000p+6f);
                sp40 = temp_f1_7;
                temp_f1_8 = temp_f1_7 - (*(s32 *)sp44 * 0x1.0000000000000p+4f);
                sp40 = temp_f1_8;
                *(s32 *)sp44 = (f32) (*(s32 *)sp44 + (temp_f1_8 * temp_f3_4));
                *(s32 *)sp48 = (f32) (*(s32 *)sp48 + (*(s32 *)sp44 * temp_f3_4));
                sp40 = 0x0.0p+0f;
                temp_f3_5 = M2C_FIELD(arg0, f32 *, 0x110);
                temp_f1_9 = sp50 + ((0x0.0p+0f - *(s32 *)sp58) * 0x1.0000000000000p+6f);
                sp50 = temp_f1_9;
                temp_f1_10 = temp_f1_9 - (*(s32 *)sp54 * 0x1.0000000000000p+4f);
                sp50 = temp_f1_10;
                *(s32 *)sp54 = (f32) (*(s32 *)sp54 + (temp_f1_10 * temp_f3_5));
                *(s32 *)sp58 = (f32) (*(s32 *)sp58 + (*(s32 *)sp54 * temp_f3_5));
                sp50 = 0x0.0p+0f;
            } else {
                var_f2 = 0x1.a876c80000000p-1f;
                if (func_00385F60(M2C_FIELD(arg0, void ***, 0xC)) != 1) {
                    var_f2 = 0x1.af2a820000000p-1f;
                }
                temp_f2_4 = M2C_FIELD(arg0, f32 *, 0x110);
                temp_f1_11 = sp40 + ((var_f2 - *(s32 *)sp48) * 0x1.0000000000000p+6f);
                sp40 = temp_f1_11;
                temp_f1_12 = temp_f1_11 - (*(s32 *)sp44 * 0x1.0000000000000p+4f);
                sp40 = temp_f1_12;
                *(s32 *)sp44 = (f32) (*(s32 *)sp44 + (temp_f1_12 * temp_f2_4));
                *(s32 *)sp48 = (f32) (*(s32 *)sp48 + (*(s32 *)sp44 * temp_f2_4));
                sp40 = 0x0.0p+0f;
                temp_f3_6 = M2C_FIELD(arg0, f32 *, 0x110);
                temp_f1_13 = sp50 + ((-0x1.9999980000000p-5f - *(s32 *)sp58) * 0x1.0000000000000p+6f);
                sp50 = temp_f1_13;
                temp_f1_14 = temp_f1_13 - (*(s32 *)sp54 * 0x1.0000000000000p+4f);
                sp50 = temp_f1_14;
                *(s32 *)sp54 = (f32) (*(s32 *)sp54 + (temp_f1_14 * temp_f3_6));
                *(s32 *)sp58 = (f32) (*(s32 *)sp58 + (*(s32 *)sp54 * temp_f3_6));
                sp50 = 0x0.0p+0f;
            }
        }
        temp_s0_5 = func_00385D48(M2C_FIELD(arg0, s32 **, 0));
        *(s32 *)temp_s0_5 = (f32) (*(s32 *)temp_s0_5 + *(s32 *)func_003865C8(M2C_FIELD(arg0, s32 **, 8)));
        temp_s0_6 = func_00385CA8(M2C_FIELD(arg0, s32 **, 0));
        *(s32 *)temp_s0_6 = (f32) (-*(s32 *)func_003865C8(M2C_FIELD(arg0, s32 **, 8)) * 0x1.0000000000000p-1f);
    }
}
