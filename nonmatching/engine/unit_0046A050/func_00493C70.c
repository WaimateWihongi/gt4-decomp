/* NON_MATCHING: functional draft, 276 of 279 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

u32 func_00493438(u8 **, s32 *);                    /* extern */
s32 func_00493468(s32 (*)(u32, s8 *, void *), s8 **, void *, s32, u32, u32, u32); /* extern */
s32 func_00493918(s32 (*)(u32, s8 *, void *), s8 **, void *, s32, u32, u32, u32, M2C_UNK); /* extern */
s32 func_00493A28(s32 (*)(u32, s8 *, void *), s8 **, void *, s32, u32, u32, u32, M2C_UNK); /* extern */
s32 func_00493AB0(s32 (*)(u32, s8 *, void *), s8 **, void *, s32, u32, u32, u32, u8); /* extern */
u32 func_00493B78(u8 **, u8 *);                     /* extern */

void func_00493C70(void *arg0, s32 (*arg1)(u32, s8 *, void *), s8 *arg2, u8 *arg3, u32 *arg4) {
    s8 *sp10;
    u8 *sp14;
    s32 sp18;
    M2C_UNK var_a7;
    s32 var_a2;
    s32 var_s0;
    s32 var_v0_2;
    s32 var_v1_2;
    u32 *temp_v0_2;
    u32 *temp_v0_3;
    u32 *temp_v0_6;
    u32 *temp_v0_7;
    u32 *temp_v0_8;
    u32 *temp_v0_9;
    u32 *var_s1;
    u32 temp_v0;
    u32 var_a5;
    u32 var_a6;
    u32 var_s2;
    u32 var_v0;
    u32 var_v1;
    u8 *temp_a1;
    u8 *temp_s5;
    u8 *temp_v0_4;
    u8 *temp_v0_5;
    u8 *temp_v1;
    u8 *var_a1;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a0_3;
    u8 var_a0;

    var_s1 = arg4;
    sp10 = arg2;
    sp14 = arg3;
    M2C_FIELD(arg0, s32 *, 0xA0) = -1;
loop_77:
loop_78:
    temp_v0 = func_00493438(&sp14, &sp18);
    if (temp_v0 == 0) {
        if (sp10 != NULL) {
            *sp10 = 0;
        }
    } else if (M2C_FIELD(arg0, s32 *, 0x74) != 0) {
        if (temp_v0 == 0x25) {
            var_a1 = sp14;
            var_s0 = 0;
            temp_s5 = var_a1;
            if (M2C_FIELD(var_a1, u8 *, 0) == temp_v0) {
                sp14 = var_a1 + 1;
                goto block_9;
            }
loop_12:
            var_a0 = M2C_FIELD(var_a1, u8 *, 0);
            var_v0 = var_a0 - 0x30;
            switch (var_a0) {                       /* switch 1 */
            case 45:                                /* switch 1 */
                var_s0 |= 1;
block_11:
                var_a1 += 1;
                sp14 = var_a1;
                goto loop_12;
            case 43:                                /* switch 1 */
                var_s0 |= 2;
                goto block_11;
            case 48:                                /* switch 1 */
                var_s0 |= 4;
                goto block_11;
            case 32:                                /* switch 1 */
                var_s0 |= 8;
                goto block_11;
            case 35:                                /* switch 1 */
                var_s0 |= 0x10;
                goto block_11;
            case 33:                                /* switch 1 */
            case 34:                                /* switch 1 */
            case 36:                                /* switch 1 */
            case 37:                                /* switch 1 */
            case 38:                                /* switch 1 */
            case 39:                                /* switch 1 */
            case 40:                                /* switch 1 */
            case 41:                                /* switch 1 */
            case 42:                                /* switch 1 */
            case 44:                                /* switch 1 */
            case 46:                                /* switch 1 */
            case 47:                                /* switch 1 */
                var_v0 = var_a0 - 0x30;
                break;
            }
            var_s2 = -1U;
            if (var_v0 < 0xAU) {
                var_s2 = func_00493B78(&sp14, var_a1);
                var_a0 = M2C_FIELD(sp14, u8 *, 0);
            } else if (var_a0 == 0x2A) {
                temp_v0_2 = var_s1;
                sp14 = var_a1 + 1;
                var_s1 += 8;
                var_s2 = *temp_v0_2;
                var_a0 = M2C_FIELD(var_a1, u8 *, 1);
            }
            var_a5 = -1U;
            if (var_a0 == 0x2E) {
                temp_v1 = sp14;
                temp_a1 = temp_v1 + 1;
                sp14 = temp_a1;
                temp_a0 = M2C_FIELD(temp_v1, u8 *, 1);
                if ((u32) (temp_a0 - 0x30) < 0xAU) {
                    var_a5 = func_00493B78(&sp14, temp_a1);
                } else if (temp_a0 == 0x2A) {
                    temp_v0_3 = var_s1;
                    sp14 = temp_v1 + 2;
                    var_s1 += 8;
                    var_s2 = *temp_v0_3;
                }
            }
            temp_v0_4 = sp14;
            var_a2 = 1;
            temp_a0_2 = *temp_v0_4;
            sp14 = temp_v0_4 + 1;
            if (temp_a0_2 != 0x68) {
                if ((s32) temp_a0_2 >= 0x69) {
                    var_v0_2 = 0x6C;
                    var_a2 = 2;
                } else {
                    var_v0_2 = 0x4C;
                    var_a2 = 3;
                }
                if (temp_a0_2 != var_v0_2) {
                    var_a2 = 0;
                    sp14 -= 1;
                }
            }
            temp_v0_5 = sp14;
            temp_a0_3 = *temp_v0_5;
            sp14 = temp_v0_5 + 1;
            switch (temp_a0_3) {                    /* switch 2 */
            case 0x58:                              /* switch 2 */
            case 0x64:                              /* switch 2 */
            case 0x69:                              /* switch 2 */
            case 0x6F:                              /* switch 2 */
            case 0x74:                              /* switch 2 */
            case 0x75:                              /* switch 2 */
            case 0x78:                              /* switch 2 */
                if (var_a2 != 1) {
                    temp_v0_6 = var_s1;
                    if (var_a2 != 3) {
                        var_s1 += 8;
                        var_a6 = *temp_v0_6;
                        var_v1 = *temp_v0_6;
                    } else {
                        var_s1 += 8;
                        var_a6 = (u32) (s64) *temp_v0_6;
                        var_v1 = var_a6;
                    }
                } else {
                    temp_v0_7 = var_s1;
                    var_s1 += 8;
                    var_v1 = *temp_v0_7;
                    var_a6 = var_v1 & 0xFFFF;
                }
                var_a7 = 0;
                if (((s32) var_v1 < 0) && ((temp_a0_3 == 0x64) || (temp_a0_3 == 0x69) || (temp_a0_3 == 0x74))) {
                    var_a6 = 0 - var_v1;
                    var_a7 = 0x2D;
                }
                switch (temp_a0_3) {                /* switch 3 */
                case 0x64:                          /* switch 3 */
                case 0x75:                          /* switch 3 */
block_60:
                    var_v1_2 = func_00493918(arg1, &sp10, arg0, var_s0, var_s2, var_a5, var_a6, var_a7);
                    break;
                case 0x74:                          /* switch 3 */
                    goto block_60;
                case 0x69:                          /* switch 3 */
                case 0x6F:                          /* switch 3 */
                    var_v1_2 = func_00493A28(arg1, &sp10, arg0, var_s0, var_s2, var_a5, var_a6, var_a7);
                    break;
                case 0x58:                          /* switch 3 */
                case 0x78:                          /* switch 3 */
                    var_v1_2 = func_00493AB0(arg1, &sp10, arg0, var_s0, var_s2, var_a5, var_a6, temp_a0_3);
                    break;
                default:                            /* switch 3 */
                    var_v1_2 = 0;
                    break;
                }
                if (var_v1_2 >= 0) {
                    goto loop_77;
                }
                return;
            case 0x63:                              /* switch 2 */
                temp_v0_8 = var_s1;
                var_s1 += 8;
                if (arg1(*temp_v0_8, sp10, arg0) == 0) {
                    goto block_70;
                }
                break;
            case 0x73:                              /* switch 2 */
                temp_v0_9 = var_s1;
                var_s1 += 8;
                if (func_00493468(arg1, &sp10, arg0, var_s0, var_s2, var_a5, *temp_v0_9) < 0) {
                    return;
                }
                goto loop_77;
            case 0x45:                              /* switch 2 */
            case 0x47:                              /* switch 2 */
            case 0x65:                              /* switch 2 */
            case 0x66:                              /* switch 2 */
            case 0x67:                              /* switch 2 */
            case 0x6E:                              /* switch 2 */
            case 0x70:                              /* switch 2 */
                var_s1 += 8;
                goto loop_77;
            default:                                /* switch 2 */
                sp14 = temp_s5;
                goto loop_77;
            }
        } else {
block_9:
            if (arg1(temp_v0, sp10, arg0) != 0) {
                return;
            }
            goto block_70;
        }
    } else {
        if (arg1(temp_v0, sp10, arg0) != 0) {
            return;
        }
block_70:
        if (sp10 != NULL) {
            sp10 += 1;
        }
        goto loop_78;
    }
}
