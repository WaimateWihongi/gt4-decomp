/* NON_MATCHING: functional draft, 121 of 126 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_004C8ED0(u16 *);                           /* extern */
M2C_UNK func_004C8F08(s16 *, u16 *);                /* extern */
s32 func_004C9330(s32);                             /* extern */

void func_004C53E8(s16 *arg0, s32 arg1, s32 arg2, u32 arg3) {
    struct StackFrame_004C53E8 { s8 pad0[0x50]; } sp_;
    s32 temp_a0;
    s32 temp_a4;
    s32 temp_a5;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_a0;
    s32 var_a3;
    u16 *temp_a0_2;
    u16 *var_s0;
    u16 var_a6;
    u16 var_v0;
    u8 *var_a2;
    u8 *var_v1;
    u8 temp_a1;
    u8 temp_v0_2;
    void *var_s2;

    var_s0 = ((s8 *)&sp_);
    if (arg2 == 0xD) {
        var_s2 = (void *)0x6B9980;
    } else {
        var_s2 = (void *)0x6B9998;
    }
    temp_v0 = func_004C9330(arg1);
    temp_a0 = arg1 + temp_v0;
    temp_v0_2 = *(u8 *)(temp_a0 - 1);
    if (temp_v0_2 != 0x30) {
        *((s8 *)&sp_) = M2C_FIELD((var_s2 + (temp_v0_2 * 2)), u16 *, -0x60);
        var_s0 = ((s8 *)&sp_) + 2;
    }
    var_a3 = 1;
    var_a2 = temp_a0 - 2;
    if (temp_v0 > 1) {
        do {
            temp_a1 = *var_a2;
            var_a6 = 0;
            if (temp_a1 != 0x30) {
                var_a6 = M2C_FIELD((var_s2 + (temp_a1 * 2)), u16 *, -0x60);
            }
            temp_a5 = var_a3 + 3;
            temp_a4 = var_a3 < 0;
            temp_v0_3 = var_a3 - (((s32) ((temp_a4 != 0) ? temp_a5 : var_a3) >> 2) * 4);
            var_v1 = var_a2;
            if (temp_v0_3 == 0) {
                var_a0 = 0;
                if ((var_a2 != arg1) && (temp_a1 == 0x30)) {
loop_13:
                    var_a0 += 1;
                    var_v1 -= 1;
                    if ((var_a0 < 4) && (var_v1 != arg1)) {
                        if (*var_v1 == 0x30) {
                            goto loop_13;
                        }
                    }
                }
                if (var_a0 != 4) {
                    temp_a0_2 = var_s0;
                    var_s0 += 2;
                    *temp_a0_2 = M2C_FIELD(((((s32) ((temp_a4 != 0) ? temp_a5 : var_a3) >> 2) * 2) + 0x6B99B0), u16 *, 2);
                    if (var_a6 != 0) {
                        goto block_27;
                    }
                }
            } else if (temp_a1 != 0x30) {
                if (temp_v0_3 != 1) {
                    var_v0 = M2C_FIELD(((temp_v0_3 * 2) + 0x6B99B0), u16 *, -4);
                } else {
                    var_v0 = M2C_FIELD(var_s2, u16 *, 0x14);
                }
                *var_s0 = var_v0;
                var_s0 += 2;
                if (*var_a2 != 0x31) {
block_27:
                    *var_s0 = var_a6;
                    var_s0 += 2;
                }
            }
            var_a3 += 1;
            var_a2 -= 1;
        } while (var_a3 < temp_v0);
    }
    *var_s0 = 0;
    if (arg3 < (u32) ((func_004C8ED0(((s8 *)&sp_)) * 2) + 2)) {
        *arg0 = 0;
        return;
    }
    func_004C8F08(arg0, ((s8 *)&sp_));
}
