/* NON_MATCHING: functional draft, 106 of 107 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00443ED0(M2C_UNK, s64, s64 *);         /* extern */
s32 func_00443F40(M2C_UNK, s64);                    /* extern */

s32 func_00445B88(void *arg0) {
    s32 sp0;
    s32 sp28;
    s32 sp48;
    s32 sp78;
    s32 sp68;
    s32 sp70;
    s32 sp30;
    s32 spD8;
    s32 sp60;
    s32 sp58;
    s32 sp50;
    s32 sp90;
    s32 sp98;
    s32 spA0;
    s32 spA8;
    s32 sp80;
    s32 sp88;
    s32 spC8;
    s32 spC0;
    s32 spD0;
    s32 spB8;
    s32 spB0;
    s32 sp38;
    s32 sp40;
    struct StackFrame_00445B88 { s8 pad0[0x20]; s64 sp20; s8 pad1[0xC8]; } sp_;

    func_00443ED0(0x6235A8, M2C_FIELD(arg0, s64 *, 0), ((s8 *)&sp_));
    if (sp0 != -1) {
        if (func_00443F40(0x6235A8, sp0) == 0) {
            return 0;
        }
        func_00443ED0(0x6235A8, sp0, &sp_.sp20);
        if ((M2C_FIELD(arg0, s64 *, 0x20) == sp_.sp20) && (M2C_FIELD(arg0, s64 *, 0x28) == sp28) && (M2C_FIELD(arg0, s64 *, 0x30) == sp48) && (M2C_FIELD(arg0, s64 *, 0x38) == sp78) && (M2C_FIELD(arg0, s64 *, 0x40) == sp68) && (M2C_FIELD(arg0, s64 *, 0x48) == sp70) && (M2C_FIELD(arg0, s64 *, 0x50) == sp30) && (M2C_FIELD(arg0, s64 *, 0x58) == spD8) && (M2C_FIELD(arg0, s64 *, 0x70) == sp60) && (M2C_FIELD(arg0, s64 *, 0x78) == sp58) && (M2C_FIELD(arg0, s64 *, 0x80) == sp50) && (M2C_FIELD(arg0, s64 *, 0x88) == sp90) && (M2C_FIELD(arg0, s64 *, 0x90) == sp98) && (M2C_FIELD(arg0, s64 *, 0x98) == spA0) && (M2C_FIELD(arg0, s64 *, 0xA0) == spA8) && (M2C_FIELD(arg0, s64 *, 0xA8) == sp80) && (M2C_FIELD(arg0, s64 *, 0xB0) == sp88) && (M2C_FIELD(arg0, s64 *, 0xB8) == spC8) && (M2C_FIELD(arg0, s64 *, 0xC0) == spC0) && (M2C_FIELD(arg0, s64 *, 0xC8) == spD0) && (M2C_FIELD(arg0, s64 *, 0xD0) == spB8) && (M2C_FIELD(arg0, s64 *, 0xD8) == spB0) && (M2C_FIELD(arg0, s64 *, 0xE0) == sp38) && (M2C_FIELD(arg0, s64 *, 0xE8) == sp40) && (M2C_FIELD(arg0, s64 *, 0xF8) == -1)) {

        }
        /* Duplicate return node #0x1.e000000000000p+4 Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
