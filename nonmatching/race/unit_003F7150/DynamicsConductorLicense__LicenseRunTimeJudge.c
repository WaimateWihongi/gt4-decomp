/* NON_MATCHING: functional draft, 135 of 169 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00359C10(void *, s32, s32, s32);       /* extern */
s32 func_0035DF00(void *);                          /* extern */
s32 func_0035DF70(void *);                          /* extern */
M2C_UNK func_003F8980(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_003F8AB0(void *, void *, s32);         /* extern */
s32 func_003F91F0(void *, void *, M2C_UNK);         /* extern */
s32 func_003FA228(void *);                          /* extern */
M2C_UNK func_003FA238(void *);                      /* extern */
M2C_UNK func_003FA248(void *);                      /* extern */
s32 func_003FA2B0(void *);                          /* extern */

void func_003F8D70(void *arg0, void *arg1) {
    s32 sp0;
    struct StackFrame_003F8D70 { s8 pad0[0x10]; } sp_;
    s32 temp_f1;
    s32 temp_s1;
    s32 temp_v0;
    u32 temp_lo;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_s2;
    void *temp_v1_3;
    void *temp_v1_4;

    temp_s2 = arg1 + 0x104;
    if (M2C_FIELD(temp_s2, u8 *, 0x4B2) == 0) {
        temp_v1 = M2C_FIELD(temp_s2, u8 *, 0x4B3);
        if (temp_v1 & 2) {
            func_003F8980(arg0, arg1, 3);
            return;
        }
        if (temp_v1 & 4) {
            func_003F8980(arg0, arg1, 5);
            return;
        }
        if (!(temp_v1 & 1 & 0xFF)) {
            temp_v1_2 = M2C_FIELD(arg0, u8 *, 0xF81A);
            switch (temp_v1_2) {                    /* irregular */
            case 6:
                if (M2C_FIELD(arg1, s8 *, 0x5B3) == 1) {
                    func_003F8980(arg0, arg1, 6);
                }
            default:
block_24:
                temp_v0 = func_0035DF00(arg0);
                if ((temp_v0 > 0) && (func_0035DF70(arg0) == temp_v0)) {
                    func_003F8AB0(arg0, arg1, ((u32) (M2C_FIELD(arg0, s32 *, 0xF898) + 0x32) / 3U) - M2C_FIELD(temp_s2, s32 *, 0x614));
                }
                if ((func_003FA228(arg0) != 0) && (M2C_FIELD(temp_s2, u8 *, 0x440) == 0)) {
                    if (M2C_FIELD(temp_s2, s8 *, 0x4AF) == 1) {
                        func_003FA248(arg0);
                    } else {
                        func_003FA238(arg0);
                    }
                    if (func_003FA2B0(arg0) == 0) {
                        func_003F8AB0(arg0, arg1, ((u32) (M2C_FIELD(arg0, s32 *, 0xF898) + 0x32) / 3U) - M2C_FIELD(temp_s2, s32 *, 0x614));
                    }
                }
                break;
            case 1:
                if (func_003F91F0(arg1, ((s8 *)&sp_), 1) != 0) {
                    temp_v1_3 = M2C_FIELD(arg0, void **, 0x10140);
                    temp_f1 = (s32) (sp0 * 0x1.9000000000000p+5f);
                    temp_lo = (u32) (M2C_FIELD(arg0, s32 *, 0xF898) + temp_f1) / 3U;
                    temp_s1 = temp_lo - M2C_FIELD(temp_s2, s32 *, 0x614);
                    if ((M2C_FIELD((temp_v1_3 + 0x30), s32 (**)(void *, u32, s32, M2C_UNK), 4)(arg0 + M2C_FIELD(temp_v1_3, s16 *, 0x30), temp_lo, temp_f1, 3) != 0) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0xE0) != 0)) {
                        temp_v1_4 = M2C_FIELD(arg0, void **, 0x10140);
                        func_00359C10(arg1, M2C_FIELD((temp_v1_4 + 0x48), s32 (**)(void *, void *, M2C_UNK), 4)(arg0 + M2C_FIELD(temp_v1_4, s16 *, 0x48), arg1, 1), temp_s1, M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0xE4));
                    }
                    func_003F8AB0(arg0, arg1, temp_s1);
                    return;
                }
                goto block_24;
            }
        } else {
            func_003F8980(arg0, arg1, 4);
        }
    }
}
