/* NON_MATCHING: functional draft, 73 of 84 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

int func_00206868(void *);
s32 func_0025C2E8(void *);
s32 func_002DBCA8(void **, void *, void *);
s32 func_002DBE50(s32, s32, s32, s32);
M2C_UNK func_00208020(void *, s32, s32, s32);       /* extern */

void func_002DC000(void *arg0, s32 arg1, s32 *arg2, s32 *arg3, void **arg4) {
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v0_3;
    void *temp_v0_2;
    void *temp_v0_4;

    if (*arg3 != 0) {
        temp_s5 = *arg2;
        temp_v0 = func_00206868(arg0);
        if (temp_v0 == 0) {
            temp_v0_2 = M2C_FIELD(arg0, void **, 4);
            M2C_FIELD((temp_v0_2 + 0x320), M2C_UNK (**)(void *, s32, s32), 4)(arg0 + M2C_FIELD(temp_v0_2, s16 *, 0x320), arg1, temp_s5);
            return;
        }
        temp_v0_3 = func_002DBE50((s32) arg3, temp_s5, temp_v0, func_0025C2E8((void *) temp_v0));
        if (temp_v0_3 != 0) {
            if (*arg4 == NULL) {
                goto block_12;
            }
            if (func_002DBCA8(arg4, (void *) temp_v0_3, (void *) temp_s5) != 0) {
                func_00208020(arg0, arg1, temp_s5, temp_v0_3);
                return;
            }
block_12:
            M2C_FIELD((M2C_FIELD(arg0, void **, 4) + 0x328), M2C_UNK (**)(void *, s32, s32, s32), 4)(arg0 + M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0x328), arg1, temp_s5, temp_v0_3);
            return;
        }
        temp_v0_4 = M2C_FIELD(arg0, void **, 4);
        M2C_FIELD((temp_v0_4 + 0x320), M2C_UNK (**)(void *, s32, s32), 4)(arg0 + M2C_FIELD(temp_v0_4, s16 *, 0x320), arg1, temp_s5);
    }
}
