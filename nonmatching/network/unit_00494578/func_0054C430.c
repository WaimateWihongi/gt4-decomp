/* NON_MATCHING: functional draft, 115 of 116 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00549798(s32 *);                       /* extern */
M2C_UNK func_00549808(void *);                      /* extern */
M2C_UNK func_00549C40(s32 *);                       /* extern */
M2C_UNK func_005621C0();                            /* extern */
s32 func_00575098(s32 *, s32);                      /* extern */
s32 func_00578610(s32);                             /* extern */
M2C_UNK func_005788B8(s32);                         /* extern */
s32 func_00578968(s32 *, s32 *, s32);               /* extern */
s32 func_00578B50(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 *func_005C1498(M2C_UNK);                        /* extern */

void func_0054C430(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    s32 sp20;
    s32 *sp24;
    s32 sp30;
    s32 sp34;
    s32 sp50;
    s32 sp54;
    s32 *temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a0;
    s32 var_s1;
    s32 var_s3;
    s32 var_s3_2;
    void *temp_a0;
    void *var_s0;
    void *var_s2;
    void *var_v1;

    if (*(s32 *)0x64C404 == 0) {
        *(s32 *)0x64C404 = 1;
        if (*(s32 **)0x64C3E4 == NULL) {
            var_s3 = 0;
            func_005621C0();
            temp_v0 = func_005C1498(0x4A8);
            var_s2 = temp_v0 + 0x68;
            func_00549798(temp_v0);
            *(s32 **)0x64C3E4 = temp_v0;
            do {
                var_s1 = 0;
                M2C_FIELD((var_s2 + 4), s32 *, 4) = 0;
                var_s0 = var_s2 + 0x10;
                M2C_FIELD(var_s2, s32 *, 4) = var_s3;
loop_4:
                M2C_FIELD(var_s0, s32 *, 0x50) = var_s1;
                var_s1 += 1;
                M2C_FIELD(var_s0, s32 *, 0x4C) = var_s3;
                temp_a0 = var_s0;
                var_s0 += 0x6C;
                func_00549808(temp_a0);
                if (var_s1 < 4) {
                    goto loop_4;
                }
                var_s3 += 1;
                var_s2 += 0x1BC;
            } while (var_s3 < 2);
            *(s32 *)0x64C3E4 = temp_v0;
            var_s3_2 = 7;
            do {
                var_s3_2 -= 1;
                func_00549C40(temp_v0 + 0x68);
            } while (var_s3_2 >= 0);
            sp20 = 0x549D98;
            sp24 = temp_v0;
            sp30 = 0x86E600;
            sp34 = 0x1000;
            temp_v0_2 = func_00578968(&sp20, &sp30, func_00578610(func_00578B50(3, 0, 0x1000)));
            *temp_v0 = temp_v0_2;
            func_005788B8(temp_v0_2);
            *(s32 *)0x64C3EC = 1;
            *(s32 *)0x64C3F0 = 1;
            sp50 = 0x54A230;
            sp54 = 0;
            temp_v0_3 = func_00575098(&sp50, func_00578610(func_00578B50(3, 0, 0x64C3F0)));
            *(s32 *)0x64C3FC = temp_v0_3;
            func_005788B8(temp_v0_3);
        }
        var_a0 = 0;
        var_v1 = (void *)0x86DD80;
        do {
            M2C_FIELD(var_v1, s32 *, 0) = var_a0;
            var_a0 += 1;
            M2C_FIELD(var_v1, s32 *, 4) = 0;
            M2C_FIELD(var_v1, s32 *, 8) = 0;
            var_v1 += 0xC;
        } while (var_a0 < 8);
    }
}
