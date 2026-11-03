/* NON_MATCHING: functional draft, 87 of 91 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_004A4CF0(s32, void *, s32, s32, s32, s32, s32); /* extern */

void func_004A4F48(u32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    struct StackFrame_004A4F48 { s8 pad0[0x10]; } sp_;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a3;
    s32 var_s3;
    void *temp_s0_2;
    void *temp_s0_3;
    void *var_s0;

    var_s3 = arg7;
    temp_s2 = M2C_FIELD((void *)0x70002000, s32 *, 0x1FC);
    temp_s0 = temp_s2 - 0x90;
    var_a3 = func_004A4CF0(temp_s2 - 0x80, ((s8 *)&sp_), arg3, arg4, arg5, arg6, ((arg0 >> 6) & 0xFFFF) | (((arg2 >> 6) & 0xFF) << 0x10) | (arg1 << 0x18));
    if (var_a3 != 0) {
        M2C_FIELD((void *)0x70002000, s32 *, 0x1FC) = temp_s0;
        M2C_FIELD((void *)0x70002000, s32 *, 0x1030) = (s32) (M2C_FIELD((void *)0x70002000, s32 *, 0x1030) + var_a3);
        *M2C_FIELD((void *)0x70002000, s32 **, 0x208) = temp_s0 & 0x0FFFFFFF;
        *(s32 *)temp_s0 = 0x10000006;
        var_s0 = temp_s2 - 0x30;
loop_2:
        temp_a0 = (var_a3 < 0x7FF9) ? var_a3 : 0x7FF8;
        var_a3 -= temp_a0;
        M2C_FIELD(var_s0, s64 *, 8) = 0;
        M2C_FIELD(var_s0, s64 *, 0) = (s64) ((var_a3 != 0) ? (temp_a0 | (0x8000 << 0x2C)) : (temp_a0 | ((0x08000000 << 0x20) | 0x8000)));
        temp_s0_2 = var_s0 + 0x10;
        M2C_FIELD(var_s0, s32 *, 0x10) = (s32) (temp_a0 | 0x30000000);
        M2C_FIELD(temp_s0_2, s32 *, 4) = (s32) (var_s3 & 0x0FFFFFFF);
        temp_s0_3 = temp_s0_2 + 0x10;
        M2C_FIELD(temp_s0_2, s32 *, 0x10) = 0x20000000;
        var_s3 += temp_a0 * 0x10;
        M2C_FIELD((void *)0x70002000, s32 **, 0x208) = (s32 *) (temp_s0_3 + 4);
        if (var_a3 != 0) {
            temp_v0 = M2C_FIELD((void *)0x70002000, s32 *, 0x1FC);
            temp_v1 = temp_v0 - 0x40;
            M2C_FIELD((void *)0x70002000, s32 *, 0x1FC) = temp_v1;
            M2C_FIELD(temp_s0_3, s32 *, 4) = (s32) (temp_v1 & 0x0FFFFFFF);
            *(s32 *)temp_v1 = 0x10000001;
            var_s0 = temp_v0 - 0x30;
            goto loop_2;
        }
    }
}
