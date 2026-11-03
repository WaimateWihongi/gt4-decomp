/* NON_MATCHING: functional draft, 156 of 171 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_001D42E0(void *, s32, s32);                /* extern */
s32 func_001D4500();                                /* extern */
M2C_UNK func_00430A58(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_00430C50(s32);                             /* extern */
s32 func_00430D20(s32, M2C_UNK *);                  /* extern */
M2C_UNK func_00575DA0(); /* extern */
M2C_UNK func_0057DA20(M2C_UNK *, s32, M2C_UNK, s32); /* extern */
s32 func_0057F238(M2C_UNK, M2C_UNK);                /* extern */

s32 func_001D4698(s32 arg0) {
    struct StackFrame_001D4698 { s8 pad0[0x4]; void * sp4; s32 sp8; s32 spC; s8 pad1[0x10]; s32 sp20; s8 pad2[0xC]; s32 sp30; } sp_;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a0;
    s32 var_a2;
    s32 var_a3;
    s32 var_fp;
    s32 var_s0;
    s32 var_s2;
    s8 *var_v1_2;
    s8 var_a1;
    u8 *var_v1;
    void *var_a4;

    sp_.sp4 = NULL;
    sp_.sp8 = 0;
    sp_.spC = 0;
    temp_v0 = func_001D42E0(((s8 *)&sp_), arg0, func_001D4500());
    sp_.sp20 = temp_v0;
    if (temp_v0 != 0) {
        if (sp_.sp4 == NULL) {
            return temp_v0;
        }
        func_00575DA0(sp_.sp4);
        return temp_v0;
    }
    var_s0 = 1;
    var_fp = 1;
    if (func_0057F238(0x68BB20, 0x695468) == 0) {
        var_a2 = 0;
        var_a4 = sp_.sp4;
        var_a0 = (~M2C_FIELD(sp_.sp4, s32 *, 0x70) * 0x204) + 0x170 + (~M2C_FIELD(sp_.sp4, s32 *, 0x74) * 0x44);
        var_a1 = 7;
        var_v1 = var_a4 + var_a0;
loop_7:
        var_a0 += 0x154;
        if (~*var_v1 & 0x80) {
            if (var_a2 != 0) {
                var_fp = 0;
            } else {
                var_s0 = 0;
            }
        }
        var_a1 -= 1;
        var_v1 = var_a4 + var_a0;
        if (var_a1 >= 0) {
            goto loop_7;
        }
        var_a2 += 1;
        if (var_a2 < 2) {
            var_a1 = 7;
            goto loop_7;
        }
    } else {
        var_v1_2 = ((func_0057F238(0x68BB20, 0x695448) == 0) ? 0x54 : 0x34) + sp_.sp4;
        var_a2 = 0;
        var_a4 = NULL;
        do {
            var_a1 = *var_v1_2;
            if (var_a2 < 6) {
                var_s0 = (var_a1 <= 0) ? 0 : var_s0;
            }
            temp_v0_2 = var_a2 < 0x19;
            var_a2 += 1;
            if (temp_v0_2 != 0) {
                var_fp = (var_a1 <= 0) ? 0 : var_fp;
            }
            var_v1_2 += 0x2E0;
        } while (var_a2 < 0x30);
    }
    var_s2 = 0;
    if ((var_s0 == 0) && (var_fp == 0)) {
        if (sp_.sp4 == NULL) {
            return 6;
        }
        func_00575DA0(sp_.sp4, var_a1, var_a2, sp_.sp4, var_a4);
        return 6;
    }
loop_36:
    if (var_fp != 0) {
        if (var_s2 >= 2) {

        } else {
            goto block_31;
        }
    } else if (var_s2 <= 0) {
block_31:
        var_a3 = 0;
        do {
            temp_s1 = var_a3 + 1;
            func_0057DA20(&sp_.sp30, 0x690000 + 0x54F0, (var_s2 == 0) ? 0x6954F8 : 0x695500, temp_s1);
            temp_v0_3 = func_00430D20(*(s32 *)0x622F4C + 0x13E28, &sp_.sp30);
            if (func_00430C50(temp_v0_3) == 0) {
                func_00430A58(temp_v0_3, 1, 0xC);
            }
            var_a3 = temp_s1;
        } while (var_a3 < 0x10);
        var_s2 += 1;
        goto loop_36;
    }
    if (sp_.sp4 != NULL) {
        func_00575DA0(sp_.sp4);
    }
    return 0;
}
