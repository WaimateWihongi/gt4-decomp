/* NON_MATCHING: functional draft, 85 of 111 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00105728(void *);                      /* extern */
s32 func_00105918(void *);                          /* extern */
M2C_UNK func_004A1638(M2C_UNK);                     /* extern */
M2C_UNK func_004A4550(); /* extern */
M2C_UNK func_004A4810(M2C_UNK, s32, s32);           /* extern */
M2C_UNK func_004A6788(M2C_UNK, M2C_UNK, f32, f32, f32, f32, f32, f32); /* extern */
M2C_UNK func_004AA1D8(f32, f32, f32, f32);          /* extern */
M2C_UNK func_004AB040(M2C_UNK);                     /* extern */

void func_0039A2F0(void *arg0, void *arg1, s32 arg2, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    f32 temp_f21;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    void *temp_v1;

    if (M2C_FIELD(arg0, s32 *, 0x68) >= arg2) {
        func_00105728(arg0 + 0x2C);
        temp_v1 = arg0 + ((arg2 * 0x10) + 0x60);
        temp_s3 = M2C_FIELD(temp_v1, s32 *, 0xC);
        temp_s0 = M2C_FIELD(temp_v1, s32 *, 0x14);
        temp_s1 = M2C_FIELD(temp_v1, s32 *, 0x18);
        temp_s2 = M2C_FIELD(temp_v1, s32 *, 0x10);
        func_004A4550(4, 2, temp_v1, temp_v1);
        temp_s4 = temp_s3 + temp_s0;
        temp_s0_2 = temp_s2 + temp_s1;
        func_004A4550(5, 2);
        func_004A4810(0, temp_s3, temp_s4 - 1);
        func_004A4810(1, temp_s2, temp_s0_2 - 1);
        if (fparg0 == 0x1.0000000000000p+0f) {
            func_004AB040(6);
        } else {
            func_004A1638(6);
        }
        func_004AA1D8(fparg1, fparg2, fparg3, fparg0);
        temp_f21 = (f32) M2C_FIELD(arg1, s32 *, 0x18);
        func_004A6788(0, 0, temp_f21, (f32) func_00105918(arg1), (f32) temp_s3, (f32) temp_s2, (f32) temp_s4, (f32) temp_s0_2);
    }
}
