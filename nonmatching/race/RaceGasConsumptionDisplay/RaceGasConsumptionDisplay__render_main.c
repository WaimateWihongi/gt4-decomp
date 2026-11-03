/* NON_MATCHING: functional draft, 74 of 86 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

f32 func_003AFDD8(s32);
unsigned int func_003AFEC8(unsigned int, float);
struct RaceGasConsumptionDisplay {
    /* 0x00 */ char pad0[1];
    /* 0x01 */ u8 unk1;
    /* 0x02 */ s8 unk2;
    /* 0x03 */ char pad3[1];
    /* 0x04 */ s16 unk4;
    /* 0x06 */ s16 unk6;
    /* 0x08 */ s16 unk8;
    /* 0x0A */ s16 unkA;
    /* 0x0C */ f32 unkC;
    /* 0x10 */ s32 unk10;
    /* 0x14 */ void *unk14;
    /* 0x18 */ void *unk18;
    /* 0x1C */ void *unk1C;
    /* 0x20 */ s32 unk20;
    /* 0x24 */ s32 unk24;
    /* 0x28 */ char pad28[0x1C];                    /* maybe part of unk24[8]? */
    /* 0x44 */ s8 unk44;
    /* 0x45 */ s8 unk45;
    /* 0x46 */ char pad46[0x22];                    /* maybe part of unk45[0x23]? */
    /* 0x68 */ f32 unk68;                           /* inferred */
    /* 0x6C */ s32 unk6C;
};                                                  /* size = 0x70 */

void func_003A9B90(struct RaceGasConsumptionDisplay *arg0) {
    struct StackFrame_003A9B90 { s8 pad0[0x10]; } sp_;
    f32 temp_f20;
    s32 temp_f1;
    s32 temp_v1;
    s32 var_a2;

    func_0044D920((void *)0x623838, (void *)0x6A1638);
    func_0044DE80((void *)0x623838, func_003AFEC8((u32) arg0->unk18, arg0->unkC));
    M2C_FIELD((void *)0x623838, s32 *, 4) = 2;
    temp_v1 = arg0->unk6C;
    if (temp_v1 >= 3) {
        if (temp_v1 == 3) {
            goto block_9;
        }
    } else if (temp_v1 > 0) {

    } else if (temp_v1 != 0) {

    } else {
block_9:
        temp_f1 = (s32) ((arg0->unk68 * 0x1.f400000000000p+9f) + 0x1.0000000000000p-1f);
        if (temp_f1 < 0) {
            var_a2 = 0;
        } else {
            var_a2 = (temp_f1 >= 0x2710) ? 0x270F : temp_f1;
        }
        func_0057DA20((s32) ((s8 *)&sp_), 0x6A1648, var_a2);
    }
    temp_f20 = (f32) arg0->unk4;
    func_0044DDF8((void *)0x623838, temp_f20 + func_003AFDD8((s32) arg0->unk1), (f32) arg0->unk6, 0x0.0p+0f);
    func_0044E088((void *)0x623838, ((s8 *)&sp_));
    M2C_FIELD((void *)0x623838, s32 *, 4) = 0;
    func_0044D988((s32 *)0x623838);
}
