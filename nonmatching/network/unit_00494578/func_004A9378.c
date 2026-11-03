/* NON_MATCHING: functional draft, 53 of 58 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_004A8F78(s32);                         /* extern */
M2C_UNK func_004A9228(s32);                         /* extern */
M2C_UNK func_004A9470(s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_004AA558(M2C_UNK);                         /* extern */
M2C_UNK func_004AA6B8(s32);                         /* extern */

void func_004A9378(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp10;
    s32 temp_s2;
    s32 temp_s5;
    s32 temp_v0;
    s64 temp_s0;
    u8 temp_s4;

    sp10 = arg0;
    temp_v0 = func_004AA558(0x2000);
    temp_s5 = temp_v0 + 0x1800;
    temp_s0 = M2C_FIELD((void *)0x70002000, s64 *, 0x1C0);
    temp_s2 = temp_v0 + 0x1900;
    temp_s4 = M2C_FIELD((void *)0x70002000, u8 *, 0x172);
    func_004A9228(temp_s5);
    func_004A8F78(temp_s2);
    func_004A9470(((s64) ((temp_s0 & 0x3FFF) << 0x20) >> 0x20) << 6, sp10, arg1, arg2, temp_v0, temp_s5, temp_s2, ((arg4 - 1) << 0x30) | ((arg3 - 1) << 0x10), (s32) temp_s4);
    func_004AA6B8(temp_v0);
}
