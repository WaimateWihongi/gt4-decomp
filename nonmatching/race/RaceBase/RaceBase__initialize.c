/* NON_MATCHING: functional draft, 475 of 500 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_00346510(void *);
s32 func_0034C190(s32, s32);
int func_00360458(void *);
s64 func_004454C0(s64 *);
int func_00447550(void *);
unsigned char func_00448968(void *);
int func_0057F238(const char *, const char *);
struct RaceBase {
    /* 0x000 */ char pad0[0x64];
    /* 0x064 */ void *unk64;
    /* 0x068 */ char pad68[4];
    /* 0x06C */ void *unk6C;
    /* 0x070 */ s32 unk70;
    /* 0x074 */ void *unk74;
    /* 0x078 */ void *unk78;
    /* 0x07C */ char pad7C[0xC44];                  /* maybe part of unk78[0x312]? */
    /* 0xCC0 */ s32 unkCC0;
    /* 0xCC4 */ s32 unkCC4;
    /* 0xCC8 */ s32 unkCC8;
    /* 0xCCC */ s32 unkCCC;
    /* 0xCD0 */ s32 unkCD0;
    /* 0xCD4 */ s32 unkCD4;
    /* 0xCD8 */ s32 unkCD8;
    /* 0xCDC */ s32 unkCDC;
    /* 0xCE0 */ s32 unkCE0;
    /* 0xCE4 */ char padCE4[0x30];                  /* maybe part of unkCE0[0xD]? */
    /* 0xD14 */ s32 unkD14;
    /* 0xD18 */ s32 unkD18;
    /* 0xD1C */ s32 unkD1C;
    /* 0xD20 */ s32 unkD20;
    /* 0xD24 */ s32 unkD24;
    /* 0xD28 */ s32 unkD28;
    /* 0xD2C */ void *unkD2C;
    /* 0xD30 */ f32 unkD30;                         /* inferred */
    /* 0xD34 */ f32 unkD34;
    /* 0xD38 */ s32 unkD38;
    /* 0xD3C */ f32 unkD3C;
    /* 0xD40 */ s32 unkD40;                         /* inferred */
    /* 0xD44 */ s32 unkD44;
    /* 0xD48 */ s32 unkD48;
    /* 0xD4C */ s32 unkD4C;
    /* 0xD50 */ s32 unkD50;
    /* 0xD54 */ s32 unkD54;
    /* 0xD58 */ s32 unkD58;
    /* 0xD5C */ s32 unkD5C;
    /* 0xD60 */ s32 unkD60;
    /* 0xD64 */ s32 unkD64;
    /* 0xD68 */ s32 unkD68;
    /* 0xD6C */ s32 unkD6C;
};                                                  /* size = 0xD70 */

M2C_UNK func_00395078(void *, u64);                 /* extern */
M2C_UNK func_003B5438(void *, s32, M2C_UNK, M2C_UNK); /* extern */

