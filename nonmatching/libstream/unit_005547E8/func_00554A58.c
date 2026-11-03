/* NON_MATCHING: functional draft, 92 of 103 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

int func_005549A0(void *, void *);
void *func_00554A58(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_v0;
    s32 var_a0;
    void *temp_a0_2;
    void *var_s5;

    temp_s4 = (arg1 + 0xF) & ~0xF;
    var_s5 = NULL;
    temp_s1 = temp_s4 + 0x10;
    func_005B72A8();
    if ((M2C_FIELD(arg0, s32 *, 0x18) & 1) && ((temp_a1 = M2C_FIELD(arg0, s32 *, 0x30), temp_a0 = temp_a1 < temp_s1, (temp_a0 == 0)) || !(arg2 & 1))) {
        temp_s3 = M2C_FIELD(arg0, s32 *, 0x20) - M2C_FIELD(arg0, s32 *, 0x28);
        if (temp_a0 == 0) {
            var_a0 = temp_s3 < temp_s1;
            if ((var_a0 != 0) && (temp_a1 < (temp_s4 + 0x20))) {
                goto loop_7;
            }
            goto block_12;
        }
loop_7:
        var_a0 = temp_s3 < temp_s1;
        if (func_005549A0(arg0, arg0 + 4) & 1) {
            temp_v0 = M2C_FIELD(arg0, s32 *, 0x30);
            if ((temp_v0 >= temp_s1) && ((var_a0 == 0) || (temp_v0 >= (temp_s1 + 0x10)))) {
block_12:
                var_s5 = M2C_FIELD(arg0, void **, 0x1C) + M2C_FIELD(arg0, s32 *, 0x28);
                if (var_a0 == 0) {
                    M2C_FIELD(var_s5, M2C_UNK *, 4) = M2C_UNALIGNED32(temp_s4);
                    M2C_FIELD(var_s5, M2C_UNK *, 8) = M2C_UNALIGNED32(0);
                    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + temp_s1);
                    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) - temp_s1);
                } else {
                    M2C_FIELD(var_s5, M2C_UNK *, 4) = M2C_UNALIGNED32((temp_s3 - 0x10));
                    M2C_FIELD(var_s5, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(arg0, void **, 0x1C));
                    temp_a0_2 = M2C_FIELD(arg0, void **, 0x1C);
                    M2C_FIELD(temp_a0_2, M2C_UNK *, 4) = M2C_UNALIGNED32((temp_s4 - M2C_LWL(M2C_FIELD(var_s5, M2C_UNK *, 7))));
                    M2C_FIELD(temp_a0_2, M2C_UNK *, 8) = M2C_UNALIGNED32(0);
                    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_LWL(M2C_FIELD(temp_a0_2, M2C_UNK *, 7)) + 0x10);
                    M2C_FIELD(arg0, s32 *, 0x30) = (s32) ((M2C_FIELD(arg0, s32 *, 0x30) - temp_s1) - 0x10);
                }
                M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) & M2C_FIELD(arg0, s32 *, 0x24));
            } else {
                goto loop_7;
            }
        }
    }
    func_005B72F8();
    return var_s5;
}
