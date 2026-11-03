/* NON_MATCHING: functional draft, 122 of 140 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_001056A0(s32);                         /* extern */
M2C_UNK func_00105728(void *);                      /* extern */
s32 func_00105818(void *);                          /* extern */
M2C_UNK func_004A1638(M2C_UNK);                     /* extern */
M2C_UNK func_004A2808(M2C_UNK, f32);                /* extern */
M2C_UNK func_004A4550(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_004A4810(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_004A6668(M2C_UNK, M2C_UNK, f32, f32, M2C_UNK, M2C_UNK, f32, f32); /* extern */
M2C_UNK func_004A6788(f32, f32, f32, f32, M2C_UNK, M2C_UNK, f32, f32); /* extern */
M2C_UNK func_004AA1D8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_004AB040(M2C_UNK);                     /* extern */

void func_00216748(s32 arg0, void *arg1) {
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f18;
    f32 temp_f19;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f23;
    f32 var_f25;
    s32 temp_s2;
    s32 temp_s3;
    s32 var_s1;
    void *var_s0;

    temp_s2 = M2C_FIELD(arg1, s32 *, 8);
    temp_s3 = func_00105818(arg1);
    func_00105728(arg1);
    func_001056A0(arg0);
    temp_f23 = (f32) temp_s2;
    func_004A4550(4, 2);
    temp_f22 = (f32) temp_s3;
    func_004A4550(5, 2);
    func_004A4810(0, 0, temp_s2 - 1);
    var_f25 = 0x1.8000000000000p+1f;
    func_004A4810(1, 0, temp_s3 - 1);
    func_004AB040(5);
    func_004AB040(6);
    func_004AA1D8(0x3F800000, 0x3F800000, 0x3F800000, 0x3F800000);
    func_004A6668(0, 0, temp_f23, temp_f22, 0, 0, temp_f23, temp_f22);
    var_s1 = 3;
    func_004AA1D8(0x3F800000, 0x3F800000, 0x3F800000, 0x3F800000);
    func_004A1638(6);
    var_s0 = (void *)0x697B20;
    do {
        var_f25 += 0x1.0000000000000p+1f;
        func_004A2808(0x64, 0x1.0000000000000p+1f / var_f25);
        temp_f20 = M2C_FIELD(var_s0, f32 *, 0);
        temp_f18 = (f32) (temp_s2 + 1);
        temp_f21 = M2C_FIELD(var_s0, f32 *, 4);
        temp_f19 = (f32) (temp_s3 + 1);
        temp_f12 = temp_f20;
        temp_f13 = temp_f21;
        var_s0 += 8;
        func_004A6788(temp_f12, temp_f13, temp_f18 + temp_f20, temp_f19 + temp_f21, 0, 0, temp_f18, temp_f19);
        if (temp_f20 > 0x0.0p+0f) {
            func_004A6668(0, 0, temp_f20, temp_f22, 0, 0, 0x1.0000000000000p+0f, temp_f22);
        }
        if (temp_f21 > 0x0.0p+0f) {
            func_004A6668(0, 0, temp_f23, temp_f21, 0, 0, temp_f23, 0x1.0000000000000p+0f);
        }
        var_s1 -= 1;
    } while (var_s1 >= 0);
}
