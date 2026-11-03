/* NON_MATCHING: functional draft, 94 of 100 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_00563158(M2C_UNK);                         /* extern */
s32 func_005684E0(s32);                             /* extern */

s32 func_00564368(s32 *arg0, s32 *arg1, void *arg2) {
    s32 *sp0;
    s32 *sp4;
    s32 *sp8;
    s32 temp_s4;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s6;
    s32 var_v1;

    sp0 = arg0;
    var_s1 = -0x27;
    sp4 = arg2 + 0xC;
    temp_s4 = func_005684E0(*(s32 *)0x654DA0);
    sp8 = arg2 + 0x14;
    if (temp_s4 & 0xC) {
        if (*(s32 *)0x654DB8 == 3) {
            if (*(s32 *)0x654DC0 != 0) {
                var_s1 = 2;
            } else {
                var_s1 = func_00563158(2);
            }
        } else {
            var_s1 = func_00563158(2);
        }
    }
    if (*(s32 *)0x654DB8 == 3) {
        var_s2 = var_s1 == 2;
        var_s0 = ((var_s1 ^ 1) != 0) ? 1 : 2;
    } else {
        var_s0 = ((var_s1 ^ 2) != 0) ? 1 : 2;
        var_s2 = 0;
    }
    var_s6 = 0;
    if (var_s2 == 0) {
        var_s6 = *(s32 *)0x654DB8 == 3;
    }
    var_v1 = 0;
    if (*(s32 *)0x654DB8 == 3) {
        if (*(s32 *)0x654DC0 != 0) {
            var_v1 = 0;
        } else if (!(temp_s4 & 3)) {
            var_v1 = 0;
        } else {
            var_v1 = func_00563158(1);
        }
    }
    *sp0 = temp_s4;
    *arg1 = var_v1;
    *sp4 = var_s1;
    M2C_FIELD(arg2, s32 *, 8) = var_s0;
    M2C_FIELD(arg2, s32 *, 4) = var_s2;
    M2C_FIELD(arg2, s32 *, 0) = var_s6;
    *sp8 = var_s1 == 3;
    return 0;
}
