/* NON_MATCHING: functional draft, 67 of 71 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_0055D778(void *arg0, s32 arg1) {
    void *temp_s0;

    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    M2C_FIELD(arg0, s32 *, 0x34) = 0x80000000;
    M2C_FIELD(arg0, s32 *, 0x40) = -1;
    M2C_FIELD(arg0, s32 *, 0x60) = 0x7F;
    M2C_FIELD(arg0, s16 *, 0x66) = 0x3FFF;
    M2C_FIELD(arg0, s32 *, 0x3C) = -1;
    M2C_FIELD(arg0, s32 *, 0x44) = -1;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0x3FFF;
    M2C_FIELD(arg0, s32 *, 0x50) = 0x7F;
    M2C_FIELD(arg0, s32 *, 0x54) = 0x3FFF;
    M2C_FIELD(arg0, s32 *, 0x58) = 0x7F;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0x7F;
    M2C_FIELD(arg0, s16 *, 0x64) = 0x3FFF;
    M2C_FIELD(arg0, s16 *, 0x1A) = 0;
    M2C_FIELD(arg0, s8 *, 0x1D) = 0;
    M2C_FIELD(arg0, s8 *, 0x1E) = 0;
    M2C_FIELD(arg0, s8 *, 0x1F) = 0;
    M2C_FIELD(arg0, s8 *, 0x20) = 0;
    M2C_FIELD(arg0, s8 *, 0x21) = 0;
    M2C_FIELD(arg0, s8 *, 0x22) = 0;
    M2C_FIELD(arg0, s8 *, 0x23) = 0;
    M2C_FIELD(arg0, s8 *, 0x24) = 0;
    M2C_FIELD(arg0, s8 *, 0x25) = 0;
    M2C_FIELD(arg0, s8 *, 0x26) = 0;
    M2C_FIELD(arg0, s8 *, 0x27) = 0;
    M2C_FIELD(arg0, s8 *, 0x28) = 0;
    M2C_FIELD(arg0, s8 *, 0x29) = 0;
    M2C_FIELD(arg0, s8 *, 0x2A) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C) = 0;
    M2C_FIELD(arg0, s8 *, 0x2D) = 0;
    M2C_FIELD(arg0, s8 *, 0x2E) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0x40;
    M2C_FIELD(arg0, s32 *, 0x74) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x88) = 0x40;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0x40;
    M2C_FIELD(arg0, s32 *, 0x70) = 0x40;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s16 *, 0x96) = 0;
    M2C_FIELD(arg0, s16 *, 0x98) = 0;
    func_0055D408(arg0 + 0x9C);
    func_0055D408(arg0 + 0xAC);
    func_0055D408(arg0 + 0xBC);
    temp_s0 = arg0 + 0xCC;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    M2C_FIELD(temp_s0, s32 *, 4) = 0;
    M2C_FIELD(temp_s0, s32 *, 8) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x10) = 0;
    M2C_FIELD(temp_s0, s32 *, 0xC) = 0;
}
