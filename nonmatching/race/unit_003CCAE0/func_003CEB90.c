/* NON_MATCHING: functional draft, 364 of 379 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

struct PitmenData {
    char unk_0[0x4];
    void * unk4;
    s32 unk8;
    char unk_C[0x60];
    void * unk6C;
};
s32 func_0034C190(s32, s32);
s16 func_0034C750(void *);
s32 func_00396800(void *);
s32 func_003C9F38(s32);
int func_003CC7B0(struct PropNameSearcher *);
s32 func_003CC808(struct PropNameSearcher *);
s32 func_003CC8E8(struct PropNameSearcher *);
int func_003CE288(void *, int, void **, int *, int *);
f32 func_003F3708(void *);
float func_003F3738(void *);
int func_00429F98(void *, void *, int, int);
struct PropNameSearcher {
    /* 0x0000 */ struct PitmenData *unk0;
    /* 0x0004 */ char pad4[8];                      /* maybe part of unk0[3]? */
    /* 0x000C */ M2C_UNK unkC;                      /* inferred */
    /* 0x000C */ char padC[4];
    /* 0x0010 */ M2C_UNK unk10;                     /* inferred */
    /* 0x0010 */ char pad10[0x38B4];
    /* 0x38C4 */ s32 unk38C4;
    /* 0x38C8 */ char pad38C8[0xA98];               /* maybe part of unk38C4[0x2A7]? */
    /* 0x4360 */ s32 unk4360;
};                                                  /* size = 0x4364 */

M2C_UNK func_003CCC28(struct PropNameSearcher *, s32, s8 *, void *); /* extern */
M2C_UNK func_003CD188(struct PropNameSearcher *, s32, s32, s32, s32, s32, f32); /* extern */

