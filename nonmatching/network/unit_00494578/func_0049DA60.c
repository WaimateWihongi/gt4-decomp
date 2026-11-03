/* NON_MATCHING: functional draft, 61 of 65 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0049D580(s32, void *, u16, u16, u16, u16); /* extern */
M2C_UNK func_0049D728(s32, void *, u16, u16, u16, u16); /* extern */
M2C_UNK func_0049DB08(s32, void *, u8, u8, u8, u8, s32, s32, f32); /* extern */
M2C_UNK func_0049DCB0(s32, void *, u8, u8, u8, u8, s32, s32, f32); /* extern */

void func_0049DA60(s32 arg0, void *arg1, s32 arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, s32 arg6, s32 arg7) {
    f32 temp_f0;
    u16 temp_a4_2;
    u16 temp_a5_2;
    u8 temp_a4;
    u8 temp_a5;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg1, s32 *, 0) + (M2C_FIELD(arg1, u16 *, 4) * 0x10);
    if (arg2 & 0x20) {
        temp_a5 = M2C_FIELD(temp_v1, u8 *, 5);
        temp_v0 = temp_v1 + 6;
        temp_f0 = M2C_FIELD(temp_v1, f32 *, 0);
        temp_a4 = M2C_FIELD(temp_v1, u8 *, 4);
        if (temp_a5 != 0) {
            func_0049DCB0(arg0, temp_v0, temp_a4, temp_a5, temp_a4, temp_a5, arg6, arg7, temp_f0);
            return;
        }
        func_0049DB08(arg0, temp_v0, temp_a4, temp_a5, temp_a4, temp_a5, arg6, arg7, temp_f0);
        return;
    }
    temp_a5_2 = M2C_FIELD(temp_v1, u16 *, 2);
    temp_a4_2 = (u16) M2C_FIELD(temp_v1, f32 *, 0);
    temp_v0_2 = temp_v1 + 4;
    if (temp_a5_2 != 0) {
        func_0049D728(arg0, temp_v0_2, temp_a4_2, temp_a5_2, temp_a4_2, temp_a5_2);
        return;
    }
    func_0049D580(arg0, temp_v0_2, temp_a4_2, temp_a5_2, temp_a4_2, temp_a5_2);
}
