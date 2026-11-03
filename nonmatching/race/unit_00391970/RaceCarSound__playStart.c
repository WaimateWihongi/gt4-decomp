/* NON_MATCHING: functional draft, 79 of 86 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void * func_00559808(void);
M2C_UNK func_00559470(void *, s32, M2C_UNK, M2C_UNK); /* extern */

void func_003924D0(void *arg0) {
    f32 *var_v0;
    f32 *var_v0_2;
    s32 *var_s1;
    s32 temp_a1;
    s32 var_s1_2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s4;
    s32 var_v1;
    s32 var_v1_2;
    void **var_s0;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s0_2;

    if (M2C_FIELD(arg0, s32 *, 0xB38) == 0) {
        M2C_FIELD(arg0, s32 *, 0xB38) = 1;
        var_s1 = arg0 + 0x34;
        var_s0 = arg0 + 0x28;
        var_s3 = 1;
        func_00391EB0(arg0 + 0x14);
        do {
            var_s3 -= 1;
            temp_v0 = func_00559808();
            *var_s0 = temp_v0;
            temp_a1 = *var_s1;
            var_s1 += 0x124;
            func_00559470(temp_v0, temp_a1, 0, 0);
            temp_a0 = *var_s0;
            var_s0 += 4;
            func_00559330(temp_a0);
        } while (var_s3 >= 0);
        func_00391EB0(arg0 + 0x2B8);
        temp_v0_2 = func_00559808();
        M2C_FIELD(arg0, void **, 0x2CC) = temp_v0_2;
        func_00559470(temp_v0_2, M2C_FIELD(arg0, s32 *, 0x2D4), 0, 0);
        func_00559330(M2C_FIELD(arg0, void **, 0x2CC));
        func_00391EB0(arg0 + 0x3F4);
        var_v1 = 2;
        var_v0 = arg0 + 0x470;
        do {
            var_v1 -= 1;
            *var_v0 = 0x0.0p+0f;
            var_v0 -= 4;
        } while (var_v1 >= 0);
        var_s4 = 0;
        var_s0_2 = arg0 + 0x474;
        var_s3_2 = 0x5E8;
        var_s1_2 = 0x28;
        do {
            func_00391EB0(var_s0_2);
            var_v1_2 = 0xA;
            var_v0_2 = var_s1_2 + var_s3_2 + arg0;
loop_7:
            var_v1_2 -= 1;
            *var_v0_2 = 0x0.0p+0f;
            var_v0_2 -= 4;
            if (var_v1_2 >= 0) {
                goto loop_7;
            }
            var_s4 += 1;
            var_s0_2 += 0x1A0;
            var_s3_2 += 0xA0;
            var_s1_2 += 0x100;
        } while (var_s4 < 4);
    }
}
