/* NON_MATCHING: functional draft, 138 of 138 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_001024A8(M2C_UNK *, s32);              /* extern */
s32 func_00335E68(void *, s32 *);                   /* extern */
M2C_UNK func_00337260(void *);                      /* extern */
s32 func_003378E0(void *, s32);                     /* extern */
f32 func_0033D928(s32 *, s32 *);                    /* extern */
M2C_UNK func_00426D50(void *, M2C_UNK *, s32);      /* extern */
s32 func_004601A8();                                /* extern */
s32 func_00501B20(void *, s32 *, s32, s32, s32);    /* extern */
void *func_0055F1F0(void *);                        /* extern */
M2C_UNK func_00576100(void *, s32);                 /* extern */
M2C_UNK func_00576140(void *);                      /* extern */
M2C_UNK func_005A48D8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_005F3290(void *, M2C_UNK);             /* extern */

void func_00338088(void *arg0, s32 arg1) {
    s32 sp4;
    s32 sp8;
    s32 sp10;
    M2C_UNK sp14;
    M2C_UNK sp34;
    s32 sp40;
    s16 sp44;
    s16 sp46;
    s32 sp48;
    s32 sp4C;
    f32 temp_f0;
    f32 temp_f20;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_v1_2;
    s32 var_a1;
    s32 var_s0;
    s32 var_s2;
    void *temp_s0;
    void *temp_s1;
    void *temp_s2;
    void *temp_v0;
    void *temp_v1;

    if (M2C_FIELD(arg0, s32 *, 0xE458) != 0) {
loop_4:
        temp_v1 = M2C_FIELD(arg0, void **, 0xE480);
        var_a1 = 0;
        temp_s2 = temp_v1 + 0x8850;
        temp_s0 = temp_v1 + 0x8800;
        if (M2C_FIELD(temp_v1, s32 *, 0x1FC) == 0) {
            var_a1 = M2C_FIELD(temp_v1, s32 *, 0x8808) != 0;
        }
        if (var_a1 != 0) {
            sp4 = (s32) temp_s2;
            func_00576100(temp_s2, var_a1);
            sp8 = M2C_FIELD((temp_s0 + (M2C_FIELD(temp_s0, s32 *, 4) * 4)), s32 *, 0xC);
            func_005F3290(temp_s0, 1);
            func_00576140(temp_s2);
            if (sp8 == 1) {
                temp_v0 = M2C_FIELD(arg0, void **, 0x64);
                M2C_FIELD((temp_v0 + 0x280), M2C_UNK (**)(void *), 4)(arg0 + M2C_FIELD(temp_v0, s16 *, 0x280));
            }
            goto loop_4;
        }
        func_005A48D8(&sp10, 0, 0x40);
        temp_s1 = arg0 + 0xF2F4;
        var_s2 = M2C_FIELD(func_0055F1F0(arg0 + 0xF198), u16 *, 2) & 3;
        if (func_003378E0(arg0, arg1) == 0) {
            temp_a0 = M2C_FIELD(arg0, s32 *, 0xF370);
            temp_v1_2 = temp_a0 & 0x18;
            if ((temp_v1_2 == 0x10) || (temp_v1_2 == 0x18)) {
                M2C_FIELD(arg0, s32 *, 0xF370) = (s32) (temp_a0 & ~0x18);
            }
            if (M2C_FIELD(arg0, s32 *, 0xE454) != 0) {
                var_s2 |= 4;
                func_00426D50(arg0 + 0xF184, &sp14, func_00335E68(arg0 + (M2C_FIELD(arg0, s32 *, 0xE444) * 0x214) + 0xE50C, &sp4));
            }
        }
        temp_f20 = func_0033D928(&sp8, &sp4);
        temp_a1 = func_004601A8() != 0;
        temp_f0 = temp_f20 * 0x1.9000000000000p+6f;
        var_s0 = (s32) temp_f0;
        if (temp_f0 >= 0x1.0000000000000p+31f) {
            var_s0 = (s32) (temp_f0 - 0x1.0000000000000p+31f) | 0x80000000;
        }
        temp_a1_2 = temp_a1 << 0xF;
        func_001024A8(&sp34, temp_a1_2);
        temp_a4 = M2C_FIELD(temp_s1, s32 *, 0x1C);
        temp_a3 = M2C_FIELD(temp_s1, s32 *, 4);
        temp_a2 = M2C_FIELD(temp_s1, s32 *, 0x20);
        sp40 = temp_a3;
        sp44 = (s16) M2C_FIELD(temp_s1, s32 *, 0x18);
        sp46 = (s16) temp_a2;
        sp48 = temp_a4;
        sp4C = (var_s0 << 0x10) | (sp4 & 1) | ((sp8 * 2) | temp_a1_2);
        sp10 = var_s2 | M2C_FIELD(arg0, s32 *, 0xF370);
        if (func_00501B20(M2C_FIELD(arg0, void **, 0xE480), &sp10, temp_a2, temp_a3, temp_a4) == 0) {
            func_00337260(arg0);
        }
    }
}
