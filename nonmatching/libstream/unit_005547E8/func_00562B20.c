/* NON_MATCHING: functional draft, 89 of 91 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0054DA18();                            /* extern */
M2C_UNK func_0054DAB8();                            /* extern */
M2C_UNK func_00562D58(M2C_UNK);                     /* extern */
M2C_UNK func_005ADF20(M2C_UNK);                     /* extern */
M2C_UNK func_005B72A8();                            /* extern */
M2C_UNK func_005B72F8(s32, s32);                    /* extern */

void func_00562B20(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;

    func_00562D58(0);
    *(s32 *)0x1000B400 &= ~0xC;
    M2C_SYNC();
    *(s32 *)0x1000B410 = arg1 & 0x0FFFFFFF;
    M2C_SYNC();
    *(u32 *)0x1000B420 = (u32) (arg2 * 0x180) >> 4;
    M2C_SYNC();
    do {

    } while (*(s32 *)0x10002010 < 0);
    func_005ADF20(0);
    M2C_SYNC();
    func_005B72A8();
    temp_a0 = *(s32 *)0x1000F520;
    *(s32 *)0x1000F590 = temp_a0 | 0x10000;
    M2C_SYNC();
    *(s32 *)0x1000B400 = (s32) (*(s32 *)0x1000B400 | 0x100);
    M2C_SYNC();
    temp_a0_2 = temp_a0 & 0xFFFEFFFF;
    *(s32 *)0x1000F590 = temp_a0_2;
    M2C_SYNC();
    func_005B72F8(temp_a0_2, *(s32 *)0x1000B400);
    *(s32 *)0x1000B010 = arg0 & 0x0FFFFFFF;
    M2C_SYNC();
    *(u32 *)0x1000B020 = (u32) (arg2 << 0xA) >> 4;
    M2C_SYNC();
    func_0054DA18();
    func_005B72A8();
    temp_a0_3 = *(s32 *)0x1000F520;
    *(s32 *)0x1000F590 = temp_a0_3 | 0x10000;
    M2C_SYNC();
    *(s32 *)0x1000B000 |= 0x100;
    M2C_SYNC();
    temp_a0_4 = temp_a0_3 & 0xFFFEFFFF;
    *(s32 *)0x1000F590 = temp_a0_4;
    M2C_SYNC();
    func_005B72F8(temp_a0_4, *(s32 *)0x1000B000);
    *(s32 *)0x10002000 = (arg2 & 0x7FF) | 0x70000000;
    M2C_SYNC();
    func_0054DAB8();
}
