/* NON_MATCHING: functional draft, 37 of 37 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_00546A60(void *arg0, u8 *arg1, s32 arg2) {
    s32 temp_a6;
    s32 var_a2;
    u8 *temp_t1;
    u8 *temp_t2;
    u8 *var_a1;
    u8 temp_a4;
    u8 temp_a4_2;
    u8 temp_a7;
    u8 var_a5;
    u8 var_a6;
    void *temp_t0;

    var_a1 = arg1;
    var_a2 = arg2;
    temp_t0 = arg0 + 0xC;
    var_a5 = M2C_FIELD(arg0, u8 *, 4);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + var_a2);
    var_a6 = M2C_FIELD(arg0, u8 *, 8);
    do {
        var_a2 -= 1;
        var_a5 = (var_a5 + 5) & 0xFF;
        temp_t1 = temp_t0 + var_a5;
        temp_a4 = *temp_t1;
        temp_a6 = (var_a6 + temp_a4) & 0xFF;
        temp_t2 = temp_t0 + temp_a6;
        temp_a7 = *temp_t2;
        *temp_t2 = temp_a4;
        *temp_t1 = temp_a7;
        temp_a4_2 = *(u8 *)(temp_t0 + ((temp_a4 + temp_a7) & 0xFF)) ^ *(u8 *)var_a1;
        *var_a1 = temp_a4_2;
        var_a1 += 1;
        var_a6 = (temp_a6 + *(s32 *)(temp_t0 + temp_a4_2)) & 0xFF;
    } while (var_a2 != 0);
    M2C_FIELD(arg0, u8 *, 4) = var_a5;
    M2C_FIELD(arg0, u8 *, 8) = var_a6;
}
