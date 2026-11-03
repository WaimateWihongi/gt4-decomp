/* NON_MATCHING: functional draft, 40 of 43 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0053A178(u32 *arg0, u32 arg1, s32 arg2) {
    s32 temp_a3;
    s32 var_v0;
    u32 *temp_a5;
    u32 temp_a0;

    var_v0 = 5;
    if ((*(u8 *)0x64C0F4 == 1) && (*(s32 *)0x64C0FC != 0)) {
        temp_a3 = *(s32 *)0x64C100;
        if (temp_a3 != 0) {
            var_v0 = 2;
            if ((arg0 != NULL) && (arg1 < (u32) *(u32 *)0x86B3DC)) {
                temp_a5 = (arg1 * 4) + temp_a3;
                temp_a0 = *temp_a5;
                var_v0 = 0x3EB;
                if ((u32) *(u32 *)0x86B3D8 >= temp_a0) {
                    *temp_a5 = temp_a0 + 1;
                    var_v0 = 0;
                    *arg0 = temp_a0;
                    *(s32 *)((((arg1 * *(u32 *)0x86B3D8) + temp_a0) * 4) + *(s32 *)0x64C0FC) = arg2;
                }
            }
        }
    }
    return var_v0;
}
