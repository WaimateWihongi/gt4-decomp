/* NON_MATCHING: functional draft, 211 of 212 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00522428(M2C_UNK *, s32, s32);         /* extern */
u32 func_00539528();                                /* extern */
s32 func_00570128(M2C_UNK, M2C_UNK, s32 *, s64 *);  /* extern */
s32 func_00570250(M2C_UNK, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_00570410(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_00570BB0(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32 *, M2C_UNK); /* extern */
M2C_UNK func_005A48D8(s64 *, M2C_UNK, M2C_UNK);     /* extern */

s32 func_00522718(s32 *arg0, s64 arg1, s32 *arg2, void *arg3, s32 *arg4) {
    s32 sp80;
    s64 sp0;
    s64 sp10;
    s32 sp18;
    s32 sp1C;
    M2C_UNK sp20;
    s32 sp30;
    s64 sp60;
    s32 spB0;
    s32 spB4;
    s32 *spB8;
    s32 *spBC;
    M2C_UNK var_s3;
    s32 temp_a2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_v0;
    u32 temp_v0_2;

    spB8 = arg0;
    *arg0 = 0;
    sp0 = arg1;
    var_v0 = 5;
    spBC = arg4;
    spB0 = 0;
    if ((*(s32 *)0x64B444 != 0) && ((*spBC = 0, (M2C_FIELD(arg3, s32 *, 0) != 0)) || ((var_v0 = 2, ((s32) sp0 != 0)) && (*arg2 != 0)))) {
        func_005A48D8(&sp10, 0, 0x48);
        temp_v1 = M2C_FIELD(arg3, s32 *, 0);
        switch (temp_v1) {                          /* irregular */
        case 0:
            temp_v0 = func_00539528();
            *(u32 *)0x64B454 = temp_v0;
            sp18 = 1;
            sp30 = *arg2;
            temp_a2 = (temp_v0 % 60535U) + 0x1388;
            sp1C = temp_a2;
            func_00522428(&sp20, (s32) sp0, temp_a2);
            var_s3 = ((M2C_FIELD(arg3, s32 *, 8) ^ 1) == 0) ? 0 : 0x2710;
block_20:
            if (func_00570128(0x863EC0, 0x863F00, &spB0, &sp10) != 0) {
                var_v0 = 0xC350;
                if (M2C_FIELD(arg3, s32 *, 0) == 0) {
                    var_s1 = 0;
loop_23:
                    temp_v0_2 = func_00539528();
                    *(s32 *)0x64B454 = temp_v0_2;
                    var_s1 += 1;
                    sp1C = (temp_v0_2 % 60535U) + 0x1388;
                    if (func_00570128(0x863EC0, 0x863F00, &spB0, &sp10) != 0) {
                        if (var_s1 >= 5) {
                            return 0xC350;
                        }
                        goto loop_23;
                    }
                    goto block_28;
                }
                /* Duplicate return node #0x1.7800000000000p+5 Try simplifying control flow for better match */
                return var_v0;
            }
block_28:
            temp_v0_3 = func_00570250(0x863EC0, 0x863F00, spB0, var_s3);
            if (temp_v0_3 != 0) {
                if ((temp_v0_3 != -0x1F4) || (M2C_FIELD(arg3, s32 *, 0) != 2)) {
                    func_00570410(0x863EC0, 0x863F00, spB0, 0x1F4);
                    return 0xC350;
                }
                goto block_33;
            }
block_33:
            if ((M2C_FIELD(arg3, s32 *, 0) == 0) || (M2C_FIELD(arg3, s32 *, 0) == 2)) {
                spB4 = 1;
                var_v0 = 0xC350;
                if (func_00570BB0(0x863EC0, 0x863F00, spB0, 3, &spB4, 4) == 0) {
                    goto block_37;
                }
            } else {
block_37:
                if ((M2C_FIELD(arg3, s32 *, 0) == 1) && (*arg2 == 0)) {
                    func_005A48D8(&sp60, 0, 0x4C);
                    var_v0 = 0xC350;
                    if (func_00570BB0(0x863EC0, 0x863F00, spB0, 1, (s32 *) &sp60, 0x4C) < 0) {
                        *arg2 = sp80;
                        goto block_41;
                    }
                } else {
block_41:
                    if (M2C_FIELD(arg3, s32 *, 0) == 0) {
                        if (M2C_FIELD(arg3, s32 *, 8) == 1) {
                            *spBC = 0;
                        } else {
                            goto block_45;
                        }
                    } else {
block_45:
                        *spBC = 1;
                    }
                    var_v0 = 0;
                    *spB8 = spB0;
                }
            }
            /* Duplicate return node #0x1.7800000000000p+5 Try simplifying control flow for better match */
            return var_v0;
        case 1:
            var_v0 = 2;
            if (M2C_FIELD(arg3, s32 *, 4) > 0) {
                var_v0_2 = *arg2;
                if (var_v0_2 == 0) {
                    var_v0_2 = -1;
                }
                sp1C = var_v0_2;
                var_s3 = 0x2710;
                sp30 = 0;
                sp10 = (s64) M2C_FIELD(arg3, s32 *, 4);
                sp18 = 0;
                goto block_20;
            }
            /* Duplicate return node #0x1.7800000000000p+5 Try simplifying control flow for better match */
            return var_v0;
        case 3:
            sp1C = 1;
            var_s3 = 0x2710;
            sp18 = temp_v1;
block_19:
            sp30 = 0;
            func_00522428(&sp20, (s32) sp0, 1);
            goto block_20;
        default:
            var_v0 = 4;
            if (temp_v1 == 2) {
                sp18 = temp_v1;
                sp1C = *arg2;
                var_s3 = 0;
                goto block_19;
            }
            /* Duplicate return node #0x1.7800000000000p+5 Try simplifying control flow for better match */
            return var_v0;
        }
    } else {
        return var_v0;
    }
}
