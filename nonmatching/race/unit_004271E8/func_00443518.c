/* NON_MATCHING: functional draft, 133 of 145 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_00443DC0(s32, s32);
int func_0057F238(const char *, const char *);
void func_00443518(void *arg0, s8 *arg1) {
    struct StackFrame_00443518 { s8 pad0[0x100]; } sp_;
    s32 temp_a1_2;
    s32 temp_s0;
    s32 temp_s2;
    s32 var_s0;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_v0;
    s8 **var_s1;
    s8 *temp_a1;
    s8 *temp_s4;
    s8 *var_s1_3;
    s8 temp_a1_3;
    void **var_s0_2;
    void **var_s2_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;

    var_s0 = 0;
    var_s1 = (s8 **)0x623580;
    var_s2 = -1;
loop_1:
    var_v0 = ~-1;
    if (var_s0 < 9) {
        temp_a1 = *var_s1;
        var_s1 += 4;
        if (func_0057F238(arg1, temp_a1) != 0) {
            var_s0 += 1;
            goto loop_1;
        }
        var_s2 = var_s0;
        var_v0 = ~var_s2;
    }
    temp_s2 = (var_v0 == 0) ? 0 : var_s2;
    if (M2C_FIELD(arg0, s32 *, 4) != temp_s2) {
        M2C_FIELD(arg0, s32 *, 4) = temp_s2;
        var_s2_2 = (void **)0x6234B0;
        var_s1_2 = 0;
        temp_s4 = arg0 + 8;
        var_s0_2 = arg0 + 0x134;
        do {
            temp_a1_2 = var_s1_2;
            var_s1_2 += 1;
            if (func_00443DC0((s32) arg0, temp_a1_2) != 0) {
                func_005A609C(((s8 *)&sp_), temp_s4);
                func_005A5DC8(((s8 *)&sp_), *var_s2_2);
                func_005A5DC8(((s8 *)&sp_), *(s32 *)(0x623580 + (M2C_FIELD(arg0, s32 *, 4) * 4)));
                func_005A5DC8(((s8 *)&sp_), (void *)0x6A6D20);
                temp_a0 = *var_s0_2;
                func_00449070(temp_a0, ((s8 *)&sp_), M2C_FIELD(temp_a0, void **, 0), M2C_FIELD(temp_a0, s32 *, 4));
            }
            var_s0_2 += 4;
            var_s2_2 += 4;
        } while (var_s1_2 < 0x2B);
        if (*(s8 *)0x623798 != 0x2B) {
            var_s1_3 = (s8 *)0x623798;
            do {
                temp_a1_3 = *var_s1_3;
                var_s1_3 += 1;
                temp_s0 = temp_a1_3 * 4;
                if (func_00443DC0((s32) arg0, (s32) temp_a1_3) != 0) {
                    func_005A609C(((s8 *)&sp_), temp_s4);
                    func_005A5DC8(((s8 *)&sp_), *(s32 *)(0x6234B0 + temp_s0));
                    func_005A5DC8(((s8 *)&sp_), *(s32 *)(0x623580 + (M2C_FIELD(arg0, s32 *, 4) * 4)));
                    func_005A5DC8(((s8 *)&sp_), (void *)0x6A6D28);
                    temp_a0_2 = M2C_FIELD((temp_s0 + temp_s4), void **, 0x80);
                    func_004498E8(temp_a0_2, (s32) ((s8 *)&sp_), M2C_FIELD(temp_a0_2, s32 *, 0), M2C_FIELD(temp_a0_2, s32 *, 4));
                }
            } while (*var_s1_3 != 0x2B);
        }
        func_005A609C(((s8 *)&sp_), temp_s4);
        func_005A5DC8(((s8 *)&sp_), *(s32 *)(0x623580 + (M2C_FIELD(arg0, s32 *, 4) * 4)));
        func_005A5DC8(((s8 *)&sp_), (void *)0x6A6D30);
        temp_a0_3 = M2C_FIELD(arg0, void **, 0x1E4);
        func_00449C58(temp_a0_3, (s32) ((s8 *)&sp_), M2C_FIELD(temp_a0_3, s32 *, 0), M2C_FIELD(temp_a0_3, s32 *, 4));
    }
}
