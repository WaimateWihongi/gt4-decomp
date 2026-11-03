/* NON_MATCHING: functional draft, 27 of 27 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00572D30();                            /* extern */
M2C_UNK func_00573898(void *);                      /* extern */
s32 func_005A58D8(void *);                          /* extern */

void func_004AE0B8(void *arg0) {
    void *sp0;
    void *temp_v0;
    void *temp_v0_2;

    sp0 = arg0;
    M2C_FIELD(arg0, s32 *, 0x3094) = 0;
    func_00572D30();
    temp_v0 = M2C_FIELD(sp0, void **, 0x44);
    M2C_FIELD((temp_v0 + 0x30), M2C_UNK (**)(void *), 4)(sp0 + M2C_FIELD(temp_v0, s16 *, 0x30));
    if (func_005A58D8(sp0 + 0x30A0) == 0) {
        func_00573898(arg0);
    }
    temp_v0_2 = M2C_FIELD(sp0, void **, 0x44);
    M2C_FIELD((temp_v0_2 + 0x38), M2C_UNK (**)(void *, M2C_UNK), 4)(sp0 + M2C_FIELD(temp_v0_2, s16 *, 0x38), 1);
}
