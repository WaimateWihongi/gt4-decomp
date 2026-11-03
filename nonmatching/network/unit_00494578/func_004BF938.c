/* NON_MATCHING: functional draft, 209 of 212 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_004C9330(s32, s32, s32, u8 *, u8 *, s16 *, M2C_UNK, u8 *); /* extern */

void func_004BF938(s32 arg0, void *arg1, s32 arg2, u8 *arg3, u8 *arg4, s16 *arg5) {
    s16 var_a0;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a2;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_v0;
    u16 temp_a3;
    u32 temp_v1;
    u32 temp_v1_2;
    u8 var_a0_2;
    u8 var_v1;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_v0;

    temp_v1 = M2C_FIELD(arg1, s32 *, 0) & 0xFFF00000;
    switch (temp_v1) {                              /* irregular */
    case 0x100000:
        *arg3 = M2C_FIELD(arg1, u8 *, 4);
        var_v0 = func_004C9330(arg2, arg0, arg2, arg3, arg4, arg5, 0x400000, arg3);
        var_a0 = 8;
block_22:
        *arg4 = var_v0 - (M2C_FIELD(arg1, u8 *, 0x10) * 2);
        *arg5 = var_a0;
        break;
    case 0x800000:
        temp_v0 = arg0 + ((M2C_FIELD(arg1, u8 *, 0xE) * 0x10) + 0x50);
        temp_a3 = M2C_FIELD(temp_v0, u16 *, 0xC);
        temp_a1 = M2C_FIELD(temp_v0, u16 *, 0xA) + temp_a3;
        temp_a2 = M2C_FIELD(temp_v0, s32 *, 0) + (temp_a1 * 6);
        *arg3 = M2C_FIELD((((u16) M2C_FIELD(arg1, u8 *, 4) * 0x14) + temp_a2), u8 *, 0xC);
        var_v0 = func_004C9330(arg2, temp_a1, temp_a2, (u8 *) temp_a3, arg4, arg5, 0x400000, arg3);
        var_a0 = 0x2B;
        goto block_22;
    case 0x400000:
        temp_v1_2 = (u16) M2C_FIELD((arg1 + 4), u16 *, 6) >> 0xE;
        temp_a0 = ((s8) M2C_FIELD(arg1, u8 *, 0xE) | 0x300) & 0xFFFF;
        if (temp_v1_2 != 0) {
            if ((s32) temp_v1_2 >= 0) {
                if ((s32) temp_v1_2 < 3) {
                    temp_a0_2 = arg0 + (((temp_a0 & 0xFF) * 0x10) + 0x50);
                    *arg3 = M2C_FIELD((((u16) M2C_FIELD(arg1, u8 *, 4) * 0x14) + (M2C_FIELD(temp_a0_2, s32 *, 0) + ((M2C_FIELD(temp_a0_2, u16 *, 0xA) + M2C_FIELD(temp_a0_2, u16 *, 0xC)) * 6))), u8 *, 9);
                    *arg4 = M2C_FIELD((((u16) M2C_FIELD(arg1, u8 *, 4) * 0x14) + (M2C_FIELD(temp_a0_2, s32 *, 0) + ((M2C_FIELD(temp_a0_2, u16 *, 0xA) + M2C_FIELD(temp_a0_2, u16 *, 0xC)) * 6))), u8 *, 0xB);
                    temp_a3_2 = M2C_FIELD(temp_a0_2, s32 *, 0);
                    temp_a1_2 = (M2C_FIELD(temp_a0_2, u16 *, 0xA) + M2C_FIELD(temp_a0_2, u16 *, 0xC)) * 6;
                    temp_v0_2 = (u16) M2C_FIELD(arg1, u8 *, 4) * 0x14;
                    var_v1 = M2C_FIELD((temp_v0_2 + (temp_a3_2 + temp_a1_2)), u8 *, 0x10);
                    var_a0_2 = M2C_FIELD((temp_a1_2 + (temp_a3_2 + temp_v0_2)), u8 *, 0x11);
                    goto block_19;
                }
            }
        } else {
            temp_a0_3 = arg0 + (((temp_a0 & 0xFF) * 0x10) + 0x50);
            *arg3 = M2C_FIELD((((u16) M2C_FIELD(arg1, u8 *, 4) * 0x14) + (M2C_FIELD(temp_a0_3, s32 *, 0) + ((M2C_FIELD(temp_a0_3, u16 *, 0xA) + M2C_FIELD(temp_a0_3, u16 *, 0xC)) * 6))), u8 *, 8);
            *arg4 = M2C_FIELD((((u16) M2C_FIELD(arg1, u8 *, 4) * 0x14) + (M2C_FIELD(temp_a0_3, s32 *, 0) + ((M2C_FIELD(temp_a0_3, u16 *, 0xA) + M2C_FIELD(temp_a0_3, u16 *, 0xC)) * 6))), u8 *, 0xA);
            temp_a3_3 = M2C_FIELD(temp_a0_3, s32 *, 0);
            temp_a1_3 = (M2C_FIELD(temp_a0_3, u16 *, 0xA) + M2C_FIELD(temp_a0_3, u16 *, 0xC)) * 6;
            temp_v0_3 = (u16) M2C_FIELD(arg1, u8 *, 4) * 0x14;
            var_v1 = M2C_FIELD((temp_v0_3 + (temp_a3_3 + temp_a1_3)), u8 *, 0xE);
            var_a0_2 = M2C_FIELD((temp_a1_3 + (temp_a3_3 + temp_v0_3)), u8 *, 0xF);
block_19:
            *arg5 = var_a0_2 | (var_v1 << 8);
        }
        break;
    default:
        *arg3 = M2C_FIELD((void *) M2C_FIELD(arg1, u8 *, 4), u8 *, 3) & 0xF;
        *arg4 = func_004C9330(arg2, arg0, arg2, arg3, arg4, arg5, 0x400000, arg3) - (M2C_FIELD(arg1, u8 *, 0x10) * 2);
        *arg5 = ((u8) M2C_FIELD((void *) M2C_FIELD(arg1, u8 *, 4), u8 *, 5) >> 5) | ((M2C_FIELD((void *) M2C_FIELD(arg1, u8 *, 4), u8 *, 4) & 0x3F) * 8);
        break;
    }
}
