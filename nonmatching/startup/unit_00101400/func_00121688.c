/* NON_MATCHING: functional draft, 134 of 135 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00490290(void *, M2C_UNK);             /* extern */
M2C_UNK func_00490518(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00490890(void *, M2C_UNK, f32);        /* extern */
M2C_UNK func_00490950(void *, M2C_UNK);             /* extern */
M2C_UNK func_004A7288(f32, f32, M2C_UNK, f32, f32, M2C_UNK); /* extern */
M2C_UNK func_004AB2E8(void *, s32, s32, s32, s32, s32, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_00121688(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f32 fparg0) {
    f32 temp_f20;
    f32 temp_f22;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f21;
    s32 temp_s5;
    void *temp_v0;
    void *temp_v0_2;

    var_f21 = 0x0.0p+0f;
    temp_f22 = M2C_FIELD(arg0, f32 *, 0x2D4);
    temp_f20 = M2C_FIELD(arg0, f32 *, 0x2DC);
    func_004AB2E8(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, 0x3F800000, 0x3F800000, 0x3F800000);
    func_004A7288(temp_f22, fparg0, 0, temp_f20, fparg0, 0);
    temp_v0 = *(void **)0x624980;
    temp_s5 = M2C_FIELD(temp_v0, s32 *, 0x74);
    func_00490290(temp_v0, 0x68DD58);
    temp_v0_2 = *(void **)0x624980;
    M2C_FIELD(temp_v0_2, f32 *, 0x24) = 0x1.9999980000000p-2f;
    M2C_FIELD(temp_v0_2, f32 *, 0x28) = 0x1.9999980000000p-2f;
    func_00490518(*(void **)0x624980, 0x3F800000, 0x3F800000, 0x3F800000, 0x3F800000);
    M2C_FIELD(*(void **)0x624980, s32 *, 0x74) = 0;
    if (arg1 != 0) {
        if (arg2 != 0) {
            var_f0 = 0x1.0000000000000p+2f;
            goto block_6;
        }
        var_f0_2 = fparg0 + 0x1.0000000000000p+2f;
        goto block_7;
    }
    if (arg2 != 0) {
        var_f0 = 0x1.0000000000000p+3f;
block_6:
        var_f0_2 = fparg0 - var_f0;
block_7:
        var_f21 = var_f0_2 + 0x1.0000000000000p+0f;
    }
    func_00490890(*(s32 *)0x624980, 0x41800000, M2C_FIELD(arg0, f32 *, 0x2F4) - var_f21);
    func_00490950(*(s32 *)0x624980, 0x68DD70);
    if (arg1 != 0) {
        func_00490890(*(s32 *)0x624980, 0x41800000, M2C_FIELD(arg0, f32 *, 0x2F4) - (((fparg0 + 0x1.9000000000000p+5f) - 0x1.0000000000000p+3f) - 0x1.0000000000000p+0f));
        func_00490950(*(s32 *)0x624980, 0x68DD78);
    }
    if (arg2 != 0) {
        func_00490890(*(s32 *)0x624980, 0x41800000, M2C_FIELD(arg0, f32 *, 0x2F4) - ((fparg0 - 0x1.9000000000000p+5f) + 0x1.0000000000000p+2f + 0x1.0000000000000p+0f));
        func_00490950(*(s32 *)0x624980, 0x68DD78);
    }
    M2C_FIELD(*(s32 *)0x624980, s32 *, 0x74) = temp_s5;
}
