/* NON_MATCHING: functional draft, 193 of 198 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

u16 func_00528770(void *);
int func_005288E8(void);
int func_0052AB68(void *, void *, void *, unsigned short, int);
int func_0052AD00(int, int, u16, void *, void *);
s32 func_0052DD60(void *);
s32 func_00529770(void *arg0, void *arg1, u32 arg2, void *arg3) {
    s32 sp0;
    s32 sp1;
    struct StackFrame_00529770 { s8 pad0[0x11]; u8 sp11; u16 sp12; s32 sp14; void * sp18; s8 pad1[0x4]; } sp_;
    u8 sp10;                                        /* compiler-managed */
    s16 temp_v0_5;
    s32 temp_s2;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 var_s0;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_3;
    u16 *temp_v0_3;
    u16 temp_s6;
    u16 temp_s6_2;
    u16 temp_v0_4;
    u16 var_v0_2;
    u32 temp_v1;
    void *temp_a0;
    void *temp_s0;
    void *var_s1;

    var_v0 = 0xD2F2;
    var_s5 = 0;
    temp_s6 = arg2 & 0xFFFF;
    if (arg0 != NULL) {
        var_v0 = 0xD2F3;
        if ((arg1 != NULL) && (M2C_FIELD(arg1, s32 *, 0) == 0xD)) {
            var_v0 = 2;
            if (arg3 != NULL) {
                temp_v1 = M2C_FIELD(arg3, u32 *, 0x40);
                if (temp_v1 != 0) {
                    var_v0 = 2;
                    if ((u32) M2C_FIELD(arg0, u32 *, 0x5C) >= temp_v1) {
                        temp_a0 = arg1 + 0x14;
                        temp_v0_2 = func_005288E8() ^ 1;
                        sp_.sp18 = temp_a0;
                        temp_s6_2 = (temp_v0_2 != 0) ? (temp_s6 & 0x7FFF) : temp_s6;
                        var_s0 = func_0052DD60(temp_a0);
                        var_v0 = 3;
                        if (var_s0 != 0) {
                            do {
                                temp_v1_2 = M2C_FIELD(var_s0, s32 *, 0);
                                if (temp_v1_2 != 0) {
                                    var_s1 = (var_s0 != 0) ? (var_s0 + 8) : NULL;
                                } else {
                                    var_s1 = NULL;
                                }
                                if (var_s1 != NULL) {
                                    temp_v0_3 = ((temp_v1_2 ^ 0) == 0) ? NULL : (var_s0 + 0x18);
                                    if (temp_v0_3 != NULL) {
                                        temp_v0_4 = *temp_v0_3;
                                        temp_s4 = temp_v0_4 & 0x7FF;
                                        temp_s2 = temp_v0_4 & 0xF800;
                                        func_0052ADB8((void *) var_s0, &sp_.sp14);
                                        if ((M2C_FIELD(var_s1, u8 *, 0) == 0) && (M2C_FIELD(var_s1, u16 *, 0xC) & 0x8000) && (sp_.sp14 == 0) && !(temp_s2 & 0x1000)) {
                                            if ((var_s5 != 0) && (temp_s6_2 & 0x2000)) {
                                                var_s5 = (temp_s2 & 0x2000) ? 0 : var_s5;
                                            }
                                            if (!((temp_s2 ^ temp_s6_2) & 0xF000) && (var_s5 == 0)) {
                                                var_s5 = ((u32) M2C_FIELD(arg0, u32 *, 0x5C) >= (u32) (temp_s4 + M2C_FIELD(arg3, u32 *, 0x40))) ? var_s0 : var_s5;
                                            }
                                        }
                                    }
                                }
                                var_s0 = M2C_FIELD(var_s0, s32 *, 4);
                            } while (var_s0 != 0);
                            if (var_s5 != 0) {
                                temp_v0 = func_0052AD00((s32) arg0, (s32) sp_.sp18, temp_s6_2, (void *) var_s5, arg3);
                                if (temp_v0 != 0) {
                                    return temp_v0;
                                }
                                goto block_39;
                            }
                            func_0052AA88(arg0, arg1, temp_s6_2, (s32) M2C_FIELD(arg3, u32 *, 0x40), ((s8 *)&sp_));
                            sp10 = sp0;
                            sp_.sp11 = sp1;
                            temp_v0_5 = (u16) sp10 & 0xF800;
                            sp10 = temp_v0_5;
                            if (temp_v0_5 & 0x6000) {
                                var_v0_2 = 4;
                            } else {
                                var_v0_2 = 2;
                            }
                            sp_.sp12 = var_v0_2;
                            temp_v1_3 = M2C_FIELD(arg3, s32 *, 0x44);
                            temp_s0 = arg3 + 4;
                            if (temp_v1_3 < 8) {
                                temp_v1_4 = temp_v1_3 * 8;
                                *(s32 *)(arg3 + temp_v1_4) = ((s8 *)&sp_);
                                *(s32 *)(temp_s0 + temp_v1_4) = (s32) sp_.sp12;
                                M2C_FIELD(arg3, u32 *, 0x40) = (u32) (M2C_FIELD(arg3, u32 *, 0x40) + sp_.sp12);
                                M2C_FIELD(arg3, s32 *, 0x44) = (s32) (M2C_FIELD(arg3, s32 *, 0x44) + 1);
                            }
                            var_v0 = func_0052AB68(arg0, sp_.sp18, arg3, 0x8000U, 0);
                            temp_v1_5 = M2C_FIELD(arg3, s32 *, 0x44) - 1;
                            M2C_FIELD(arg3, s32 *, 0x44) = temp_v1_5;
                            M2C_FIELD(arg3, u32 *, 0x40) = (u32) (M2C_FIELD(arg3, u32 *, 0x40) - *(s32 *)(temp_s0 + (temp_v1_5 * 8)));
                            if ((var_v0 != 0) && (temp_s6_2 & 0x4000)) {
                                M2C_FIELD(arg1, u16 *, 0x74) = (u16) (M2C_FIELD(arg1, u16 *, 0x74) + 0xFFFF);
                            } else {
                                var_v0_3 = temp_s6_2 & 0x1000;
                                if (M2C_FIELD(arg1, u16 *, 0x5C) == 0) {
                                    var_v0_3 = temp_s6_2 & 0x1000;
                                    if (temp_s6_2 & 0x4000) {
                                        M2C_FIELD(arg1, u16 *, 0x5C) = func_00528770(((s8 *)&sp_));
block_39:
                                        var_v0_3 = temp_s6_2 & 0x1000;
                                    }
                                }
                                var_v0 = 0;
                                if (var_v0_3 != 0) {
                                    M2C_FIELD(arg1, s32 *, 0x7C) = (s32) (M2C_FIELD(arg1, s32 *, 0x7C) + 1);
                                    var_v0 = 0;
                                }
                            }
                            goto block_42;
                        }
                    }
                }
            }
        }
    }
block_42:
    return var_v0;
}
