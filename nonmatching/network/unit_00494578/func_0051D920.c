/* NON_MATCHING: functional draft, 154 of 159 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0051BDF8(void **, void *);                 /* extern */
void *func_0051D838(u32, u32, u32);                 /* extern */
s32 func_0051FD80(u32);                             /* extern */
s32 func_00538BF8();           /* extern */
M2C_UNK func_00538C68(M2C_UNK);                     /* extern */
M2C_UNK func_005A4724(void **, void **, s32);       /* extern */

s32 func_0051D920(u32 *arg0, u32 arg1, u32 arg2, u32 arg3) {
    struct StackFrame_0051D920 { void ** sp0; void * sp4; s8 pad0[0x8]; } sp_;
    s32 *var_s4;
    s32 temp_s5;
    s32 temp_s7;
    s32 var_v0;
    u32 temp_a0;
    u32 temp_s2;
    u32 temp_s3;
    u32 var_s1;
    u32 var_s2;
    u32 var_s3;
    void **temp_a0_2;
    void **temp_a1;
    void *temp_v0;
    void *temp_v0_2;

    var_v0 = 2;
    temp_s7 = arg1 < 2U;
    var_s1 = 0;
    var_s2 = arg2;
    var_s3 = arg3;
    sp_.sp0 = NULL;
    if ((temp_s7 != 0) && (var_s2 != 0) && (var_s3 != 0)) {
        temp_a0 = *(u32 *)0x64AE10;
        var_s4 = (u32 *)0x650000 - 0x51F0;
        if ((temp_a0 != 0) && (temp_a0 != 0) && (**(void ***)0x64AE14 != NULL)) {
loop_6:
            var_s1 += 1;
            if (var_s1 < temp_a0) {
                if (*((var_s1 * 4) + *(void ***)0x64AE14) == 0) {

                } else {
                    goto loop_6;
                }
            }
            var_s4 = (u32 *)0x650000 - 0x51F0;
        }
        if (var_s1 == *var_s4) {
            temp_s5 = var_s1 + 0xA;
            sp_.sp0 = NULL;
            var_v0 = func_00538BF8(((s8 *)&sp_), (u64) ((temp_s5 * 4) << 0x20) >> 0x20, 0x650000);
            if (var_v0 == 0) {
                temp_a1 = *(void ** *)(void ** *)0x64AE14;
                if (temp_a1 != NULL) {
                    func_005A4724(sp_.sp0, temp_a1, *var_s4 * 4);
                    func_00538C68(0x64AE14);
                }
                *var_s4 = temp_s5;
                *(s32 *)0x64AE14 = sp_.sp0;
                goto block_16;
            }
        } else {
block_16:
            var_v0 = func_00538BF8(&sp_.sp4, 0x9CU);
            if (var_v0 == 0) {
                temp_a0_2 = *(void ** *)(void ** *)0x64AE14;
                temp_a0_2[var_s1] = sp_.sp4;
                M2C_FIELD(sp_.sp4, u32 *, 0) = var_s1;
                M2C_FIELD(sp_.sp4, u32 *, 4) = arg1;
                M2C_FIELD(sp_.sp4, s32 *, 0x60) = func_0051BDF8(temp_a0_2, sp_.sp4);
                M2C_FIELD(sp_.sp4, s32 *, 8) = 0;
                if (arg1 == 1) {
                    var_s2 = var_s2 >> 1;
                    var_s3 = var_s3 >> 1;
                }
                temp_s2 = (var_s2 < 0x248U) ? 0x248U : var_s2;
                temp_s3 = (var_s3 < 0x248U) ? 0x248U : var_s3;
                if (temp_s7 != 0) {
                    temp_v0 = func_0051D838(var_s1, temp_s2, temp_s3);
                    var_v0 = 0x64;
                    if (temp_v0 != NULL) {
                        M2C_FIELD(temp_v0, s32 *, 0) = 0;
                        M2C_FIELD(temp_v0, s32 *, 0xC) = (s32) M2C_FIELD(sp_.sp4, s32 *, 0x60);
                        M2C_FIELD(sp_.sp4, void **, 0x78) = temp_v0;
                        goto block_22;
                    }
                } else {
block_22:
                    if (arg1 == 1) {
                        temp_v0_2 = func_0051D838(var_s1, temp_s2, temp_s3);
                        var_v0 = 0x64;
                        if (temp_v0_2 != NULL) {
                            M2C_FIELD(temp_v0_2, u32 *, 0) = arg1;
                            M2C_FIELD(temp_v0_2, s32 *, 0xC) = (s32) M2C_FIELD(sp_.sp4, s32 *, 0x60);
                            M2C_FIELD(sp_.sp4, void **, 0x7C) = temp_v0_2;
                            goto block_25;
                        }
                    } else {
block_25:
                        var_v0 = func_0051FD80(temp_s2);
                        if (var_v0 == 0) {
                            var_v0 = func_0051FD80(temp_s3);
                            if (var_v0 == 0) {
                                *arg0 = var_s1;
                                M2C_FIELD(sp_.sp4, s32 *, 8) = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return var_v0;
}
