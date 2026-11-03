/* NON_MATCHING: functional draft, 257 of 259 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_004C14A0(void *, s32, M2C_UNK, void *, s32, void *, void *, s32); /* extern */
M2C_UNK func_004C16C8(void *, s32, void *, void *, s32, void *, void *, s32); /* extern */
M2C_UNK func_004C4B98(M2C_UNK, void *);             /* extern */

s32 func_004C4218(void *arg0, s64 arg1, void *arg2, s32 arg3) {
    s16 temp_s7_2;
    s32 temp_a0;
    s32 temp_a4;
    s32 temp_a4_2;
    s32 temp_a7;
    s32 temp_fp;
    s32 var_a0;
    s32 var_s6;
    s32 var_v0;
    u32 temp_s7;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a2;
    void *temp_a3;
    void *temp_a5;
    void *temp_a6;

    var_v0 = 0x80004457;
    if (((M2C_FIELD(arg0, u8 *, 0) << 0x18) | M2C_FIELD(arg0, u8 *, 3) | ((M2C_FIELD(arg0, u8 *, 2) << 8) | (M2C_FIELD(arg0, u8 *, 1) << 0x10))) == 1) {
        temp_a4 = ((M2C_FIELD(arg0, u8 *, 0x18) << 0x18) & 0xFF000000) | M2C_FIELD(arg0, u8 *, 0x1B) | ((M2C_FIELD(arg0, u8 *, 0x1A) << 8) | ((M2C_FIELD(arg0, u8 *, 0x19) << 0x10) & 0xFF0000));
        var_v0 = 0x80004457;
        if (temp_a4 != 0) {
            var_v0 = 0x80004457;
            if ((temp_a4 == ((s64) (arg1 << 0x20) >> 0x20)) && ((temp_fp = ((M2C_FIELD(arg2, u8 *, 0) << 0x18) & 0xFF000000) | M2C_FIELD(arg2, u8 *, 3) | ((M2C_FIELD(arg2, u8 *, 2) << 8) | ((M2C_FIELD(arg2, u8 *, 1) << 0x10) & 0xFF0000)), (temp_fp == 0)) || (var_v0 = 0x80004457, (temp_fp == 0xE0000000)))) {
                if (arg3 >= 0xC) {
                    temp_s7 = ((u32) (arg3 - 0xC) / 6U) & 0xFFFF;
                    if (temp_s7 >= 7U) {
                        temp_s7_2 = (temp_s7 + 0xFFFA) & 0xFFFF;
                        if (arg2 != NULL) {
                            if (temp_fp == 0xE0000000) {
                                if (temp_s7_2 == M2C_FIELD(arg2, u16 *, 0xA)) {
                                    goto block_13;
                                }
                                goto block_12;
                            }
block_13:
                            var_s6 = 0;
                            if (M2C_FIELD(M2C_FIELD(*(void **)0x6452D4, void **, 0x24), s32 *, 4) != 0) {
                                var_a0 = 0;
loop_15:
                                var_s6 += 1;
                                var_a0 += 0x2C;
                                if (var_s6 <= 0) {
                                    if (M2C_FIELD((M2C_FIELD(*(void **)0x6452D4, void **, 0x24) + var_a0), s32 *, 4) != 0) {
                                        goto loop_15;
                                    }
                                }
                            }
                            var_v0 = 0x80004557;
                            if (var_s6 != 1) {
                                temp_a4_2 = var_s6 * 0x2C;
                                *(s32 *)(M2C_FIELD(*(s32 *)0x6452D4, void **, 0x24) + temp_a4_2) = 0;
                                temp_a0 = temp_a4_2 + 0x10;
                                M2C_FIELD((M2C_FIELD(*(s32 *)0x6452D4, void **, 0x24) + temp_a4_2), void **, 4) = (void *) (arg0 + ((M2C_FIELD(arg0, u8 *, 8) << 0x18) | M2C_FIELD(arg0, u8 *, 0xB) | ((M2C_FIELD(arg0, u8 *, 0xA) << 8) | (M2C_FIELD(arg0, u8 *, 9) << 0x10))));
                                temp_a6 = arg0 + ((M2C_FIELD(arg0, u8 *, 0x10) << 0x18) | M2C_FIELD(arg0, u8 *, 0x13) | ((M2C_FIELD(arg0, u8 *, 0x12) << 8) | (M2C_FIELD(arg0, u8 *, 0x11) << 0x10)));
                                temp_a2 = arg2 + 0xC;
                                M2C_FIELD((M2C_FIELD(*(s32 *)0x6452D4, void **, 0x24) + temp_a4_2), void **, 8) = (void *) (arg0 + ((M2C_FIELD(arg0, u8 *, 0xC) << 0x18) | M2C_FIELD(arg0, u8 *, 0xF) | ((M2C_FIELD(arg0, u8 *, 0xE) << 8) | (M2C_FIELD(arg0, u8 *, 0xD) << 0x10))));
                                temp_a3 = arg2 + 0xA;
                                temp_a7 = temp_a4_2 + 0x20;
                                temp_a5 = arg0 + ((M2C_FIELD(arg0, u8 *, 0x14) << 0x18) | M2C_FIELD(arg0, u8 *, 0x17) | ((M2C_FIELD(arg0, u8 *, 0x16) << 8) | (M2C_FIELD(arg0, u8 *, 0x15) << 0x10)));
                                M2C_FIELD((M2C_FIELD(*(s32 *)0x6452D4, void **, 0x24) + temp_a4_2), s32 *, 0xC) = (s32) ((M2C_FIELD(arg0, u8 *, 4) << 0x18) | M2C_FIELD(arg0, u8 *, 7) | ((M2C_FIELD(arg0, u8 *, 6) << 8) | (M2C_FIELD(arg0, u8 *, 5) << 0x10)));
                                *(s32 *)(M2C_FIELD(*(s32 *)0x6452D4, void **, 0x24) + temp_a0) = 4;
                                M2C_FIELD((M2C_FIELD(*(s32 *)0x6452D4, void **, 0x24) + temp_a0), void **, 4) = temp_a6;
                                M2C_FIELD((M2C_FIELD(*(s32 *)0x6452D4, void **, 0x24) + temp_a0), void **, 8) = temp_a5;
                                M2C_FIELD((M2C_FIELD(*(s32 *)0x6452D4, void **, 0x24) + temp_a7), void **, 8) = (void *) (arg2 + 8);
                                M2C_FIELD((M2C_FIELD(*(s32 *)0x6452D4, void **, 0x24) + temp_a0), void **, 0xC) = temp_a2;
                                M2C_FIELD((M2C_FIELD(*(s32 *)0x6452D4, void **, 0x24) + temp_a7), void **, 4) = temp_a3;
                                if (temp_fp == 0) {
                                    *M2C_FIELD((M2C_FIELD(*(s32 *)0x6452D4, void **, 0x24) + temp_a7), s16 **, 4) = temp_s7_2;
                                }
                                temp_a1 = M2C_FIELD(*(s32 *)0x6452D4, void **, 0x24) + temp_a7;
                                M2C_FIELD(temp_a1, void **, 0) = (void *) ((*M2C_FIELD(temp_a1, u16 **, 4) * 4) + arg2 + 0x24);
                                if (temp_fp == 0) {
                                    func_004C16C8(M2C_FIELD(*(s32 *)0x6452D4, void **, 0x24), var_s6, temp_a2, temp_a3, temp_a4_2, temp_a5, temp_a6, temp_a7);
                                    func_004C4B98(0xE0000000, arg2);
                                } else {
                                    func_004C14A0(M2C_FIELD(*(s32 *)0x6452D4, void **, 0x24), var_s6, 1, temp_a3, temp_a4_2, temp_a5, temp_a6, temp_a7);
                                }
                                var_v0 = var_s6;
                                temp_a1_2 = M2C_FIELD(*(s32 *)0x6452D4, void **, 0x24);
                                M2C_FIELD(temp_a1_2, u8 *, 0xB0) = (u8) (M2C_FIELD(temp_a1_2, u8 *, 0xB0) + 1);
                            }
                            /* Duplicate return node #0x1.8000000000000p+4 Try simplifying control flow for better match */
                            return var_v0;
                        }
                    }
                }
block_12:
                return 0x80004457;
            }
        }
    }
    return var_v0;
}
