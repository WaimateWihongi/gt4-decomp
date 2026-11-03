/* NON_MATCHING: functional draft, 149 of 158 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0030C378();       /* extern */
M2C_UNK func_0030C430(s32);                         /* extern */
M2C_UNK func_0030C448(s32);                         /* extern */
s32 func_00328A38(void *);                          /* extern */
M2C_UNK func_0057FB50(f32);                         /* extern */

void func_00328DD0(void *arg0, s32 arg1) {
    f32 var_f0;
    f32 var_f1;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_v1;
    void *var_s0;
    void *var_s4;

    var_s4 = NULL;
    func_0030C378(arg1, 0x69ECD8, M2C_FIELD(arg0, void **, 0x40), M2C_FIELD(arg0, s32 *, 0x44));
    var_s0 = M2C_FIELD(arg0, void **, 0x30);
    if (var_s0 != NULL) {
        do {
            func_0030C378(arg1, 0x69ECF0, var_s4);
            func_0030C430(arg1);
            temp_s2 = M2C_FIELD(arg0, s32 *, 0x44);
            var_s4 += 1;
            if ((((s32) (M2C_FIELD(arg0, void **, 0x40) + 4) * temp_s2) + 0x1C) & 0xF) {

            }
            func_0030C378(arg1, 0x69ED00, var_s0, var_s0 - 0x10);
            func_0030C378(arg1, 0x69ED28, M2C_FIELD(var_s0, void **, 0x14), M2C_FIELD(var_s0, s32 *, 0x18));
            func_0030C378(arg1, 0x69ED40, M2C_FIELD(var_s0, void **, 0xC), temp_s2);
            func_0030C448(arg1);
            func_0030C378(arg1, 0x69ED58);
            var_s0 = M2C_FIELD(var_s0, void **, 8);
        } while (var_s0 != NULL);
    }
    func_0030C378(arg1, 0x69ED60, M2C_FIELD(arg0, void **, 0x3C), (s32) var_s4 * M2C_FIELD(arg0, s32 *, 0x44));
    temp_s0 = M2C_FIELD(arg0, s32 *, 0x44);
    temp_s2_2 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (temp_s0 != 0) {
        if (temp_s2_2 >= 0) {
            var_f1 = (f32) temp_s2_2;
        } else {
            var_f1 = 0x1.0000000000000p+1f * (f32) ((temp_s2_2 & 1) | ((u32) temp_s2_2 >> 1));
        }
        if (temp_s0 >= 0) {
            var_f0 = (f32) temp_s0;
        } else {
            var_f0 = 0x1.0000000000000p+1f * (f32) ((temp_s0 & 1) | ((u32) temp_s0 >> 1));
        }
        func_0057FB50((var_f1 / var_f0) * 0x1.9000000000000p+6f);
    }
    func_0030C378(arg1, 0x69ED78, (void *) temp_s2_2, temp_s0);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x44);
    if ((temp_v1 != 0) && ((u32) M2C_FIELD(arg0, s32 *, 0x4C) >= (u32) temp_v1)) {
        func_0030C378(arg1, 0x69ED98);
        func_0030C378(arg1, 0x69EDE0);
        func_0030C378(arg1, 0x69ED98);
        func_0030C378(arg1, 0x69EE28);
    }
    func_0030C378(arg1, 0x69EE38, M2C_FIELD(arg0, void **, 0x40), func_00328A38(arg0));
}
