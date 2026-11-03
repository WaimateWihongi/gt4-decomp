/* NON_MATCHING: functional draft, 64 of 66 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_001024A8(void *arg0) {
    s32 sp0;
    s32 sp10;
    s32 sp14;
    s32 spC;
    s32 sp1C;
    s32 sp20;
    s32 sp18;
    struct StackFrame_001024A8 { s8 pad0[0x30]; } sp_;
    void *temp_a1;
    void *temp_a2;
    void *temp_v0;
    void *temp_v1;

    M2C_FIELD(arg0, u16 *, 4) = 0U;
    M2C_FIELD(arg0, u16 *, 2) = 0U;
    M2C_FIELD(arg0, u16 *, 0) = 0U;
    M2C_FIELD(arg0, u16 *, 0xA) = 0U;
    M2C_FIELD(arg0, u16 *, 8) = 0U;
    M2C_FIELD(arg0, u16 *, 6) = 0U;
    temp_a1 = *(void **)0x6182D0;
    if ((temp_a1 != NULL) && (temp_v1 = M2C_FIELD(temp_a1, void **, 0x60), (M2C_FIELD((temp_v1 + 0x18), s32 (**)(void *, void *), 4)(temp_a1 + M2C_FIELD(temp_v1, s16 *, 0x18), temp_a1) != 0))) {
        temp_a2 = *(void **)0x6182D0;
        temp_v0 = M2C_FIELD(temp_a2, void **, 0x60);
        M2C_FIELD((temp_v0 + 0x20), M2C_UNK (**)(void *, void *, void *), 4)(((s8 *)&sp_), temp_a2 + M2C_FIELD(temp_v0, s16 *, 0x20), temp_a2);
        switch (sp0) {                              /* irregular */
        case 1:
            M2C_FIELD(arg0, u16 *, 0) = (u16) (s32) sp10;
            M2C_FIELD(arg0, u16 *, 2) = (u16) -(s32) sp14;
            M2C_FIELD(arg0, u16 *, 4) = (u16) -(s32) spC;
            M2C_FIELD(arg0, u16 *, 6) = (u16) -(s32) sp1C;
            M2C_FIELD(arg0, u16 *, 0xA) = (u16) -(s32) sp20;
            M2C_FIELD(arg0, u16 *, 8) = (u16) -(s32) sp18;
            return;
        case 2:
            M2C_FIELD(arg0, u16 *, 0) = spC;
            if ((s16) spC == -0x8000) {
                M2C_FIELD(arg0, u16 *, 0) = 0x7FFFU;
            }
            M2C_FIELD(arg0, u16 *, 2) = sp10;
            M2C_FIELD(arg0, u16 *, 0xA) = sp20;
            M2C_FIELD(arg0, u16 *, 4) = sp14;
            M2C_FIELD(arg0, u16 *, 6) = sp18;
            M2C_FIELD(arg0, u16 *, 8) = sp1C;
            break;
        }
    }
}
