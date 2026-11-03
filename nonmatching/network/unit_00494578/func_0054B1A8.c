/* NON_MATCHING: functional draft, 150 of 210 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00549858(void *, s32, s32);            /* extern */
s32 func_0054A370(s32);                             /* extern */
s32 func_0054A8A8(s32, s32);                        /* extern */
s32 func_00561F68(s32, s32, void *, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_00576788(s32);                         /* extern */
M2C_UNK func_005767C0(s32);                         /* extern */
s32 func_0057F238(void *, void *, s32, M2C_UNK);    /* extern */
M2C_UNK func_005A48D8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_005A609C(void *, void *);              /* extern */

s32 func_0054B1A8(s32 arg0, void *arg1, void *arg2, s32 arg3, u32 arg4) {
    void *sp0;
    s32 sp4;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s4;
    s32 var_s5;
    u32 temp_s6;
    u32 var_s2_3;
    u32 var_s7;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_s3;
    void *var_a0;
    void *var_s0;
    void *var_s1;

    var_s1 = arg2;
    var_s7 = arg4;
    sp0 = arg1;
    sp4 = 1;
    func_00576788(*(s32 *)0x64C3E4 + 0x34);
    if (func_0054A370(arg0) != 0) {
        temp_a0 = (s32) ((arg0 < 0) ? (arg0 + 3) : arg0) >> 2;
        temp_a2 = *(s32 *)0x64C3E4;
        sp4 = 8;
        temp_s3 = ((((arg0 - (temp_a0 * 4)) * 0x1B) + (temp_a0 * 0x6F)) * 4) + temp_a2 + 0x78;
        M2C_FIELD(temp_s3, s32 *, 0x44) = 0;
        if (*(s32 *)0x64C400 != arg0) {
            *(s32 *)0x64C400 = arg0;
            M2C_FIELD(temp_s3, s32 *, 0x40) = 0x7FFFFFFF;
        }
        if (func_0057F238(temp_s3, sp0, temp_a2, 0x64C400) != 0) {
            func_005A609C(temp_s3, sp0);
            M2C_FIELD(temp_s3, s32 *, 0x40) = 0x7FFFFFFF;
        }
        var_s2 = arg3 - M2C_FIELD(temp_s3, s32 *, 0x40);
        var_s5 = arg3 == 0;
        if (var_s2 < 0) {
            M2C_FIELD(temp_s3, s32 *, 0x40) = 0;
            var_s2 = arg3;
            var_s5 = 1;
        }
        if (var_s2 != 0) {
loop_9:
            temp_s0 = (var_s2 < 0x21) ? var_s2 : 0x20;
            temp_a3 = var_s5 ^ 1;
            var_s5 = 0;
            var_s4 = func_00561F68(M2C_FIELD(temp_s3, s32 *, 0x4C), M2C_FIELD(temp_s3, s32 *, 0x50), sp0, temp_a3, temp_s0, 0x86DE00);
            var_s2 -= var_s4;
            if (var_s4 == temp_s0) {
                M2C_FIELD(temp_s3, s32 *, 0x40) = (s32) (M2C_FIELD(temp_s3, s32 *, 0x40) + var_s4);
                if (var_s2 == 0) {
                    goto block_11;
                }
                goto loop_9;
            }
        } else {
block_11:
loop_12:
            func_005A48D8((void *)0x86DE00, 0, 0x800);
            temp_s6 = (var_s7 < 0x21U) ? var_s7 : 0x20U;
            var_s4 = func_00561F68(M2C_FIELD(temp_s3, s32 *, 0x4C), M2C_FIELD(temp_s3, s32 *, 0x50), sp0, var_s5 ^ 1, (s32) temp_s6, 0x86DE00);
            if (var_s4 >= 0) {
                var_s0 = (void *)0x86DE00;
                if (var_s4 > 0) {
                    var_s2_2 = var_s4;
                    do {
                        var_s2_2 -= 1;
                        func_005A48D8(var_s1, 0, 0x40);
                        temp_a0_2 = var_s1 + 0x1C;
                        temp_a1 = var_s0 + 0x20;
                        M2C_FIELD(var_s1, u8 *, 1) = (u8) M2C_FIELD(var_s0, u8 *, 1);
                        M2C_FIELD(var_s1, u8 *, 2) = (u8) M2C_FIELD(var_s0, u8 *, 2);
                        M2C_FIELD(var_s1, u8 *, 3) = (u8) M2C_FIELD(var_s0, u8 *, 3);
                        M2C_FIELD(var_s1, u8 *, 4) = (u8) M2C_FIELD(var_s0, u8 *, 4);
                        M2C_FIELD(var_s1, u8 *, 5) = (u8) M2C_FIELD(var_s0, u8 *, 5);
                        M2C_FIELD(var_s1, u16 *, 6) = (u16) M2C_FIELD(var_s0, u16 *, 6);
                        M2C_FIELD(var_s1, u8 *, 9) = (u8) M2C_FIELD(var_s0, u8 *, 9);
                        M2C_FIELD(var_s1, u8 *, 0xA) = (u8) M2C_FIELD(var_s0, u8 *, 0xA);
                        M2C_FIELD(var_s1, u8 *, 0xB) = (u8) M2C_FIELD(var_s0, u8 *, 0xB);
                        M2C_FIELD(var_s1, u8 *, 0xC) = (u8) M2C_FIELD(var_s0, u8 *, 0xC);
                        M2C_FIELD(var_s1, u8 *, 0xD) = (u8) M2C_FIELD(var_s0, u8 *, 0xD);
                        M2C_FIELD(var_s1, u16 *, 0xE) = (u16) M2C_FIELD(var_s0, u16 *, 0xE);
                        M2C_FIELD(var_s1, s32 *, 0x10) = (s32) M2C_FIELD(var_s0, s32 *, 0x10);
                        M2C_FIELD(var_s1, u16 *, 0x14) = (u16) M2C_FIELD(var_s0, u16 *, 0x14);
                        temp_v1 = M2C_FIELD(var_s0, s32 *, 0x1C);
                        var_s0 += 0x40;
                        M2C_FIELD(var_s1, s32 *, 0x18) = temp_v1;
                        var_s1 += 0x40;
                        func_005A609C(temp_a0_2, temp_a1);
                        M2C_FIELD(temp_s3, s32 *, 0x44) = (s32) (M2C_FIELD(temp_s3, s32 *, 0x44) + 1);
                        M2C_FIELD(temp_s3, s32 *, 0x40) = (s32) (M2C_FIELD(temp_s3, s32 *, 0x40) + 1);
                    } while (var_s2_2 != 0);
                }
                var_s5 = 0;
                var_s7 -= temp_s6;
                if ((var_s4 != temp_s6) || (var_s7 == 0)) {
                    var_s2_3 = 0;
                    if (var_s7 != 0) {
                        var_a0 = var_s1;
loop_20:
                        var_s1 += 0x40;
                        var_s2_3 += 1;
                        func_005A48D8(var_a0, 0, 0x40);
                        if (var_s2_3 < var_s7) {
                            var_a0 = var_s1;
                            goto loop_20;
                        }
                    }
                } else {
                    goto loop_12;
                }
            }
        }
        temp_v0 = func_0054A8A8((var_s4 >= 0) ? 0 : sp4, var_s4);
        sp4 = temp_v0;
        func_00549858(temp_s3, var_s4, temp_v0);
    }
    func_005767C0(*(s32 *)0x64C3E4 + 0x34);
    return sp4;
}
