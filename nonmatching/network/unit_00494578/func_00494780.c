/* NON_MATCHING: functional draft, 111 of 114 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_00494780(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;

    temp_s0 = arg1 != NULL;
    temp_s0_2 = (arg2 != NULL) ? (temp_s0 | 2) : temp_s0;
    temp_s0_3 = (arg3 != NULL) ? (temp_s0_2 | 4) : temp_s0_2;
    temp_s0_4 = (arg4 != NULL) ? (temp_s0_3 | 8) : temp_s0_3;
    if (M2C_FIELD(arg0, s32 *, 0x968) != temp_s0_4) {
        func_00494A28(arg0);
        M2C_FIELD(arg0, s32 *, 0x968) = temp_s0_4;
    }
    temp_a0 = arg0 + 0xC;
    if (arg1 != NULL) {
        *(s32 *)(temp_a0 + (M2C_FIELD(arg0, s32 *, 0x96C) * 0xC)) = M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x96C) * 0xC) + temp_a0), f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x96C) * 0xC) + temp_a0), f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    }
    temp_a0_2 = arg0 + 0xC;
    if (arg2 != NULL) {
        M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x96C) * 0xC) + temp_a0_2), f32 *, 0x300) = (f32) M2C_FIELD(arg2, f32 *, 0);
        M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x96C) * 0xC) + temp_a0_2), f32 *, 0x304) = (f32) M2C_FIELD(arg2, f32 *, 4);
        M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x96C) * 0xC) + temp_a0_2), f32 *, 0x308) = (f32) M2C_FIELD(arg2, f32 *, 8);
    }
    temp_a0_3 = arg0 + 0xC;
    if (arg3 != NULL) {
        M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x96C) * 8) + temp_a0_3), f32 *, 0x600) = (f32) M2C_FIELD(arg3, f32 *, 0);
        M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x96C) * 8) + temp_a0_3), f32 *, 0x604) = (f32) M2C_FIELD(arg3, f32 *, 4);
    }
    if (arg4 != NULL) {
        M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x96C) * 4) + arg0), s32 *, 0x80C) = (s32) *(s32 *)arg4;
    }
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x96C) + 1;
    M2C_FIELD(arg0, s32 *, 0x970) = (s32) (M2C_FIELD(arg0, s32 *, 0x970) + 1);
    M2C_FIELD(arg0, s32 *, 0x96C) = temp_v0;
    if (temp_v0 >= 0x40) {
        func_00494A28(arg0);
        func_00494780(arg0, (arg1 == NULL) ? NULL : (arg0 + 0x2F4), (((s32) arg2 ^ 0) == 0) ? NULL : (arg0 + 0x5F4), (((s32) arg3 ^ 0) == 0) ? NULL : (arg0 + 0x7FC), (((s32) arg4 ^ 0) == 0) ? NULL : (arg0 + 0x904));
        func_00494780(arg0, (((s32) arg1 ^ 0) == 0) ? NULL : (arg0 + 0x300), (((s32) arg2 ^ 0) == 0) ? NULL : (arg0 + 0x600), (((s32) arg3 ^ 0) == 0) ? NULL : (arg0 + 0x804), (((s32) arg4 ^ 0) == 0) ? NULL : (arg0 + 0x908));
    }
}
