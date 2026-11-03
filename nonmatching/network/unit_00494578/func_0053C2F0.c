/* NON_MATCHING: functional draft, 158 of 166 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0053B6E8(void *, void *, s64 *, s32 *);    /* extern */
s32 func_0053BC28(M2C_UNK, s32, void *);            /* extern */
s32 func_00540BF8(void *, M2C_UNK, s32);            /* extern */
M2C_UNK func_00540EB0(s32);                         /* extern */
M2C_UNK func_0057DA20(void *, M2C_UNK, void *, M2C_UNK *, s32, s32, void *, void *, void *, void *, void *, void *); /* extern */
s32 func_0057F260(void *);                          /* extern */
M2C_UNK func_005A48D8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_005A6AB0(void *, M2C_UNK, M2C_UNK);    /* extern */

s32 func_0053C2F0(void *arg0, void *arg1, void *arg2) {
    s32 sp20;
    s32 sp24;
    s64 sp30;
    M2C_UNK sp40;
    s32 sp50;
    s32 sp54;
    M2C_UNK (*temp_a1_3)(s32, M2C_UNK);
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s0;
    s32 var_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a1_2;
    void *temp_v0;
    void *temp_v0_2;

    M2C_FIELD(*(void **)0x64B4B0, M2C_UNK (**)(s64 *), 0x6C)(&sp30);
    temp_v0 = M2C_FIELD(arg0, void **, 0x44);
    M2C_FIELD(temp_v0, s32 *, 0x2030) = 1;
    M2C_FIELD(temp_v0, s32 *, 0x2034) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x2044) = 0;
    var_v0 = func_0053BC28(0x86B540, M2C_FIELD(temp_v0, s32 *, 8), temp_v0 + 0x207C);
    if ((var_v0 == 0) && (temp_a0 = M2C_FIELD(arg0, void **, 0x44), var_v0 = func_0053B6E8(temp_a0 + 0x207C, temp_a0 + 0x287C, &sp30, &sp50), (var_v0 == 0)) && (temp_a0_2 = M2C_FIELD(arg0, void **, 0x44), temp_a1 = M2C_FIELD(temp_a0_2, s32 *, 8), var_v0 = 0xD6DD, ((temp_a1 & *(s32 *)0x86B540) != 0)) && ((temp_a1 == 0x1000) || (var_v0 = 2, ((temp_a1 & 0x800) != 0)))) {
        var_v0 = func_00540BF8(temp_a0_2 + 4, 0xB, M2C_FIELD(arg0, s32 *, 0x48));
        if (var_v0 == 0) {
            temp_a0_3 = M2C_FIELD(arg0, void **, 0x44);
            if (M2C_FIELD(temp_a0_3, s32 *, 4) != 0) {
                if (M2C_FIELD(temp_a0_3, s32 *, 8) == 0x1000) {
                    func_005A6AB0(temp_a0_3 + 0x2C7C, 0x6C3EF8, 0x200);
                } else {
                    func_005A6AB0(temp_a0_3 + 0x2C7C, 0x6C3F08, 0x200);
                }
                func_005A48D8(&sp20, 0, 0xC);
                sp24 = 0x800;
                sp20 = 0;
                var_s0 = M2C_FIELD(*(s32 *)(0x650000 - 0x4B50), s32 (**)(void *, s64, s32, s32 *), 0x14)(M2C_FIELD(arg0, void **, 0x44), sp30, sp50, &sp20);
                if (var_s0 == 0) {
                    M2C_FIELD(*(s32 *)(0x650000 - 0x4B50), M2C_UNK (**)(M2C_UNK *, s64), 0x78)(&sp40, sp30);
                    temp_s1 = func_0057F260(arg2) + 0xD7;
                    temp_s0 = func_0057F260(M2C_FIELD(arg0, void **, 0x44) + 0x2C7C);
                    temp_a0_4 = M2C_FIELD(arg0, void **, 0x44);
                    temp_v0_2 = temp_a0_4 + 0x2C7C;
                    func_0057DA20(temp_a0_4 + 0x207C, 0x6C3F20, temp_a0_4 + 0x287C, &sp40, sp50, temp_s1 + (temp_s0 + (func_0057F260(arg1) * 2)), temp_v0_2, arg1, arg1, temp_v0_2, arg2, arg1);
                    temp_a1_2 = M2C_FIELD(arg0, void **, 0x44);
                    var_s0 = M2C_FIELD(*(s32 *)(0x650000 - 0x4B50), s32 (**)(s32, void *, s32, s32 *), 0x1C)(M2C_FIELD(temp_a1_2, s32 *, 0), temp_a1_2 + 0x207C, func_0057F260(M2C_FIELD(arg0, void **, 0x44) + 0x207C), &sp54);
                    if ((var_s0 != 0) || (var_v0 = 0, (func_0057F260(M2C_FIELD(arg0, void **, 0x44) + 0x207C) != sp54))) {
                        temp_a1_3 = M2C_FIELD(*(s32 *)(0x650000 - 0x4B50), M2C_UNK (**)(s32, M2C_UNK), 0x18);
                        temp_a1_3(M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s32 *, 0), temp_a1_3);
                        goto block_15;
                    }
                } else {
block_15:
                    func_00540EB0(M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s32 *, 4));
                    var_v0 = var_s0;
                }
            }
        }
    }
    return var_v0;
}
