/* NON_MATCHING: functional draft, 338 of 349 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

f32 func_00344798(s32, M2C_UNK);                    /* extern */
f32 func_003447F8(s32, M2C_UNK);                    /* extern */
f32 func_00344828(s32, M2C_UNK);                    /* extern */
f32 func_00344858(s32, M2C_UNK);                    /* extern */
f32 func_00344888(s32, M2C_UNK);                    /* extern */
f32 func_003448B8(s32, M2C_UNK);                    /* extern */
f32 func_00345138(s32, M2C_UNK);                    /* extern */
f32 func_00345168(s32, M2C_UNK);                    /* extern */
f32 func_0034A760(s32, M2C_UNK);                    /* extern */
f32 func_00384B28(void *);                          /* extern */
f32 func_00384BC8(void *);                          /* extern */
f32 func_00385408(void *);                          /* extern */
M2C_UNK func_004A7844();          /* extern */
M2C_UNK func_004A7988(f32);                         /* extern */
M2C_UNK func_004A79B0(f32);                         /* extern */
M2C_UNK func_004A79D8(f32);                         /* extern */

void func_0037B020(void *arg0) {
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 temp_f21_3;
    f32 temp_f23;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f20;
    f32 var_f20_2;
    f32 var_f21;
    f32 var_f21_2;
    f32 var_f21_3;
    f32 var_f23;
    f32 var_f25;
    f32 var_f27;
    f32 var_f28;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_v1;
    s64 temp_v1_6;
    void *temp_a1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;

    var_f27 = 0x0.0p+0f;
    temp_v0 = M2C_FIELD(arg0, void **, 0x18C);
    temp_a1 = M2C_FIELD(temp_v0, void **, 0x2880);
    temp_s2 = M2C_FIELD(temp_v0, s32 *, 0x18);
    temp_v1 = M2C_FIELD(temp_a1, void **, 8);
    var_f28 = M2C_FIELD(arg0, f32 *, 0x184);
    temp_v1_2 = M2C_FIELD(arg0, void **, 0);
    temp_s0 = M2C_FIELD((temp_v1 + 0x50), void *(**)(void *, void *), 4)(temp_a1 + M2C_FIELD(temp_v1, s16 *, 0x50), temp_a1);
    temp_v0_2 = M2C_FIELD((temp_v1_2 + 0xB8), s32 (**)(void *), 4)(arg0 + M2C_FIELD(temp_v1_2, s16 *, 0xB8));
    if ((temp_v0_2 == 0) || (temp_v0_2 == 0x19)) {
        func_004A7988(func_00384BC8(arg0 + 0x1DC) * 0x1.0000000000000p+3f * M2C_FIELD(arg0, f32 *, 0x230));
        func_004A79B0(0x1.0000000000000p+1f * func_00384BC8(arg0 + 0x1D0) * M2C_FIELD(arg0, f32 *, 0x230));
        if (M2C_FIELD(arg0, u8 *, 0x265) != 0) {
            temp_f20 = func_00384B28(arg0 + 0x1B8) * 0x1.cccccc0000000p-1f;
            func_004A79B0(func_00384B28(arg0 + 0x1C4) * 0x1.3333320000000p-2f);
            func_004A7988(temp_f20);
        }
        var_f21 = func_00385408(arg0 + 0x1E8);
        var_f20 = func_00385408(arg0 + 0x1F4);
        var_f0 = func_00385408(arg0 + 0x200);
        if (var_f21 <= -0x1.6800000000000p+6f) {
            var_f21 = -0x1.6800000000000p+6f;
        }
        if (var_f21 >= 0x1.6800000000000p+6f) {
            var_f21 = 0x1.6800000000000p+6f;
        }
        if (var_f20 <= -0x1.6800000000000p+6f) {
            var_f20 = -0x1.6800000000000p+6f;
        }
        if (var_f20 >= 0x1.6800000000000p+6f) {
            var_f20 = 0x1.6800000000000p+6f;
        }
        if (var_f0 <= -0x1.6800000000000p+6f) {
            var_f0 = -0x1.6800000000000p+6f;
        }
        if (var_f0 >= 0x1.6800000000000p+6f) {
            var_f0 = 0x1.6800000000000p+6f;
        }
        func_004A79D8(var_f0);
        func_004A7988(var_f21);
        func_004A79B0(var_f20);
        var_f21_2 = func_00385408(arg0 + 0x20C);
        var_f20_2 = func_00385408(arg0 + 0x218);
        var_f0_2 = func_00385408(arg0 + 0x224);
        if (var_f21_2 <= -0x1.3333320000000p-1f) {
            var_f21_2 = -0x1.3333320000000p-1f;
        }
        if (var_f21_2 >= 0x1.3333320000000p-1f) {
            var_f21_2 = 0x1.3333320000000p-1f;
        }
        if (var_f20_2 <= -0x1.9999980000000p-4f) {
            var_f20_2 = -0x1.9999980000000p-4f;
        }
        if (var_f20_2 >= 0x1.9999980000000p-4f) {
            var_f20_2 = 0x1.9999980000000p-4f;
        }
        if (var_f0_2 <= -0x1.3333320000000p-2f) {
            var_f0_2 = -0x1.3333320000000p-2f;
        }
        if (var_f0_2 >= 0x1.3333320000000p-2f) {
            var_f0_2 = 0x1.3333320000000p-2f;
        }
        func_004A7844(M2C_BITWISE(s32, var_f21_2), var_f20_2, var_f0_2);
    }
    temp_v1_3 = M2C_FIELD(arg0, void **, 0);
    temp_v0_3 = M2C_FIELD((temp_v1_3 + 0xB8), s32 (**)(void *), 4)(arg0 + M2C_FIELD(temp_v1_3, s16 *, 0xB8));
    if ((temp_v0_3 == 0) || (temp_v0_3 == 0x19)) {
        func_004A79B0(M2C_FIELD(arg0, f32 *, 0x274));
        var_f27 = M2C_FIELD(arg0, f32 *, 0x274);
    }
    temp_v1_4 = M2C_FIELD(arg0, void **, 0);
    temp_v0_4 = M2C_FIELD((temp_v1_4 + 0xB8), s32 (**)(void *), 4)(arg0 + M2C_FIELD(temp_v1_4, s16 *, 0xB8));
    temp_a0 = ((temp_v0_4 ^ 0x19) == 0) ? 0 : temp_v0_4;
    if (M2C_FIELD(temp_s0, s32 *, 0x40) >= 3) {
        temp_s0_2 = M2C_FIELD(temp_s0, s32 *, 0x44) + (temp_a0 << 5);
        func_004A7844(temp_a0, M2C_FIELD(temp_s0_2, f32 *, 0), M2C_FIELD(temp_s0_2, f32 *, 4), M2C_FIELD(temp_s0_2, f32 *, 8));
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(temp_s0_2, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(temp_s0_2, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x48) = (f32) M2C_FIELD(temp_s0_2, f32 *, 8);
    }
    var_f25 = func_003448B8(temp_s2, 0);
    temp_f21 = func_00344858(temp_s2, 0);
    temp_v1_5 = M2C_FIELD(arg0, void **, 0);
    var_f23 = func_00344888(temp_s2, 0);
    temp_v0_5 = M2C_FIELD((temp_v1_5 + 0xB8), s32 (**)(void *), 4)(arg0 + M2C_FIELD(temp_v1_5, s16 *, 0xB8));
    switch (temp_v0_5) {                            /* irregular */
    case 25:
        func_004A79D8(-M2C_FIELD(arg0, f32 *, 0x190) * 0x1.e000000000000p+3f);
        /* fallthrough */
    case 0:
        var_f21_3 = temp_f21 + func_0034A760(temp_s2, 0);
        break;
    default:
        var_f25 -= func_00345138(temp_s2, 0);
        var_f23 = 0x0.0p+0f;
        var_f21_3 = temp_f21 - func_00345168(temp_s2, 0);
        break;
    }
    var_v1 = 0;
    if ((M2C_FIELD(arg0, u8 *, 0x26B) != 0) || (M2C_FIELD(arg0, u8 *, 0x269) != 0)) {
        var_v1 = 1;
    }
    if (var_v1 != 0) {
        var_f21_3 = -var_f21_3;
        var_f23 = -var_f23;
        var_f25 += 0x1.921fb40000000p+1f;
        var_f27 += 0x1.6800000000000p+7f;
    }
    temp_f21_2 = -var_f21_3 * 0x1.ca5dc00000000p+5f;
    temp_f20_2 = -var_f25 * 0x1.ca5dc00000000p+5f;
    temp_f23 = (var_f23 * 0x1.ca5dc00000000p+5f) + 0x0.0p+0f;
    func_004A79D8(temp_f23);
    func_004A7988(temp_f21_2);
    func_004A79B0(temp_f20_2);
    M2C_FIELD(arg0, f32 *, 0x34) = temp_f20_2;
    M2C_FIELD(arg0, f32 *, 0x38) = temp_f21_2;
    M2C_FIELD(arg0, f32 *, 0x3C) = temp_f23;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) -func_00344798(temp_s2, 0);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) -func_003447F8(temp_s2, 0);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) -func_00344828(temp_s2, 0);
    temp_f21_3 = -func_00344798(temp_s2, 0);
    temp_f20_3 = -func_003447F8(temp_s2, 0);
    func_004A7844(M2C_BITWISE(s32, temp_f21_3), temp_f20_3, -func_00344828(temp_s2, 0));
    M2C_FIELD(arg0, f32 *, 0x278) = var_f27;
    temp_a0_2 = (((0xFF00FFFF << 0x10) | 0xFFFF) << 0x10) | 0xFFFF;
    temp_v1_6 = M2C_FIELD(arg0, s64 *, 0x260) & temp_a0_2;
    M2C_FIELD(arg0, s64 *, 0x260) = temp_v1_6;
    M2C_FIELD(arg0, f32 *, 8) = 0x1.9000000000000p+6f;
    if (M2C_FIELD(arg0, u8 *, 0x267) != 0) {
        var_f28 = M2C_FIELD(arg0, f32 *, 0x188);
        M2C_FIELD(arg0, s64 *, 0x260) = (s64) ((temp_v1_6 & temp_a0_2) | (0x8000 << 0x21));
    }
    M2C_FIELD(arg0, f32 *, 0xC) = var_f28;
}
