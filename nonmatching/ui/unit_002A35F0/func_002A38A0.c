/* NON_MATCHING: functional draft, 61 of 69 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_005769F0(M2C_UNK);                     /* extern */
M2C_UNK func_00576A28(M2C_UNK, s32, u8, u8, u8);    /* extern */

void func_002A38A0(void *arg0) {
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    s32 temp_a1_2;
    u8 temp_a1;
    u8 temp_a3;
    u8 temp_v0;
    u8 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, u8 *, 0xEC);
    if ((temp_v0 - 1) < (s32) M2C_FIELD(arg0, u8 *, 0xEE)) {
        M2C_FIELD(arg0, u8 *, 0xEE) = (u8) (temp_v0 + 0xFF);
    }
    temp_v0_2 = M2C_FIELD(arg0, u8 *, 0xED);
    if ((temp_v0_2 - 1) < (s32) M2C_FIELD(arg0, u8 *, 0xEF)) {
        M2C_FIELD(arg0, u8 *, 0xEF) = (u8) (temp_v0_2 + 0xFF);
    }
    temp_f21 = 0x1.0000000000000p+0f / (f32) temp_v0_2;
    temp_f20 = 0x1.0000000000000p+0f / (f32) temp_v0;
    func_005769F0(0x836D58);
    temp_a1 = M2C_FIELD(arg0, u8 *, 0xEF);
    temp_a1_2 = temp_a1 + 1;
    temp_a3 = M2C_FIELD(arg0, u8 *, 0xEE);
    temp_f2 = temp_f20 * (f32) temp_a3;
    temp_f3 = temp_f21 * (f32) temp_a1;
    temp_f1 = temp_f21 * (f32) temp_a1_2;
    temp_f4 = temp_f20 * (f32) (M2C_FIELD(arg0, u8 *, 0xEE) + 1);
    M2C_FIELD(arg0, f32 *, 0xCC) = temp_f2;
    M2C_FIELD(arg0, f32 *, 0xD0) = temp_f3;
    M2C_FIELD(arg0, f32 *, 0xE4) = temp_f2;
    M2C_FIELD(arg0, f32 *, 0xE8) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0xD4) = temp_f4;
    M2C_FIELD(arg0, f32 *, 0xD8) = temp_f3;
    M2C_FIELD(arg0, f32 *, 0xDC) = temp_f4;
    M2C_FIELD(arg0, f32 *, 0xE0) = temp_f1;
    func_00576A28(0x836D58, temp_a1_2, temp_a1, temp_a3, temp_a1);
}
