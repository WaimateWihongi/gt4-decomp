/* NON_MATCHING: functional draft, 241 of 247 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0034F6A0(M2C_UNK);                     /* extern */
M2C_UNK func_00366B28(s32, void *, M2C_UNK, M2C_UNK, f32); /* extern */
M2C_UNK func_00366BC8(s32, void *, M2C_UNK, M2C_UNK, f32, f32); /* extern */
M2C_UNK func_00366CD8(s32, void *);                 /* extern */
M2C_UNK func_003FAA10(M2C_UNK);                     /* extern */
M2C_UNK func_005A48D8(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_00366D68(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    s32 sp0;
    M2C_UNK var_f12;
    M2C_UNK var_f12_2;
    M2C_UNK var_f12_3;
    M2C_UNK var_f12_4;
    M2C_UNK var_f12_5;
    M2C_UNK var_f12_6;
    s32 var_fp;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    void *temp_a1;
    void *temp_v0;
    void *var_s0;
    void *var_s1;
    void *var_s2;
    void *var_s6;
    void *var_s7;

    var_s1 = (void *)0x6224B0;
    var_s2 = (void *)0x6225F0;
    var_s0 = (void *)0x622550;
    var_s6 = (void *)0x62256E;
    var_s7 = (void *)0x6224CE;
    sp0 = 0x150;
    var_fp = 3;
    func_003FAA10(0x6224B0);
    var_s5 = 0x843E40;
    var_s4 = 0x843C30;
    var_s3 = 0x843A20;
    do {
        func_005A48D8(var_s3, 0, 0x84);
        var_f12 = 0x3B64C385;
        if (M2C_FIELD(var_s1, u8 *, 0) != 0) {
            var_f12 = 0x3DE38E37;
        }
        func_00366B28(var_s3, var_s1, 0, var_f12, (f32) M2C_FIELD(var_s1, u8 *, 0x1C) / 0x1.3ec0000000000p+11f);
        var_f12_2 = 0x3B808080;
        if (M2C_FIELD(var_s1, u8 *, 0x1F) != 0) {
            var_f12_2 = 0x3D638E37;
        }
        func_00366BC8(var_s3, var_s1, 0, var_f12_2, (f32) M2C_FIELD(var_s7, u8 *, -1) / 0x1.3ec0000000000p+11f, (f32) M2C_FIELD(var_s7, u8 *, 0) / 0x1.3ec0000000000p+11f);
        func_00366CD8(var_s3, var_s1);
        func_005A48D8(var_s4, 0, 0x84);
        var_f12_3 = 0x3B64C385;
        if (M2C_FIELD(var_s1, u8 *, 0xA0) != 0) {
            var_f12_3 = 0x3DE38E37;
        }
        func_00366B28(var_s4, var_s0, 0, var_f12_3, (f32) M2C_FIELD(var_s1, u8 *, 0xBC) / 0x1.3ec0000000000p+11f);
        var_f12_4 = 0x3B808080;
        if (M2C_FIELD(var_s1, u8 *, 0xBF) != 0) {
            var_f12_4 = 0x3D638E37;
        }
        func_00366BC8(var_s4, var_s0, 0, var_f12_4, (f32) M2C_FIELD(var_s6, u8 *, -1) / 0x1.3ec0000000000p+11f, (f32) M2C_FIELD(var_s6, u8 *, 0) / 0x1.3ec0000000000p+11f);
        func_00366CD8(var_s4, var_s0);
        func_005A48D8(var_s5, 0, 0x84);
        var_f12_5 = 0x3B64C385;
        if (M2C_FIELD(var_s1, u8 *, 0x140) != 0) {
            var_f12_5 = 0x3DE38E37;
        }
        func_00366B28(var_s5, var_s2, 0, var_f12_5, (f32) M2C_FIELD(var_s1, u8 *, 0x15C) / 0x1.3ec0000000000p+11f);
        var_f12_6 = 0x3B808080;
        if (M2C_FIELD(var_s1, u8 *, 0x15F) != 0) {
            var_f12_6 = 0x3D638E37;
        }
        temp_v0 = sp0 + 0x6225F0;
        sp0 += 0x28;
        var_fp -= 1;
        var_s6 += 0x28;
        var_s0 += 0x28;
        var_s4 += 0x84;
        var_s7 += 0x28;
        var_s1 += 0x28;
        var_s3 += 0x84;
        func_00366BC8(var_s5, var_s2, 0, var_f12_6, (f32) M2C_FIELD(temp_v0, u8 *, -0x133) / 0x1.3ec0000000000p+11f, (f32) M2C_FIELD(var_s2, u8 *, 0x1E) / 0x1.3ec0000000000p+11f);
        temp_a1 = var_s2;
        var_s2 += 0x28;
        func_00366CD8(var_s5, temp_a1);
        var_s5 += 0x84;
    } while (var_fp >= 0);
    func_0034F6A0(0x6224B0);
    M2C_FIELD((void *)0x844050, f32 *, 0x10) = (f32) ((f32) M2C_FIELD((void *)0x622690, u8 *, 0x24) * 0x1.9999980000000p-4f);
    M2C_FIELD((void *)0x844050, f32 *, 0) = (f32) ((f32) M2C_FIELD((void *)0x622690, u8 *, 0x20) * 0x1.9999980000000p-4f);
    M2C_FIELD((void *)0x844050, f32 *, 0xC) = (f32) ((f32) M2C_FIELD((void *)0x622690, u8 *, 0x23) * 0x1.638e360000000p+1f);
    M2C_FIELD((void *)0x844050, f32 *, 4) = (f32) ((f32) M2C_FIELD((void *)0x622690, u8 *, 0x21) * 0x1.638e360000000p+1f);
    M2C_FIELD((void *)0x844050, f32 *, 8) = (f32) ((f32) M2C_FIELD((void *)0x622690, u8 *, 0x22) * 0x1.9999980000000p-4f);
}
