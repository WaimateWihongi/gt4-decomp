/* NON_MATCHING: functional draft, 167 of 179 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_005599D0(s32, void *, M2C_UNK);            /* extern */
s32 func_00559A88(s32, u8);                         /* extern */
M2C_UNK func_0055CFE8(void *, s64);                 /* extern */
void *func_0055D0B0(void *, s32);                   /* extern */
M2C_UNK func_0055D5F0(void *, M2C_UNK);             /* extern */
M2C_UNK func_0055D630(void *, M2C_UNK);             /* extern */
M2C_UNK func_0055D680(void *, s32);                 /* extern */
M2C_UNK func_0055D6D0(void *, void *);              /* extern */

void func_00559EB0(void *arg0) {
    struct StackFrame_00559EB0 { s8 pad0[0x40]; } sp_;
    s32 temp_v0_2;
    u8 var_a1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a1;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;

    if (M2C_FIELD(arg0, s32 *, 0x14) == 3) {
        temp_a0 = M2C_FIELD(arg0, void **, 0);
        if (temp_a0 != NULL) {
            M2C_FIELD(temp_a0, s16 *, 0x64) = (s16) M2C_FIELD(arg0, s32 *, 0x1C);
            M2C_FIELD(temp_a0, s16 *, 0x66) = (s16) M2C_FIELD(arg0, s32 *, 0x20);
            M2C_FIELD(temp_a0, s8 *, 0x1F) = 1;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
            temp_a0_2 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(temp_a0_2, s8 *, 0x2C) = 1;
            M2C_FIELD(temp_a0_2, s32 *, 0x74) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x1F) = 1;
            goto block_25;
        }
        if ((M2C_FIELD(arg0, void **, 8) != NULL) && (M2C_FIELD(arg0, void **, 0xC) != NULL)) {
            func_0055CFE8(((s8 *)&sp_), *(s64 *)0x6C8BD0);
            temp_v0 = func_0055D0B0(((s8 *)&sp_), M2C_FIELD(arg0, s32 *, 0x24));
            M2C_FIELD(arg0, void **, 0) = temp_v0;
            if (temp_v0 != NULL) {
                M2C_FIELD(temp_v0, void **, 0x10) = arg0;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x3C) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x30) = 5;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
                if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u8 *, 4) & 0x80) {
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x25) = 1;
                }
                if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u8 *, 4) & 0x20) {
                    func_0055D630(M2C_FIELD(arg0, void **, 0), 0xA);
                    func_0055D5F0(M2C_FIELD(arg0, void **, 0), 0x7F);
                }
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x38) = (s32) M2C_FIELD(arg0, s32 *, 4);
                temp_a0_3 = M2C_FIELD(arg0, void **, 0xC);
                temp_v1 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_v1, s32 *, 0x7C) = 0x3C0;
                M2C_FIELD(temp_v1, s32 *, 0x78) = (s32) (M2C_FIELD(temp_a0_3, u8 *, 2) * 0x10);
                M2C_FIELD(temp_v1, s32 *, 0x80) = (s32) M2C_FIELD(temp_a0_3, s8 *, 3);
                M2C_FIELD(temp_v1, s8 *, 0x20) = 1;
                temp_s0 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_s0, s32 *, 0x8C) = func_005599D0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, void **, 0xC), 0x3C0);
                M2C_FIELD(temp_s0, s8 *, 0x2A) = 1;
                temp_v1_2 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_v1_2, s8 *, 0x2D) = 1;
                M2C_FIELD(temp_v1_2, u16 *, 0x92) = (u16) M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u16 *, 8);
                temp_v1_3 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_v1_3, s8 *, 0x2E) = 1;
                M2C_FIELD(temp_v1_3, u16 *, 0x94) = (u16) M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u16 *, 0xA);
                temp_v1_4 = M2C_FIELD(arg0, void **, 0xC);
                if (M2C_FIELD(temp_v1_4, u8 *, 4) & 0x40) {
                    var_a1 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), u8 *, 5);
                } else {
                    var_a1 = M2C_FIELD(temp_v1_4, u8 *, 0xF);
                }
                if (var_a1 != 0x7F) {
                    temp_v0_2 = func_00559A88(M2C_FIELD(arg0, s32 *, 4), var_a1);
                    if (temp_v0_2 != 0) {
                        func_0055D680(M2C_FIELD(arg0, void **, 0), temp_v0_2);
                    }
                }
                if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u8 *, 4) & 0x10) {
                    temp_v0_3 = M2C_FIELD(arg0, void **, 0);
                    M2C_FIELD(temp_v0_3, s8 *, 0x20) = 1;
                    M2C_FIELD(temp_v0_3, s32 *, 0x84) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 8), u8 *, 4);
                } else {
                    temp_v0_4 = M2C_FIELD(arg0, void **, 0);
                    M2C_FIELD(temp_v0_4, s8 *, 0x20) = 1;
                    M2C_FIELD(temp_v0_4, s32 *, 0x84) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u8 *, 0xE);
                }
                temp_a1 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_a1, s8 *, 0x1F) = 1;
                M2C_FIELD(temp_a1, s32 *, 0x54) = (s32) (M2C_FIELD(M2C_FIELD(arg0, void **, 8), u8 *, 1) * M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u8 *, 0xC));
                temp_v0_5 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_v0_5, s8 *, 0x1F) = 1;
                M2C_FIELD(temp_v0_5, s32 *, 0x70) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u8 *, 0xD);
                func_0055D6D0(M2C_FIELD(arg0, void **, 0), temp_a1);
                temp_v0_6 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_v0_6, s16 *, 0x64) = (s16) M2C_FIELD(arg0, s32 *, 0x1C);
                M2C_FIELD(temp_v0_6, s16 *, 0x66) = (s16) M2C_FIELD(arg0, s32 *, 0x20);
                M2C_FIELD(temp_v0_6, s8 *, 0x1F) = 1;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
                temp_a0_4 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_a0_4, s8 *, 0x2C) = 1;
                M2C_FIELD(temp_a0_4, s32 *, 0x74) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x1F) = 1;
block_25:
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x68) = M2C_FIELD(arg0, s32 *, 0x2C);
                if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u8 *, 4) == 0) {
                    goto block_33;
                }
                if (M2C_FIELD(arg0, s32 *, 0x30) != 0) {
block_33:
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x25) = 0;
                } else {
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x25) = 1;
                }
            }
        }
    }
}
