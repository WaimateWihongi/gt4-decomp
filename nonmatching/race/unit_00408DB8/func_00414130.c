/* NON_MATCHING: functional draft, 267 of 269 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

f32 func_003446A8(void *);
int func_00385B48(int *);
int func_00385B58(int *);
int func_00385B68(int *);
int func_00385B98(int *);
s32 func_00385E18(s32 *);
s32 func_00385F00(void **);
int func_00385F70(int *);
int func_00386248(int *);
s32 func_00386548(s32 *);
void func_00414130(void *arg0) {
    f32 sp0;
    s32 sp4;
    s32 sp8;
    M2C_UNK sp10;
    s32 sp14;
    s32 sp18;
    f32 *temp_v1;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f22;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_s0 = func_00386548(M2C_FIELD(arg0, s32 **, 8));
    temp_v0 = func_00385E18(M2C_FIELD(arg0, s32 **, 0));
    sp4 = temp_s0;
    sp8 = temp_v0;
    sp0 = 0x0.0p+0f;
    temp_f20 = func_003446A8(M2C_FIELD(arg0, void **, 0x18));
    temp_f22 = (temp_f20 - 0x1.8000000000000p-1f) * 0x1.0000000000000p+2f * -0x1.0c15200000000p-1f;
    temp_v0_2 = func_00385F00(M2C_FIELD(arg0, void ***, 0xC));
    switch (temp_v0_2) {                            /* irregular */
    case 0:
        sp0 = 0x0.0p+0f;
        *(s32 *)sp4 = 0x0.0p+0f;
        *(s32 *)sp8 = 0x0.0p+0f;
        if (temp_f20 > 0x1.8000000000000p-1f) {
            *(s32 *)func_00385F70((s32 *) M2C_FIELD(arg0, void ***, 0xC)) = 3;
        }
        break;
    case 3:
        temp_f4 = M2C_FIELD(arg0, f32 *, 0x110);
        temp_f1 = sp0 + ((0x1.8000000000000p+0f - *(s32 *)sp8) * 0x1.9000000000000p+6f);
        sp0 = temp_f1;
        temp_f1_2 = temp_f1 - (*(s32 *)sp4 * 0x1.4000000000000p+4f);
        sp0 = temp_f1_2;
        *(s32 *)sp4 = (f32) (*(s32 *)sp4 + (temp_f1_2 * temp_f4));
        *(s32 *)sp8 = (f32) (*(s32 *)sp8 + (*(s32 *)sp4 * temp_f4));
        sp0 = 0x0.0p+0f;
        if (*(s32 *)sp8 >= 0x1.0000000000000p+0f) {
            *(s32 *)sp4 = 0x0.0p+0f;
            *(s32 *)sp8 = 0x1.0000000000000p+0f;
            *(s32 *)func_00385F70((s32 *) M2C_FIELD(arg0, void ***, 0xC)) = 6;
        }
        break;
    case 6:
        temp_s0_2 = func_00386248(M2C_FIELD(arg0, s32 **, 8));
        temp_v0_3 = func_00385B68(M2C_FIELD(arg0, s32 **, 0));
        M2C_FIELD(&sp10, f32 *, 0) = 0x0.0p+0f;
        sp14 = temp_s0_2;
        sp18 = temp_v0_3;
        temp_f5 = M2C_FIELD(arg0, f32 *, 0x110);
        temp_f1_3 = M2C_FIELD(&sp10, f32 *, 0) + ((temp_f22 - *(s32 *)temp_v0_3) * 0x1.0000000000000p+4f);
        M2C_FIELD(&sp10, f32 *, 0) = temp_f1_3;
        temp_f1_4 = temp_f1_3 - (*(s32 *)temp_s0_2 * 0x1.0000000000000p+3f);
        M2C_FIELD(&sp10, f32 *, 0) = temp_f1_4;
        temp_f0 = *(s32 *)temp_s0_2 + (temp_f1_4 * temp_f5);
        *(s32 *)temp_s0_2 = temp_f0;
        if ((temp_f0 * temp_f0) > 0x1.3bd3ca0000000p+1f) {
            if (!(temp_f0 > 0x0.0p+0f)) {
                *(s32 *)temp_s0_2 = (f32) -0x1.921fb40000000p+0f;
            } else {
                *(s32 *)temp_s0_2 = 0x1.921fb40000000p+0f;
            }
        }
        temp_v1 = M2C_FIELD(&sp10, f32 **, 8);
        *temp_v1 += *M2C_FIELD(&sp10, f32 **, 4) * temp_f5;
        M2C_FIELD(&sp10, f32 *, 0) = 0x0.0p+0f;
        if (*(s32 *)func_00385B68(M2C_FIELD(arg0, s32 **, 0)) > 0x0.0p+0f) {
            M2C_FIELD(&sp10, f32 *, 0) = 0x0.0p+0f;
            *(s32 *)sp14 = 0x0.0p+0f;
            *(s32 *)sp18 = 0x0.0p+0f;
            *(s32 *)func_00385F70((s32 *) M2C_FIELD(arg0, void ***, 0xC)) = 9;
        }
        break;
    case 9:
        temp_f4_2 = M2C_FIELD(arg0, f32 *, 0x110);
        temp_f1_5 = sp0 + ((-0x1.0000000000000p-1f - *(s32 *)sp8) * 0x1.9000000000000p+6f);
        sp0 = temp_f1_5;
        temp_f1_6 = temp_f1_5 - (*(s32 *)sp4 * 0x1.4000000000000p+4f);
        sp0 = temp_f1_6;
        *(s32 *)sp4 = (f32) (*(s32 *)sp4 + (temp_f1_6 * temp_f4_2));
        *(s32 *)sp8 = (f32) (*(s32 *)sp8 + (*(s32 *)sp4 * temp_f4_2));
        sp0 = 0x0.0p+0f;
        if (*(s32 *)sp8 < 0x0.0p+0f) {
            *(s32 *)sp4 = 0x0.0p+0f;
            *(s32 *)sp8 = 0x0.0p+0f;
            *(s32 *)func_00385F70((s32 *) M2C_FIELD(arg0, void ***, 0xC)) = 0;
        }
        break;
    }
    *(s32 *)func_00385B98(M2C_FIELD(arg0, s32 **, 0)) = 0;
    *(s32 *)func_00385B48(M2C_FIELD(arg0, s32 **, 0)) = 0;
    *(s32 *)func_00385B58(M2C_FIELD(arg0, s32 **, 0)) = 0;
    if (*(s32 *)sp8 >= 0x1.0000000000000p+0f) {
        temp_f20_2 = *(s32 *)func_00385B68(M2C_FIELD(arg0, s32 **, 0));
        temp_f20_3 = temp_f20_2 / -0x1.0c15200000000p-1f;
        *(s32 *)func_00385D98(M2C_FIELD(arg0, s32 **, 0)) = (temp_f20_3 * -0x1.0c15200000000p+0f) - ((0x1.0000000000000p+0f - temp_f20_3) * 0x1.921fb40000000p+0f);
        return;
    }
    *(s32 *)func_00385D98(M2C_FIELD(arg0, s32 **, 0)) = *(s32 *)sp8 * -0x1.0c15200000000p+0f;
}
