/* NON_MATCHING: functional draft, 72 of 73 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void *func_00515DD8();                           /* extern */
M2C_UNK func_005160C0(s32, s32);                    /* extern */
void *func_0051B8A8(s32, s32);                      /* extern */
M2C_UNK func_00531738(void *);                      /* extern */

s32 func_00516130(s32 arg0) {
    struct StackFrame_00516130 { void * sp0; s8 pad0[0xC]; } sp_;
    s32 temp_a0;
    s32 temp_s1;
    s32 var_v0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    var_v0 = 8;
    temp_s1 = M2C_FIELD((void *)0x854038, s32 *, 0x118);
    if (temp_s1 != 0) {
        temp_v0 = func_00515DD8();
        var_v0 = 8;
        sp_.sp0 = temp_v0;
        if (temp_v0 != NULL) {
            func_005160C0(M2C_FIELD(temp_v0, s32 *, 8), arg0);
            temp_v0_2 = func_00515DD8(arg0);
            temp_v0_3 = arg0 + 0x854038;
            sp_.sp0 = temp_v0_2;
            if (temp_v0_2 != NULL) {
                M2C_FIELD(temp_v0_3, s8 *, 0xE638) = 1;
                temp_v0_4 = func_0051B8A8(temp_s1, M2C_FIELD(temp_v0_2, s32 *, 8));
                if (temp_v0_4 != NULL) {
                    temp_a0 = M2C_FIELD(temp_v0_4, s32 *, 8);
                    if ((arg0 < temp_a0) || (arg0 >= (temp_a0 + M2C_FIELD(temp_v0_4, s32 *, 0xC)))) {
                        M2C_FIELD(temp_v0_3, s8 *, 0xE638) = 0;
                    }
                }
                func_00531738(sp_.sp0 + 0x20);
                func_00531738(sp_.sp0 + 0x1C);
                func_00531738(sp_.sp0 + 0x38);
                func_00531738(sp_.sp0 + 0x3C);
                M2C_FIELD(((arg0 * 4) + 0x854038), s32 *, 0xA638) = 0;
                func_00531738(((s8 *)&sp_));
            }
            var_v0 = 0;
        }
    }
    return var_v0;
}
