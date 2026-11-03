/* NON_MATCHING: functional draft, 39 of 40 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_00546830(void *arg0, s32 arg1) {
    s32 *var_t0;
    s32 temp_t0;
    s32 var_a4;
    s32 var_a5;
    s32 var_a6;
    s32 var_a7;
    s32 var_a7_2;
    u8 *temp_t1;
    u8 *temp_t2_2;
    u8 temp_a4;
    u8 temp_t2;
    u8 temp_t3;

    var_t0 = arg0 + 0xC;
    var_a7 = 0x100;
    var_a4 = 0xFCFDFEFF;
    do {
        *var_t0 = var_a4;
        var_t0 += 4;
        var_a4 += 0xFBFBFBFC;
        var_a7 -= 4;
    } while (var_a7 != 0);
    temp_t0 = arg0 + 0xC;
    var_a5 = 0;
    var_a6 = 0;
    var_a7_2 = 0;
    do {
        temp_t2 = *(u8 *)(var_a5 + arg1);
        var_a5 = (var_a5 + 1) & 0x3F;
        temp_t1 = temp_t0 + var_a7_2;
        temp_a4 = *temp_t1;
        var_a7_2 = (var_a7_2 + 3) & 0xFF;
        var_a6 = (var_a6 + temp_t2 + temp_a4) & 0xFF;
        temp_t2_2 = var_a6 + temp_t0;
        temp_t3 = *temp_t2_2;
        *temp_t2_2 = temp_a4;
        *temp_t1 = temp_t3;
    } while (var_a7_2 != 0);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
