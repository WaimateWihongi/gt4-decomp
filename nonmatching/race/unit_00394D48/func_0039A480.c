/* NON_MATCHING: functional draft, 19 of 28 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

struct DirectivityMicrophone {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ f32 unk4;                            /* inferred */
    /* 0x08 */ f32 unk8;
    /* 0x0C */ f32 unkC;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ f32 unk14;
    /* 0x18 */ f32 unk18;
    /* 0x1C */ void *unk1C;
    /* 0x20 */ s32 unk20;
    /* 0x24 */ f32 unk24;
};                                                  /* size = 0x28 */

M2C_UNK func_0039A550(struct DirectivityMicrophone *, M2C_UNK); /* extern */

void func_0039A480(struct DirectivityMicrophone *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    f32 temp_f13;

    arg0->unk4 = 0x0.0p+0f;
    arg0->unk1C = (void *)0x67E260;
    temp_f13 = arg0->unk4;
    arg0->unk0 = 0;
    arg0->unk8 = temp_f13;
    arg0->unkC = temp_f13;
    arg0->unk10 = temp_f13;
    arg0->unk14 = temp_f13;
    arg0->unk18 = temp_f13;
    func_0039A530(arg0, 0, 0x1.921fb40000000p+0f, temp_f13, temp_f13, temp_f13);
    func_0039A550(arg0, 0x3F800000);
}
