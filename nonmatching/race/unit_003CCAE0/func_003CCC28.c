/* NON_MATCHING: functional draft, 287 of 288 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

struct PropNameSearcher {
    struct PitmenData * unk0;
    char unk_4[0x38C0];
    s32 unk38C4;
    char unk_38C8[0xA98];
    s32 unk4360;
};
struct PitmenData {
    char unk_0[0x4];
    void * unk4;
    s32 unk8;
    char unk_C[0x60];
    void * unk6C;
};
s32 func_003CC808(struct PropNameSearcher *);
s32 func_003CC970(s32);
int func_00428F88(void *, int, int, int, int, float, float);
s32 func_00409B68(void *, void *, f32 *, f32, f32, f32); /* extern */

void func_003CCC28(struct PropNameSearcher *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 sp28;
    s32 sp14;
    s32 sp0;
    s32 sp18;
    s32 spD0;
    s32 sp60;
    s32 sp68;
    struct StackFrame_003CCC28 { s8 pad0[0x10]; f32 sp10; s8 pad1[0xC]; f32 sp20; s8 pad2[0xC]; s32 sp30; s8 pad3[0x3C]; f32 sp70; s8 pad4[0xC]; f32 sp80; f32 sp84; f32 sp88; s8 pad5[0x4]; f32 sp90; f32 sp94; f32 sp98; s8 pad6[0x4]; f32 spA0; f32 spA4; f32 spA8; s32 spAC; f32 spB0; f32 spB4; f32 spB8; f32 spBC; f32 spC0; f32 spC4; s32 spC8; s8 pad7[0x14]; struct PropNameSearcher * spE0; void * spE4; f32 * spE8; f32 * spEC; f32 * spF0; f32 * spF4; void * spF8; void * spFC; } sp_;
    f32 *temp_v0;
    f32 temp_f2;
    s32 temp_a0;
    s32 var_fp;
    s32 var_s0;
    s32 var_s7;
    s32 var_s7_2;
    s8 *temp_s1;
    void *temp_s1_2;

    sp_.spE0 = arg0;
    sp_.spE4 = arg3;
    var_s7 = 0;
    var_fp = 0;
    func_0046BEC0(arg2 + 0xDA50, arg1, &sp_.sp10, &sp_.sp20, ((s8 *)&sp_));
    sp_.spF8 = sp_.spE0 + 0x7C5C;
    do {
        var_s0 = 0;
        temp_s1 = sp_.spF8 + (arg1 * 0x320) + var_fp;
loop_2:
        func_003D4A58(temp_s1, var_s0, &sp_.sp80, &sp_.sp88);
        sp_.sp84 = 0x0.0p+0f;
        func_0048AF20(&sp_.sp70, sp28);
        func_0048A3B8(&sp_.sp70, &sp_.sp90, &sp_.sp80);
        temp_f2 = sp_.sp98 - sp14;
        sp_.spAC = sp0;
        sp_.sp90 += sp_.sp10;
        sp_.sp94 += sp18;
        sp_.sp98 = temp_f2;
        sp_.spA0 = sp_.sp90;
        sp_.spA4 = sp_.sp94;
        sp_.spA8 = temp_f2;
        func_00395760(sp_.spE4, &sp_.spA0);
        if (spD0 == 0) {
            func_003D4A88(temp_s1, var_s0, sp_.spB4, sp_.spB8);
        } else {
            func_003D4A88(temp_s1, var_s0, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f);
        }
        var_s0 += 1;
        if (var_s0 < 2) {
            goto loop_2;
        }
        var_s7 += 1;
        var_fp += 0x74;
    } while (var_s7 < 4);
    sp_.spA0 = 0x0.0p+0f;
    sp_.spA4 = 0x0.0p+0f;
    var_s7_2 = 0;
    sp_.spB8 = 0x0.0p+0f;
    sp_.spB4 = 0x0.0p+0f;
    sp_.spB0 = 0x0.0p+0f;
    sp_.spAC = 0;
    sp_.spE8 = &sp_.sp94;
    sp_.spA8 = 0x0.0p+0f;
    func_00409B68(sp_.spF8 + (arg1 * 0x320) + 0x1D0, sp_.spE4, &sp_.spA0, sp_.sp10, sp18, -sp14);
    sp_.spF0 = &sp_.sp98;
    sp_.spFC = sp_.spE0 + (arg1 * 0x8D0);
    sp_.spF4 = &sp_.sp84;
    do {
        temp_s1_2 = sp_.spFC + 0x3E4;
        temp_v0 = temp_s1_2 + 8;
        sp_.spFC += 0x178;
        sp_.spEC = temp_v0;
        func_00427820(&sp_.spA0);
        func_00427830(&sp_.spA0, 0, func_003CC808(sp_.spE0));
        if (func_00428F88(&sp_.spA0, M2C_FIELD((sp_.spE0 + (var_s7_2 * 0xAA4)), s32 *, 0x38C4), 0x6A2F70, (s32) &sp_.sp30, 0, 0x0.0p+0f, 0x0.0p+0f) != 0) {
            sp_.sp84 = 0x0.0p+0f;
            sp_.sp80 = sp60;
            sp_.sp88 = sp68;
        } else {
            sp_.sp80 = 0x0.0p+0f;
            sp_.sp84 = 0x0.0p+0f;
            sp_.sp88 = 0x0.0p+0f;
        }
        func_0048AF20(&sp_.sp70, M2C_FIELD(temp_s1_2, f32 *, 0x10));
        func_0048A3B8(&sp_.sp70, &sp_.sp90, &sp_.sp80);
        sp_.sp90 += M2C_FIELD(temp_s1_2, f32 *, 4);
        *sp_.spE8 += *sp_.spEC;
        *sp_.spF0 += M2C_FIELD(temp_s1_2, f32 *, 0xC);
        func_0048AF20(&sp_.sp70, sp28);
        func_0048A3B8(&sp_.sp70, &sp_.sp80, &sp_.sp90);
        sp_.sp80 += sp_.sp10;
        *sp_.spF4 += sp18;
        sp_.sp88 -= sp14;
        sp_.spB0 = 0x0.0p+0f;
        sp_.spB4 = 0x0.0p+0f;
        sp_.spC8 = 0;
        sp_.spC4 = 0x0.0p+0f;
        sp_.spC0 = 0x0.0p+0f;
        sp_.spBC = 0x0.0p+0f;
        sp_.spB8 = 0x0.0p+0f;
        temp_a0 = var_s7_2;
        var_s7_2 += 1;
        if ((func_00409B68(temp_s1_2 + 0x1C, sp_.spE4, &sp_.spB0, sp_.sp80, *sp_.spF4, sp_.sp88) != 0) && (func_003CC970(temp_a0) != 0)) {
            *sp_.spEC = sp_.spB4 - sp18;
            M2C_FIELD(temp_s1_2, f32 *, 0xC) = (f32) M2C_FIELD(temp_s1_2, f32 *, 0xC);
        }
    } while (var_s7_2 < 6);
}
