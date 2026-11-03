/* NON_MATCHING: functional draft, 74 of 92 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_004B4CC0(void *arg0, void *arg1, u16 *arg2) {
    struct StackFrame_004B4CC0 { s8 pad0[0x200]; } sp_;
    s32 temp_v0;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_a3;
    s32 var_s1;
    s32 var_v0;
    s8 temp_v0_2;
    u16 *var_a0_2;
    u16 *var_a1;
    u16 temp_v0_3;
    void *temp_v1;
    void *var_v1;

    var_s1 = 0;
    temp_v1 = arg0 + ((1 - M2C_FIELD(arg0, s32 *, 0x858)) * 0x41C);
    temp_v0 = M2C_FIELD(temp_v1, s32 *, 0x234);
    var_a0 = 0;
    if (temp_v0 > 0) {
        var_v1 = temp_v1 + 0x238;
loop_2:
        temp_v0_2 = M2C_FIELD(var_v1, s8 *, 0);
        if ((temp_v0_2 != 3) && (temp_v0_2 != 4) && (temp_v0_2 != 5)) {
            var_a0 += 1;
            if (temp_v0_2 == 2) {
                var_s1 += M2C_FIELD(var_v1, s8 *, 1);
            }
            var_v1 += 8;
            if (var_a0 < temp_v0) {
                goto loop_2;
            }
        }
    }
    func_004B4CA0((s32) arg0, (s32) ((s8 *)&sp_), 0x100);
    var_a1 = ((s8 *)&sp_);
    var_a0_2 = arg2;
    if ((s8) M2C_FIELD(arg1, u8 *, 1) > 0) {
        var_a2 = 0;
        if (var_s1 > 0) {
            var_v0 = var_s1;
            do {
                var_v0 -= 1;
                var_a2 += 1;
            } while (var_v0 != 0);
        }
        var_a3 = 0;
        var_a1_2 = 0;
        if ((M2C_FIELD(arg1, u8 *, 1) << 0x18) > 0) {
            do {
                temp_v1_2 = var_a1_2 * 2;
                var_a1_2 += 1;
                var_a3 += 1;
                *(s32 *)(temp_v1_2 + arg2) = *(s32 *)((var_a2 * 2) + M2C_FIELD(arg0, s32 *, 0x18));
                var_a2 += 1;
            } while (var_a3 < (s8) M2C_FIELD(arg1, u8 *, 1));
        }
        *((var_a1_2 * 2) + arg2) = 0;
        return;
    }
    do {
        temp_v0_3 = *var_a1;
        var_a1 += 2;
        *var_a0_2 = temp_v0_3;
        var_a0_2 += 2;
    } while (temp_v0_3 != 0);
}
