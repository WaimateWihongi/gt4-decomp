/* NON_MATCHING: functional draft, 226 of 247 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

struct RaceEntryCar {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    char unk_C[0x8];
    s32 unk14;
    s32 unk18;
    char unk_1C[0x11C8];
    void * unk11E4;
    void * unk11E8;
    s32 unk11EC;
    char unk_11F0[0x1690];
    void * unk2880;
    s32 unk2884;
    s32 unk2888;
    s32 unk288C;
    char unk_2890[0x6C];
    s32 unk28FC;
    char unk_2900[0xB3C];
    s32 unk343C;
    s32 unk3440;
    s32 unk3444;
    s32 unk3448;
    s32 unk344C;
    s32 unk3450;
    s32 unk3454;
    s32 unk3458;
    s32 unk345C;
    s32 unk3460;
    s32 unk3464;
    char unk_3468[0x20];
    s32 unk3488;
    char unk_348C[0x140];
    void * unk35CC;
};
void func_003E0FF8(void *arg0, void *arg1) {
    s32 sp68;
    struct StackFrame_003E0FF8 { s8 pad0[0x40]; s32 sp40; s8 pad1[0x3C]; f32 * sp80; f32 * sp84; f32 * sp88; s8 pad2[0x4]; } sp_;
    f32 var_f13;
    s32 temp_a1;
    s32 temp_s0;
    s32 var_s3;

    func_001052E0(((s8 *)&sp_), 0, 0x280, 0xE0);
    func_00105670(((s8 *)&sp_));
    func_001052E0(&sp_.sp40, 0, 0x280, 0xE0);
    func_001054A0(&sp_.sp40, (M2C_FIELD((void *)0x6184D0, s32 *, 0x1C) == 0) ? 0 : 9);
    func_001056A0(&sp_.sp40);
    func_00105708((void *)0x6184D0 + 0x134);
    func_004A29A8(1U);
    func_004A2980(-1);
    func_004A3088(0x1.0000000000000p+0f);
    func_004AB040(4U);
    func_004A5348((struct RaceEntryCar *)1);
    func_004A53F8();
    func_004A7454();
    var_f13 = 0x1.e79e760000000p+0f;
    if (M2C_FIELD((void *)0x6184D0, s32 *, 0x20) == 0) {
        var_f13 = 0x1.6db6da0000000p+0f;
    }
    var_s3 = 0;
    sp_.sp88 = arg0 + 0x584;
    sp_.sp80 = arg0 + 0x594;
    func_0049AC00(0x1.9000000000000p+5f, var_f13, 0x1.9999980000000p-4f, 0x1.9000000000000p+6f);
    func_004A5348(NULL);
    func_003E1780();
    sp_.sp84 = arg0 + 0x5A4;
    do {
        func_004A53F8();
        if (var_s3 > 0) {
            func_003E1A80(arg0, M2C_FIELD(arg0, f32 *, 0x580) / 0x1.0000000000000p+1f);
        }
        temp_s0 = var_s3 + 1;
        func_004A7454();
        func_004A7844(*sp_.sp88, *sp_.sp80, *sp_.sp84);
        func_004A79B0(M2C_FIELD(arg0, f32 *, 0x5C4));
        func_004A7988(M2C_FIELD(arg0, f32 *, 0x5B4));
        func_004A79D8(M2C_FIELD(arg0, f32 *, 0x5D4));
        func_001056A0(&sp_.sp40);
        func_00105728((s32 *) arg1);
        func_004AB040(6U);
        func_004A1638(5U);
        func_004A26F0(1);
        func_004A6E20(0x1.9000000000000p+6f);
        func_004A4550(3U, 0);
        func_004A4550(2U, 0);
        func_004AA1D8(0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f);
        func_004A2A10(0);
        func_004A2B10(0x1.0000000000000p-1f, 0x1.0000000000000p-1f);
        func_00105918(&sp_.sp40);
        func_004A6788();
        func_004A26F0(3);
        func_004A2A10(sp68);
        temp_a1 = var_s3;
        var_s3 = temp_s0;
        func_004A2C58(3, temp_a1, 0x1.0000000000000p+0f);
        func_003E1880(arg0);
        func_004A3998(6U, 0x1.0000000000000p+0f / (f32) temp_s0);
        func_004A5400();
    } while (var_s3 < 3);
    func_004A5348((struct RaceEntryCar *)1);
    func_004A5400();
    func_004A5348(NULL);
    func_004AB040(5U);
    func_004A1638(6U);
    func_004A2980(0xFFFFFF);
    func_004A29A8(0U);
    func_004A4550(2U, 1);
    func_004A4550(3U, 1);
    func_004AA168(0x80FFFFFFU);
    func_001056A0(arg1);
    func_004A2A10(0);
    func_004A3998(5U, M2C_FIELD(arg0, f32 *, 0x614));
    func_00105280(&sp_.sp40, 2);
    func_00105280(((s8 *)&sp_), 2);
}
