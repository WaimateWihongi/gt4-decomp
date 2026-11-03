/* NON_MATCHING: functional draft, 59 of 63 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

f32 *func_00385BB8(s32);                            /* extern */
f32 *func_00385BC8(s32);                            /* extern */
f32 *func_00385C38(s32);                            /* extern */
f32 *func_00385C48(s32);                            /* extern */

void func_004053A8(s32 *arg0) {
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f21;

    temp_f21 = *func_00385BB8(*arg0);
    temp_f20 = *func_00385BC8(*arg0);
    temp_f20_2 = M2C_MAXS((temp_f20 * 0x1.921fb40000000p+0f) - 0x1.89300e0000000p-1f, 0x0.0p+0f) * 0x1.6666660000000p-3f;
    *func_00385C38(*arg0) = M2C_MAXS((temp_f21 * 0x1.921fb40000000p+0f) - 0x1.89300e0000000p-1f, 0x0.0p+0f) * 0x1.6666660000000p-3f;
    *func_00385C48(*arg0) = temp_f20_2;
}
