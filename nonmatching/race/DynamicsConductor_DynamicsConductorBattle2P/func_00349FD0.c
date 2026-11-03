/* NON_MATCHING: functional draft, 303 of 326 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

f32 func_00348800(f32);
float func_0035A540(void *, int);
void func_00349FD0(s8 *arg0) {
    s32 sp14;
    s32 sp15;
    s32 sp7;
    s32 sp1;
    struct StackFrame_00349FD0 { s8 pad0[0x4]; s16 sp4; s8 pad1[0xA]; u8 sp10; s8 pad2[0xF]; s8 sp20; s8 pad3[0x2]; s8 sp23; s8 pad4[0xC]; u8 sp30; u8 sp31; u8 sp32; u8 sp33; u8 sp34; u8 sp35; s8 pad5[0xA]; } sp_;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_a0;
    s16 temp_a1_2;
    s16 var_a2;
    s32 temp_v0_5;
    s32 var_a1;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s8 *temp_s0_5;
    s8 temp_v1_4;
    u16 temp_v0_6;
    u8 temp_s0_3;
    u8 temp_s0_4;
    u8 temp_s3;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_a1;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_s1 = arg0 + 0x104;
    temp_s0 = M2C_FIELD(arg0, void **, 4) + (M2C_FIELD(temp_s1, u8 *, 0x440) * 4) + 0xF910;
    func_003557E8(&sp_.sp20);
    func_005A48D8(&sp_.sp30, 0, 0x10);
    temp_v0 = M2C_FIELD(temp_s0, u8 *, 0);
    if (temp_v0 != 0) {
        sp_.sp30 = temp_v0;
        sp_.sp31 = M2C_FIELD(temp_s0, u8 *, 1);
        sp_.sp32 = M2C_FIELD(temp_s0, u8 *, 2);
        sp_.sp33 = M2C_FIELD(temp_s0, u8 *, 3);
        M2C_FIELD(temp_s0, u8 *, 3) = 0U;
        M2C_FIELD(temp_s0, u8 *, 0) = 0U;
        M2C_FIELD(temp_s0, u8 *, 1) = 0U;
        M2C_FIELD(temp_s0, u8 *, 2) = 0U;
    }
    sp_.sp23 = 4;
    if ((u8) M2C_FIELD(temp_s1, u8 *, 0x466) < 2U) {
        temp_v1 = M2C_FIELD(arg0, void **, 4) + (M2C_FIELD(temp_s1, u8 *, 0x440) * 4);
        temp_s0_2 = temp_v1 + 0xF8F8;
        temp_v0_2 = M2C_FIELD(temp_v1, u8 *, 0xF8F8);
        if (temp_v0_2 != 0) {
            sp_.sp34 = temp_v0_2;
            sp_.sp35 = M2C_FIELD(temp_s0_2, u8 *, 1);
            M2C_FIELD(temp_s0_2, u8 *, 1) = 0U;
            M2C_FIELD(temp_v1, u8 *, 0xF8F8) = 0U;
        }
        sp_.sp23 = 6;
    }
    temp_a3 = M2C_FIELD(arg0, void **, 0xC);
    temp_v0_3 = M2C_FIELD(temp_a3, void **, 0xD0);
    M2C_FIELD((temp_v0_3 + 0x28), M2C_UNK (**)(void *, s8 *, s8 *, void *), 4)(temp_a3 + M2C_FIELD(temp_v0_3, s16 *, 0x28), ((s8 *)&sp_), &sp_.sp20, temp_a3);
    if (sp_.sp10 != 0) {
        func_0035BFE8(arg0, &sp_.sp10);
    }
    if (((u8) M2C_FIELD(temp_s1, u8 *, 0x466) < 2U) && (sp14 != 0)) {
        func_003F19E0(arg0, (s32) M2C_FIELD(temp_s1, u8 *, 0x440), (s32) sp14, (s32) sp15);
    }
    if (M2C_FIELD(temp_s1, u8 *, 0x441) == 0) {
        temp_a3_2 = M2C_FIELD(arg0, void **, 4);
        temp_v0_4 = M2C_FIELD(temp_a3_2, void **, 0x10140);
        M2C_FIELD((temp_v0_4 + 0xC8), M2C_UNK (**)(void *, void *, s8 *, void *), 4)(temp_a3_2 + M2C_FIELD(temp_v0_4, s16 *, 0xC8), M2C_FIELD(arg0, void **, 0xC), ((s8 *)&sp_), temp_a3_2);
    }
    temp_f2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), f32 *, 0x10D4);
    if (sp7 != 0) {
        if (M2C_FIELD(temp_s1, u8 *, 0x467) == 0) {
            if ((temp_f2 > 0x0.0p+0f) && (M2C_FIELD(temp_s1, f32 *, 0x4E0) > 0x0.0p+0f)) {
                M2C_FIELD(temp_s1, s8 *, 0x4E4) = 6;
                M2C_FIELD(temp_s1, f32 *, 0x4E8) = (f32) (M2C_FIELD(temp_s1, f32 *, 0x4E8) * (temp_f2 + 0x1.0000000000000p+0f));
            }
        }
    }
    M2C_FIELD(temp_s1, s8 *, 0x461) = 1;
    var_s6 = 0;
    if (sp1 == 6) {
        var_a1 = (M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), u8 *, 0x10D3) == 0) ? 1 : 2;
    } else {
        var_a1 = 0;
    }
    temp_a2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x84);
    temp_a1 = (var_a1 << 5) + 0x70 + 0x622110;
    var_s4 = 0;
    temp_v1_2 = M2C_FIELD(temp_a2, void **, 0x64);
    temp_s3 = M2C_FIELD(temp_a1, u8 *, 0x1A);
    var_s5 = 0;
    temp_s0_3 = M2C_FIELD(temp_a1, u8 *, 0x1B);
    temp_s0_4 = (M2C_FIELD((temp_v1_2 + 0x290), s32 (**)(void *, void *, void *), 4)(temp_a2 + M2C_FIELD(temp_v1_2, s16 *, 0x290), temp_a1, temp_a2) != 0) ? (temp_s0_3 + 2) : temp_s0_3;
    if (temp_s3 != 0) {
        temp_a1_2 = M2C_FIELD(temp_s1, s16 *, 0x454);
        temp_a2_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x84);
        temp_v1_3 = M2C_FIELD(temp_a2_2, void **, 0x64);
        var_s4 = sp_.sp4 - temp_a1_2;
        var_s5 = temp_a1_2 - M2C_FIELD(temp_s1, s16 *, 0x456);
        if (M2C_FIELD((temp_v1_3 + 0x318), s32 (**)(void *, s16, void *), 4)(temp_a2_2 + M2C_FIELD(temp_v1_3, s16 *, 0x318), temp_a1_2, temp_a2_2) > 0) {
            temp_a0 = M2C_FIELD(temp_s1, s16 *, 0x456);
            temp_v0_5 = (s32) (sp_.sp4 + temp_a0) / 2;
            var_s5 = temp_v0_5 - temp_a0;
            var_s4 = sp_.sp4 - temp_v0_5;
        }
    }
    temp_v0_6 = (u16) M2C_FIELD(temp_s1, s16 *, 0x454);
    M2C_FIELD(temp_s1, s16 *, 0x454) = (s16) (u16) sp_.sp4;
    M2C_FIELD(temp_s1, s16 *, 0x456) = (s16) temp_v0_6;
    if (temp_s3 != 0) {
        var_a2 = (s16) (u16) sp_.sp4 + (temp_s0_4 * var_s4);
        if ((s32) temp_s3 >= 2) {
            var_a2 += temp_s0_4 * temp_s0_4 * (var_s4 - var_s5);
        }
        sp_.sp4 = (((var_a2 < 0x1001) ^ 0) == 0) ? 0x1000 : ((var_a2 < -0x1000) ? -0x1000 : var_a2);
    }
    temp_v1_4 = (s8) M2C_FIELD(temp_s1, u8 *, 0x466);
    switch (temp_v1_4) {                            /* irregular */
    case 0:
        func_003484D0(temp_s1, ((s8 *)&sp_));
        if (M2C_FIELD(temp_s1, u8 *, 0x467) != 0) {
            func_003F3400(arg0, ((s8 *)&sp_));
            func_00469E58(arg0 + 0x14);
            var_s6 = 1;
            func_00349F80((s32) arg0);
        } else {
            temp_s0_5 = arg0 + 0x14;
            func_00465078(temp_s0_5);
            func_00349F48(arg0);
            func_00469E58(temp_s0_5);
        }
        break;
    case 1:
        func_003484D0(temp_s1, ((s8 *)&sp_));
        var_s6 = 1;
        func_003F3400(arg0, ((s8 *)&sp_));
        func_00349F80((s32) arg0);
        break;
    case 2:
        func_003F3400(arg0, ((s8 *)&sp_));
        var_s6 = 1;
        func_00349F80((s32) arg0);
        break;
    }
    if ((M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), u8 *, 0x32) == 4) && (M2C_FIELD(temp_s1, u8 *, 0x522) == 3)) {
        M2C_FIELD(temp_s1, f32 *, 0x488) = 0x0.0p+0f;
        M2C_FIELD(temp_s1, s32 *, 0x48C) = 0;
        func_00343CF8(arg0, M2C_FIELD(temp_s1, f32 *, 0x488));
    }
    func_00350C20(arg0);
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), u8 *, 0x32) == 6) {
        temp_f2_2 = *(f32 *)0x6207B4;
        func_0035A618(arg0, 1, (func_0035A540(arg0, 1) * (0x1.0000000000000p+0f - temp_f2_2)) + (M2C_FIELD(temp_s1, f32 *, 0x468) * temp_f2_2));
    }
    if (var_s6 != 0) {
        M2C_FIELD(temp_s1, f32 *, 0x45C) = (f32) (func_00348800(M2C_FIELD(temp_s1, f32 *, 0x468)) * 0x1.5559b20000000p-1f);
    }
}
