/* NON_MATCHING: functional draft, 122 of 122 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

int func_00575E60(int, int);
f32 func_00579548(void);
s32 func_005C7068(s32, s32, s16 *);                 /* extern */

void func_005D24A8(s32 arg0, s32 arg1, s32 arg2, s8 *arg3, void *arg4) {
    struct StackFrame_005D24A8 { s8 pad0[0x4]; void * sp4; s32 sp8; s32 spC; s8 pad1[0x14]; s16 sp24; s8 pad2[0xA]; } sp_;
    s32 sp20;                                       /* compiler-managed */
    f32 temp_f1;
    f32 var_f0;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s3;
    s32 var_v1;
    u16 var_a2;
    u32 temp_a1;
    u32 temp_v1;
    u32 var_a1;
    u32 var_s0_3;

    var_s3 = arg1;
    if ((u32) var_s3 >= (u32) M2C_FIELD(arg4, u32 *, 0)) {
        var_s3 -= M2C_FIELD(arg4, s32 *, 4);
    }
    temp_s1 = var_s3 - 1;
    sp_.sp4 = NULL;
    sp_.sp8 = 0;
    sp_.spC = 0;
    if (temp_s1 != 0) {
        var_s0 = temp_s1 * 2;
        var_v1 = func_00575E60(0x40, var_s0);
    } else {
        var_v1 = 0;
        var_s0 = 0;
    }
    var_s0_2 = var_s3 - 1;
    M2C_FIELD(((s8 *)&sp_), s32 *, 4) = var_v1;
    M2C_FIELD(((s8 *)&sp_), s32 *, 0xC) = (s32) (var_v1 + var_s0);
    M2C_FIELD(((s8 *)&sp_), s32 *, 8) = var_v1;
    temp_v0 = M2C_FIELD(((s8 *)&sp_), s32 *, 4);
    sp_.sp24 = 0;
    sp20 = temp_v0;
    M2C_FIELD(((s8 *)&sp_), s32 *, 8) = func_005C7068(temp_v0, temp_s1, &sp_.sp24);
    if (var_s0_2 != 0) {
        do {
            temp_v0_2 = var_s0_2 - 1;
            temp_a1 = var_s0_2 + 1;
            var_s0_2 = temp_v0_2;
            temp_f1 = func_00579548();
            if ((s32) temp_a1 >= 0) {
                var_f0 = (f32) temp_a1;
            } else {
                var_f0 = 0x1.0000000000000p+1f * (f32) ((temp_a1 & 1) | (temp_a1 >> 1));
            }
            *(s32 *)(sp_.sp4 + (temp_v0_2 * 2)) = (s16) (s32) (temp_f1 * var_f0);
        } while (var_s0_2 != 0);
    }
    var_s0_3 = 1;
    if ((u32) var_s3 > 1U) {
        var_s1 = 0;
        do {
            temp_v1 = M2C_FIELD(arg4, u32 *, 0);
            var_a1 = var_s0_3;
            if (var_s0_3 >= temp_v1) {
                var_a1 = var_s0_3 + M2C_FIELD(arg4, s32 *, 4);
            }
            var_a2 = *(u16 *)(sp_.sp4 + var_s1);
            var_s1 += 2;
            if (var_a2 >= temp_v1) {
                var_a2 += M2C_FIELD(arg4, s32 *, 4);
            }
            var_s0_3 += 1;
            ((M2C_UNK (*)(s32, u32, u16)) arg3)(arg0, var_a1, var_a2);
        } while (var_s0_3 < (u32) var_s3);
    }
    sp20 = sp_.sp4;
    if (sp_.sp4 != NULL) {
        func_00575DA0(sp_.sp4);
    }
}
