/* NON_MATCHING: functional draft, 145 of 164 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_00426A00(void *);                          /* extern */
s32 func_00426A68(void *);                          /* extern */
s32 func_00426A88(void *);                          /* extern */
s32 func_00426A90(void *);                          /* extern */

void func_003FAD78(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f3;
    f32 temp_f4;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s4;
    s32 temp_v0;
    s32 var_a0;
    s32 var_v1;
    s8 temp_a4;
    s8 temp_a4_2;
    s8 temp_a5;
    s8 var_v0;
    u32 temp_a3;
    u32 temp_a3_2;
    u32 temp_a3_3;
    u32 temp_a3_4;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(temp_s1, s32 *, 0x1C4);
    temp_s4 = func_00426A90(temp_s1);
    temp_s2 = func_00426A00(temp_s1);
    temp_s0 = func_00426A88(temp_s1);
    temp_v0 = func_00426A68(temp_s1);
    temp_a3 = (temp_s0 & 1) != 0;
    M2C_FIELD(arg0, s32 *, 0xC) = temp_s0;
    temp_a3_2 = (temp_s0 & 0x200) ? (temp_a3 | 2) : temp_a3;
    M2C_FIELD(arg0, s32 *, 0x10) = temp_s4;
    temp_a3_3 = (temp_s0 & 2) ? (temp_a3_2 | 4) : temp_a3_2;
    temp_a4 = (temp_v0 & 4) ? -1 : 0;
    temp_a3_4 = (temp_s0 & 0x400) ? (temp_a3_3 | 8) : temp_a3_3;
    temp_f0 = -M2C_FIELD(temp_s1, f32 *, 0x17C);
    temp_a4_2 = (temp_v0 & 8) ? (temp_a4 + 1) : temp_a4;
    temp_f1 = -M2C_FIELD(temp_s1, f32 *, 0x184);
    temp_a5 = ((temp_v0 & 2) ? -1 : 0) + (temp_v0 & 1);
    temp_f3 = M2C_FIELD(temp_s1, f32 *, 0x178);
    temp_f4 = M2C_FIELD(temp_s1, f32 *, 0x180);
    switch (temp_a3_4) {
    case 0:
        if (temp_a4_2 == 0) {
            M2C_FIELD(arg0, s8 *, 0x4C) = (s8) ((!(temp_s2 & 2) ? 0 : -1) + (temp_s2 & 1));
            M2C_FIELD(arg0, s8 *, 0x57) = 0;
            M2C_FIELD(arg0, f32 *, 0x3C) = temp_f3;
            M2C_FIELD(arg0, f32 *, 0x40) = temp_f0;
            M2C_FIELD(arg0, f32 *, 0x44) = temp_f4;
            M2C_FIELD(arg0, f32 *, 0x48) = temp_f1;
            if (temp_f3 == 0x0.0p+0f) {
                if (temp_f0 == 0x0.0p+0f) {
                    if (temp_f4 == 0x0.0p+0f) {
                        if (temp_f1 == 0x0.0p+0f) {
                            var_a0 = 0x10000;
                            if (temp_s4 & 0x40) {
                                var_v1 = 0xFF00FFFF;
                                goto block_15;
                            }
                            if (temp_s4 & 0x20) {
                                var_v1 = 0xFFFFFF;
                                var_a0 = 0x01000000;
block_15:
                                M2C_FIELD(arg0, s32 *, 0x50) = (s32) ((M2C_FIELD(arg0, s32 *, 0x50) & var_v1) | var_a0);
                            } else if (temp_s4 & 0x2000) {
                                M2C_FIELD(arg0, s32 *, 0x54) = (s32) ((M2C_FIELD(arg0, s32 *, 0x54) & ~0xFF) | 1);
                            } else if (temp_s4 & 0x10) {
                                M2C_FIELD(arg0, s32 *, 0x54) = (s32) ((M2C_FIELD(arg0, s32 *, 0x54) & 0xFFFF00FF) | 0x100);
                            }
                        }
                    }
                }
            }
        } else {
            M2C_FIELD(arg0, s8 *, 0x4D) = temp_a4_2;
        default:
        }
        break;
    case 1:
        M2C_FIELD(arg0, s8 *, 0x4E) = temp_a5;
        M2C_FIELD(arg0, s8 *, 0x57) = 1;
        if ((temp_a5 == 0) && (temp_s4 & 0x10)) {
            M2C_FIELD(arg0, s32 *, 0x54) = (s32) ((M2C_FIELD(arg0, s32 *, 0x54) & 0xFF00FFFF) | 0x10000);
        }
        break;
    case 2:
        var_v0 = 2;
        M2C_FIELD(arg0, s8 *, 0x4F) = temp_a5;
block_28:
        M2C_FIELD(arg0, s8 *, 0x57) = var_v0;
        break;
    case 4:
        var_v0 = 3;
        M2C_FIELD(arg0, s32 *, 0x50) = temp_a5;
        goto block_28;
    case 8:
        var_v0 = 4;
        M2C_FIELD(arg0, s8 *, 0x51) = temp_a5;
        goto block_28;
    }
}
