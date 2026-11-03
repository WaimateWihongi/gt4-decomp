/* NON_MATCHING: functional draft, 90 of 97 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s64 func_005654D8(s32, s64);
s32 func_005654E0(void *arg0) {
    s32 *var_a0;
    s32 *var_v0;
    s32 temp_s1;
    s32 temp_v1;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    void *temp_s0;
    void *temp_s2;
    void *temp_s3;
    void *var_s0;
    void *var_s0_2;
    void *var_s0_3;

    var_v1 = 1;
    var_v0 = arg0 + 0x50;
    temp_s3 = arg0 + 0xC;
    do {
        var_v1 -= 1;
        *var_v0 = -1;
        var_v0 -= 4;
    } while (var_v1 >= 0);
    temp_s0 = M2C_FIELD(arg0, void **, 0);
    if (temp_s0 != NULL) {
        var_s0 = M2C_FIELD(temp_s0, void **, 0x18);
loop_4:
        if (var_s0 != NULL) {
            var_s0 = M2C_FIELD(var_s0, void **, 0x18);
            goto loop_4;
        }
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x48);
    switch (temp_v1) {                              /* irregular */
    case 1:
        var_s0_2 = temp_s0;
        if (var_s0_2 != NULL) {
            temp_s2 = arg0 + 0x4C;
            do {
                temp_s1 = M2C_FIELD(var_s0_2, s64 *, 0x10) & (0xC000 << 0x2A);
                if (temp_s1 == (0x8000 << 0x2A)) {
                    M2C_FIELD(((func_005654D8((s32) temp_s2, 0) * 4) + temp_s3), s32 *, 0x40) = (s32) M2C_FIELD(var_s0_2, s32 *, 8);
                }
                if (temp_s1 == (0x8000 << 0x29)) {
                    M2C_FIELD(((func_005654D8((s32) temp_s2, 1) * 4) + temp_s3), s32 *, 0x40) = (s32) M2C_FIELD(var_s0_2, s32 *, 8);
                }
                var_s0_2 = M2C_FIELD(var_s0_2, void **, 0x18);
            } while (var_s0_2 != NULL);
        }
block_26:
        var_a0 = arg0 + 0x58;
        break;
    default:
        var_a0 = arg0 + 0x58;
        break;
    case 0:
        var_s0_3 = temp_s0;
        var_a0 = arg0 + 0x58;
        if (var_s0_3 != NULL) {
            var_v1_2 = M2C_FIELD(var_s0_3, s32 *, 8);
loop_14:
            M2C_FIELD(((var_v1_2 * 4) + temp_s3), s32 *, 0x40) = var_v1_2;
            var_s0_3 = M2C_FIELD(var_s0_3, void **, 0x18);
            if (var_s0_3 != NULL) {
                var_v1_2 = M2C_FIELD(var_s0_3, s32 *, 8);
                goto loop_14;
            }
            goto block_26;
        }
        break;
    }
    var_v1_3 = 1;
    do {
        var_v1_3 -= 1;
        *var_a0 = 1;
        var_a0 -= 4;
    } while (var_v1_3 >= 0);
    return 1;
}
