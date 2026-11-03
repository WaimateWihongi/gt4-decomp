/* NON_MATCHING: functional draft, 148 of 161 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

int func_0053B6E8(char *, char *, int, int *);
int func_0053BB70(char *, int, void *);
int func_0053EF68(char *);
int func_00540BF8(void **, unsigned int, int);
s32 func_0057F260(const char *);
s32 func_0053E588(s8 *arg0, s32 arg1, s32 arg2) {
    struct StackFrame_0053E588 { s8 pad0[0x10]; s64 sp10; s8 pad1[0x8]; s32 sp20; s8 pad2[0xC]; s32 sp30; s32 sp34; s8 pad3[0x8]; } sp_;
    M2C_UNK (*temp_a1_2)(s32, M2C_UNK);
    s32 var_s0;
    s32 var_v0;
    u32 var_a1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_v0;
    void *temp_v1;

    var_v0 = 2;
    if (arg0 != NULL) {
        var_v0 = 0xD6DA;
        if (M2C_FIELD(arg0, s32 *, 0x3C) == 0) {
            var_v0 = 2;
            if (arg2 != 0) {
                var_v0 = 0x64;
                if (func_0053EF68(arg0) == 0) {
                    if (!(arg1 & 0x1000) || (*(s32 *)0x64C11C != 0)) {
                        if ((arg1 & 0x800) && (*(s32 *)0x64C120 == 0)) {
                            goto block_9;
                        }
                        goto block_28;
                    }
block_9:
                    var_v0 = func_0053BB70((s8 *)0x86B540, arg1, M2C_FIELD(arg0, void **, 0x44) + 0x207C);
                    if (var_v0 == 0) {
                        temp_a0 = M2C_FIELD(arg0, void **, 0x44);
                        var_v0 = func_0053B6E8(temp_a0 + 0x207C, temp_a0 + 0x287C, (s32) &sp_.sp10, &sp_.sp30);
                        if (var_v0 == 0) {
                            var_v0 = 0xD6DD;
                            if (arg1 & *(s32 *)0x86B540) {
                                if (arg1 == 0x1000) {
                                    var_a1 = 8;
                                    *(s32 *)0x86C848 = 0;
                                    goto block_17;
                                }
                                var_v0 = 2;
                                if (arg1 == 0x800) {
                                    var_a1 = 7;
                                    *(s32 *)0x86C850 = 0;
block_17:
                                    temp_v0 = M2C_FIELD(arg0, void **, 0x44);
                                    M2C_FIELD(temp_v0, s32 *, 0x2034) = 0;
                                    M2C_FIELD(temp_v0, s32 *, 0x2044) = 0;
                                    var_v0 = func_00540BF8(temp_v0 + 4, var_a1, M2C_FIELD(arg0, s32 *, 0x48));
                                    if (var_v0 == 0) {
                                        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), void **, 4) != NULL) {
                                            func_005A48D8(((s8 *)&sp_), 0, 0xC);
                                            var_s0 = M2C_FIELD(*(void **)0x64B4B0, s32 (**)(void *, s64, s32, void *, s32, s32), 0x14)(M2C_FIELD(arg0, void **, 0x44), sp_.sp10, sp_.sp30, ((s8 *)&sp_), 0, 0x800);
                                            if (var_s0 == 0) {
                                                M2C_FIELD(*(void **)0x64B4B0, M2C_UNK (**)(M2C_UNK *, s64), 0x78)(&sp_.sp20, sp_.sp10);
                                                temp_a0_2 = M2C_FIELD(arg0, void **, 0x44);
                                                func_0057DA20((s32) (temp_a0_2 + 0x207C), 0x6C42F8, temp_a0_2 + 0x287C, &sp_.sp20, sp_.sp30);
                                                temp_a1 = M2C_FIELD(arg0, void **, 0x44);
                                                var_s0 = M2C_FIELD(*(void **)0x64B4B0, s32 (**)(s32, void *, s32, s32 *), 0x1C)(M2C_FIELD(temp_a1, s32 *, 0), temp_a1 + 0x207C, func_0057F260(M2C_FIELD(arg0, void **, 0x44) + 0x207C), &sp_.sp34);
                                                if ((var_s0 != 0) || (func_0057F260(M2C_FIELD(arg0, void **, 0x44) + 0x207C) != sp_.sp34)) {
                                                    temp_a1_2 = M2C_FIELD(*(void **)0x64B4B0, M2C_UNK (**)(s32, M2C_UNK), 0x18);
                                                    temp_a1_2(M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s32 *, 0), temp_a1_2);
                                                    goto block_27;
                                                }
block_28:
                                                M2C_FIELD(arg0, s32 *, 0x3C) = 3;
                                                func_0053A878();
                                                temp_v1 = M2C_FIELD(arg0, void **, 0x44);
                                                var_v0 = 0;
                                                M2C_FIELD(temp_v1, s32 *, 8) = arg1;
                                                M2C_FIELD(temp_v1, s32 *, 0x2058) = arg2;
                                            } else {
block_27:
                                                func_00540EB0(M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), void **, 4));
                                                var_v0 = var_s0;
                                            }
                                            goto block_29;
                                        }
                                        return var_v0;
                                    }
                                    /* Duplicate return node #0x1.e000000000000p+4 Try simplifying control flow for better match */
                                    return var_v0;
                                }
                                goto block_29;
                            }
                        }
                    }
                    goto block_29;
                }
            }
        }
    }
block_29:
    return var_v0;
}
