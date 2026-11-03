/* NON_MATCHING: functional draft, 177 of 181 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0049CC48(s32);                         /* extern */
M2C_UNK func_0049E480(M2C_UNK);                     /* extern */
M2C_UNK func_0049E548(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0049E5F8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_004A72C0(M2C_UNK, M2C_UNK);            /* extern */

void func_00497838(s32 arg0, void *arg1, s32 arg2, s32 arg3, f32 fparg0, f32 fparg1, f32 fparg2) {
    s32 sp0;
    s32 sp4;
    s32 temp_s5;
    s32 var_s2;
    s32 var_v1;
    u16 temp_v0;
    u32 var_s4;
    void *temp_a0;
    void *temp_a4;
    void *temp_a4_2;
    void *temp_v0_2;
    void *var_s1;

    sp0 = arg0;
    sp4 = arg3;
    if (M2C_FIELD((void *)0x70002000, s32 *, 0x40) != 0xC0C0C0C0) {
        func_004A72C0(0x70002000, 0xC0C0C0C0);
    }
    if (M2C_FIELD((void *)0x70002000, u8 *, 0) != 0) {
        func_0049E480(0x70002000);
    }
    temp_s5 = M2C_FIELD((void *)0x70002000, s32 *, 0x14);
    if (temp_s5 != 0) {
        var_s4 = 0;
        M2C_FIELD((void *)0x70002000, s32 *, 0x1020) = (s32) (M2C_FIELD((void *)0x70002000, s32 *, 0x1020) + M2C_FIELD(arg1, u16 *, 0xC));
        M2C_FIELD((void *)0x70002000, s32 *, 0x1024) = (s32) (M2C_FIELD((void *)0x70002000, s32 *, 0x1024) + M2C_FIELD(arg1, u16 *, 0xE));
        M2C_FIELD((void *)0x70002000, s32 *, 0x1028) = (s32) (M2C_FIELD((void *)0x70002000, s32 *, 0x1028) + M2C_FIELD(arg1, u16 *, 0xA));
        var_s2 = 0;
        if (M2C_FIELD(arg1, u16 *, 0xA) != 0) {
            var_s1 = arg1 + 0x10;
            do {
                temp_v0 = M2C_FIELD(var_s1, u16 *, 6);
                if (temp_v0 != 0) {
                    temp_v0_2 = M2C_FIELD(((temp_v0 * 4) + sp0), void **, 0x28);
                    if (temp_v0_2 != NULL) {
                        func_0049CC48(M2C_FIELD(temp_v0_2, s32 *, 0x18));
                    }
                }
                temp_a4 = M2C_FIELD((void *)0x70002000, void **, 0x1F8);
                M2C_FIELD(temp_a4, s32 *, 0) = (s32) (M2C_FIELD(var_s1, u16 *, 4) | 0x30000000);
                M2C_FIELD(temp_a4, s32 *, 8) = 0x040002DF;
                M2C_FIELD(temp_a4, s32 *, 4) = (s32) (M2C_FIELD(var_s1, s32 *, 0) & 0x0FFFFFFF);
                if (var_s2 != 0) {
                    var_v1 = var_s2 | 0x14000000;
                } else {
                    var_v1 = 0;
                }
                temp_a0 = temp_a4 + 0x10;
                M2C_FIELD(temp_a4, s32 *, 0xC) = var_v1;
                var_s2 = temp_s5 + 0x3C;
                M2C_FIELD((void *)0x70002000, void **, 0x1F8) = temp_a0;
                if (var_s4 < 2U) {
                    M2C_FIELD(temp_a0, s32 *, 0xC) = 0x6E04C0CB;
                    M2C_FIELD(temp_a4, s32 *, 0x10) = 0x30000001;
                    M2C_FIELD(temp_a0, s32 *, 0x10) = 0x10000001;
                    M2C_FIELD(temp_a0, s32 *, 0x18) = 0x6001C0CA;
                    M2C_FIELD(temp_a0, s32 *, 0x20) = 0x6801C0C9;
                    M2C_FIELD(temp_a0, s32 *, 4) = (s32) (arg2 & 0x0FFFFFFF);
                    M2C_FIELD(temp_a0, s32 *, 8) = 0;
                    M2C_FIELD(temp_a0, s32 *, 0x14) = 0;
                    M2C_FIELD(temp_a0, f32 *, 0x24) = fparg0;
                    M2C_FIELD(temp_a0, s32 *, 0x1C) = sp4;
                    M2C_FIELD(temp_a0, f32 *, 0x2C) = fparg2;
                    M2C_FIELD(temp_a0, f32 *, 0x28) = fparg1;
                    M2C_FIELD((void *)0x70002000, void **, 0x1F8) = (void *) (temp_a0 + 0x30);
                }
                if (M2C_FIELD((void *)0x70002000, u8 *, 3) == 0) {
                    var_s2 -= 1;
                    func_0049E548(0x70002000, 0xC1, 0);
                    M2C_FIELD((void *)0x70002000, u8 *, 3) = 1U;
                }
                if (M2C_FIELD((void *)0x70002000, s64 *, 0x1D8) & ((0x3FF << 0x20) | 0x1FFF)) {
                    func_0049E5F8(0x70002000, 0xD9);
                    var_s2 -= 5;
                }
                var_s4 += 1;
                var_s1 += 8;
            } while (var_s4 < (u16) M2C_FIELD(arg1, u16 *, 0xA));
        }
        if (var_s2 != 0) {
            temp_a4_2 = M2C_FIELD((void *)0x70002000, void **, 0x1F8);
            M2C_FIELD(temp_a4_2, s32 *, 0) = 0x10000000;
            M2C_FIELD(temp_a4_2, s32 *, 8) = 0x040002DF;
            M2C_FIELD(temp_a4_2, s32 *, 0xC) = (s32) (var_s2 | 0x14000000);
            M2C_FIELD(temp_a4_2, s32 *, 4) = 0;
            M2C_FIELD((void *)0x70002000, void **, 0x1F8) = (void *) (temp_a4_2 + 0x10);
        }
    }
}
