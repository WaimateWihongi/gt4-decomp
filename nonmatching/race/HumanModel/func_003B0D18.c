/* NON_MATCHING: functional draft, 75 of 97 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0041B3D0(s32);                             /* extern */
void *func_004548A8(s32, s32, void *);              /* extern */
void *func_00454970(s32, s32);                      /* extern */
void *func_00454B08(s32, M2C_UNK);                  /* extern */

void func_003B0D18(void *arg0) {
    s32 sp0;
    struct StackFrame_003B0D18 { s8 pad0[0x10]; } sp_;
    s32 temp_a0;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 var_s4;
    void **temp_a0_2;
    void **var_s1;
    void *temp_a1;
    void *temp_s5;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v1;
    void *var_s3;

    temp_v0 = func_00454B08(M2C_FIELD(arg0, s32 *, 0), 0x800001);
    if (temp_v0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x708) = (f32) M2C_FIELD(temp_v0, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x70C) = (f32) M2C_FIELD(temp_v0, f32 *, 8);
    }
    temp_v1 = func_004548A8(M2C_FIELD(arg0, s32 *, 0), 0x6A23A0, ((s8 *)&sp_));
    M2C_FIELD(arg0, s32 *, 0x6B8) = 0;
    if (temp_v1 != NULL) {
        M2C_FIELD(arg0, u16 *, 0x762) = sp0;
        M2C_FIELD(arg0, u16 *, 0x760) = (u16) M2C_FIELD(temp_v1, u16 *, 4);
        if ((sp0 << 0x10) > 0) {
            M2C_FIELD(arg0, s32 *, 0x6B8) = 1;
        }
    }
    var_s4 = 0;
    temp_s5 = arg0 + 4;
    var_s3 = arg0 + 0x712;
    var_s1 = arg0 + 0x764;
    do {
        temp_a0 = var_s4;
        var_s4 += 1;
        temp_v0_2 = func_0041B3D0(temp_a0);
        temp_v0_3 = func_00454970(M2C_FIELD(arg0, s32 *, 0), temp_v0_2);
        *var_s1 = temp_v0_3;
        if ((temp_v0_3 != NULL) && ((u32) M2C_FIELD(temp_v0_3, u32 *, 0x40) >= 0x14U)) {
            *var_s1 = NULL;
        }
        temp_v0_4 = func_004548A8(M2C_FIELD(arg0, s32 *, 0), temp_v0_2, ((s8 *)&sp_));
        if (temp_v0_4 != NULL) {
            M2C_FIELD(var_s3, u16 *, -2) = (u16) M2C_FIELD(temp_v0_4, u16 *, 4);
            M2C_FIELD(var_s3, u16 *, 0) = sp0;
        }
        var_s3 += 4;
        var_s1 += 4;
    } while (var_s4 < 0x14);
    M2C_FIELD(arg0, s32 *, 0x6B4) = 0;
    temp_v0_5 = func_004548A8(M2C_FIELD(arg0, s32 *, 0), *(s32 *)0x6219C0, ((s8 *)&sp_));
    temp_a1 = arg0 + 0x6C0;
    if (temp_v0_5 != NULL) {
        M2C_FIELD(arg0, u16 *, 0x6C0) = (u16) M2C_FIELD(temp_v0_5, u16 *, 4);
        M2C_FIELD(temp_a1, u16 *, 2) = sp0;
    } else {
        M2C_FIELD(arg0, u16 *, 0x6C0) = -1U;
        M2C_FIELD(temp_a1, u16 *, 2) = -1U;
    }
    temp_v1_2 = (0 == 0) ? 0xE : -1;
    if (temp_v1_2 >= 0) {
        temp_a0_2 = temp_s5 + ((temp_v1_2 * 4) + 0x760);
        if (*temp_a0_2 != NULL) {
            M2C_FIELD(arg0, s32 *, 0x6B4) = 1;
            M2C_FIELD(temp_s5, s32 *, 0x6C0) = (s32) M2C_FIELD(*temp_a0_2, s32 *, 0x40);
            return;
        }
    }
    M2C_FIELD(arg0, u16 *, 0x6C0) = -1U;
    M2C_FIELD(temp_s5, s32 *, 0x6C0) = 0;
}
