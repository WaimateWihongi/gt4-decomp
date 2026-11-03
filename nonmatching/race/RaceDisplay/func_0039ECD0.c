/* NON_MATCHING: functional draft, 65 of 70 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_003445F0(s32);                             /* extern */
s32 func_00358440(s32);                             /* extern */
M2C_UNK func_003A4338(void *);                      /* extern */

void func_0039ECD0(void *arg0, void *arg1) {
    void *temp_s1;
    void *temp_s4;
    void *temp_v1;
    void *temp_v1_2;
    void *var_s2;
    void *var_s5;

    temp_s1 = arg0 + 0x15F8;
    var_s2 = arg0 + 0x1588;
    temp_s4 = arg0 + 0x14A8;
    var_s5 = arg0 + 0x13F0;
    M2C_FIELD(temp_s1, s32 *, 0x6C) = func_003445F0(M2C_FIELD(arg1, s32 *, 0x18));
    M2C_FIELD(temp_s1, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0xBC);
    func_003A4338(temp_s1);
    temp_v1 = arg0 + 0x1438;
    M2C_FIELD(temp_v1, s32 *, 0x6C) = func_00358440(M2C_FIELD(arg0, s32 *, 0x10));
    M2C_FIELD(temp_v1, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0xBC);
    func_003A4338(temp_v1);
    if (M2C_FIELD(arg0, u8 *, 0x15F8) != 0) {
        if (M2C_FIELD(arg0, u8 *, 0x13F0) != 0) {
            var_s2 = arg0 + 0x1588;
            goto block_6;
        }
        if (M2C_FIELD(arg0, u8 *, 0x1588) != 0) {
block_6:
            M2C_FIELD(arg0, u8 *, 0x15F8) = (s32) (((s32) M2C_FIELD(arg0, u8 *, 0x15F8) & ~0xFF) | (M2C_FIELD(arg0, u8 *, 0x34) ^ 1));
        }
    } else {
        var_s5 = arg0 + 0x13F0;
    }
    temp_v1_2 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_s4, s32 *, 0x6C) = M2C_FIELD((temp_v1_2 + 0x1A0), s32 (**)(void *, void *), 4)(arg0 + M2C_FIELD(temp_v1_2, s16 *, 0x1A0), arg1);
    M2C_FIELD(temp_s4, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0xBC);
    func_003A4338(temp_s4);
    M2C_FIELD(var_s2, s32 *, 0x6C) = (s32) M2C_FIELD(arg1, s32 *, 0x11DC);
    M2C_FIELD(var_s2, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0xBC);
    func_003A4338(var_s2);
    M2C_FIELD(var_s5, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0xBC);
}
