/* NON_MATCHING: functional draft, 180 of 182 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

f32 func_00468458(void *);
s32 func_00468A40(void *);
f32 func_00468BC8(s32, s32, u32);
s32 func_00468C50(void *arg0) {
    s32 sp0;
    struct StackFrame_00468C50 { s8 pad0[0x4]; s32 sp4; void * sp8; void * spC; } sp_;
    f32 temp_ret;
    s32 temp_a0;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1_2;
    s32 var_a5;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    u16 temp_a1;
    u16 temp_a2;
    u16 temp_v1;
    u32 temp_lo1;
    u32 temp_lo1_2;
    u32 temp_lo;
    u32 temp_lo_2;
    u32 temp_lo_3;
    u32 temp_s2_2;
    u32 var_fp;
    u32 var_s1;
    u32 var_s2;
    u32 var_s3;
    u32 var_s7;
    u8 temp_a0_2;
    u8 var_v0;
    void *temp_s1;
    void *temp_v0_4;
    void *var_a4;

    var_v0 = M2C_FIELD((void *)0x623E48, u8 *, 0);
    sp_.sp8 = arg0;
    if (var_v0 != 0) {
        var_s6 = 0;
        temp_s2 = M2C_BITWISE(s32, func_00468458(arg0));
        temp_a0 = temp_s2;
        var_s1 = 0;
        sp_.spC = sp_.sp8 + 0x8C;
        func_00467BE8(temp_a0, ((s8 *)&sp_), &sp_.sp4);
        var_s4 = 0;
        var_a5 = sp0;
        var_s7 = 0;
        var_s5 = 0;
        var_fp = 0;
        if (var_a5 < sp_.sp4) {
            var_a4 = (var_a5 * 2) + sp_.spC;
            do {
                temp_v1 = M2C_FIELD(var_a4, u16 *, 0);
                temp_a0_2 = *(u8 *)(0x623E40 + var_a5);
                temp_a1 = M2C_FIELD(var_a4, u16 *, 0x10);
                temp_a2 = M2C_FIELD(var_a4, u16 *, 0x20);
                temp_v0 = ((temp_v1 < 0x401U) ? temp_v1 : 0x400U) * temp_a0_2;
                temp_v1_2 = temp_a2 < 0x101U;
                var_a5 += 1;
                var_a4 += 2;
                var_s6 += temp_v0;
                var_fp += temp_a0_2 << 8;
                var_s4 += ((temp_a1 < 0x401U) ? temp_a1 : 0x400U) * temp_a0_2;
                temp_v0_2 = temp_a0_2 << 0xA;
                var_s7 += temp_v0_2;
                var_s1 += temp_v0_2;
                var_s5 += ((temp_v1_2 != 0) ? temp_a2 : 0x100U) * temp_a0_2;
            } while (var_a5 < sp_.sp4);
        }
        var_s2 = 0xFF;
        temp_v0_3 = func_00468A40(sp_.sp8);
        var_s3 = 0xFF;
        if (temp_v0_3 >= 0) {
            temp_v0_4 = (((s32) (temp_s2 + ((u32) temp_s2 >> 0x1F)) >> 1) * 2) + sp_.spC;
            var_s2 = (u16) M2C_FIELD(temp_v0_4, u16 *, 0x30) >> 8;
            if (temp_v0_3 > 0) {
                var_s3 = (u16) M2C_FIELD(temp_v0_4, u16 *, 0x38) >> 8;
            }
        }
        temp_lo = (u32) (var_s6 * 0x2BC) / var_s1;
        temp_lo1 = (u32) (var_s2 * 0x12C) / 255U;
        temp_s1 = sp_.sp8 + 0x14;
        temp_lo_2 = (u32) (var_s3 * 0x12C) / 255U;
        temp_lo1_2 = (u32) (var_s4 * 0x2BC) / var_s7;
        temp_s2_2 = (temp_lo1 >= 0x12DU) ? 0x12CU : temp_lo1;
        temp_lo_3 = (u32) (var_s5 * 0x2BC) / var_fp;
        M2C_FIELD(temp_s1, f32 *, 0xB8) = func_00468BC8((s32) M2C_FIELD((void *)0x623E48, u8 *, 2), (s32) M2C_FIELD((void *)0x623E48, s8 *, 3), ((temp_lo >= 0x2BDU) ? 0x2BCU : temp_lo) + temp_s2_2);
        M2C_FIELD(temp_s1, f32 *, 0xBC) = func_00468BC8((s32) M2C_FIELD((void *)0x623E48, u8 *, 4), (s32) M2C_FIELD((void *)0x623E48, s8 *, 5), ((temp_lo1_2 >= 0x2BDU) ? 0x2BCU : temp_lo1_2) + temp_s2_2);
        temp_ret = func_00468BC8((s32) M2C_FIELD((void *)0x623E48, u8 *, 6), (s32) M2C_FIELD((void *)0x623E48, s8 *, 7), ((temp_lo_3 >= 0x2BDU) ? 0x2BCU : temp_lo_3) + ((temp_lo_2 >= 0x12DU) ? 0x12CU : temp_lo_2));
        var_v0 = M2C_BITWISE(u8, temp_ret);
        M2C_FIELD(temp_s1, f32 *, 0xC0) = temp_ret;
    }
    return (s32) var_v0;
}
