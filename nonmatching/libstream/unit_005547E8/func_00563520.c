/* NON_MATCHING: functional draft, 80 of 83 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_005636E8();           /* extern */
M2C_UNK func_00563748(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00563778();                            /* extern */

s32 func_00563520(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    struct StackFrame_00563520 { s8 pad0[0x10]; } sp_;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v1;

    var_v0 = 1;
    if (*(s32 *)0x654D98 != 0) {
        temp_a0 = *(s32 *)0x654D90;
        temp_v0 = temp_a0 + 0xF;
        *(s32 *)0x654D80 = (s32) ((temp_v0 < 0) ? (temp_a0 + 0x1E) : temp_v0) >> 4;
        if (*(s32 *)0x654D9C != 0) {
            temp_v0_2 = *(s32 *)0x654D94;
            temp_v1 = temp_v0_2 + 0xF;
            var_v1 = (s32) ((temp_v1 < 0) ? (temp_v0_2 + 0x1E) : temp_v1) >> 4;
        } else {
            temp_v0_3 = *(s32 *)0x654D94;
            temp_v1_2 = temp_v0_3 + 0x1F;
            var_v1 = (s32) ((temp_v1_2 < 0) ? (temp_v0_3 + 0x3E) : temp_v1_2) >> 5;
        }
        *(s32 *)0x654D84 = var_v1;
        M2C_FIELD((void *)0x64C480, M2C_UNK (**)(s32, void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32), 0x20)(M2C_FIELD((void *)0x64C480, s32 *, 0x24), ((s8 *)&sp_), 0x64C480, 0x650000, 0x654D84, *(s32 *)0x654D80 * 0x10, *(s32 *)0x654D84 * 0x10);
        temp_a0_2 = *(s32 *)0x654D84;
        temp_a1 = M2C_FIELD((void *)0x874378, s32 *, 0);
        temp_s0 = *(s32 *)0x654D80 * temp_a0_2 * 0x180;
        if (temp_a1 == 0) {
            func_005636E8(temp_s0, temp_a1, 0x874378);
        } else if (M2C_FIELD((void *)0x874378, s32 *, 4) != temp_s0) {
            func_00563748(temp_a0_2, temp_a1, 0x874378);
            func_005636E8(temp_s0);
        }
        func_00563778();
        var_v0 = 0;
    }
    return var_v0;
}
