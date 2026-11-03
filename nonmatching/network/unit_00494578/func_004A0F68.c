/* NON_MATCHING: functional draft, 94 of 94 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_005ADB90();                                /* extern */
M2C_UNK func_005ADBC0();                            /* extern */
M2C_UNK func_005ADBF0(s32);                         /* extern */
M2C_UNK func_005B72A8();                            /* extern */
M2C_UNK func_005B72F8();                            /* extern */

s32 func_004A0F68(s32 arg0) {
    struct StackFrame_004A0F68 { M2C_UNK * sp0; s32 sp4; s8 pad0[0x8]; s32 sp10; s32 sp14; s8 pad1[0x8]; } sp_;
    M2C_UNK *temp_a1;
    M2C_UNK *temp_a1_2;
    M2C_UNK *var_a2;
    s32 *temp_a0;
    s32 temp_s0;
    s32 temp_v0_2;
    s32 var_s3;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_2;

    temp_s0 = arg0 * 0xC;
    temp_v0 = temp_s0 + 0x70002050;
    sp_.sp10 = 0;
    if (M2C_FIELD(temp_v0, u8 *, 0x1D) == 0) {
        return 0;
    }
    temp_v0_2 = func_005ADB90();
    sp_.sp14 = temp_v0_2;
    sp_.sp4 = temp_v0_2;
    func_005B72A8();
    temp_v1 = temp_s0 + 0x70002000;
    sp_.sp0 = M2C_FIELD(temp_v1, M2C_UNK **, 0x70);
    M2C_FIELD(temp_v1, M2C_UNK **, 0x70) = (M2C_UNK *) ((s8 *)&sp_);
    func_005B72F8();
    temp_v0_3 = temp_s0 + 0x60;
    if (M2C_FIELD(temp_v0, u8 *, 0x1D) != 0) {
        var_s3 = 0x77;
loop_6:
        if (var_s3 < 0) {
            temp_a0 = *(s32 * *)(0x629DC8 + (arg0 * 4));
            M2C_FIELD((temp_v0_3 + 0x70002000), s8 *, 0xD) = 0;
            *(s32 *)(0x70002010 + (s32) temp_v0_3) = 0;
            if (*temp_a0 & 0x100) {
                do {
                    *temp_a0 &= ~0x100;
                } while (*temp_a0 & 0x100);
            }
            sp_.sp10 = -1;
        } else {
            func_005ADBC0();
            if (M2C_FIELD(temp_v0, u8 *, 0x1D) != 0) {
                var_s3 -= 1;
                goto loop_6;
            }
        }
    }
    func_005B72A8();
    temp_v1_2 = (arg0 * 0xC) + 0x70002050;
    temp_a1 = M2C_FIELD(temp_v1_2, M2C_UNK **, 0x20);
    if (temp_a1 != NULL) {
        if (temp_a1 != ((s8 *)&sp_)) {
            var_a2 = temp_a1;
loop_18:
            temp_a1_2 = *var_a2;
            if (temp_a1_2 != NULL) {
                if (temp_a1_2 != ((s8 *)&sp_)) {
                    var_a2 = temp_a1_2;
                    goto loop_18;
                }
                if (var_a2 == NULL) {
                    goto block_23;
                }
                *var_a2 = sp_.sp0;
            }
        } else {
block_23:
            M2C_FIELD(temp_v1_2, M2C_UNK **, 0x20) = sp_.sp0;
        }
    }
    func_005B72F8();
    func_005ADBF0(sp_.sp14);
    return sp_.sp10;
}
