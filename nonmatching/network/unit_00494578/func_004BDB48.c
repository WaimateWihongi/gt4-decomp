/* NON_MATCHING: functional draft, 135 of 141 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_004BC818(void *, s32, M2C_UNK);        /* extern */
s32 func_004BC978(s32, s32, void *, M2C_UNK);       /* extern */
s32 func_004BD9A8(s32, s32, s32, s32, s32);         /* extern */
M2C_UNK func_004BDAE8(s32, s32, void *, s32, s32 *, s32 *); /* extern */
s32 func_004C92D8(s32, s32, s32, s32);              /* extern */

s32 func_004BDB48(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5, s16 *arg6, s32 *arg7) {
    struct StackFrame_004BDB48 { s8 pad0[0x20]; s32 sp20; s32 sp24; s16 * sp28; s8 pad1[0x2]; s32 sp2C; s32 sp30; s8 pad2[0xC]; } sp_;
    s16 var_s0;
    s32 temp_a6;
    s32 temp_s3;
    s32 var_a0;
    s32 var_a1;
    s32 var_s1;
    s32 var_v0;
    s32 var_v1;
    u16 var_s6;

    sp_.sp28 = arg6;
    temp_s3 = arg1 & 0xFFFF;
    temp_a6 = temp_s3 & 0xFF00;
    *sp_.sp28 = 0;
    sp_.sp20 = 0;
    sp_.sp24 = 0;
    *arg7 = 0;
    sp_.sp2C = 0;
    sp_.sp30 = 0;
    if (temp_a6 == 0x200) {
        var_a0 = temp_s3 & 0xFF;
        var_s6 = M2C_FIELD(((var_a0 * 0x10) + M2C_FIELD(arg0, s32 *, 0x24)), u16 *, 0x48);
    } else {
        var_a0 = temp_s3 & 0xFF;
        var_s6 = M2C_FIELD(((var_a0 * 0x10) + M2C_FIELD(arg0, s32 *, 0x24)), u16 *, 0x58);
    }
    if (temp_a6 == 0x200) {
        var_v1 = M2C_FIELD(((var_a0 * 0x10) + M2C_FIELD(arg0, s32 *, 0x24)), s32 *, 0x40);
    } else {
        var_v1 = M2C_FIELD(((var_a0 * 0x10) + M2C_FIELD(arg0, s32 *, 0x24)), s32 *, 0x50);
    }
    var_s0 = arg5;
    var_s1 = var_v1 + (arg5 * 6) + arg4;
    if (var_s0 < (s32) var_s6) {
        var_a1 = var_s1;
loop_10:
        var_s1 += 6;
        func_004BC818(((s8 *)&sp_), var_a1, 2);
        if (func_004BC978(M2C_FIELD(arg0, s32 *, 0x24), temp_s3, ((s8 *)&sp_), 0) > 0) {
            func_004BDAE8(M2C_FIELD(arg0, s32 *, 0x24), temp_s3, ((s8 *)&sp_), arg4, &sp_.sp20, &sp_.sp24);
            if (sp_.sp24 < arg3) {
                if (sp_.sp30 == 0) {
                    goto block_26;
                }
                /* Duplicate return node #0x1.d000000000000p+4 Try simplifying control flow for better match */
                return sp_.sp2C;
            }
            if (arg4 == 0) {
                var_v0 = func_004C92D8(arg2, sp_.sp20, arg3, sp_.sp24);
            } else {
                var_v0 = func_004BD9A8(arg2, sp_.sp20, arg3, sp_.sp24, arg3);
            }
            if (var_v0 == 0) {
                sp_.sp2C += 1;
                if (sp_.sp30 == 0) {
                    *sp_.sp28 = var_s0;
                    sp_.sp30 = 1;
                }
                if (arg3 == sp_.sp24) {
                    *arg7 += 1;
                }
block_26:
                var_s0 += 1;
                goto block_27;
            }
            var_s0 += 1;
            if (var_v0 < 0) {
                goto block_28;
            }
block_27:
            var_a1 = var_s1;
            if (var_s0 >= (s32) var_s6) {
                goto block_28;
            }
            goto loop_10;
        }
        return 0x80001E7C;
    }
block_28:
    return sp_.sp2C;
}
