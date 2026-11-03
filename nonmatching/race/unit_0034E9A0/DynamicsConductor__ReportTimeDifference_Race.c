/* NON_MATCHING: functional draft, 153 of 159 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void *func_0034C190(void *, s8);                    /* extern */
M2C_UNK func_0035E898(void *, s8);                  /* extern */
M2C_UNK func_0035E8A0(void *, s8);                  /* extern */
M2C_UNK func_0035E8A8(void *, s8);                  /* extern */
M2C_UNK func_0035E8B0(void *, s8, s32);             /* extern */
M2C_UNK func_0035E8B8(void *, s8, s32);             /* extern */
M2C_UNK func_0035E8D0(void *, s8, s32);             /* extern */

void func_00359238(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    void *spC;
    s8 *sp10;
    s32 sp14;
    s32 sp18;
    s32 temp_a0;
    s32 temp_s4;
    s32 temp_s6;
    s32 temp_v1_3;
    s8 temp_s0;
    s8 temp_v0;
    s8 temp_v1_2;
    s8 var_s2;
    s8 var_s7;
    void *temp_s5;
    void *temp_v0_2;
    void *temp_v1;
    void *var_v0;

    sp0 = 0;
    sp14 = 0xCDE0;
    sp18 = 0;
loop_21:
    temp_v1 = M2C_FIELD(arg0, void **, 0x10140);
    temp_s5 = arg0 + 0xC;
    if (sp0 < M2C_FIELD((temp_v1 + 0x150), s32 (**)(void *), 4)(arg0 + M2C_FIELD(temp_v1, s16 *, 0x150))) {
        temp_a0 = sp0 + 0xD400;
        temp_v0 = M2C_FIELD((sp0 + temp_s5), s8 *, 0xD440);
        temp_v1_2 = *(s8 *)(temp_s5 + temp_a0);
        if (temp_v0 != temp_v1_2) {
            var_s2 = temp_v0;
            if (var_s2 < temp_v1_2) {
                sp4 = temp_a0;
                spC = temp_s5;
                sp10 = temp_s5 + (sp18 + 0xD480);
                sp8 = sp14;
                do {
                    temp_v1_3 = var_s2 + sp18;
                    temp_s0 = M2C_FIELD((temp_v1_3 + temp_s5), s8 *, 0xD480);
                    temp_s4 = temp_v1_3 * 4;
                    if (var_s2 == 0) {
                        func_0035E898(arg0, temp_s0);
                        var_s7 = 1;
                        func_0035E8A8(arg0, temp_s0);
                    } else {
                        temp_s6 = M2C_FIELD((temp_s4 + temp_s5), s32 *, 0xCDE0);
                        var_s7 = var_s2 + 1;
                        var_v0 = temp_s4 + temp_s5;
                        if (var_s7 >= M2C_FIELD(func_0034C190(arg0, temp_s0), s8 *, 0x5B3)) {
                            func_0035E8D0(arg0, temp_s0, temp_s6 - *(s32 *)(temp_s5 + sp8));
                            var_v0 = temp_s4 + temp_s5;
                        }
                        func_0035E8B0(arg0, temp_s0, temp_s6 - M2C_FIELD(var_v0, s32 *, 0xCDDC));
                        if (var_s2 == (M2C_FIELD(arg0, s32 *, 0xF8A0) - 1)) {
                            func_0035E8A0(arg0, temp_s0);
                        } else {
                            func_0035E8A8(arg0, temp_s0);
                        }
                        if (var_s2 == 1) {
                            if (M2C_FIELD(func_0034C190(arg0, temp_s0), s8 *, 0x5B3) == 2) {
                                func_0035E8B8(arg0, *sp10, M2C_FIELD((((sp18 + var_s2) * 4) + spC), s32 *, 0xCDDC) - temp_s6);
                            }
                        }
                    }
                    var_s2 = var_s7;
                } while (var_s2 < *(s32 *)(temp_s5 + sp4));
            }
            temp_v0_2 = sp0 + temp_s5;
            M2C_FIELD(temp_v0_2, u8 *, 0xD440) = (u8) M2C_FIELD(temp_v0_2, u8 *, 0xD400);
        }
        sp14 += 0x18;
        sp18 += 6;
        sp0 += 1;
        goto loop_21;
    }
}