void func_00387FB0(struct RaceBase *arg0, s32 arg1) {
    s32 sp0;
    M2C_UNK sp10;
    s8 sp30;
    s32 sp70;
    M2C_UNK var_a3;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_s0_3;
    s32 temp_s5;
    s32 temp_s7;
    s32 temp_v0_11;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v1_10;
    s32 temp_v1_12;
    s32 temp_v1_13;
    s32 temp_v1_15;
    s32 temp_v1_3;
    s32 temp_v1_5;
    s32 temp_v1_7;
    s32 temp_v1_8;
    s32 temp_v1_9;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_10;
    s32 var_s1_11;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;
    s32 var_s1_5;
    s32 var_s1_6;
    s32 var_s1_7;
    s32 var_s1_8;
    s32 var_s1_9;
    s32 var_v0;
    s64 *temp_s0_2;
    s8 *temp_s0;
    s8 *temp_s6;
    u8 temp_s2;
    void *temp_a1_4;
    void *temp_a1_5;
    void *temp_a2;
    void *temp_s0_4;
    void *temp_s4;
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_2;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_9;
    void *temp_v1;
    void *temp_v1_11;
    void *temp_v1_14;
    void *temp_v1_2;
    void *temp_v1_4;
    void *temp_v1_6;

    arg0->unkD14 = 0;
    arg0->unkD2C = (void *)0x7FFFFFFF;
    arg0->unkCE0 = 0;
    arg0->unkD18 = 0;
    arg0->unkD28 = 0;
    arg0->unkD30 = 0x0.0p+0f;
    if ((u32) arg0->unkCC8 < 2U) {
        temp_v0 = arg0->unk64;
        M2C_FIELD((temp_v0 + 0xA0), M2C_UNK (**)(void *), 4)(arg0 + M2C_FIELD(temp_v0, s16 *, 0xA0));
    } else {
        arg0->unkD34 = 0x0.0p+0f;
    }
    temp_s4 = arg0->unk6C;
    arg0->unkD3C = 0x1.0000000000000p+0f;
    arg0->unkD38 = 0;
    arg0->unkD40 = 0;
    arg0->unkD44 = 0;
    arg0->unkD4C = 0;
    arg0->unkD50 = 0;
    arg0->unkD54 = 0;
    arg0->unkD58 = 0;
    arg0->unkD5C = 0;
    func_003DEC40((s32) temp_s4);
    *(s32 *)arg0->unk74 = temp_s4;
    func_00387CF0(arg0, (u32) arg1);
    var_a1 = 0;
    if ((M2C_FIELD(temp_s4, s32 *, 0xE0) != 0) || (M2C_FIELD(temp_s4, s32 *, 0xDC) != 0)) {
        var_a1 = 1;
    }
    var_s1 = 0;
    func_00387E28(arg0, var_a1);
    func_00389D30(arg0, 0);
    func_003C0190(temp_s4);
    M2C_FIELD(temp_s4, struct RaceBase **, 0x84) = arg0;
    temp_v1 = arg0->unk64;
    func_00426BC0(M2C_FIELD((temp_v1 + 0x230), void *(**)(void *), 4)(arg0 + M2C_FIELD(temp_v1, s16 *, 0x230)));
    func_0034D418((s8 *) arg0->unk70, temp_s4);
    temp_v0_2 = arg0->unk64;
    M2C_FIELD((temp_v0_2 + 0x2E0), M2C_UNK (**)(void *), 4)(arg0 + M2C_FIELD(temp_v0_2, s16 *, 0x2E0));
    temp_s5 = M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x60), s32 *, 0);
    M2C_FIELD(arg0->unk70, s32 *, 0xF8A0) = temp_s5;
    if (temp_s5 > 0) {
        do {
            temp_v0_3 = var_s1 * 4;
            temp_a1 = var_s1;
            var_s1 += 1;
            temp_s0 = *(s8 * *)(temp_v0_3 + M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x60), s32 *, 8));
            func_003B6AE8(temp_s0, func_0034C190(arg0->unk70, temp_a1));
            func_003B4D80(temp_s0);
            var_a1_2 = 0;
            if (((u32) arg0->unkCC8 >= 2U) || (M2C_FIELD(temp_s4, s32 *, 0xF0) != 0) || (M2C_FIELD(temp_s4, s32 *, 0xDC) != 0)) {
                var_a1_2 = 1;
            }
            func_003B4E88(temp_s0, var_a1_2);
        } while (var_s1 < temp_s5);
    }
    sp70 = 2;
    func_00394ED8(M2C_FIELD(temp_s4, void **, 0x80), M2C_FIELD(temp_s4, u64 *, 0x78));
    func_00395078(M2C_FIELD(temp_s4, void **, 0x80), M2C_FIELD(temp_s4, u64 *, 0x78));
    temp_v0_4 = M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0->unk6C, void **, 0x80), void **, 4), void **, 0x80), s32 *, 0x10);
    temp_a1_2 = temp_v0_4 & 0x80000;
    if (temp_a1_2 == 0) {
        sp70 = (temp_v0_4 & 0x8000) != 0;
    }
    temp_v1_2 = arg0->unk64;
    var_s1_2 = 0;
    sp0 = M2C_FIELD((temp_v1_2 + 0x1A0), s32 (**)(void *, s32), 4)(arg0 + M2C_FIELD(temp_v1_2, s16 *, 0x1A0), temp_a1_2);
    if (temp_s5 > 0) {
loop_18:
        temp_v1_3 = var_s1_2 * 4;
        var_s1_2 += 1;
        temp_s6 = *(s8 * *)(temp_v1_3 + M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x60), s32 *, 8));
        temp_s0_2 = temp_s6 + 0x20;
        func_00448820(func_004454C0(temp_s0_2), &sp10);
        temp_s2 = func_00448968(&sp10);
        temp_s7 = func_00447550(M2C_FIELD(temp_s4, void **, 0x70)) == 2;
        func_00447CA0(func_004454C0(temp_s0_2), &sp30);
        temp_v1_4 = arg0->unk64;
        temp_s0_3 = func_0057F238(&sp30, *(s8 **)0x61870C) == 0;
        var_s0 = (s32) temp_s2 >= 2;
        if ((M2C_FIELD((temp_v1_4 + 0xC8), s32 (**)(void *), 4)(arg0 + M2C_FIELD(temp_v1_4, s16 *, 0xC8)) == 0) && ((var_s0 = 0, (((s32) temp_s2 < 2) == 0)) || ((temp_s7 == 0) && (temp_s2 != 0) && (temp_s5 < 3)))) {
            var_s0 = 1;
        }
        temp_a2 = M2C_FIELD(temp_s6, void **, 0x2880);
        temp_v0_5 = M2C_FIELD(temp_a2, void **, 8);
        M2C_FIELD((temp_v0_5 + 0x158), M2C_UNK (**)(void *, s32, void *), 4)(temp_a2 + M2C_FIELD(temp_v0_5, s16 *, 0x158), (temp_s0_3 == 0) ? sp70 : 1, temp_a2);
        func_003B5358(temp_s6, sp0, var_s0);
        if (var_s1_2 < temp_s5) {
            goto loop_18;
        }
    }
    var_s1_3 = 0;
    *(f32 *)0x6213DC = 0x1.0000000000000p+0f;
    func_00391E50(0);
    func_00391E80(0);
    func_00391CA8();
    if (temp_s5 > 0) {
        do {
            temp_v1_5 = var_s1_3 * 4;
            var_s1_3 += 1;
            func_003B5D90(*(s32 *)(temp_v1_5 + M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x60), s32 *, 8)));
        } while (var_s1_3 < temp_s5);
    }
    func_0044CE00();
    func_00462E18();
    func_00397C38(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0->unk6C, void **, 0x80), void **, 4), void **, 0x80));
    temp_v0_6 = arg0->unk64;
    M2C_FIELD((temp_v0_6 + 0x138), M2C_UNK (**)(void *), 4)(arg0 + M2C_FIELD(temp_v0_6, s16 *, 0x138));
    temp_a1_3 = arg0->unk70;
    temp_v1_6 = M2C_FIELD(temp_a1_3, void **, 0x10140);
    temp_v0_7 = M2C_FIELD((temp_v1_6 + 0x50), s32 (**)(s32, s32), 4)(temp_a1_3 + M2C_FIELD(temp_v1_6, s16 *, 0x50), temp_a1_3);
    switch (temp_v0_7) {                            /* switch 1; irregular */
    default:                                        /* switch 1 */
        var_v0 = 3;
        if (temp_v0_7 != 2) {
            if (temp_v0_7 == 3) {
            case 0:                                 /* switch 1 */
                var_v0 = -1;
                goto block_37;
            }
        } else {
block_37:
            M2C_FIELD(temp_s4, s32 *, 0xB4) = var_v0;
        case 1:                                     /* switch 1 */
        }
        break;
    }
    if (sp0 == 4) {
        var_s1_4 = 0;
        if (temp_s5 > 0) {
loop_42:
            temp_v1_7 = var_s1_4 * 4;
            var_s1_4 += 1;
            func_003B53D8(*(s32 *)(temp_v1_7 + M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x60), s32 *, 8)));
            if (var_s1_4 < temp_s5) {
                goto loop_42;
            }
        }
    }
    var_s1_5 = 0;
    if (temp_s5 > 0) {
        do {
            temp_v1_8 = var_s1_5 * 4;
            var_s1_5 += 1;
            func_003B5CA0(*(s32 *)(temp_v1_8 + M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x60), s32 *, 8)));
        } while (var_s1_5 < temp_s5);
    }
    var_s1_6 = 0;
    func_0044CE00();
    if (temp_s5 > 0) {
        do {
            temp_v1_9 = var_s1_6 * 4;
            var_s1_6 += 1;
            func_003B5C08(*(s32 *)(temp_v1_9 + M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x60), s32 *, 8)), (s32) temp_s4);
        } while (var_s1_6 < temp_s5);
    }
    var_s1_7 = 0;
    func_0044CE00();
    if (temp_s5 > 0) {
loop_51:
        temp_v1_10 = var_s1_7 * 4;
        var_s1_7 += 1;
        func_003B5D00(*(s32 *)(temp_v1_10 + M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x60), s32 *, 8)));
        if (var_s1_7 < temp_s5) {
            goto loop_51;
        }
    }
    func_0044CE00();
    if ((sp0 ^ 4) != 0) {
        var_s1_8 = 0;
        if (temp_s5 > 0) {
            do {
                temp_a0 = var_s1_8 * 4;
                var_a3 = -1;
                var_s1_8 += 1;
                temp_v1_11 = *(void * *)(temp_a0 + M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x60), s32 *, 8));
                temp_v0_8 = M2C_FIELD(temp_v1_11, s32 *, 0x345C);
                switch (temp_v0_8) {                /* switch 2; irregular */
                case 0:                             /* switch 2 */
                    var_a3 = 0;
                    break;
                case 1:                             /* switch 2 */
                    var_a3 = 1;
                    break;
                case 2:                             /* switch 2 */
                    var_a3 = 2;
                    break;
                }
                func_003B5438(temp_v1_11, temp_s5, 0, var_a3);
            } while (var_s1_8 < temp_s5);
        }
    }
    var_s1_9 = 0;
    if (temp_s5 > 0) {
        do {
            temp_v1_12 = var_s1_9 * 4;
            var_s1_9 += 1;
            temp_s0_4 = *(void * *)(temp_v1_12 + M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x60), s32 *, 8));
            temp_a1_4 = M2C_FIELD(temp_s0_4, void **, 0x2880);
            temp_v0_9 = M2C_FIELD(temp_a1_4, void **, 8);
            M2C_FIELD((temp_v0_9 + 0x80), M2C_UNK (**)(void *, void *), 4)(temp_a1_4 + M2C_FIELD(temp_v0_9, s16 *, 0x80), temp_a1_4);
            temp_a1_5 = M2C_FIELD(temp_s0_4, void **, 0x2880);
            temp_v0_10 = M2C_FIELD(temp_a1_5, void **, 8);
            M2C_FIELD((temp_v0_10 + 0x48), M2C_UNK (**)(void *, void *, M2C_UNK), 4)(temp_a1_5 + M2C_FIELD(temp_v0_10, s16 *, 0x48), temp_a1_5, 0x43480000);
        } while (var_s1_9 < temp_s5);
    }
    var_s1_10 = 0;
    if (temp_s5 > 0) {
loop_72:
        temp_v1_13 = var_s1_10 * 4;
        var_s1_10 += 1;
        func_003B5988(*(s32 *)(temp_v1_13 + M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x60), s32 *, 8)), sp0);
        if (var_s1_10 < temp_s5) {
            goto loop_72;
        }
    }
    func_0044CE00();
    if ((u32) (arg0->unkCC8 - 2) < 2U) {
        temp_v1_14 = arg0->unk64;
        temp_v0_11 = func_00346510(M2C_FIELD((temp_v1_14 + 0x240), s32 (**)(void *, M2C_UNK), 4)(arg0 + M2C_FIELD(temp_v1_14, s16 *, 0x240), 0x100) + 0xDC);
        if (temp_v0_11 != 0) {
            arg0->unkD2C = (void *) temp_v0_11;
        }
    }
    func_00394D48(M2C_FIELD(arg0->unk6C, void **, 0x80));
    func_00391A60();
    *(f32 *)0x6213E0 = 0x1.0000000000000p+0f;
    func_00391D28();
    if ((u32) (arg0->unkCC8 - 2) < 2U) {
        var_s1_11 = 0;
        func_00391D98(0x1.8000000000000p+1f);
    } else {
        var_s1_11 = 0;
        func_00391D98(0x1.3333320000000p-2f);
    }
    if (temp_s5 > 0) {
        do {
            temp_v1_15 = var_s1_11 * 4;
            var_s1_11 += 1;
            func_003921A8(*(s32 *)(temp_v1_15 + M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x60), s32 *, 8)) + 0x2900);
        } while (var_s1_11 < temp_s5);
    }
    func_003922B0(func_00360458((void *) arg0->unk70));
}
