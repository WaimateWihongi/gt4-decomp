/* NON_MATCHING: functional draft, 33 of 50 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

u32 func_004C0508(char *, u16, u16);
void func_004BC758(s8 *arg0, s32 arg1, void *arg2) {
    s32 var_v0;
    s8 *temp_a1;
    u16 temp_s2;
    u32 temp_a3;
    u32 temp_v0;

    temp_s2 = arg1 & 0xFFFF;
    temp_v0 = func_004C0508(arg0, temp_s2, M2C_FIELD(arg2, u16 *, 0x14));
    if (temp_v0 != 0) {
        temp_a3 = temp_v0 + (M2C_FIELD(arg2, u8 *, 0xE) + M2C_FIELD(arg2, u8 *, 0xF));
        if ((temp_s2 & 0xFF00) == 0x200) {
            var_v0 = ((temp_s2 & 0xFF) * 0x10) + 0x40;
        } else {
            var_v0 = ((temp_s2 & 0xFF) * 0x10) + 0x50;
        }
        temp_a1 = &arg0[var_v0];
        if (temp_a3 < (u32) ((M2C_FIELD(temp_a1, s32 *, 0) + M2C_FIELD(temp_a1, s32 *, 4)) - 1)) {
            func_004C0668(arg0, temp_s2, (s8 *) temp_a3);
        }
    }
}
