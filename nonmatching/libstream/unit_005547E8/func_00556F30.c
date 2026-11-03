/* NON_MATCHING: functional draft, 83 of 83 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_00556F30(void *arg0) {
    s32 *var_t9;
    s32 var_s0;
    s64 temp_a0;
    s64 temp_a1;
    s64 temp_a2;
    s64 temp_a3;
    s64 temp_a4;
    s64 temp_a5;
    s64 temp_a6;
    s64 temp_a7;
    s64 temp_s1;
    s64 temp_t0;
    s64 temp_t1;
    s64 temp_t2;
    s64 temp_v0;
    s64 temp_v1;
    void *var_t8;

    temp_a0 = *(s64 *)0x6C8780;
    temp_v0 = *(s64 *)0x6C8788;
    temp_t2 = *(s64 *)0x6C8790;
    var_s0 = 5;
    var_t9 = arg0 + 0x268;
    M2C_FIELD(arg0, s64 *, 0x1A0) = 0;
    var_t8 = arg0 + 0x1D8;
    temp_a6 = *(s64 *)0x6C8798;
    M2C_FIELD(arg0, s64 *, 0x128) = 0;
    temp_a5 = *(s64 *)0x6C87A0;
    M2C_FIELD(arg0, s64 *, 0x140) = 0;
    temp_a4 = *(s64 *)0x6C87A8;
    temp_a3 = *(s64 *)0x6C87B0;
    temp_a2 = *(s64 *)0x6C87B8;
    temp_v1 = *(s64 *)0x6C87C0;
    temp_a1 = *(s64 *)0x6C87C8;
    temp_a7 = *(s64 *)0x6C87D0;
    temp_t0 = *(s64 *)0x6C87D8;
    temp_t1 = *(s64 *)0x6C87E0;
    M2C_FIELD(arg0, s64 *, 0xF8) = temp_v0;
    M2C_FIELD(arg0, s64 *, 0x110) = temp_v0;
    M2C_FIELD(arg0, s64 *, 0x98) = temp_v0;
    M2C_FIELD(arg0, s64 *, 0xB0) = temp_v0;
    M2C_FIELD(arg0, s64 *, 0xC8) = temp_v0;
    M2C_FIELD(arg0, s64 *, 0xE0) = temp_v0;
    M2C_FIELD(arg0, s64 *, 0xB8) = temp_a5;
    M2C_FIELD(arg0, s64 *, 0xD0) = temp_a6;
    M2C_FIELD(arg0, s64 *, 0xE8) = temp_t2;
    M2C_FIELD(arg0, s64 *, 0x148) = temp_t1;
    M2C_FIELD(arg0, s64 *, 0x160) = temp_t0;
    M2C_FIELD(arg0, s64 *, 0x178) = temp_a7;
    M2C_FIELD(arg0, s64 *, 0x198) = temp_a2;
    M2C_FIELD(arg0, s64 *, 0x120) = temp_a3;
    M2C_FIELD(arg0, s64 *, 0x138) = temp_a4;
    M2C_FIELD(arg0, s64 *, 0x150) = temp_a1;
    M2C_FIELD(arg0, s64 *, 0x168) = temp_a0;
    M2C_FIELD(arg0, s64 *, 0x180) = temp_v1;
    M2C_FIELD(arg0, s64 *, 0x100) = temp_t2;
    M2C_FIELD(arg0, s64 *, 0x88) = temp_a6;
    M2C_FIELD(arg0, s64 *, 0xA0) = temp_a5;
    M2C_FIELD(arg0, s64 *, 0x108) = temp_a4;
    M2C_FIELD(arg0, s64 *, 0x90) = temp_a3;
    M2C_FIELD(arg0, s64 *, 0xA8) = temp_a2;
    M2C_FIELD(arg0, s64 *, 0xC0) = temp_v1;
    M2C_FIELD(arg0, s64 *, 0xD8) = temp_a0;
    M2C_FIELD(arg0, s64 *, 0xF0) = temp_a1;
    M2C_FIELD(arg0, s64 *, 0x190) = temp_a7;
    temp_s1 = 0xC051 << 0x30;
    M2C_FIELD(arg0, s64 *, 0x118) = temp_t0;
    M2C_FIELD(arg0, s64 *, 0x130) = temp_t1;
    M2C_FIELD(arg0, s64 *, 0x158) = 0;
    M2C_FIELD(arg0, s64 *, 0x170) = 0;
    M2C_FIELD(arg0, s64 *, 0x188) = 0;
    do {
        var_s0 -= 1;
        M2C_FIELD(var_t8, s64 *, -0x30) = temp_s1;
        M2C_FIELD(var_t8, s64 *, 0) = temp_s1;
        var_t8 += 8;
        *var_t9 = 0;
        var_t9 += 4;
    } while (var_s0 >= 0);
    M2C_FIELD(arg0, s32 *, 0x280) = 1;
}
