/* NON_MATCHING: functional draft, 150 of 159 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_00528940();  /* extern */
M2C_UNK func_00528E38(void *);                      /* extern */
s32 func_0052CF60(void *);                          /* extern */
s32 func_0052D448(void *, s32);                     /* extern */
M2C_UNK func_00538760(M2C_UNK, s32);                /* extern */
M2C_UNK func_00538BF8();       /* extern */
M2C_UNK func_0053A878(void *);                      /* extern */

s32 func_00528BA8(void **arg0, void *arg1) {
    struct StackFrame_00528BA8 { s8 pad0[0x40]; void * sp40; s8 pad1[0xC]; } sp_;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_v0;

    var_v0 = 2;
    sp_.sp40 = NULL;
    if (arg0 != NULL) {
        *arg0 = NULL;
        if ((M2C_FIELD(arg1, s32 *, 0x24) != 0) && (M2C_FIELD(arg1, s32 *, 0x28) != 0)) {
            if (M2C_FIELD(arg1, s32 *, 0x2C) != 0) {
                func_00538BF8(&sp_.sp40, 0x9CU);
                if (sp_.sp40 != NULL) {
                    M2C_FIELD(sp_.sp40, s32 *, 0x50) = (s32) M2C_FIELD(arg1, s32 *, 4);
                    M2C_FIELD(sp_.sp40, s32 *, 0x84) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
                    M2C_FIELD(sp_.sp40, s32 *, 0x54) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
                    temp_a1 = M2C_FIELD(arg1, s32 *, 0x28);
                    temp_a2 = M2C_FIELD(arg1, s32 *, 0x2C);
                    M2C_FIELD(sp_.sp40, s32 *, 0x58) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
                    temp_a3 = M2C_FIELD(arg1, s32 *, 0x30);
                    M2C_FIELD(sp_.sp40, s32 *, 0x88) = temp_a1;
                    M2C_FIELD(sp_.sp40, s32 *, 0x5C) = (s32) M2C_FIELD(arg1, s32 *, 8);
                    M2C_FIELD(sp_.sp40, s32 *, 0x8C) = temp_a2;
                    M2C_FIELD(sp_.sp40, s32 *, 0x90) = temp_a3;
                    M2C_FIELD(sp_.sp40, s32 *, 0x60) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
                    M2C_FIELD(sp_.sp40, s32 *, 0x64) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
                    M2C_FIELD(sp_.sp40, s32 *, 0x80) = (s32) M2C_FIELD(arg1, s32 *, 0);
                    if (M2C_FIELD(sp_.sp40, s32 *, 0x50) == 0) {
                        M2C_FIELD(sp_.sp40, s32 *, 0x50) = 1;
                    }
                    if (M2C_FIELD(sp_.sp40, s32 *, 0x54) == 0) {
                        M2C_FIELD(sp_.sp40, s32 *, 0x54) = 0x1000;
                    }
                    if (M2C_FIELD(sp_.sp40, s32 *, 0x58) == 0) {
                        M2C_FIELD(sp_.sp40, s32 *, 0x58) = 0x1000;
                    }
                    if (M2C_FIELD(sp_.sp40, s32 *, 0x5C) == 0) {
                        M2C_FIELD(sp_.sp40, s32 *, 0x5C) = 0x5A8;
                    }
                    if (M2C_FIELD(sp_.sp40, s32 *, 0x60) == 0) {
                        M2C_FIELD(sp_.sp40, s32 *, 0x60) = 0x1E;
                    }
                    M2C_FIELD(sp_.sp40, s32 *, 0x68) = func_00528940(0x3FF, temp_a1, temp_a2, temp_a3, sp_.sp40);
                    M2C_FIELD(sp_.sp40, s16 *, 0x6C) = func_00528940(0xFFFF);
                    func_00538BF8(sp_.sp40 + 4, (u64) ((M2C_FIELD(sp_.sp40, s32 *, 0x50) * 0x49C) << 0x20) >> 0x20, 0x49C);
                    if (M2C_FIELD(sp_.sp40, s32 *, 4) != 0) {
                        temp_v0 = func_0052D448(sp_.sp40 + 0xC, M2C_FIELD(sp_.sp40, s32 *, 0x58));
                        var_s1 = temp_v0;
                        if ((temp_v0 == 0) && ((M2C_FIELD(arg1, s32 *, 0x1C) == 0) || (temp_v0_2 = func_0052D448(sp_.sp40 + 0x24, M2C_FIELD(sp_.sp40, s32 *, 0x54)), var_s1 = temp_v0_2, (temp_v0_2 == 0)))) {
                            var_s1 = func_0052CF60(sp_.sp40);
                            if (var_s1 == 0) {
                                if (*(void **)0x64B710 != NULL) {
                                    func_00538760(-1, M2C_FIELD(arg1, s32 *, 0x20));
                                    M2C_FIELD(*(void **)0x64B710, M2C_UNK (**)(M2C_UNK, M2C_UNK, M2C_UNK), 0x14)(-1, 0, 0);
                                    M2C_FIELD(*(void **)0x64B710, M2C_UNK (**)(void *), 0x54)(((s8 *)&sp_));
                                    M2C_FIELD(*(void **)0x64B710, M2C_UNK (**)(M2C_UNK, s32, void *, void *), 0x2C)(-1, M2C_FIELD(sp_.sp40, s32 *, 0x50), ((s8 *)&sp_), sp_.sp40);
                                    M2C_FIELD(*(void **)0x64B710, M2C_UNK (**)(M2C_UNK, s32, void *), 0x58)(-1, M2C_FIELD(sp_.sp40, s32 *, 0x50), sp_.sp40);
                                }
                                *arg0 = sp_.sp40;
                                func_0053A878(sp_.sp40 + 0x3C);
                                return 0;
                            }
                            goto block_33;
                        }
                        goto block_33;
                    }
                    var_s1 = 0x64;
                    goto block_33;
                }
                var_s1 = 0x64;
block_33:
                func_00528E38(sp_.sp40);
                var_v0 = var_s1;
                /* Duplicate return node #0x1.1000000000000p+5 Try simplifying control flow for better match */
                return var_v0;
            }
            return 2;
        }
    }
    return var_v0;
}
