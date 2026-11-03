/* NON_MATCHING: functional draft, 72 of 76 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_001CDAC8(s32, s32, M2C_UNK *, s32);        /* extern */
M2C_UNK func_00575DA0(s32);                         /* extern */

s32 func_001CDE38(s32 arg0, s32 arg1, M2C_UNK arg2, s32 arg3, void **arg4, s32 arg5, s32 arg6, s32 arg7) {
    struct StackFrame_001CDE38 { void * sp0; s32 sp4; s8 pad0[0x8]; s32 sp10; s8 pad1[0xC]; s32 sp20; s32 sp24; s32 sp28; s32 sp2C; } sp_;
    M2C_UNK (*temp_a3)(void *, s32, s16, M2C_UNK, void **, s32, s32, s32, M2C_UNK);
    s16 temp_a2;
    s32 temp_v0;
    void *temp_v1;

    sp_.sp0 = (void *)0x661718;
    sp_.sp4 = arg3;
    temp_a2 = M2C_FIELD((void *)0x661728, s16 *, 0);
    temp_a3 = M2C_FIELD((void *)0x661728, M2C_UNK (**)(void *, s32, s16, M2C_UNK, void **, s32, s32, s32, M2C_UNK), 4);
    temp_a3(((s8 *)&sp_) + temp_a2, arg1, temp_a2, temp_a3, arg4, arg5, arg6, arg7, 0);
    sp_.sp24 = 0;
    sp_.sp28 = 0;
    sp_.sp2C = 0;
    temp_v0 = func_001CDAC8(arg0, arg1, &sp_.sp20, arg3);
    sp_.sp10 = temp_v0;
    if (temp_v0 != 0) {
        if (sp_.sp24 != 0) {
            func_00575DA0(sp_.sp24);
        }
        sp_.sp0 = (void *)0x65CE00;
        return temp_v0;
    }
    temp_v1 = *arg4;
    M2C_FIELD((temp_v1 + 0x30), M2C_UNK (**)(void *, s32), 4)(arg4 + M2C_FIELD(temp_v1, s16 *, 0x30), sp_.sp24);
    if (sp_.sp24 != 0) {
        func_00575DA0(sp_.sp24);
    }
    M2C_FIELD((sp_.sp0 + 0x10), M2C_UNK (**)(void *, M2C_UNK), 4)(((s8 *)&sp_) + M2C_FIELD(sp_.sp0, s16 *, 0x10), 0x3F800000);
    sp_.sp0 = (void *)0x65CE00;
    return 0;
}
