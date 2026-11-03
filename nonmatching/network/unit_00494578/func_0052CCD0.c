/* NON_MATCHING: functional draft, 9 of 9 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

u16 func_00528770();                  /* extern */
void *func_0052DD60(void *);                        /* extern */

s32 func_0052CCD0(void *arg0, void *arg1, s32 *arg2) {
    u8 sp0;                                         /* compiler-managed */
    u8 sp1;
    u8 sp2;                                         /* compiler-managed */
    u8 sp3;
    s16 temp_v0_2;
    s32 var_v0;
    u16 temp_s1;
    u16 temp_v0;
    u16 temp_v0_3;
    u16 temp_v1;
    u16 temp_v1_2;
    void *temp_a1;
    void *var_a0;
    void *var_s0;

    var_v0 = 2;
    *arg2 = 0;
    if (arg0 != NULL) {
        sp0 = M2C_FIELD(arg1, u8 *, 0);
        sp1 = M2C_FIELD(arg1, u8 *, 1);
        temp_v0 = (u16) sp0 & 0xF800;
        sp0 = temp_v0;
        if (M2C_FIELD(arg0, s32 *, 0) != 0) {
            if (temp_v0 & 0x4000) {
                temp_v1 = M2C_FIELD(arg0, u16 *, 0x78);
                temp_s1 = func_00528770(arg1);
                if (temp_v1 >= 0x7FFFU) {
                    if ((temp_v1 - 0x7FFF) >= (s32) temp_s1) {
                        var_a0 = arg0 + 0x2C;
                        goto block_17;
                    }
                    if (temp_v1 < temp_s1) {
                        var_a0 = arg0 + 0x2C;
                        goto block_17;
                    }
                    goto block_15;
                }
                if (temp_v1 < temp_s1) {
                    if ((M2C_FIELD(arg0, u16 *, 0x78) + 0x7FFF) >= (s32) temp_s1) {
                        var_a0 = arg0 + 0x2C;
block_17:
                        var_s0 = func_0052DD60(var_a0);
loop_19:
                        var_v0 = 0;
                        if (var_s0 != NULL) {
                            temp_a1 = var_s0 + 8;
                            if (M2C_FIELD(var_s0, s32 *, 0) != 0) {
                                sp2 = M2C_FIELD(var_s0, u8 *, 8);
                                sp3 = M2C_FIELD(temp_a1, u8 *, 1);
                                temp_v0_2 = (u16) sp2 & 0xF800;
                                sp2 = temp_v0_2;
                                if ((sp0 & 0x4000) && (temp_v0_2 & 0x4000) && (temp_s1 == func_00528770(temp_a1, temp_a1))) {
                                    *arg2 = 1;
                                    goto block_30;
                                }
                            }
                            var_s0 = M2C_FIELD(var_s0, void **, 4);
                            goto loop_19;
                        }
                        /* Duplicate return node #0x1.f000000000000p+4 Try simplifying control flow for better match */
                        return var_v0;
                    }
                    goto block_15;
                }
block_15:
                *arg2 = 1;
                return 0;
            }
            var_v0 = 0;
            if (sp0 & 0x2000) {
                temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x76);
                if (!((temp_v1_2 - func_00528770(arg1)) & 0x8000) && (*arg2 = 1, (((u32) (temp_v1_2 & 0xFFFF) < 0x7FFFU) != 0))) {
                    var_v0 = 0;
                    if (func_00528770(arg1) & 0x8000) {
                        temp_v0_3 = func_00528770(arg1);
                        *arg2 = 0;
                        M2C_FIELD(arg0, u16 *, 0x76) = temp_v0_3;
                        goto block_30;
                    }
                } else {
                    goto block_30;
                }
            }
            /* Duplicate return node #0x1.f000000000000p+4 Try simplifying control flow for better match */
            return var_v0;
        }
block_30:
        var_v0 = 0;
        /* Duplicate return node #0x1.f000000000000p+4 Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
