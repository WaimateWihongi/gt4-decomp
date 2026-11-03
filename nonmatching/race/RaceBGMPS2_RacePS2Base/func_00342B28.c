/* NON_MATCHING: functional draft, 203 of 212 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_001054A0(void *, s32);                 /* extern */
M2C_UNK func_001056A0(void *);                      /* extern */
s32 func_00105918(void *);                          /* extern */
M2C_UNK func_004A1638(M2C_UNK);                     /* extern */
M2C_UNK func_004A2808(M2C_UNK, f32);                /* extern */
M2C_UNK func_004A2980(M2C_UNK);                     /* extern */
M2C_UNK func_004A29A8(M2C_UNK);                     /* extern */
M2C_UNK func_004A2B10(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_004A2B58(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_004A4100(M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_004A4418(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_004A4550(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_004A4810(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_004A4910();                            /* extern */
M2C_UNK func_004A4930(M2C_UNK);                     /* extern */
M2C_UNK func_004A4B40(s32, M2C_UNK);                /* extern */
M2C_UNK func_004A4C58(M2C_UNK);                     /* extern */
M2C_UNK func_004A6788(M2C_UNK, M2C_UNK, f32, f32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_004A7C60();                                /* extern */
M2C_UNK func_004A9228(s32);                         /* extern */
M2C_UNK func_004AA168(M2C_UNK);                     /* extern */
s32 func_004AB030();                                /* extern */
M2C_UNK func_004AB040(M2C_UNK);                     /* extern */

void func_00342B28(void *arg0, void *arg1) {
    M2C_UNK var_f23;
    f32 temp_f12;
    f32 temp_f21;
    f32 temp_f22;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_2;

    if ((M2C_FIELD(arg0, u8 *, 0xCF58) != 0) && (M2C_FIELD(arg0, s8 *, 0xCF59) >= 0) && (M2C_FIELD((((1 - M2C_FIELD((void *)0x61850C, s32 *, 0x78)) * 0x3C) + 0x61850C), s32 *, 4) == 1) && (M2C_FIELD(arg0, f32 *, 0xCF3C) > 0x0.0p+0f)) {
        temp_s3 = M2C_FIELD(arg1, s32 *, 0x28);
        func_001054A0(arg1, 0);
        var_f23 = 0x3F000000;
        func_001056A0(arg1);
        temp_v0 = func_004AB030();
        func_004A9228(temp_v0);
        func_004A4910();
        func_004AA168(0x80FFFFFF);
        func_004A4B40(temp_v0, 0);
        func_004A4C58(0);
        func_004A4930(4);
        func_004AB040(5);
        func_004AB040(4);
        func_004AB040(3);
        func_004AB040(8);
        func_004A1638(6);
        temp_f12 = M2C_FIELD(arg0, f32 *, 0xCF3C);
        func_004A2808(0x64, temp_f12 * temp_f12);
        func_004A29A8(0);
        func_004A4418(0x280, 0xE0);
        func_004A4550(4, 2);
        func_004A4550(5, 2);
        func_004A4810(0, 0, 0x27F);
        func_004A4810(1, 0, 0xDF);
        func_004A4550(2, 1);
        func_004A4550(3, 1);
        temp_f22 = (f32) M2C_FIELD(arg1, s32 *, 0x18);
        temp_f21 = (f32) func_00105918(arg1);
        temp_v0_2 = func_004A7C60();
        if (temp_v0_2 != M2C_FIELD(arg0, s8 *, 0xCF59)) {
            var_f23 = 0x3F800000;
            if (temp_v0_2 != 4) {
                var_f23 = 0;
            }
        }
        func_004A2B58(0, 0, 0x3F800000, 0x3F800000);
        func_004A2B10(0x3F000000, var_f23);
        temp_s0 = *(s32 *)0x618640;
        func_004A4100(0, temp_s0, 0x1B, 0x280);
        func_004A2980(0xFF);
        func_004A6788(0, 0, temp_f22, temp_f21, 0, 0, 0x44200000, 0x43600000);
        func_004A4100(0, temp_s0 + 0x23000, 0x1B, 0x280);
        func_004A2980(0xFF00);
        func_004A6788(0, 0, temp_f22, temp_f21, 0, 0, 0x44200000, 0x43600000);
        func_004A4100(0, temp_s0 + 0x46000, 0x1B, 0x280);
        func_004A2980(0xFF0000);
        func_004A6788(0, 0, temp_f22, temp_f21, 0, 0, 0x44200000, 0x43600000);
        func_004A2980(-1);
        func_004A29A8(1);
        func_004A4550(2, 1);
        func_004A4550(3, 1);
        func_001054A0(arg1, temp_s3);
    }
}