void func_003CEB90(struct PropNameSearcher *arg0, s32 arg1, s8 *arg2, void *arg3) {
    s32 sp10;
    s32 sp14;
    s32 sp20;
    f32 sp24;
    f32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    void *sp40;
    M2C_UNK *sp44;
    s32 *sp48;
    void *sp4C;
    struct PropNameSearcher *sp50;                  /* compiler-managed */
    s32 *sp54;
    f32 *temp_v1_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f20;
    f32 var_f20_2;
    s32 *var_s2_2;
    s32 *var_s5_2;
    s32 *var_s7;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_fp;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_s6;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s5;
    s32 var_s5_3;
    s8 *temp_s6_2;
    struct PropNameSearcher *var_s0;
    void *temp_a1;
    void *temp_s0;
    void *temp_s5;
    void *temp_v0;
    void *temp_v1;
    void *var_s0_2;
    void *var_s3_4;
    void *var_v1;

    sp40 = arg3;
    func_003CF198(arg0, arg1);
    if ((func_003CC7B0(arg0) != 0) && (func_0034C750(arg2) != 0)) {
        var_s3 = 0;
        func_003CCAE0((s32) arg0);
        func_003CCA38(arg0);
        temp_fp = M2C_FIELD(arg2, s32 *, 0xF8A0);
        if (temp_fp > 0) {
            var_s7 = arg0 + 0x9684;
            sp44 = &arg0->unkC;
            sp48 = arg0 + 0x9290;
            sp4C = arg0 + 0x789C;
            sp50 = arg0;
            sp54 = var_s7;
            do {
                temp_s2 = func_0034C190((s32) arg2, var_s3);
                temp_s6 = var_s3 * 4;
                temp_s5 = *(void * *)(temp_s6 + M2C_FIELD(M2C_FIELD(M2C_FIELD(arg2, void **, 0), void **, 0x60), s32 *, 8));
                func_003CB070(sp4C, var_s3, arg2, func_00396800(M2C_FIELD(sp40, void **, 4)));
                func_003CD730((s8 *) arg0, var_s3, temp_s2);
                func_003CDB20((s8 *) arg0, var_s3, arg2);
                func_003CE178(arg0, var_s3, (void *) temp_s2);
                sp10 = 1;
                sp14 = 1;
                if (func_003CE288(arg0, var_s3, (void **) arg2, &sp10, &sp14) == 0) {
                    func_003CE930((s8 *) arg0, var_s3, arg2);
                    func_003CD188(arg0, var_s3, temp_s2, 0, sp10, sp14, 0x0.0p+0f);
                } else {
                    temp_a1 = M2C_FIELD(temp_s5, void **, 0x2880);
                    var_f20 = 0x0.0p+0f;
                    temp_v1 = M2C_FIELD(temp_a1, void **, 8);
                    temp_v0 = M2C_FIELD(M2C_FIELD((temp_v1 + 0x50), void *(**)(void *, void *), 4)(temp_a1 + M2C_FIELD(temp_v1, s16 *, 0x50), temp_a1), void **, 0x50);
                    if (temp_v0 != NULL) {
                        var_f20 = M2C_FIELD(temp_v0, f32 *, 0xB4);
                    }
                    func_003CE930((s8 *) arg0, var_s3, arg2);
                    func_003CD188(arg0, var_s3, temp_s2, M2C_FIELD((temp_s6 + arg0), s32 *, 0x9658), sp10, sp14, var_f20);
                }
                var_f20_2 = func_003F3738((void *) temp_s2) * 0x1.0000000000000p-1f;
                if (var_f20_2 < 0x1.b53f7c0000000p+0f) {
                    var_f20_2 = 0x1.b53f7c0000000p+0f;
                }
                if (arg0->unk0->unk8 == 0) {
                    var_f20_2 = -var_f20_2;
                }
                temp_s0 = (var_s3 * 0x8D0) + arg0 + 0x3E4 + 0x758;
                temp_f0 = func_003F3708((void *) temp_s2);
                M2C_FIELD(temp_s0, f32 *, 4) = var_f20_2;
                M2C_FIELD(temp_s0, f32 *, 0x10) = 0x0.0p+0f;
                M2C_FIELD(temp_s0, f32 *, 8) = 0x0.0p+0f;
                var_s5 = 4;
                M2C_FIELD(temp_s0, f32 *, 0xC) = (f32) (-0x1.0000000000000p+0f - temp_f0);
                temp_v0_2 = func_003C9F38(temp_s2);
                M2C_FIELD((temp_s6 + sp44), s32 *, 0x9690) = temp_v0_2;
                *var_s7 = temp_v0_2;
                func_003CD430(arg0, var_s3, arg2);
                var_v1 = sp50 + 0x9580;
                *sp48 = (*var_s7 == 0) ? 0 : 1;
loop_17:
                if (*sp54 >= 4) {
                    M2C_FIELD(var_v1, M2C_UNK32 *, -0x60) = 0;
                    M2C_FIELD(var_v1, M2C_UNK32 *, 0) = 0x3F800000;
                } else {
                    M2C_FIELD(var_v1, M2C_UNK32 *, -0x60) = 0x3F800000;
                    M2C_FIELD(var_v1, M2C_UNK32 *, 0) = 0;
                }
                var_s5 -= 1;
                var_v1 += 4;
                if (var_s5 != 0) {
                    goto loop_17;
                }
                var_s3 += 1;
                var_s7 += 4;
                sp48 += 4;
                sp4C += 0xA0;
                sp50 = &sp50->unk10;
                sp54 += 4;
            } while (var_s3 < temp_fp);
        }
        temp_s6_2 = arg0 + 0x7C5C;
        var_s3_2 = 0;
        temp_s0_2 = arg0->unk0->unk8;
        func_003D5528(temp_s6_2, temp_s0_2, func_003CC8E8(arg0), (s32) arg0);
        if (temp_fp <= 0) {

        } else {
            var_s5_2 = arg0 + 0x9684;
            var_s0 = arg0;
            do {
                var_s2 = 0;
                if (var_s3_2 > 0) {
                    temp_f1 = M2C_FIELD(var_s0, f32 *, 0x78A8) - M2C_FIELD(var_s0, f32 *, 0x7808);
                    temp_f0_2 = M2C_FIELD(var_s0, f32 *, 0x78B0) - M2C_FIELD(var_s0, f32 *, 0x7810);
                    temp_f1_2 = (temp_f1 * temp_f1) + (temp_f0_2 * temp_f0_2);
                    if (temp_f1_2 <= 0x1.c200000000000p+7f) {
                        var_s2 = 2;
                    } else if (temp_f1_2 <= 0x1.3880000000000p+9f) {
                        var_s2 = 1;
                    }
                }
                temp_v0_3 = func_0034C190((s32) arg2, var_s3_2);
                temp_a2 = *var_s5_2;
                var_s5_2 += 4;
                temp_a1_2 = var_s3_2;
                var_s3_2 += 1;
                func_003D55C0(temp_s6_2, temp_a1_2, temp_a2, temp_v0_3, var_s2);
                var_s0 += 0xA0;
            } while (var_s3_2 < temp_fp);
            var_s3_3 = 0;
            if (temp_fp > 0) {
                do {
                    temp_a1_3 = var_s3_3;
                    var_s3_3 += 1;
                    func_003CCC28(arg0, temp_a1_3, arg2, sp40);
                } while (var_s3_3 < temp_fp);
            }
        }
        func_003CD920((s8 *) arg0, arg2);
        var_s3_4 = NULL;
        var_s0_2 = arg0 + 0x94F0;
        var_s2_2 = &arg0->unk38C4;
        var_s5_3 = 3;
        do {
            sp20 = 0;
            sp24 = 0x0.0p+0f;
            sp28 = 0x0.0p+0f;
            sp2C = 0;
            sp30 = 0;
            sp34 = 0;
            if (func_00429F98(&sp20, func_003CC808(arg0), *var_s2_2, 0x6A3058) != 0) {
                temp_f1_3 = sp24 + *(s32 *)(0x6A3060 + (s32) var_s3_4);
                temp_f2 = temp_f1_3 + 0x1.5555540000000p-3f;
                M2C_FIELD(var_s0_2, f32 *, -0x30) = temp_f1_3;
                M2C_FIELD(var_s0_2, f32 *, -0x20) = temp_f2;
                M2C_FIELD(var_s0_2, f32 *, -0x10) = (f32) (0x1.0000000000000p+0f / (temp_f2 - temp_f1_3));
            } else {
                M2C_FIELD(var_s0_2, f32 *, -0x30) = -0x1.0000000000000p+0f;
                M2C_FIELD(var_s0_2, f32 *, -0x20) = -0x1.0000000000000p+0f;
                M2C_FIELD(var_s0_2, f32 *, -0x10) = 0x1.0000000000000p+0f;
            }
            temp_a2_2 = *var_s2_2;
            var_s2_2 += 0xAA4;
            temp_v1_2 = var_s3_4 + 0x6A3078;
            var_s3_4 += 4;
            if (func_00429F98(&sp20, func_003CC808(arg0), temp_a2_2, 0x6A3070) != 0) {
                temp_f1_4 = sp24 + *temp_v1_2;
                temp_f2_2 = temp_f1_4 + 0x1.5555540000000p-3f;
                M2C_FIELD(var_s0_2, f32 *, 0) = temp_f1_4;
                M2C_FIELD(var_s0_2, f32 *, 0x10) = temp_f2_2;
                M2C_FIELD(var_s0_2, f32 *, 0x20) = (f32) (0x1.0000000000000p+0f / (temp_f2_2 - temp_f1_4));
            } else {
                M2C_FIELD(var_s0_2, f32 *, 0) = -0x1.0000000000000p+0f;
                M2C_FIELD(var_s0_2, f32 *, 0x10) = -0x1.0000000000000p+0f;
                M2C_FIELD(var_s0_2, f32 *, 0x20) = 0x1.0000000000000p+0f;
            }
            var_s5_3 -= 1;
            var_s0_2 += 4;
        } while (var_s5_3 >= 0);
    }
}
