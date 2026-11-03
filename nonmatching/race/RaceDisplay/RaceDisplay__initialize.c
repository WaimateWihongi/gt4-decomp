/* NON_MATCHING: functional draft, 444 of 461 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0034C140(void *);                          /* extern */
s32 func_0034C470(void *);                          /* extern */
M2C_UNK func_0039BB38(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0039BBE0(void *);                      /* extern */
M2C_UNK func_003A09E8(void *);                      /* extern */
s32 func_003A1E10(M2C_UNK);                         /* extern */
M2C_UNK func_003A2130(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_003A3930(void *);                      /* extern */
M2C_UNK func_003A4308(void *, s32);                 /* extern */
M2C_UNK func_003A4650(void *);                      /* extern */
M2C_UNK func_003A4CF0(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_003A4D80(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_003A4DA0();                 /* extern */
M2C_UNK func_003A4F00(void *, M2C_UNK);             /* extern */
M2C_UNK func_003A68C8(void *);                      /* extern */
M2C_UNK func_003A9850();    /* extern */
M2C_UNK func_003A99A8();   /* extern */
M2C_UNK func_003AAF70(void *, s32);                 /* extern */
M2C_UNK func_003ADF00(void *);                      /* extern */
M2C_UNK func_003AE2B8(void *, M2C_UNK);             /* extern */
M2C_UNK func_003AEC80(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_003AEC90(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_003AECA0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_003AECB0(void *, M2C_UNK);             /* extern */
M2C_UNK func_003BECB0(void *, void *);              /* extern */
s32 func_00447F48(s64, void *);                     /* extern */

void func_0039B3E8(void *arg0) {
    s32 sp12;
    struct StackFrame_0039B3E8 { s8 pad0[0x20]; void * sp20; s8 pad1[0xC]; } sp_;
    M2C_UNK var_f12;
    M2C_UNK var_f13;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1;
    void *temp_a1;
    void *temp_a1_3;
    void *temp_fp;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_7;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s1_3;
    void *temp_s2;
    void *temp_s2_2;
    void *temp_s3;
    void *temp_s5;
    void *temp_s7;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_3;
    void *var_s1;
    void *var_v0;

    temp_fp = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(arg0, void **, 0x10) = (void *) M2C_FIELD(M2C_FIELD(*M2C_FIELD(M2C_FIELD(temp_fp, void **, 0x60), void ***, 8), void **, 0x18), void **, 4);
    if ((M2C_FIELD(arg0, u8 *, 0x41) == 0) && (M2C_FIELD(temp_fp, s32 *, 0xF0) != 0) && ((u32) (M2C_FIELD(arg0, s32 *, 0x20) - 2) < 2U)) {
        temp_v0 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD((temp_v0 + 0x40), M2C_UNK (**)(void *, M2C_UNK), 4)(arg0 + M2C_FIELD(temp_v0, s16 *, 0x40), 4);
    }
    M2C_FIELD(arg0, s8 *, 0x30) = -1;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) & ~0xFF);
    M2C_FIELD(arg0, s8 *, 0x2C) = -1;
    M2C_FIELD(arg0, s32 *, 0x28) = -0xA;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s8 *, 0x2E) = 0;
    temp_a3 = (M2C_FIELD(arg0, s32 *, 0x3C) & 0xFF00FFFF) | 0x10000;
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) & ~0xFF & 0xFFFF00FF & 0xFF00FFFF);
    temp_a2 = ((s32) M2C_FIELD(arg0, s8 *, 0x30) & 0xFFFFFF) | (M2C_FIELD(*(void **)0x622F4C, u8 *, 0x39DF4) << 0x18);
    M2C_FIELD(arg0, s32 *, 0x3C) = temp_a3;
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) (M2C_FIELD(arg0, s32 *, 0x40) & ~0xFF & 0xFFFFFF);
    temp_s1 = arg0 + 0x267C;
    M2C_FIELD(arg0, s32 *, 0x38) = 0x01000000;
    temp_s2 = arg0 + 0x27CC;
    M2C_FIELD(arg0, s8 *, 0x30) = temp_a2;
    temp_s5 = arg0 + 0x2BBC;
    M2C_FIELD(arg0, s8 *, 0x48) = 1;
    temp_s7 = arg0 + 0x1108;
    sp_.sp20 = arg0 + 0x2A6C;
    M2C_FIELD(arg0, s8 *, 0x47) = 0;
    *(s8 *)0x621514 = 0;
    *(s8 *)0x621515 = 0;
    *(s8 *)0x621516 = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    func_003A99A8(arg0 + 0xBC, 1, temp_a2, temp_a3);
    func_003A2130(arg0, 0, M2C_FIELD(*(void **)0x622F4C, s32 *, 0x39DF0));
    func_003A2130(arg0, 2, 0);
    M2C_FIELD(arg0, s32 *, 0x64) = -1;
    temp_v0_2 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD((temp_v0_2 + 0x1C0), M2C_UNK (**)(void *, s32), 4)(arg0 + M2C_FIELD(temp_v0_2, s16 *, 0x1C0), M2C_FIELD(*(void **)0x622F4C, s32 *, 0x39DF0) & 1);
    temp_a1 = M2C_FIELD(arg0, void **, 0x10);
    temp_v1 = M2C_FIELD(temp_a1, void **, 0x10140);
    temp_s0 = M2C_FIELD((temp_v1 + 0x128), s32 (**)(void *, void *), 4)(temp_a1 + M2C_FIELD(temp_v1, s16 *, 0x128), temp_a1) < 0xA;
    temp_a1_2 = M2C_FIELD(arg0, s32 *, 0x34) & 0xFFFFFF;
    temp_v1_2 = (M2C_FIELD(arg0, s32 *, 0x38) & ~0xFF) | ((temp_s0 ^ 1) | (func_0034C140(M2C_FIELD(arg0, void **, 0x10)) != 0));
    M2C_FIELD(arg0, s32 *, 0x34) = temp_a1_2;
    M2C_FIELD(arg0, s32 *, 0x38) = temp_v1_2;
    func_003A4DA0(arg0 + 0x252C, temp_a1_2);
    func_003A4DA0(temp_s1);
    func_003A4DA0(temp_s2);
    func_003AECA0(temp_s1, 2, 2);
    func_003AECA0(temp_s2, 2, 2);
    func_003AEC90(temp_s1, 0x230, 0);
    func_003AEC90(temp_s2, 0x230, 0);
    func_003AEC80(temp_s1, 0x140, 0x108);
    func_003AEC80(temp_s2, 0x140, 0x130);
    M2C_FIELD(arg0, s32 *, 0x267C) = (s32) ((M2C_FIELD(arg0, s32 *, 0x267C) & ~0xFF) | 1);
    M2C_FIELD(arg0, s32 *, 0x27CC) = (s32) ((M2C_FIELD(arg0, s32 *, 0x27CC) & ~0xFF) | 1);
    func_003A4DA0(sp_.sp20);
    func_003A4DA0(temp_s5);
    M2C_FIELD(temp_s5, s32 *, 0x150) = func_003A1E10(0x6A0460);
    func_003A3930(arg0 + 0x1170);
    func_003BECB0(temp_s7, temp_fp);
    if ((u32) (M2C_FIELD(arg0, s32 *, 0x1C) - 8) < 2U) {
        M2C_FIELD(temp_s7, f32 *, 0x38) = 0x1.8000000000000p-1f;
        M2C_FIELD(temp_s7, f32 *, 0x34) = 0x1.8000000000000p-1f;
    }
    temp_s3 = arg0 + 0x13F0;
    temp_s0_2 = arg0 + 0x14A8;
    func_003A9850(arg0 + 0x13BC, 0);
    func_003A4D80(arg0 + 0x228C, 0x6A0470, 0);
    func_003A68C8(arg0 + 0x2D14);
    func_003A4650(temp_s3);
    M2C_FIELD(arg0, s32 *, 0x14A0) = 1;
    M2C_FIELD(temp_s0_2, s32 *, 0x18) = 0x80C8C8C8;
    temp_s2_2 = arg0 + 0x1518;
    func_003A9850(arg0 + 0x14D0, 1, 0);
    M2C_FIELD(temp_s0_2, s32 *, 0x6C) = -1;
    temp_s0_3 = arg0 + 0x15F8;
    func_003A4308(temp_s2_2, M2C_FIELD(*(void **)0x621870, s32 *, 0x88));
    temp_v0_3 = arg0 + 0x1588;
    M2C_FIELD(temp_s2_2, s32 *, 0x6C) = -1;
    M2C_FIELD(temp_v0_3, s32 *, 0x6C) = -1;
    M2C_FIELD(temp_v0_3, s32 *, 0x18) = 0x80C8C8C8;
    func_003A9850(arg0 + 0x15B0, 0);
    M2C_FIELD(temp_s0_3, s32 *, 0x20) = func_003A1E10(0x6A0478);
    M2C_FIELD(temp_s0_3, s8 *, 0x44) = -8;
    M2C_FIELD(temp_s0_3, s32 *, 0x6C) = -1;
    M2C_FIELD(temp_s0_3, s8 *, 0x45) = 7;
    func_003AECB0(arg0 + 0x1668, 0x6A0498);
    func_003AECB0(arg0 + 0x1684, 0x6A04A8);
    temp_a1_3 = M2C_FIELD(arg0, void **, 0x10);
    M2C_FIELD(arg0, f32 *, 0x17B8) = (f32) M2C_FIELD(temp_fp, f32 *, 0x924);
    temp_v1_3 = M2C_FIELD(temp_a1_3, void **, 0x10140);
    temp_v0_4 = M2C_FIELD((temp_v1_3 + 0x128), s32 (**)(void *, void *), 4)(temp_a1_3 + M2C_FIELD(temp_v1_3, s16 *, 0x128), temp_a1_3);
    var_a0 = temp_v0_4;
    if ((temp_v0_4 >= 4) || (var_v0 = arg0 + 0x1300, (temp_v0_4 == 0))) {
        var_a0 = 3;
        var_v0 = arg0 + 0x1300;
    }
    M2C_FIELD(temp_s3, s32 *, 0x20) = var_a0;
    M2C_FIELD(var_v0, s32 *, 0x70) = 0x3E7;
    func_003AAF70(var_v0, temp_v0_4);
    var_a0_2 = 0x10000;
    if (func_0034C470(M2C_FIELD(arg0, void **, 0x10)) != 0) {

    } else {
        var_a0_3 = 0;
        if (func_00447F48(M2C_FIELD(temp_fp, s64 *, 0x78), ((s8 *)&sp_)) != 0) {
            var_a0_3 = sp12 != 0;
        }
        var_a0_2 = var_a0_3 << 0x10;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) ((M2C_FIELD(arg0, s32 *, 0x38) & 0xFF00FFFF) | var_a0_2);
    func_0039BBE0(arg0);
    func_003A09E8(arg0);
    func_003A4F00(arg0 + 0x17BC, 0);
    if ((u32) (M2C_FIELD(arg0, s32 *, 0x20) - 2) < 2U) {
        var_s1 = arg0 + 0x23DC;
        if ((M2C_FIELD(temp_fp, s32 *, 0xF0) == 0) && (M2C_FIELD(arg0, u8 *, 0x36) == 0)) {
            func_003A4CF0(sp_.sp20, 0x6A04B0, 0, 0);
            M2C_FIELD(sp_.sp20, s32 *, 0x20) = 0x80FFFFFF;
            goto block_19;
        }
    } else {
block_19:
        var_s1 = arg0 + 0x23DC;
    }
    func_003A4D80(var_s1, 0x6A04C0, 1);
    M2C_FIELD(var_s1, s32 *, 0x20) = 0x80C8C8C8;
    temp_s0_4 = arg0 + 0x291C;
    M2C_FIELD(var_s1, f32 *, 0xC) = 0x1.0000000000000p+0f;
    temp_s1_2 = arg0 + 0x11B0;
    func_003A4DA0(var_s1);
    func_003A4D80(temp_s0_4, 0x6A04C0, 1);
    M2C_FIELD(temp_s0_4, s32 *, 0x20) = 0x80C8C8C8;
    M2C_FIELD(temp_s0_4, f32 *, 0xC) = 0x1.0000000000000p+0f;
    func_003A4DA0(temp_s0_4);
    func_003A4DA0(temp_s1_2);
    temp_v0_5 = M2C_FIELD(arg0, s32 *, 0x18);
    var_a1 = temp_v0_5;
    if (temp_v0_5 == 0) {
        var_a1 = M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_fp, void **, 0x80), void **, 4), s32 *, 0xC4);
    }
    M2C_FIELD(temp_s1_2, s32 *, 0x30) = var_a1;
    M2C_FIELD(temp_s1_2, s32 *, 0x20) = 0x80FFFFFF;
    func_003AEC80(temp_s1_2, 0x25C, 0x1B9);
    func_003AECA0(temp_s1_2, 0xD, 1);
    M2C_FIELD(temp_s1_2, f32 *, 0xC) = 0x1.0000000000000p+0f;
    if (*(s32 *)0x6184F0 != 0) {
        var_f12 = 0xC2D55554;
        var_f13 = 0x443AAAAA;
    } else {
        var_f12 = 0;
        var_f13 = 0x44200000;
    }
    func_0039BB38(arg0, var_f12, var_f13, 0x43F00000, 0);
    temp_s0_5 = M2C_FIELD(arg0, void **, 0xC);
    M2C_FIELD(arg0, s32 *, 0xB0) = 0x280;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0x1C0;
    if (temp_s0_5 != NULL) {
        M2C_FIELD(temp_s0_5, s32 *, 0x12B4) = func_003A1E10(0x6A04D0);
        temp_s0_6 = M2C_FIELD(arg0, void **, 0xC);
        M2C_FIELD(temp_s0_6, s32 *, 0x12B8) = func_003A1E10(0x6A04E0);
    }
    temp_s1_3 = arg0 + 0x2DA0;
    temp_s0_7 = arg0 + 0x3EEC;
    func_003ADF00(temp_s1_3);
    M2C_FIELD(arg0, s32 *, 0x2F4C) = 0x80A7A5A5;
    M2C_FIELD(arg0, s32 *, 0x2DFC) = 0x80A7A5A5;
    func_003AE2B8(temp_s1_3, 1);
    M2C_FIELD(temp_s0_7, s32 *, 0x18) = 0;
    M2C_FIELD(temp_s0_7, f32 *, 0x24) = 0x1.0000000000000p+0f;
    M2C_FIELD(temp_s0_7, f32 *, 0x20) = 0x1.0000000000000p+0f;
    M2C_FIELD(temp_s0_7, s32 *, 0x1C) = 0;
    func_003AEC80(temp_s0_7, 0x29, 0x1B0);
    func_003AEC90(temp_s0_7, 0, 0);
    func_003A99A8(arg0 + 0x3F14);
}
