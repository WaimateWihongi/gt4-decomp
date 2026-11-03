/* NON_MATCHING: functional draft, 117 of 120 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

u16 func_005288E8();                                /* extern */
M2C_UNK func_0052AA88(void *, M2C_UNK, s32, u32, u8 *); /* extern */
s32 func_0052AB68(void *, void *, void *, s32, M2C_UNK); /* extern */
s32 func_0052AD00(void *, void *, s32, void *, void *); /* extern */
void *func_0052DD98(void *);                        /* extern */

s32 func_00529FD0(void *arg0, s32 arg1, void *arg2) {
    s32 sp11;
    u8 sp0;                                         /* compiler-managed */
    u8 sp1;
    u8 sp2;                                         /* compiler-managed */
    u8 sp3;
    u16 sp4;
    u16 sp6;
    u8 sp10;
    u8 sp20;                                        /* compiler-managed */
    u8 sp21;
    s16 temp_v0_3;
    s16 temp_v0_5;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_v0_6;
    s32 temp_v1_2;
    s32 var_v0;
    u16 temp_v0;
    u16 var_v0_2;
    u16 var_v0_3;
    u32 temp_v0_4;
    u32 temp_v1;
    void *temp_a1;
    void *temp_s3;
    void *temp_v0_2;
    void *temp_v1_3;

    var_v0 = 0xD2F2;
    temp_s2 = arg1 & 0xFFFF;
    sp6 = 0;
    if (arg0 != NULL) {
        var_v0 = 2;
        if (arg2 != NULL) {
            temp_v1 = M2C_FIELD(arg2, u32 *, 0x40);
            if (temp_v1 != 0) {
                if ((u32) M2C_FIELD(arg0, u32 *, 0x5C) < temp_v1) {
                    var_v0 = 2;
                    goto block_33;
                }
                var_v0 = 2;
                if (!(temp_s2 & 0x4000)) {
                    temp_v0 = func_005288E8();
                    var_v0 = 0;
                    if (temp_v0 == 2) {
                        temp_s2_2 = temp_s2 & 0x7FFF;
                        if (M2C_FIELD(arg0, s32 *, 0x34) != 0) {
                            if (temp_s2_2 & 0x1000) {
                                M2C_FIELD(arg0, s32 *, 0x44) = 1;
                            }
                            temp_s3 = arg0 + 0x24;
                            temp_v0_2 = func_0052DD98(temp_s3);
                            var_v0 = 3;
                            if (temp_v0_2 != NULL) {
                                temp_a1 = temp_v0_2 + 0x18;
                                sp0 = M2C_FIELD(temp_v0_2, u8 *, 0x18);
                                sp1 = M2C_FIELD(temp_a1, u8 *, 1);
                                sp0 = (u16) sp0 & 0x7FF;
                                sp2 = M2C_FIELD(temp_v0_2, u8 *, 0x18);
                                sp3 = M2C_FIELD(temp_a1, u8 *, 1);
                                temp_v0_3 = (u16) sp2 & 0xF800;
                                sp2 = temp_v0_3;
                                if (temp_v0_3 & 0x6000) {
                                    sp4 = 4;
                                } else {
                                    sp4 = temp_v0;
                                }
                                var_v0_2 = 4;
                                if (!(temp_s2_2 & 0x6000)) {
                                    var_v0_2 = 2;
                                }
                                sp6 = var_v0_2;
                                temp_v0_4 = M2C_FIELD(temp_v0_2, u32 *, 0);
                                if (temp_v0_4 != 0) {
                                    if ((sp4 < temp_v0_4) && (sp4 >= sp6)) {
                                        if ((u32) M2C_FIELD(arg0, u32 *, 0x5C) >= (u32) (sp0 + M2C_FIELD(arg2, u32 *, 0x40) + sp4)) {
                                            var_v0 = func_0052AD00(arg0, temp_s3, temp_s2_2, temp_v0_2, arg2);
                                            if (var_v0 == 0) {
                                                return 0;
                                            }
                                            /* Duplicate return node #0x1.1000000000000p+5 Try simplifying control flow for better match */
                                            return var_v0;
                                        }
                                        goto block_26;
                                    }
                                    goto block_25;
                                }
block_25:
block_26:
                                func_0052AA88(arg0, 0, temp_s2_2, M2C_FIELD(arg2, u32 *, 0x40), &sp10);
                                sp20 = sp10;
                                sp21 = sp11;
                                temp_v0_5 = (u16) sp20 & 0xF800;
                                sp20 = temp_v0_5;
                                if (temp_v0_5 & 0x6000) {
                                    var_v0_3 = 4;
                                } else {
                                    var_v0_3 = 2;
                                }
                                sp4 = var_v0_3;
                                temp_v1_2 = M2C_FIELD(arg2, s32 *, 0x44);
                                if (temp_v1_2 < 8) {
                                    temp_v1_3 = arg2 + (temp_v1_2 * 8);
                                    M2C_FIELD(temp_v1_3, s32 *, 4) = (s32) sp4;
                                    M2C_FIELD(temp_v1_3, u8 **, 0) = &sp10;
                                    M2C_FIELD(arg2, u32 *, 0x40) = (u32) (M2C_FIELD(arg2, u32 *, 0x40) + sp4);
                                    M2C_FIELD(arg2, s32 *, 0x44) = (s32) (M2C_FIELD(arg2, s32 *, 0x44) + 1);
                                }
                                var_v0 = func_0052AB68(arg0, temp_s3, arg2, temp_s2_2, 0);
                                if (var_v0 == 0) {
                                    temp_v0_6 = M2C_FIELD(arg2, s32 *, 0x44) - 1;
                                    M2C_FIELD(arg2, s32 *, 0x44) = temp_v0_6;
                                    M2C_FIELD(arg2, u32 *, 0x40) = (u32) (M2C_FIELD(arg2, u32 *, 0x40) - M2C_FIELD((arg2 + (temp_v0_6 * 8)), s32 *, 4));
                                    var_v0 = 0;
                                }
                                goto block_33;
                            }
                            goto block_33;
                        }
                    }
                }
                goto block_33;
            }
        }
    }
block_33:
    return var_v0;
}
