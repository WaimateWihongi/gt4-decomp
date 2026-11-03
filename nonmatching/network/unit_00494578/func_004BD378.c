/* NON_MATCHING: functional draft, 68 of 69 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_004BD378(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a6;
    s32 temp_v1;
    s32 var_a4_2;
    s32 var_v1;
    s32 var_v1_2;
    u16 var_a4;
    u16 var_a5;
    void *temp_a1_3;
    void *temp_a2;
    void *var_a1;
    void *var_a2;

    temp_a1 = arg1 & 0xFFFF;
    temp_a6 = temp_a1 & 0xFF00;
    temp_a1_2 = temp_a1 & 0xFF;
    if (temp_a6 == 0x200) {
        var_a5 = M2C_FIELD(((temp_a1_2 * 0x10) + arg0), u16 *, 0x48);
    } else {
        var_a5 = M2C_FIELD(((temp_a1_2 * 0x10) + arg0), u16 *, 0x58);
    }
    if (arg4 > 0) {
        if (temp_a6 == 0x200) {
            var_v1 = M2C_FIELD(((temp_a1_2 * 0x10) + arg0), s32 *, 0x40);
        } else {
            var_v1 = M2C_FIELD(((temp_a1_2 * 0x10) + arg0), s32 *, 0x50);
        }
        var_a4 = var_a5;
        var_a1 = var_v1 + (var_a5 * 6) + arg2;
        if ((s32) var_a4 >= arg3) {
            do {
                temp_a2 = var_a1 - 6;
                var_a4 -= 1;
                M2C_FIELD(var_a1, u8 *, 0) = (u8) M2C_FIELD(temp_a2, u8 *, 0);
                M2C_FIELD(var_a1, u8 *, 1) = (u8) M2C_FIELD(temp_a2, u8 *, 1);
                var_a1 = temp_a2;
            } while ((s32) var_a4 >= arg3);
            return 0;
        }
        /* Duplicate return node #0x1.3000000000000p+4 Try simplifying control flow for better match */
        return 0;
    }
    if (temp_a6 == 0x200) {
        var_v1_2 = M2C_FIELD(((temp_a1_2 * 0x10) + arg0), s32 *, 0x40);
    } else {
        var_v1_2 = M2C_FIELD(((temp_a1_2 * 0x10) + arg0), s32 *, 0x50);
    }
    var_a2 = var_v1_2 + (arg3 * 6) + arg2;
    temp_v1 = var_a5 - 1;
    if (arg3 < temp_v1) {
        var_a4_2 = temp_v1 - arg3;
        do {
            temp_a1_3 = var_a2 + 6;
            var_a4_2 -= 1;
            M2C_FIELD(var_a2, u8 *, 0) = (u8) M2C_FIELD(var_a2, u8 *, 6);
            M2C_FIELD(var_a2, u8 *, 1) = (u8) M2C_FIELD(temp_a1_3, u8 *, 1);
            var_a2 = temp_a1_3;
        } while (var_a4_2 != 0);
    }
    M2C_FIELD(var_a2, s8 *, 1) = 0;
    M2C_FIELD(var_a2, s8 *, 0) = 0;
    return 0;
}
