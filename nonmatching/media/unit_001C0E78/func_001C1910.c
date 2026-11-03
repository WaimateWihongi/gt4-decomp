/* NON_MATCHING: functional draft, 51 of 81 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_001C1910(s8 *arg0, void *arg1, u32 arg2, u32 arg3) {
    s32 temp_t1;
    s8 *var_a7;
    s8 *var_t9;
    u32 var_t0;
    u32 var_t3;
    u32 var_v1;
    void *temp_a0;
    void *temp_a1;
    void *var_a6;
    void *var_t8;

    temp_t1 = (arg2 + 0xF) & ~0xF;
    var_t9 = arg0;
    var_t8 = arg1;
    var_t3 = 0;
    if (arg3 != 0) {
        do {
            var_a7 = var_t9;
            var_a6 = var_t8;
            if ((var_t3 == 0) || (var_t0 = 0, (var_t3 == (arg3 - 1)))) {
                var_v1 = 0;
                if (arg2 != 0) {
                    do {
                        var_v1 += 1;
                        *var_a7 = 1;
                        var_a7 += 1;
                    } while (var_v1 < arg2);
                }
            } else {
loop_16:
                if (var_t0 < arg2) {
                    if (var_t0 == 0) {
                        *var_a7 = 1;
                    } else {
                        temp_a1 = var_a6 + temp_t1;
                        if (var_t0 == (arg2 - 1)) {
                            *var_a7 = 1;
                        } else {
                            temp_a0 = var_a6 - temp_t1;
                            *var_a7 = M2C_FIELD(var_a6, u8 *, 0) & ((M2C_FIELD(temp_a0, u8 *, -1) & M2C_FIELD(temp_a1, u8 *, -1) & (M2C_FIELD(var_a6, u8 *, -1) & M2C_FIELD(temp_a1, u8 *, 1)) & (M2C_FIELD(var_a6, u8 *, 1) & M2C_FIELD(temp_a0, u8 *, 1) & (M2C_FIELD(temp_a0, u8 *, 0) & M2C_FIELD(temp_a1, u8 *, 0)))) ^ 1);
                        }
                    }
                    var_a7 += 1;
                    var_a6 += 1;
                    var_t0 += 1;
                    goto loop_16;
                }
            }
            var_t3 += 1;
            var_t9 += temp_t1;
            var_t8 += temp_t1;
        } while (var_t3 < arg3);
    }
}
