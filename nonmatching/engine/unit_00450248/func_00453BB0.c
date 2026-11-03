/* NON_MATCHING: functional draft, 161 of 182 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00453A58(f32, f32, f32, M2C_UNK);      /* extern */

void func_00453BB0(s32 *arg0, void *arg1, s32 arg2, f32 fparg0) {
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f23;
    f32 var_f23;
    s32 temp_a1;
    s32 temp_s2;
    s32 temp_s3;
    s32 var_s4;

    var_s4 = 2;
    func_004A5418(0x887);
    temp_f23 = fparg0 * 0x1.0000000000000p-1f;
    temp_a1 = 1 << ((s64) ((((u64) *M2C_FIELD(arg1, u64 **, 0x18) >> 0x1A) & 0xF) << 0x20) >> 0x20);
    temp_f20 = (f32) temp_a1;
    temp_s3 = (temp_a1 < 0x40) ? temp_a1 : 0x40;
    func_001055C0(arg0);
    func_00105440(arg0, temp_s3);
    temp_s2 = temp_s3 * 3;
    temp_f22 = (f32) temp_s3;
    func_00105450(arg0, temp_s2);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_00105528((s32) arg0);
    func_001056A0(arg0);
    func_00499728(arg1);
    func_0049CC48(M2C_FIELD(arg1, u64 **, 0x18));
    func_004AB040(6U);
    func_004AB040(5U);
    func_004AB040(4U);
    func_004AB040(3U);
    func_004A29A8(0U);
    func_004AA1D8(0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f);
    func_004A4550(3U, 1);
    func_004A4550(2U, 1);
    func_00453A58(0x0.0p+0f, temp_f22, temp_f20, 0xBECCCCCC);
    func_004A5FE0(3U);
    func_00453A58(temp_f23, temp_f22, temp_f20, 0x3F000000);
    func_004A5FE0(0U);
    func_00105728(arg0);
    func_004A6668(0x0.0p+0f, 0x0.0p+0f, temp_f22, temp_f22, 0x0.0p+0f, temp_f22, temp_f22, (f32) temp_s2);
    func_004A4910();
    if (arg2 > 2) {
        var_f23 = temp_f23 * 0x1.0000000000000p-1f;
loop_2:
        var_s4 *= 2;
        func_00453A58(0x0.0p+0f, temp_f22, temp_f22, 0xBECCCCCC);
        func_004A5FE0(3U);
        func_00453A58(var_f23, temp_f22, temp_f22, 0x3F000000);
        func_004A5FE0(0U);
        func_004A6668(0x0.0p+0f, 0x0.0p+0f, temp_f22, temp_f22, 0x0.0p+0f, temp_f22, temp_f22, (f32) temp_s2);
        func_004A4910();
        if (var_s4 < arg2) {
            var_f23 *= 0x1.0000000000000p-1f;
            goto loop_2;
        }
    }
    func_004A5688();
    func_004A29A8(1U);
    func_004A1638(5U);
    func_00105450(arg0, temp_s3);
}
