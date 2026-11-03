/* NON_MATCHING: functional draft, 79 of 80 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0057F260(const char *);
u8 *func_00575DC8(s32);                             /* extern */

void func_00227BE0(void *arg0, s8 *arg1) {
    void *sp0;
    s32 temp_s1;
    s32 var_s3;
    s32 var_s6;
    s8 *var_s2;
    u8 *temp_s5;
    u8 *temp_v0;
    void *temp_s4;

    var_s2 = arg1;
    temp_s4 = arg0 + 0x120;
    temp_s5 = arg0 + 0x10;
    var_s6 = 0;
    var_s3 = func_0057F260(var_s2);
loop_1:
    temp_s1 = 0x100 - M2C_FIELD(temp_s5, s32 *, 8);
    if (temp_s1 > 0) {
        if (temp_s1 >= var_s3) {
            sp0 = temp_s4;
            func_00576788((s32) temp_s4);
            func_005DA9E8(temp_s5, (u8 *) var_s2, (u32) var_s3);
            func_005767C0((s32) sp0);
            func_00215298();
            return;
        }
        var_s3 -= temp_s1;
        temp_v0 = func_00575DC8(temp_s1);
        func_005A6AB0(temp_v0, var_s2, temp_s1);
        sp0 = temp_s4;
        func_00576788((s32) temp_s4);
        var_s2 = &var_s2[temp_s1];
        func_005DA9E8(temp_s5, temp_v0, (u32) temp_s1);
        func_005767C0((s32) sp0);
        func_00575DA0(temp_v0);
        goto block_6;
    }
block_6:
    func_00215298();
    var_s6 += 1;
    if (var_s6 >= 0xA) {
        return;
    }
    goto loop_1;
}
