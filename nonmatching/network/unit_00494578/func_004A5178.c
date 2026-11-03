/* NON_MATCHING: functional draft, 107 of 116 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_004A1F60(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_004A1FA8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_004AAFF0(M2C_UNK);                     /* extern */
s32 func_004ABB88(void *, void *, s32, s32, s32, s32, s32); /* extern */

void func_004A5178(u32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    struct StackFrame_004A5178 { s8 pad0[0x10]; } sp_;
    s32 temp_v1;
    s32 var_a2;
    s32 var_a7;
    s32 var_a7_2;
    s32 var_s7;
    void *temp_s0;
    void *temp_s0_2;
    void *var_s0;

    var_s7 = arg7;
    func_004AAFF0(0x70002000);
    func_004A1F60(0x70002000, 0x40000);
    func_004A1FA8(0x70002000, 0x40000);
    temp_s0 = M2C_FIELD((void *)0x70002000, void **, 0x1F8);
    M2C_FIELD(temp_s0, s32 *, 8) = 0x13000000;
    M2C_FIELD(temp_s0, s32 *, 0) = 0x90000006;
    M2C_FIELD(temp_s0, s32 *, 0xC) = 0x51000006;
    M2C_FIELD(temp_s0, s32 *, 4) = 0;
    temp_s0_2 = temp_s0 + 0x10;
    var_s0 = temp_s0_2 + 0x60;
    var_a2 = func_004ABB88(temp_s0_2, ((s8 *)&sp_), arg3, arg4, arg5, arg6, ((arg0 >> 6) & 0xFFFF) | ((((s32) (arg2 + 0x3F) >> 6) & 0xFF) << 0x10) | (arg1 << 0x18));
    var_a7 = var_s7;
    if (var_a2 > 0xFFF8) {
        do {
            temp_v1 = var_s7 & 0x0FFFFFFF;
            var_a2 -= 0xFFF8;
            M2C_FIELD(var_s0, s32 *, 4) = (s32) ((((var_s7 & 0x70000000) ^ 0x70000000) == 0) ? (temp_v1 | 0x80000000) : temp_v1);
            M2C_FIELD(var_s0, s32 *, 0) = 0xFFF8;
            var_s7 += 0xFFF80;
            M2C_FIELD(var_s0, s32 *, 8) = 1;
            M2C_FIELD(var_s0, s32 *, 0xC) = 0;
            var_s0 += 0x10;
        } while (var_a2 > 0xFFF8);
        var_a7 = var_s7;
    }
    M2C_FIELD(var_s0, s32 *, 0) = var_a2;
    var_a7_2 = var_a7 & 0x0FFFFFFF;
    if ((var_a7 & 0x70000000) == 0x70000000) {
        var_a7_2 |= 0x80000000;
    }
    M2C_FIELD(var_s0, s32 *, 4) = var_a7_2;
    M2C_FIELD(var_s0, s32 *, 8) = (s32) M2C_FIELD((void *)0x70002000, s32 *, 0x220);
    M2C_FIELD(var_s0, s32 *, 0xC) = (s32) M2C_FIELD((void *)0x70002000, s32 *, 0x224);
    M2C_FIELD((void *)0x70002000, void **, 0x1F8) = (void *) (var_s0 + 0x10);
}
