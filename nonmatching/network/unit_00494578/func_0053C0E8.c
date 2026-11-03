/* NON_MATCHING: functional draft, 127 of 132 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0053B6E8(void *, void *, s64 *, s32 *);    /* extern */
s32 func_0053BC28(M2C_UNK, s32, void *);            /* extern */
s32 func_00540BF8(void *, M2C_UNK, s32);            /* extern */
M2C_UNK func_00540EB0(s32);                         /* extern */
M2C_UNK func_0057DA20(void *, M2C_UNK, void *, M2C_UNK *); /* extern */
s32 func_0057F260(void *);                          /* extern */
M2C_UNK func_005A48D8(void *, M2C_UNK, M2C_UNK);    /* extern */

s32 func_0053C0E8(void *arg0, s32 arg1, void *arg2) {
    struct StackFrame_0053C0E8 { s8 pad0[0x10]; s64 sp10; s8 pad1[0x8]; s32 sp20; s8 pad2[0x1C]; s32 sp40; s32 sp44; s8 pad3[0x8]; } sp_;
    M2C_UNK (*temp_a1_2)(s32, M2C_UNK);
    s32 var_s0;
    s32 var_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_v0;

    M2C_FIELD(*(void **)0x64B4B0, M2C_UNK (**)(s64 *), 0x6C)(&sp_.sp10);
    temp_v0 = M2C_FIELD(arg0, void **, 0x44);
    M2C_FIELD(temp_v0, s32 *, 0x2030) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x2034) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x2044) = 0;
    var_v0 = func_0053BC28(0x86B540, arg1, temp_v0 + 0x207C);
    if (var_v0 == 0) {
        temp_a0 = M2C_FIELD(arg0, void **, 0x44);
        var_v0 = func_0053B6E8(temp_a0 + 0x207C, temp_a0 + 0x287C, &sp_.sp10, &sp_.sp40);
        if (var_v0 == 0) {
            var_v0 = 0xD6DD;
            if ((arg1 & *(s32 *)0x86B540) && ((arg1 == 0x1000) || (var_v0 = 2, ((arg1 & 0x800) != 0)))) {
                var_v0 = func_00540BF8(M2C_FIELD(arg0, void **, 0x44) + 4, 0xA, M2C_FIELD(arg0, s32 *, 0x48));
                if ((var_v0 == 0) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s32 *, 4) != 0)) {
                    func_005A48D8(((s8 *)&sp_), 0, 0xC);
                    var_s0 = M2C_FIELD(*(s32 *)(0x650000 - 0x4B50), s32 (**)(void *, s64, s32, void *, s32, s32), 0x14)(M2C_FIELD(arg0, void **, 0x44), sp_.sp10, sp_.sp40, ((s8 *)&sp_), 0, 0x800);
                    if (var_s0 == 0) {
                        M2C_FIELD(*(s32 *)(0x650000 - 0x4B50), M2C_UNK (**)(M2C_UNK *, s64), 0x78)(&sp_.sp20, sp_.sp10);
                        func_0057F260(arg2);
                        temp_a0_2 = M2C_FIELD(arg0, void **, 0x44);
                        func_0057DA20(temp_a0_2 + 0x207C, 0x6C3D28, temp_a0_2 + 0x287C, &sp_.sp20);
                        temp_a1 = M2C_FIELD(arg0, void **, 0x44);
                        var_s0 = M2C_FIELD(*(s32 *)(0x650000 - 0x4B50), s32 (**)(s32, void *, s32, s32 *), 0x1C)(M2C_FIELD(temp_a1, s32 *, 0), temp_a1 + 0x207C, func_0057F260(M2C_FIELD(arg0, void **, 0x44) + 0x207C), &sp_.sp44);
                        if ((var_s0 != 0) || (var_v0 = 0, (func_0057F260(M2C_FIELD(arg0, void **, 0x44) + 0x207C) != sp_.sp44))) {
                            temp_a1_2 = M2C_FIELD(*(s32 *)(0x650000 - 0x4B50), M2C_UNK (**)(s32, M2C_UNK), 0x18);
                            temp_a1_2(M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s32 *, 0), temp_a1_2);
                            goto block_11;
                        }
                    } else {
block_11:
                        func_00540EB0(M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s32 *, 4));
                        var_v0 = var_s0;
                    }
                }
            }
        }
    }
    return var_v0;
}
