/* NON_MATCHING: functional draft, 38 of 81 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_0044B258(void *arg0, void *arg1, s32 arg2) {
    struct StackFrame_0044B258 { s8 pad0[0x1]; u8 sp1; s8 pad1[0xE]; u8 sp10; s32 sp11; s8 pad2[0x20B]; } sp_;

    func_005A48D8(&sp_.sp1, 0, 0xB);
    func_0044C6C8(&sp_.sp1, 0U, M2C_FIELD(arg0, u32 *, 0), 5U);
    func_0044C6C8(&sp_.sp1, 5U, M2C_FIELD(arg0, u32 *, 4), 0xBU);
    func_0044C6C8(&sp_.sp1, 0x10U, M2C_FIELD(arg0, u32 *, 8), 9U);
    func_0044C6C8(&sp_.sp1, 0x19U, M2C_FIELD(arg0, u32 *, 0xC), 1U);
    func_0044C6C8(&sp_.sp1, 0x1AU, M2C_FIELD(arg0, u32 *, 0x10), 0xCU);
    func_0044C6C8(&sp_.sp1, 0x26U, M2C_FIELD(arg0, u32 *, 0x14), 0xCU);
    func_0044C6C8(&sp_.sp1, 0x32U, M2C_FIELD(arg0, u32 *, 0x18), 3U);
    func_0044C6C8(&sp_.sp1, 0x35U, M2C_FIELD(arg0, u32 *, 0x1C), 0x16U);
    func_0044C6C8(&sp_.sp1, 0x4BU, M2C_FIELD(arg0, u32 *, 0x20), 4U);
    func_0044C6C8(&sp_.sp1, 0x4FU, M2C_FIELD(arg0, u32 *, 0x24), 4U);
    func_0044B060(&sp_.sp10, ((s8 *)&sp_), 0);
    func_0044C918((s8 *) arg1, (u32) arg2, &sp_.sp11, 0xDU, 0x30);
}
