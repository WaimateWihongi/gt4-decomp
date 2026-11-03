/* NON_MATCHING: functional draft, 99 of 113 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00469868(s32, void *);                 /* extern */
M2C_UNK func_00469888();                            /* extern */

void func_00469918(s32 arg0, void *arg1, f32 fparg2, f32 fparg3) {
    f32 var_f21;
    u8 temp_s0;
    u8 var_s4;
    void *temp_s3;

    temp_s3 = arg0 + 0x14;
    var_s4 = -1U;
    func_00469888();
    temp_s0 = M2C_FIELD(arg1, u8 *, 0x544);
    var_f21 = 0x0.0p+0f;
    if (M2C_FIELD(temp_s3, s8 *, 0x51) == temp_s0) {
        if (fparg2 > 0x1.8000000000000p+2f) {
            func_00469868(arg0, arg1);
        }
        if (M2C_FIELD(temp_s3, s8 *, 0x51) != temp_s0) {
            goto block_4;
        }
        goto block_8;
    }
block_4:
    if ((fparg3 > 0x0.0p+0f) && (fparg2 < 0x1.4000000000000p+2f)) {
        var_f21 = 0x1.0000000000000p+1f;
        var_s4 = temp_s0;
    } else {
block_8:
        if (fparg3 > 0x1.638e360000000p+2f) {
            var_f21 = 0x1.0000000000000p+0f;
        } else if ((fparg3 > 0x1.c71c6e0000000p-6f) && ((fparg2 / fparg3) < 0x1.4000000000000p+2f)) {
            var_f21 = 0x1.0000000000000p-1f;
        }
    }
    if (var_f21 != 0x0.0p+0f) {

    } else if (fparg2 < 0x1.0000000000000p-1f) {
        var_f21 = 0x1.9999980000000p-5f;
    } else if (fparg2 < 0x1.0000000000000p+2f) {
        var_f21 = 0x1.9999980000000p-4f;
    }
    if (M2C_FIELD(temp_s3, f32 *, 0x44) < var_f21) {
        if (var_s4 == -1U) {
            M2C_FIELD(temp_s3, f32 *, 0x44) = var_f21;
            return;
        }
        M2C_FIELD(temp_s3, s8 *, 0x51) = (s8) var_s4;
        M2C_FIELD(temp_s3, f32 *, 0x44) = 0x1.0000000000000p+0f;
    }
}
