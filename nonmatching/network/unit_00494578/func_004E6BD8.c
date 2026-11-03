/* NON_MATCHING: functional draft, 324 of 331 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_004E73B0(void *);                      /* extern */
M2C_UNK *func_00575E60(M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_0057F260(M2C_UNK);                     /* extern */
M2C_UNK func_005A48D8(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_005D2B58();     /* extern */
M2C_UNK func_005D2C20(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_004E6BD8(void *arg0) {
    u8 sp10;
    u8 sp11;
    u8 sp12;
    M2C_UNK *temp_v0;
    M2C_UNK *temp_v0_2;
    M2C_UNK *temp_v0_3;
    M2C_UNK *temp_v0_4;
    M2C_UNK *temp_v0_5;
    M2C_UNK *temp_v0_6;
    M2C_UNK *temp_v0_7;
    M2C_UNK *temp_v0_8;
    M2C_UNK *temp_v1;
    M2C_UNK *temp_v1_2;
    M2C_UNK *temp_v1_3;
    void *temp_s0;
    void *temp_s1;
    void *temp_s2;
    void *temp_s3;
    void *temp_s5;
    void *var_s0;
    void *var_v1;
    void *var_v1_10;
    void *var_v1_11;
    void *var_v1_12;
    void *var_v1_2;
    void *var_v1_3;
    void *var_v1_4;
    void *var_v1_5;
    void *var_v1_6;
    void *var_v1_7;
    void *var_v1_8;
    void *var_v1_9;

    M2C_FIELD(arg0, s32 *, 8) = 0x100;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    if (M2C_FIELD((void *)0x659E20, s32 *, 0xC) != 0) {
        var_v1 = func_005D2B58(0x659E20);
    } else {
        var_v1 = (void *)0x659E20 + 0x10;
        M2C_FIELD((void *)0x659E20, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659E20, s32 *, 8) + 1);
    }
    M2C_FIELD(arg0, void **, 0xC) = var_v1;
    func_0057F260(0x6BFF10);
    func_005D2C20(arg0 + 0xC, 0, -1, 0x6BFF10);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 2;
    M2C_FIELD(arg0, s32 *, 0x28) = 0x1E;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0x708;
    M2C_FIELD(arg0, s32 *, 0x34) = 1;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 1;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    if (M2C_FIELD((void *)0x659E20, s32 *, 0xC) == 0) {
        var_v1_2 = (void *)0x659E20 + 0x10;
        M2C_FIELD((void *)0x659E20, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659E20, s32 *, 8) + 1);
    } else {
        var_v1_2 = func_005D2B58(0x659E20, 1, 0x659E20);
    }
    temp_s0 = arg0 + 0x58;
    M2C_FIELD(arg0, void **, 0x54) = var_v1_2;
    M2C_FIELD(temp_s0, M2C_UNK **, 4) = NULL;
    sp10 = 0;
    temp_v0 = func_00575E60(0x10, 0x18);
    temp_s1 = arg0 + 0x70;
    M2C_FIELD(temp_s0, M2C_UNK **, 4) = temp_v0;
    M2C_FIELD(temp_s0, u8 *, 0xC) = (u8) sp10;
    M2C_FIELD(temp_s0, s32 *, 8) = 0;
    temp_s3 = arg0 + 0x68;
    *temp_v0 = NULL;
    temp_s2 = arg0 + 0x80;
    temp_s5 = arg0 + 0x90;
    M2C_FIELD(M2C_FIELD(temp_s0, M2C_UNK **, 4), s32 *, 4) = 0;
    temp_v0_2 = M2C_FIELD(temp_s0, M2C_UNK **, 4);
    M2C_FIELD(temp_v0_2, M2C_UNK **, 8) = temp_v0_2;
    temp_v1 = M2C_FIELD(temp_s0, M2C_UNK **, 4);
    M2C_FIELD(temp_v1, M2C_UNK **, 0xC) = temp_v1;
    temp_v0_3 = func_00575E60(0x10, 0x10);
    M2C_FIELD(temp_s3, M2C_UNK **, 4) = temp_v0_3;
    *temp_v0_3 = temp_v0_3;
    temp_v0_4 = M2C_FIELD(temp_s3, M2C_UNK **, 4);
    M2C_FIELD(temp_v0_4, M2C_UNK **, 4) = temp_v0_4;
    M2C_FIELD(temp_s1, M2C_UNK **, 4) = NULL;
    sp11 = 0;
    temp_v0_5 = func_00575E60(0x10, 0x18);
    M2C_FIELD(temp_s1, s32 *, 8) = 0;
    M2C_FIELD(temp_s1, M2C_UNK **, 4) = temp_v0_5;
    M2C_FIELD(temp_s1, u8 *, 0xC) = (u8) sp11;
    *temp_v0_5 = NULL;
    M2C_FIELD(M2C_FIELD(temp_s1, M2C_UNK **, 4), s32 *, 4) = 0;
    temp_v0_6 = M2C_FIELD(temp_s1, M2C_UNK **, 4);
    M2C_FIELD(temp_v0_6, M2C_UNK **, 8) = temp_v0_6;
    temp_v1_2 = M2C_FIELD(temp_s1, M2C_UNK **, 4);
    M2C_FIELD(temp_v1_2, M2C_UNK **, 0xC) = temp_v1_2;
    M2C_FIELD(temp_s2, M2C_UNK **, 4) = NULL;
    sp12 = 0;
    temp_v0_7 = func_00575E60(0x10, 0x18);
    M2C_FIELD(temp_s2, s32 *, 8) = 0;
    M2C_FIELD(temp_s2, M2C_UNK **, 4) = temp_v0_7;
    M2C_FIELD(temp_s2, u8 *, 0xC) = (u8) sp12;
    *temp_v0_7 = NULL;
    M2C_FIELD(M2C_FIELD(temp_s2, M2C_UNK **, 4), s32 *, 4) = 0;
    temp_v0_8 = M2C_FIELD(temp_s2, M2C_UNK **, 4);
    M2C_FIELD(temp_v0_8, M2C_UNK **, 8) = temp_v0_8;
    temp_v1_3 = M2C_FIELD(temp_s2, M2C_UNK **, 4);
    M2C_FIELD(temp_v1_3, M2C_UNK **, 0xC) = temp_v1_3;
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    if (M2C_FIELD((void *)0x659E20, s32 *, 0xC) == 0) {
        var_v1_3 = (void *)0x659E20 + 0x10;
        M2C_FIELD((void *)0x659E20, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659E20, s32 *, 8) + 1);
    } else {
        var_v1_3 = func_005D2B58(0x659E20);
    }
    M2C_FIELD(arg0, void **, 0x94) = var_v1_3;
    if (M2C_FIELD((void *)0x659E20, s32 *, 0xC) != 0) {
        var_v1_4 = func_005D2B58(0x659E20);
    } else {
        var_v1_4 = (void *)0x659E20 + 0x10;
        M2C_FIELD((void *)0x659E20, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659E20, s32 *, 8) + 1);
    }
    M2C_FIELD(temp_s5, void **, 8) = var_v1_4;
    if (M2C_FIELD((void *)0x659E20, s32 *, 0xC) != 0) {
        var_v1_5 = func_005D2B58(0x659E20);
    } else {
        var_v1_5 = (void *)0x659E20 + 0x10;
        M2C_FIELD((void *)0x659E20, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659E20, s32 *, 8) + 1);
    }
    M2C_FIELD(temp_s5, void **, 0xC) = var_v1_5;
    M2C_FIELD(temp_s5, s32 *, 0x10) = 0x50;
    if (M2C_FIELD((void *)0x659E20, s32 *, 0xC) != 0) {
        var_s0 = arg0 + 0xA8;
        var_v1_6 = func_005D2B58(0x659E20);
    } else {
        var_v1_6 = (void *)0x659E20 + 0x10;
        M2C_FIELD((void *)0x659E20, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659E20, s32 *, 8) + 1);
        var_s0 = arg0 + 0xA8;
    }
    M2C_FIELD(temp_s5, void **, 0x14) = var_v1_6;
    M2C_FIELD(var_s0, s32 *, 0) = 0;
    if (M2C_FIELD((void *)0x659E20, s32 *, 0xC) != 0) {
        var_v1_7 = func_005D2B58(0x659E20);
    } else {
        var_v1_7 = (void *)0x659E20 + 0x10;
        M2C_FIELD((void *)0x659E20, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659E20, s32 *, 8) + 1);
    }
    M2C_FIELD(arg0, void **, 0xAC) = var_v1_7;
    if (M2C_FIELD((void *)0x659E20, s32 *, 0xC) != 0) {
        var_v1_8 = func_005D2B58(0x659E20);
    } else {
        var_v1_8 = (void *)0x659E20 + 0x10;
        M2C_FIELD((void *)0x659E20, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659E20, s32 *, 8) + 1);
    }
    M2C_FIELD(var_s0, void **, 8) = var_v1_8;
    if (M2C_FIELD((void *)0x659E20, s32 *, 0xC) != 0) {
        var_v1_9 = func_005D2B58(0x659E20);
    } else {
        var_v1_9 = (void *)0x659E20 + 0x10;
        M2C_FIELD((void *)0x659E20, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659E20, s32 *, 8) + 1);
    }
    M2C_FIELD(var_s0, void **, 0xC) = var_v1_9;
    M2C_FIELD(var_s0, s32 *, 0x10) = 0x50;
    if (M2C_FIELD((void *)0x659E20, s32 *, 0xC) != 0) {
        var_v1_10 = func_005D2B58(0x659E20);
    } else {
        var_v1_10 = (void *)0x659E20 + 0x10;
        M2C_FIELD((void *)0x659E20, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659E20, s32 *, 8) + 1);
    }
    M2C_FIELD(var_s0, void **, 0x14) = var_v1_10;
    if (M2C_FIELD((void *)0x659E20, s32 *, 0xC) != 0) {
        var_v1_11 = func_005D2B58(0x659E20);
    } else {
        var_v1_11 = (void *)0x659E20 + 0x10;
        M2C_FIELD((void *)0x659E20, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659E20, s32 *, 8) + 1);
    }
    M2C_FIELD(arg0, void **, 0xC0) = var_v1_11;
    func_0057F260(0x6BFF28);
    func_005D2C20(arg0 + 0xC0, 0, -1, 0x6BFF28);
    if (M2C_FIELD((void *)0x659E20, s32 *, 0xC) == 0) {
        var_v1_12 = (void *)0x659E20 + 0x10;
        M2C_FIELD((void *)0x659E20, s32 *, 8) = (s32) (M2C_FIELD((void *)0x659E20, s32 *, 8) + 1);
    } else {
        var_v1_12 = func_005D2B58(0x659E20);
    }
    M2C_FIELD(arg0, void **, 0xC4) = var_v1_12;
    func_0057F260(0x6BFF28);
    func_005D2C20(arg0 + 0xC4, 0, -1, 0x6BFF28);
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    M2C_FIELD(arg0, s32 *, 0xD8) = 0;
    M2C_FIELD(arg0, s32 *, 0xDC) = 0;
    M2C_FIELD(arg0, s32 *, 0xE0) = 0;
    M2C_FIELD(arg0, s32 *, 0xE4) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    func_005A48D8(arg0 + 0x3C, 0, 0xC);
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    func_004E73B0(arg0);
}
