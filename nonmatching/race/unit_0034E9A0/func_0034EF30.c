/* NON_MATCHING: functional draft, 291 of 303 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

f32 func_0034EC30(void *, s16, s16, void *);        /* extern */
f32 func_0034ECF0(void *, s16, s16, void *);        /* extern */
M2C_UNK func_0034ED48(void *, void *, s32);         /* extern */
M2C_UNK func_00359A38(void *, u8, f32 *, void *);   /* extern */

void func_0034EF30(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    struct StackFrame_0034EF30 { s8 pad0[0x10]; } sp_;
    f32 *temp_s2;
    f32 *var_a1;
    f32 *var_a1_2;
    f32 *var_a2;
    f32 *var_s2;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 var_f0;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f5;
    f32 var_f6;
    s16 *temp_a1;
    s16 *var_a3;
    s16 temp_s0;
    s16 temp_v1_3;
    s32 temp_a0;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_v0;
    u8 *var_a0;
    u8 *var_s3;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v1_2;
    void *temp_a2;

    M2C_FIELD(arg0, s16 *, 0xCE) = (s16) (M2C_FIELD(arg1, u8 *, 0xBC) * 0xA);
    temp_v0 = M2C_FIELD(arg1, u8 *, 0xBD);
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, u16 *, 0xCC) = (u16) (temp_v0 * 0x64);
    } else {
        M2C_FIELD(arg0, u16 *, 0xCC) = (u16) (M2C_FIELD((M2C_FIELD(arg1, u8 *, 0xBF) + arg1), u8 *, 0xBF) * 0x64);
    }
    temp_v1 = (M2C_FIELD(arg1, u8 *, 0xBE) * 0x64) + 0xC8;
    if ((s32) M2C_FIELD(arg0, u16 *, 0xCC) < temp_v1) {
        M2C_FIELD(arg0, u16 *, 0xCC) = (u16) temp_v1;
    }
    temp_a2 = arg1 + 8;
    temp_a0 = M2C_FIELD(arg1, u8 *, 0xBF) * 2;
    temp_a1 = temp_a2 + (temp_a0 + 0xCE);
    if (*temp_a1 == 0) {
        *temp_a1 = (s16) M2C_FIELD((temp_a0 + temp_a2), u16 *, 0xCC);
    }
    temp_s2 = arg0 + 0xC;
    if ((s32) M2C_FIELD(arg1, u8 *, 0xBF) != 0) {
        var_a1 = temp_s2;
        var_a0 = arg1 + 0xC0;
        var_s1 = (s32) M2C_FIELD(arg1, u8 *, 0xBF);
        do {
            temp_v0_2 = *var_a0;
            var_a0 += 1;
            var_s1 -= 1;
            *var_a1 = (f32) (temp_v0_2 * 0x64) * 0x1.acee9c0000000p-4f;
            var_a1 += 4;
        } while (var_s1 != 0);
    }
    var_f6 = 0x1.0000000000000p+0f;
    if (M2C_FIELD(arg1, u8 *, 0x10C) != 0) {
        var_f6 = (f32) M2C_FIELD(arg1, u8 *, 0x10C) * 0x1.47ae140000000p-7f;
    }
    var_f5 = 0x1.0000000000000p+0f;
    var_v0 = (s32) M2C_FIELD(arg1, u8 *, 0xBF) * 4;
    if (M2C_FIELD(arg1, u16 *, 0x10A) != 0) {
        var_f5 = (f32) M2C_FIELD(arg1, u16 *, 0x10A) * 0x1.0624dc0000000p-10f;
        var_v0 = (s32) M2C_FIELD(arg1, u8 *, 0xBF) * 4;
    }
    temp_f3 = M2C_FIELD(arg0, f32 *, 0xC);
    var_f2 = 0x1.0000000000000p+0f;
    if (M2C_FIELD(arg1, u16 *, 0x108) != 0) {
        var_f2 = (f32) M2C_FIELD(arg1, u16 *, 0x108) * 0x1.0624dc0000000p-10f;
    }
    temp_v1_2 = M2C_FIELD(arg1, u8 *, 7);
    var_f2_2 = var_f2 * 0x1.47ae140000000p-7f;
    if ((temp_v1_2 != 0) && (temp_v1_2 != 0x64)) {
        var_f2_2 *= (f32) temp_v1_2 / 0x1.9000000000000p+6f;
    }
    var_s1_2 = 0;
    if ((s32) M2C_FIELD(arg1, u8 *, 0xBF) != 0) {
        var_a3 = temp_a2 + 0xD0;
        var_a1_2 = temp_s2;
        var_a2 = temp_s2 + 0x60;
        do {
            temp_f0 = *var_a1_2;
            var_a1_2 += 4;
            temp_v1_3 = *var_a3;
            var_a3 += 2;
            var_s1_2 += 1;
            *var_a2 = (f32) (((temp_v1_3 < -1) * 0x10000) + temp_v1_3) * 0x1.3999980000000p+3f * (var_f2_2 * (var_f6 + (((var_f5 - var_f6) * (temp_f0 - temp_f3)) / (M2C_FIELD((var_v0 + temp_s2), f32 *, -4) - temp_f3))));
            var_a2 += 4;
        } while (var_s1_2 < (s32) M2C_FIELD(arg1, u8 *, 0xBF));
    }
    func_00359A38(arg0, M2C_FIELD(arg1, u8 *, 0xBF), temp_s2, arg0 + 0x6C);
    temp_f1 = (f32) M2C_FIELD(arg1, u16 *, 0xBA) * 0x1.9999980000000p-4f * 0x1.3999980000000p+3f;
    if (M2C_FIELD((void *)0x620CD8, u8 *, 0x13C) != 0) {
        var_f0 = temp_f1 * 0x1.cccccc0000000p-1f;
    } else {
        var_f0 = temp_f1 / M2C_FIELD(&temp_s2[M2C_FIELD(arg1, u8 *, 0xBF)], f32 *, -4);
    }
    M2C_FIELD(arg0, f32 *, 0xD0) = var_f0;
    var_s1_3 = 0;
    func_0034ED48(arg1, arg0, arg3);
    if (M2C_FIELD(arg0, s16 *, 0) > 0) {
        var_s2 = temp_s2 + 0x60;
        var_s3 = arg1 + 0xC0;
        do {
            temp_v0_3 = *var_s3;
            var_s3 += 1;
            var_s1_3 += 1;
            temp_s0 = temp_v0_3 * 0x64;
            temp_f20 = func_0034ECF0(arg0, temp_s0, temp_s0, ((s8 *)&sp_));
            *var_s2 *= temp_f20 / func_0034EC30(arg0, temp_s0, temp_s0, ((s8 *)&sp_));
            var_s2 += 4;
        } while (var_s1_3 < M2C_FIELD(arg0, s16 *, 0));
    }
    M2C_FIELD(arg0, s8 *, 0xDB) = 0;
    M2C_FIELD(arg0, f32 *, 0xDC) = 0x0.0p+0f;
    if (arg2 > 0) {
        M2C_FIELD(arg0, s8 *, 0xDB) = 1;
        temp_f3_2 = (f32) M2C_FIELD((void *)0x620CD8, u8 *, 8) * 0x1.47ae140000000p-7f;
        M2C_FIELD(arg0, f32 *, 0xE0) = temp_f3_2;
        M2C_FIELD(arg0, f32 *, 0xDC) = (f32) ((((f32) arg2 * 0x1.3999980000000p+3f * 0x1.6619980000000p+9f * 0x1.921fb40000000p+2f) / 0x1.e000000000000p+5f) / (0x1.0000000000000p+0f - (temp_f3_2 * 0x1.0000000000000p-1f)));
    }
}
