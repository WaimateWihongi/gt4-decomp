/* NON_MATCHING: functional draft, 55 of 77 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_003BDA98(void *);                          /* extern */
M2C_UNK func_003BDAB0(void *, u32, s32);            /* extern */
M2C_UNK func_003EA068(void *, s32);                 /* extern */
u32 func_003ED9F0();                                /* extern */
u32 func_00578CB0(s32);                             /* extern */

void func_003EA098(void *arg0) {
    s32 temp_v0;
    u32 temp_s2;
    u32 temp_v1;
    u32 var_s0;

    if (M2C_FIELD(arg0, u32 *, 0xF0EC) == 0) {
        if (*(s32 *)0x621F20 == 0) {
            temp_v0 = func_003BDA98(arg0 + 0xF058);
            M2C_FIELD(arg0, s32 *, 0xF0F0) = temp_v0;
            M2C_FIELD(arg0, u32 *, 0xF0EC) = func_00578CB0(temp_v0);
        } else {
            var_s0 = func_003ED9F0();
            temp_s2 = func_003ED9F0();
            temp_v1 = func_003ED9F0();
            if (temp_s2 < var_s0) {
                var_s0 = temp_s2;
            }
            if (temp_v1 < var_s0) {
                var_s0 = temp_v1;
            }
            M2C_FIELD(arg0, u32 *, 0xF0EC) = var_s0;
            M2C_FIELD(arg0, s32 *, 0xF0F0) = 0x1C2000;
        }
        func_003BDAB0(arg0 + 0xF058, M2C_FIELD(arg0, u32 *, 0xF0EC), M2C_FIELD(arg0, s32 *, 0xF0F0));
        func_003EA068(arg0 + 0xE84C, M2C_FIELD(arg0, s32 *, 0xF0D8));
        func_003EA068(arg0 + 0xEA2C, M2C_FIELD(arg0, s32 *, 0xF0E0));
    }
}
