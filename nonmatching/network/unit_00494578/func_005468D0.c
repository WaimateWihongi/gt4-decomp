/* NON_MATCHING: functional draft, 62 of 63 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_005468D0(void *arg0, s32 arg1, s32 arg2) {
    struct StackFrame_005468D0 { s32 sp0; s8 pad0[0xC]; } sp_;
    s32 *var_t0;
    s32 temp_t0;
    s32 var_a4;
    s32 var_a5;
    s32 var_a5_2;
    s32 var_a6;
    s32 var_a6_2;
    s32 var_a7;
    s32 var_a7_2;
    s32 var_a7_3;
    u8 *temp_t1;
    u8 *temp_t1_2;
    u8 *temp_t2_2;
    u8 *temp_t2_4;
    u8 temp_a4;
    u8 temp_a4_2;
    u8 temp_t2;
    u8 temp_t2_3;
    u8 temp_t3;
    u8 temp_t3_2;

    var_t0 = arg0 + 0xC;
    sp_.sp0 = arg2;
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
        temp_t2 = *(var_a5 + ((s8 *)&sp_));
        var_a5 = (var_a5 + 1) & 3;
        temp_t1 = temp_t0 + var_a7_2;
        temp_a4 = *temp_t1;
        var_a7_2 = (var_a7_2 + 5) & 0xFF;
        var_a6 = (var_a6 + temp_t2 + temp_a4) & 0xFF;
        temp_t2_2 = var_a6 + temp_t0;
        temp_t3 = *temp_t2_2;
        *temp_t2_2 = temp_a4;
        *temp_t1 = temp_t3;
    } while (var_a7_2 != 0);
    var_a5_2 = 0;
    var_a6_2 = 0;
    var_a7_3 = 0;
    do {
        temp_t2_3 = *(u8 *)(var_a5_2 + arg1);
        var_a5_2 = (var_a5_2 + 1) & 0x3F;
        temp_t1_2 = temp_t0 + var_a7_3;
        temp_a4_2 = *temp_t1_2;
        var_a7_3 = (var_a7_3 + 3) & 0xFF;
        var_a6_2 = (var_a6_2 + temp_t2_3 + temp_a4_2) & 0xFF;
        temp_t2_4 = var_a6_2 + temp_t0;
        temp_t3_2 = *temp_t2_4;
        *temp_t2_4 = temp_a4_2;
        *temp_t1_2 = temp_t3_2;
    } while (var_a7_3 != 0);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
