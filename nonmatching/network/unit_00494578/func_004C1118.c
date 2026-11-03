/* NON_MATCHING: functional draft, 158 of 205 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_004C1118(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s16 temp_s2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a2;
    s32 temp_a2_3;
    s32 temp_a2_5;
    s32 temp_a2_6;
    s32 temp_a3;
    s32 temp_a3_3;
    s32 temp_a4;
    s32 temp_a4_2;
    s32 temp_a6;
    s32 temp_a6_2;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t2;
    s32 temp_v0;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 var_a2;
    u32 temp_t3;
    u32 temp_t8;
    u32 var_a7;
    void *temp_a2_2;
    void *temp_a2_4;
    void *temp_a3_2;
    void *temp_a3_4;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1_7;

    temp_s2 = arg5 & 0xFFFF;
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x24);
    temp_v0 = arg1 * 0x2C;
    temp_t1 = temp_v0 + 0x20;
    temp_t2 = temp_v0 + 0x10;
    temp_t3 = arg2 & 0xFFFF;
    temp_t8 = arg3 & 0xFFFF;
    *(s32 *)((*M2C_FIELD((temp_a0 + temp_t1), u16 **, 4) * 4) + M2C_FIELD((temp_a0 + temp_t2), s32 *, 0xC)) = arg4;
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x24) + temp_t1;
    *(s32 *)((*M2C_FIELD(temp_v0_2, u16 **, 4) * 2) + M2C_FIELD(temp_v0_2, s32 *, 0)) = temp_s2;
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x24);
    temp_v0_3 = temp_v1 + temp_t1;
    M2C_FIELD(((*M2C_FIELD(temp_v0_3, u16 **, 4) * 4) + M2C_FIELD((temp_v1 + temp_t2), s32 *, 0xC)), s32 *, 8) = (s32) (*M2C_FIELD(temp_v0_3, u16 **, 8) << 0x10);
    temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x24);
    M2C_FIELD(((*M2C_FIELD((temp_v1_2 + temp_t1), u16 **, 4) * 4) + M2C_FIELD((temp_v1_2 + temp_t2), s32 *, 0xC)), s32 *, 0xC) = (s32) (temp_t3 << 0x10);
    temp_v1_3 = M2C_FIELD(arg0, s32 *, 0x24);
    M2C_FIELD(((*M2C_FIELD((temp_v1_3 + temp_t1), u16 **, 4) * 4) + M2C_FIELD((temp_v1_3 + temp_t2), s32 *, 0xC)), s32 *, 0x10) = (s32) (temp_t8 << 0x10);
    temp_v1_4 = M2C_FIELD(arg0, s32 *, 0x24);
    M2C_FIELD(((*M2C_FIELD((temp_v1_4 + temp_t1), u16 **, 4) * 4) + M2C_FIELD((temp_v1_4 + temp_t2), s32 *, 0xC)), s32 *, 0x14) = 0x10000;
    if (temp_t3 < temp_t8) {
        var_a7 = temp_t8;
        do {
            temp_v1_5 = M2C_FIELD(arg0, s32 *, 0x24);
            temp_a4 = var_a7 << 0x10;
            temp_a2 = var_a7 * 4;
            temp_a3 = var_a7 * 2;
            var_a7 = (var_a7 + 0xFFFF) & 0xFFFF;
            M2C_FIELD(((*M2C_FIELD((temp_v1_5 + temp_t1), u16 **, 4) * 4) + M2C_FIELD((temp_v1_5 + temp_t2), s32 *, 0xC)), s32 *, 0x10) = temp_a4;
            temp_a2_2 = temp_a2 + M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x24) + temp_t2), s32 *, 0xC);
            M2C_FIELD(temp_a2_2, s32 *, 0) = (s32) M2C_FIELD(temp_a2_2, s32 *, -4);
            temp_a3_2 = temp_a3 + *(s32 *)(M2C_FIELD(arg0, s32 *, 0x24) + temp_t1);
            M2C_FIELD(temp_a3_2, u16 *, 0) = (u16) M2C_FIELD(temp_a3_2, u16 *, -2);
        } while (temp_t3 < var_a7);
        goto block_7;
    }
    var_a7 = temp_t8;
    var_a2 = arg1 * 3;
    if (var_a7 < temp_t3) {
        temp_v0_4 = arg1 * 0x2C;
        temp_t1_2 = temp_v0_4 + 0x20;
        temp_a6 = temp_v0_4 + 0x10;
        do {
            temp_v1_6 = M2C_FIELD(arg0, s32 *, 0x24);
            temp_a4_2 = var_a7 << 0x10;
            temp_a2_3 = var_a7 * 4;
            temp_a3_3 = var_a7 * 2;
            var_a7 = (var_a7 + 1) & 0xFFFF;
            M2C_FIELD(((*M2C_FIELD((temp_v1_6 + temp_t1_2), u16 **, 4) * 4) + M2C_FIELD((temp_v1_6 + temp_a6), s32 *, 0xC)), s32 *, 0x10) = temp_a4_2;
            temp_a2_4 = temp_a2_3 + M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x24) + temp_a6), s32 *, 0xC);
            M2C_FIELD(temp_a2_4, s32 *, 0) = (s32) M2C_FIELD(temp_a2_4, s32 *, 4);
            temp_a3_4 = temp_a3_3 + *(s32 *)(M2C_FIELD(arg0, s32 *, 0x24) + temp_t1_2);
            M2C_FIELD(temp_a3_4, u16 *, 0) = (u16) M2C_FIELD(temp_a3_4, u16 *, 2);
        } while (var_a7 < temp_t3);
block_7:
        var_a2 = arg1 * 3;
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x24);
    temp_a2_5 = ((var_a2 * 4) - arg1) * 4;
    temp_a6_2 = temp_a2_5 + 0x20;
    temp_a2_6 = temp_a2_5 + 0x10;
    M2C_FIELD(((*M2C_FIELD((temp_a0_2 + temp_a6_2), u16 **, 4) * 4) + M2C_FIELD((temp_a0_2 + temp_a2_6), s32 *, 0xC)), s32 *, 0x10) = (s32) (var_a7 << 0x10);
    *(s32 *)((temp_t3 * 4) + M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x24) + temp_a2_6), s32 *, 0xC)) = arg4;
    *(s32 *)((temp_t3 * 2) + *(s32 *)(M2C_FIELD(arg0, s32 *, 0x24) + temp_a6_2)) = temp_s2;
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x24);
    temp_v1_7 = temp_a0_3 + temp_a6_2;
    M2C_FIELD(((*M2C_FIELD(temp_v1_7, u16 **, 4) * 4) + M2C_FIELD((temp_a0_3 + temp_a2_6), s32 *, 0xC)), s32 *, 4) = (s32) (*M2C_FIELD(temp_v1_7, u16 **, 8) << 0x10);
    temp_a0_4 = M2C_FIELD(arg0, s32 *, 0x24);
    M2C_FIELD(((*M2C_FIELD((temp_a0_4 + temp_a6_2), u16 **, 4) * 4) + M2C_FIELD((temp_a0_4 + temp_a2_6), s32 *, 0xC)), s32 *, 0x14) = 0;
    return 0;
}
