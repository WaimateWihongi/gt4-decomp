/* NON_MATCHING: functional draft, 134 of 135 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_001CE460(s32, M2C_UNK *);              /* extern */
s32 func_001CE9D0(s32, void **, void *, M2C_UNK);   /* extern */
M2C_UNK func_001D4BA0(void *, s32, M2C_UNK *);      /* extern */
s32 func_00572C90(s32 *, s32);                      /* extern */
M2C_UNK func_00575DA0(void *);                      /* extern */
s32 func_00575E60(M2C_UNK, s32);                    /* extern */
M2C_UNK func_005792E8(s32 *, s32);                  /* extern */
s32 func_00579330(s32 *);                           /* extern */
M2C_UNK func_00579420(M2C_UNK *, s32);              /* extern */
s32 func_005794C0(M2C_UNK *);                       /* extern */
s32 func_005CDD50(s32, s32, s8 *);                  /* extern */

s32 func_001CEEC0(s32 arg0, void **arg1, void *arg2, void **arg3, s32 arg4) {
    M2C_UNK sp10;
    M2C_UNK sp60;
    void *sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp80;
    M2C_UNK sp90;
    s8 spA60;
    s32 spA64;
    s32 *temp_s5;
    s32 *var_s1;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s6;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;
    u32 temp_s2;
    u32 var_s4;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;

    var_v0 = func_001CE9D0(arg0, arg1, arg2, 0);
    if (var_v0 == 0) {
        func_001CE460(arg0, &sp10);
        temp_s6 = M2C_FIELD(arg2, s32 *, 0x81CC);
        var_v0 = 0;
        if (arg4 >= 0) {
            temp_v1 = *arg3;
            temp_v0 = M2C_FIELD((temp_v1 + 0x10), s32 (**)(void *), 4)(arg3 + M2C_FIELD(temp_v1, s16 *, 0x10));
            spA64 = temp_v0;
            temp_s0 = (temp_v0 + 0x47) & ~0x3F;
            sp64 = NULL;
            sp68 = 0;
            sp6C = 0;
            if (temp_s0 != 0) {
                var_v1 = func_00575E60(0x40, temp_s0);
            } else {
                var_v1 = 0;
            }
            M2C_FIELD(&sp60, s32 *, 4) = var_v1;
            M2C_FIELD(&sp60, s32 *, 8) = var_v1;
            M2C_FIELD(&sp60, s32 *, 0xC) = (s32) (var_v1 + temp_s0);
            sp80 = var_v1;
            spA60 = 0;
            M2C_FIELD(&sp60, s32 *, 8) = func_005CDD50(var_v1, temp_s0, &spA60);
            temp_v1_2 = *arg1;
            temp_a3 = (s32) sp68 - (s32) (sp64);
            M2C_FIELD((temp_v1_2 + 0x90), M2C_UNK (**)(void *, M2C_UNK *, void *, s32, s32), 4)(arg1 + M2C_FIELD(temp_v1_2, s16 *, 0x90), &sp10, sp64, temp_a3, (arg4 * temp_a3) + 0x40);
            temp_v1_3 = *arg1;
            if (M2C_FIELD((temp_v1_3 + 0x28), s32 (**)(void *), 4)(arg1 + M2C_FIELD(temp_v1_3, s16 *, 0x28)) != 0) {
                if (sp64 == NULL) {
                    return 1;
                }
                func_00575DA0(sp64);
                return 1;
            }
            temp_s5 = sp64 + 8;
            func_00579420(&sp90, temp_s6 + arg4);
            var_s4 = 0;
            func_001D4BA0(sp64, (s32) sp68 - (s32) (sp64), &sp90);
            func_00579420(&sp90, temp_s6 ^ M2C_FIELD(sp64, s32 *, 0));
            func_005792E8(&sp80, M2C_FIELD(sp64, s32 *, 4));
            temp_s2 = (u32) (((s32) sp68 - (s32) (sp64)) - 8) >> 2;
            if (temp_s2 != 0) {
                var_s1 = temp_s5;
                do {
                    var_s4 += 1;
                    temp_s0_2 = func_005794C0(&sp90);
                    *var_s1 = (*var_s1 + func_00579330(&sp80)) ^ temp_s0_2;
                    var_s1 += 4;
                } while (var_s4 < temp_s2);
            }
            if (M2C_FIELD(sp64, s32 *, 4) == func_00572C90(temp_s5, spA64)) {
                temp_v1_4 = *arg3;
                M2C_FIELD((temp_v1_4 + 0x30), M2C_UNK (**)(void *, s32 *), 4)(arg3 + M2C_FIELD(temp_v1_4, s16 *, 0x30), temp_s5);
                var_v0 = 0;
                if (sp64 != NULL) {
                    func_00575DA0(sp64);
                    var_v0 = 0;
                }
                /* Duplicate return node #0x1.7000000000000p+4 Try simplifying control flow for better match */
                return var_v0;
            }
            if (sp64 == NULL) {
                return 2;
            }
            func_00575DA0(sp64);
            return 2;
        }
    }
    return var_v0;
}
