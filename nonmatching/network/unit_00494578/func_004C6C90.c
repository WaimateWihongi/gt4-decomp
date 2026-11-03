/* NON_MATCHING: functional draft, 130 of 155 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void *func_004C6C30(void *, s16 *, s32 *);          /* extern */
s32 func_004C6F00(void *, s32, s32, M2C_UNK *, void **, void *); /* extern */
s32 func_004C86E0(s32, M2C_UNK);                    /* extern */
s32 func_004C8ED0(s32);                             /* extern */
M2C_UNK func_004C9428(M2C_UNK *, s32, s32);         /* extern */

s32 func_004C6C90(void *arg0, s32 arg1, s32 arg2, M2C_UNK *arg3, s32 arg4, void **arg5, s16 *arg6, s32 *arg7, void **arg_sp0, void *arg_sp8) {
    M2C_UNK sp10;
    s16 sp40;
    void *sp44;
    s32 sp48;
    s32 sp4C;
    s16 temp_a0;
    s16 temp_v0_2;
    s32 temp_a1_2;
    s32 temp_fp;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_a1;
    s32 var_v0;
    s32 var_v0_2;
    u8 temp_a1;
    u8 temp_v0;
    void *temp_v0_4;
    void *var_s0;
    void *var_s0_2;
    void *var_s1;

    sp4C = arg4;
    temp_fp = func_004C8ED0(arg1);
    if ((*arg5 != NULL) || ((var_v0 = func_004C6F00(arg0, arg1, arg2, arg3, arg5, arg_sp8), (var_v0 >= 0)) && (var_v0 = 0x80000A01, (*arg5 != NULL)))) {
        var_s0 = *arg5;
        if (sp4C == 0) {
            *arg_sp0 = func_004C6C30(*arg5, arg6, arg7);
            return 0;
        }
        var_s1 = NULL;
        var_a1 = 0;
        if (var_s0 != NULL) {
            do {
                temp_v0 = M2C_FIELD(var_s0, u8 *, 0x11);
                sp48 = (s32) temp_v0;
                if (temp_v0 == temp_fp) {
                    temp_v0_2 = M2C_FIELD(var_s0, s16 *, 0x12);
                    sp40 = temp_v0_2;
                    if (var_s1 != NULL) {
                        var_v0_2 = temp_v0_2 << 0x10;
                        if (var_a1 < temp_v0_2) {
                            goto block_12;
                        }
                    } else {
                        var_v0_2 = temp_v0_2 << 0x10;
block_12:
                        var_a1 = var_v0_2 >> 0x10;
                        var_s1 = var_s0;
                    }
                }
                var_s0 = M2C_FIELD(var_s0, void **, 0x1C);
            } while (var_s0 != NULL);
        }
        var_v0 = 0;
        if (var_s1 != NULL) {
            *arg7 = (s32) M2C_FIELD(var_s1, u8 *, 0x11);
            *arg6 = (s16) M2C_FIELD(var_s1, u16 *, 0x12);
            goto block_29;
        }
        var_s0_2 = *arg5;
        if (var_s0_2 != NULL) {
loop_19:
            temp_v0_3 = func_004C86E0(M2C_FIELD(arg0, s32 *, 0x24), 1);
            if (temp_v0_3 != 0) {
                func_004C9428(&sp10, temp_v0_3, arg2);
                sp48 = 0;
                sp40 = 0;
                temp_a1 = M2C_FIELD(var_s0_2, u8 *, 0x11);
                temp_v0_4 = M2C_FIELD(var_s0_2, void **, 0x18);
                var_v0 = func_004C6C90(arg0, arg1 + (temp_a1 * 2), arg2, &sp10, sp4C - 1, &arg5[temp_a1], &sp40, &sp48, &sp44, (temp_v0_4 == NULL) ? var_s0_2 : temp_v0_4);
                if (var_v0 >= 0) {
                    temp_a1_2 = sp48 + M2C_FIELD(var_s0_2, u8 *, 0x11);
                    sp48 = temp_a1_2;
                    temp_a0 = (u16) sp40 + M2C_FIELD(var_s0_2, u16 *, 0x12);
                    sp40 = temp_a0;
                    if ((var_s1 == NULL) || (temp_v1 = *arg7, ((temp_v1 < temp_a1_2) != 0)) || ((temp_a1_2 == temp_v1) && (*arg6 < temp_a0))) {
                        *arg7 = temp_a1_2;
                        var_s1 = var_s0_2;
                        *arg6 = temp_a0;
                    }
                    var_s0_2 = M2C_FIELD(var_s0_2, void **, 0x1C);
                    if (var_s0_2 == NULL) {
                        goto block_28;
                    }
                    goto loop_19;
                }
                /* Duplicate return node #0x1.e000000000000p+4 Try simplifying control flow for better match */
                return var_v0;
            }
            return 0x80000501;
        }
block_28:
        var_v0 = 0;
block_29:
        *arg_sp0 = var_s1;
        /* Duplicate return node #0x1.e000000000000p+4 Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
