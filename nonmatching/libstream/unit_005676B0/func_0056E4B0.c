/* NON_MATCHING: functional draft, 307 of 310 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0056DE38(); /* extern */

void func_0056E4B0(s32 *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6, s16 arg7, void *arg_sp0) {
    s32 *sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    f32 temp_f2;
    f32 var_f2;
    s16 temp_v0_3;
    s16 var_s6;
    s16 var_t9;
    s16 var_v1;
    s16 var_v1_2;
    s32 *temp_v0;
    s32 *temp_v0_2;
    s32 *temp_v1;
    s32 *var_a1_2;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_a4_2;
    s32 temp_a6;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_t0_2;
    s32 temp_t1;
    s32 temp_t2_2;
    s32 temp_t3;
    s32 temp_v1_2;
    s32 var_a1;
    s32 var_a3;
    s32 var_a5;
    s32 var_t8;
    s32 var_t8_2;
    s32 var_v0;
    u16 temp_a0;
    u16 temp_t0;
    u16 temp_t2;
    u16 var_a2;
    u16 var_a4;
    u16 var_a6;

    sp0 = arg1;
    var_s6 = arg7;
    sp4 = arg5;
    sp8 = func_0056DE38(arg0, arg4, arg2, arg3, arg4, arg5, arg6, arg7 << 0x10);
    var_a2 = M2C_FIELD(arg_sp0, u16 *, 4);
    var_v1 = M2C_FIELD(arg_sp0, s16 *, 6);
    var_a4 = (u16) M2C_FIELD(arg_sp0, s16 *, 6);
    if (var_v1 < 0) {
        var_v1 = -var_v1;
    }
    var_a5 = var_v1 + (s16) var_a2;
    if ((s16) var_a2 <= 0) {
        var_a5 = var_v1 - ((s32) (var_a2 << 0x10) >> 0x11);
    }
    temp_a0 = M2C_FIELD(arg6, u16 *, 0);
    var_v1_2 = M2C_FIELD(arg6, s16 *, 2);
    var_a6 = (u16) M2C_FIELD(arg6, s16 *, 2);
    if (var_v1_2 < 0) {
        var_v1_2 = -var_v1_2;
    }
    var_a1 = var_v1_2 + (s16) temp_a0;
    if ((s16) temp_a0 <= 0) {
        var_a1 = var_v1_2 - ((s32) (temp_a0 << 0x10) >> 0x11);
    }
    temp_t2 = M2C_FIELD(arg6, u16 *, 4);
    var_a3 = var_a1 + (s16) temp_t2;
    if ((s16) temp_t2 <= 0) {
        var_a3 = var_a1 - ((s32) (temp_t2 << 0x10) >> 0x11);
    }
    temp_t0 = M2C_FIELD(arg_sp0, u16 *, 8);
    if ((s16) temp_t0 <= 0) {
        var_v0 = var_a5 - ((s32) (temp_t0 << 0x10) >> 0x11);
    } else {
        var_v0 = var_a5 + (s16) temp_t0;
    }
    temp_f2 = (f32) (var_a3 + var_v0) * 0x1.0000000000000p-7f;
    if (temp_f2 > 0x1.4ccccc0000000p+0f) {
        var_s6 = (s16) (s32) ((f32) var_s6 * (0x1.4ccccc0000000p+0f / temp_f2));
    }
    if (temp_f2 < 0x1.0000000000000p-1f) {
        var_s6 = (s16) (s32) ((f32) var_s6 * (0x1.0000000000000p+1f * temp_f2));
    }
    var_t9 = 0;
    var_t8 = 0;
    spC = (s32) (s16) (0x7FFF / arg4);
    if (arg4 > 0) {
loop_23:
        temp_a0_2 = (s32) (M2C_FIELD(arg6, u16 *, 0) << 0x10) >> 9;
        temp_v1 = &arg0[var_t8 - sp4];
        temp_t3 = M2C_FIELD(temp_v1, s32 *, 4);
        temp_v0 = &arg0[var_t8 - M2C_FIELD(arg_sp0, s32 *, 0)];
        temp_t1 = M2C_FIELD(temp_v1, s32 *, -4);
        temp_t2_2 = (s32) (M2C_FIELD(arg6, u16 *, 4) << 0x10) >> 9;
        temp_s1 = M2C_FIELD(temp_v0, s32 *, -4);
        temp_s0 = M2C_FIELD(temp_v0, s32 *, 4);
        temp_s3 = M2C_FIELD(temp_v1, s32 *, 0);
        temp_s2 = M2C_FIELD(temp_v0, s32 *, 0);
        temp_a2 = (s32) (M2C_FIELD(arg_sp0, u16 *, 4) << 0x10) >> 9;
        temp_t0_2 = (s32) (M2C_FIELD(arg_sp0, u16 *, 8) << 0x10) >> 9;
        temp_a6 = (s32) ((u16) M2C_FIELD(arg6, s16 *, 2) << 0x10) >> 9;
        temp_a4 = (s32) ((u16) M2C_FIELD(arg_sp0, s16 *, 6) << 0x10) >> 9;
        var_a6 = temp_a6 * (temp_s3 >> 0xF);
        var_a5 = (s32) (temp_t0_2 * (temp_s1 & 0x7FFF)) >> 0xF;
        temp_a4_2 = var_t8 * 4;
        temp_a0_3 = ((temp_a0_2 * (temp_t3 >> 0xF)) + (temp_t2_2 * (temp_t1 >> 0xF)) + (((s32) (temp_a0_2 * (temp_t3 & 0x7FFF)) >> 0xF) + ((s32) (temp_t2_2 * (temp_t1 & 0x7FFF)) >> 0xF)) + (((s32) (temp_a6 * (temp_s3 & 0x7FFF)) >> 0xF) + var_a6)) * 4;
        var_t9 += spC;
        temp_v0_2 = &arg0[var_t8];
        temp_a2_2 = ((temp_a2 * (temp_s0 >> 0xF)) + (temp_t0_2 * (temp_s1 >> 0xF)) + (((s32) (temp_a2 * (temp_s0 & 0x7FFF)) >> 0xF) + var_a5) + (((s32) (temp_a4 * (temp_s2 & 0x7FFF)) >> 0xF) + (temp_a4 * (temp_s2 >> 0xF)))) * 4;
        temp_a3 = 0x7FFF - var_t9;
        var_a2 = (u16) (temp_a2_2 >> 0xF);
        var_t8 += 1;
        temp_a0_4 = (var_t9 * (temp_a0_3 >> 0xF)) + (temp_a3 * var_a2) + (((s32) (var_t9 * (temp_a0_3 & 0x7FFF)) >> 0xF) + ((s32) (temp_a3 * (temp_a2_2 & 0x7FFF)) >> 0xF));
        var_a4 = (u16) (temp_a4_2 + sp0);
        *(s32 *)var_a4 = (s32) (*(s32 *)temp_v0_2 + ((var_s6 * (temp_a0_4 >> 0xF)) + ((s32) (var_s6 * (temp_a0_4 & 0x7FFF)) >> 0xF)));
        if (var_t8 < arg4) {
            goto loop_23;
        }
    }
    M2C_FIELD(arg_sp0, u16 *, 4) = M2C_FIELD(arg6, u16 *, 0);
    M2C_FIELD(arg_sp0, s16 *, 6) = (s16) (u16) M2C_FIELD(arg6, s16 *, 2);
    M2C_FIELD(arg_sp0, u16 *, 8) = (u16) M2C_FIELD(arg6, u16 *, 4);
    M2C_FIELD(arg_sp0, s32 *, 0) = sp4;
    var_f2 = (f32) sp8 / ((f32) func_0056DE38(sp0, arg4, (s32) var_a2, sp4, (s32) var_a4, var_a5, (void *) var_a6) + 0x1.9999980000000p-4f);
    if (var_f2 < 0x1.0000000000000p-1f) {
        var_f2 = 0x1.0000000000000p-1f;
    }
    if (var_f2 > 0x1.fff2e40000000p-1f) {
        var_f2 = 0x1.fff2e40000000p-1f;
    }
    if (arg4 > 0) {
        var_a1_2 = sp0;
        var_t8_2 = arg4;
        do {
            var_t8_2 -= 1;
            temp_v0_3 = ((s32) (M2C_FIELD(arg_sp0, s16 *, 0xA) * 0x7AE1) >> 0xF) + ((s32) ((s16) (s32) (var_f2 * 0x1.0000000000000p+15f) * 0x51F) >> 0xF);
            M2C_FIELD(arg_sp0, s16 *, 0xA) = temp_v0_3;
            temp_v1_2 = *var_a1_2;
            *var_a1_2 = (temp_v0_3 * (temp_v1_2 >> 0xF)) + ((s32) (temp_v0_3 * (temp_v1_2 & 0x7FFF)) >> 0xF);
            var_a1_2 += 4;
        } while (var_t8_2 != 0);
    }
}
