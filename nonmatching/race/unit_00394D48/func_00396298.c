/* NON_MATCHING: functional draft, 236 of 248 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00397A40(s32);                         /* extern */
M2C_UNK func_00397C30(s32);                         /* extern */
M2C_UNK func_003BAD50(s32);                         /* extern */
M2C_UNK func_003BEB58(s32);                         /* extern */
M2C_UNK func_003C65E8(s32);                         /* extern */
M2C_UNK func_003DDD70(s32);                         /* extern */
M2C_UNK func_003E5818(s32);                         /* extern */
M2C_UNK func_00427698(s32);                         /* extern */
M2C_UNK func_00450310(s32);                         /* extern */
M2C_UNK func_00454410(s32);                         /* extern */
M2C_UNK func_00457E78(s32);                         /* extern */
M2C_UNK func_00458008(s32);                         /* extern */
M2C_UNK func_00498AE0(s32);                         /* extern */
M2C_UNK func_00498B28(s32);                         /* extern */

void func_00396298(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_12;
    s32 temp_a0_13;
    s32 temp_a0_14;
    s32 temp_a0_15;
    s32 temp_a0_16;
    s32 temp_a0_17;
    s32 temp_a0_18;
    s32 temp_a0_19;
    s32 temp_a0_20;
    s32 temp_a0_21;
    s32 temp_a0_22;
    s32 temp_a0_23;
    s32 temp_a0_24;
    s32 temp_a0_25;
    s32 temp_a0_26;
    s32 temp_a0_27;
    s32 temp_a0_28;
    s32 temp_a0_29;
    s32 temp_a0_2;
    s32 temp_a0_30;
    s32 temp_a0_31;
    s32 temp_a0_32;
    s32 temp_a0_33;
    s32 temp_a0_34;
    s32 temp_a0_35;
    s32 temp_a0_36;
    s32 temp_a0_37;
    s32 temp_a0_38;
    s32 temp_a0_39;
    s32 temp_a0_3;
    s32 temp_a0_40;
    s32 temp_a0_41;
    s32 temp_a0_42;
    s32 temp_a0_43;
    s32 temp_a0_44;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a0_9;
    s32 temp_s1;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(arg0, void **, 0) = arg0;
    temp_s1 = arg0 - temp_v1;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 4) + temp_s1;
        M2C_FIELD(arg0, s32 *, 4) = temp_a0;
        func_00454410(temp_a0);
    }
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        temp_a0_2 = M2C_FIELD(arg0, s32 *, 8) + temp_s1;
        M2C_FIELD(arg0, s32 *, 8) = temp_a0_2;
        func_00458008(temp_a0_2);
    }
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        temp_a0_3 = M2C_FIELD(arg0, s32 *, 0xC) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0xC) = temp_a0_3;
        func_00458008(temp_a0_3);
    }
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        temp_a0_4 = M2C_FIELD(arg0, s32 *, 0x10) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x10) = temp_a0_4;
        func_00458008(temp_a0_4);
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        temp_a0_5 = M2C_FIELD(arg0, s32 *, 0x1C) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_a0_5;
        func_00458008(temp_a0_5);
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
        temp_a0_6 = M2C_FIELD(arg0, s32 *, 0x14) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x14) = temp_a0_6;
        func_00454410(temp_a0_6);
    }
    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        temp_a0_7 = M2C_FIELD(arg0, s32 *, 0x18) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x18) = temp_a0_7;
        func_00458008(temp_a0_7);
    }
    if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        temp_a0_8 = M2C_FIELD(arg0, s32 *, 0x20) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x20) = temp_a0_8;
        func_00458008(temp_a0_8);
    }
    if (M2C_FIELD(arg0, s32 *, 0x24) != 0) {
        temp_a0_9 = M2C_FIELD(arg0, s32 *, 0x24) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x24) = temp_a0_9;
        func_00454410(temp_a0_9);
    }
    if (M2C_FIELD(arg0, s32 *, 0x28) != 0) {
        temp_a0_10 = M2C_FIELD(arg0, s32 *, 0x28) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x28) = temp_a0_10;
        func_00458008(temp_a0_10);
    }
    if (M2C_FIELD(arg0, s32 *, 0x34) != 0) {
        temp_a0_11 = M2C_FIELD(arg0, s32 *, 0x34) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x34) = temp_a0_11;
        func_00454410(temp_a0_11);
    }
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        temp_a0_12 = M2C_FIELD(arg0, s32 *, 0x38) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x38) = temp_a0_12;
        func_00458008(temp_a0_12);
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) != 0) {
        temp_a0_13 = M2C_FIELD(arg0, s32 *, 0x44) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x44) = temp_a0_13;
        func_00454410(temp_a0_13);
    }
    if (M2C_FIELD(arg0, s32 *, 0x48) != 0) {
        temp_a0_14 = M2C_FIELD(arg0, s32 *, 0x48) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x48) = temp_a0_14;
        func_00458008(temp_a0_14);
    }
    if (M2C_FIELD(arg0, s32 *, 0x4C) != 0) {
        temp_a0_15 = M2C_FIELD(arg0, s32 *, 0x4C) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x4C) = temp_a0_15;
        func_00458008(temp_a0_15);
    }
    if (M2C_FIELD(arg0, s32 *, 0x50) != 0) {
        temp_a0_16 = M2C_FIELD(arg0, s32 *, 0x50) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x50) = temp_a0_16;
        func_00458008(temp_a0_16);
    }
    if (M2C_FIELD(arg0, s32 *, 0x54) != 0) {
        temp_a0_17 = M2C_FIELD(arg0, s32 *, 0x54) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x54) = temp_a0_17;
        func_00454410(temp_a0_17);
    }
    if (M2C_FIELD(arg0, s32 *, 0x58) != 0) {
        temp_a0_18 = M2C_FIELD(arg0, s32 *, 0x58) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x58) = temp_a0_18;
        func_00454410(temp_a0_18);
    }
    if (M2C_FIELD(arg0, s32 *, 0x5C) != 0) {
        temp_a0_19 = M2C_FIELD(arg0, s32 *, 0x5C) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x5C) = temp_a0_19;
        func_00454410(temp_a0_19);
    }
    if (M2C_FIELD(arg0, s32 *, 0x60) != 0) {
        temp_a0_20 = M2C_FIELD(arg0, s32 *, 0x60) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x60) = temp_a0_20;
        func_00454410(temp_a0_20);
    }
    if (M2C_FIELD(arg0, s32 *, 0xC8) != 0) {
        temp_a0_21 = M2C_FIELD(arg0, s32 *, 0xC8) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0xC8) = temp_a0_21;
        func_00454410(temp_a0_21);
    }
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x74) != 0) {
        temp_a0_22 = M2C_FIELD(arg0, s32 *, 0x74) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x74) = temp_a0_22;
        func_00397A40(temp_a0_22);
    }
    if (M2C_FIELD(arg0, s32 *, 0x78) != 0) {
        temp_a0_23 = M2C_FIELD(arg0, s32 *, 0x78) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x78) = temp_a0_23;
        func_00450310(temp_a0_23);
    }
    M2C_FIELD(arg0, s32 *, 0x7C) = (s32) (M2C_FIELD(arg0, s32 *, 0x7C) + temp_s1);
    temp_a0_24 = M2C_FIELD(arg0, s32 *, 0x80);
    if (temp_a0_24 != 0) {
        temp_a0_25 = temp_a0_24 + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x80) = temp_a0_25;
        func_00397C30(temp_a0_25);
    }
    if (M2C_FIELD(arg0, s32 *, 0x84) != 0) {
        temp_a0_26 = M2C_FIELD(arg0, s32 *, 0x84) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x84) = temp_a0_26;
        func_003BEB58(temp_a0_26);
    }
    if (M2C_FIELD(arg0, s32 *, 0x8C) != 0) {
        temp_a0_27 = M2C_FIELD(arg0, s32 *, 0x8C) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x8C) = temp_a0_27;
        func_00457E78(temp_a0_27);
    }
    if (M2C_FIELD(arg0, s32 *, 0xBC) != 0) {
        temp_a0_28 = M2C_FIELD(arg0, s32 *, 0xBC) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0xBC) = temp_a0_28;
        func_003BAD50(temp_a0_28);
    }
    if (M2C_FIELD(arg0, s32 *, 0x68) != 0) {
        temp_a0_29 = M2C_FIELD(arg0, s32 *, 0x68) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x68) = temp_a0_29;
        func_00498B28(temp_a0_29);
    }
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x64);
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = (s32) (temp_v0 + temp_s1);
    }
    if (M2C_FIELD(arg0, s32 *, 0x94) != 0) {
        temp_a0_30 = M2C_FIELD(arg0, s32 *, 0x94) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x94) = temp_a0_30;
        func_00498AE0(temp_a0_30);
    }
    if (M2C_FIELD(arg0, s32 *, 0x98) != 0) {
        temp_a0_31 = M2C_FIELD(arg0, s32 *, 0x98) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x98) = temp_a0_31;
        func_00498B28(temp_a0_31);
    }
    if (M2C_FIELD(arg0, s32 *, 0x9C) != 0) {
        temp_a0_32 = M2C_FIELD(arg0, s32 *, 0x9C) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0x9C) = temp_a0_32;
        func_00498B28(temp_a0_32);
    }
    if (M2C_FIELD(arg0, s32 *, 0xA0) != 0) {
        temp_a0_33 = M2C_FIELD(arg0, s32 *, 0xA0) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0xA0) = temp_a0_33;
        func_00498B28(temp_a0_33);
    }
    if (M2C_FIELD(arg0, s32 *, 0xA4) != 0) {
        temp_a0_34 = M2C_FIELD(arg0, s32 *, 0xA4) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0xA4) = temp_a0_34;
        func_003DDD70(temp_a0_34);
    }
    var_v0 = M2C_FIELD(arg0, s32 *, 0xA8);
    if (var_v0 != 0) {
        if (var_v0 != 0) {
            var_v0 += temp_s1;
            M2C_FIELD(arg0, s32 *, 0xA8) = var_v0;
        }
        func_00498B28(var_v0);
    }
    if (M2C_FIELD(arg0, s32 *, 0xAC) != 0) {
        temp_a0_35 = M2C_FIELD(arg0, s32 *, 0xAC) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0xAC) = temp_a0_35;
        func_00454410(temp_a0_35);
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) != 0) {
        temp_a0_36 = M2C_FIELD(arg0, s32 *, 0xB0) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0xB0) = temp_a0_36;
        func_003DDD70(temp_a0_36);
    }
    if (M2C_FIELD(arg0, s32 *, 0xB4) != 0) {
        temp_a0_37 = M2C_FIELD(arg0, s32 *, 0xB4) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0xB4) = temp_a0_37;
        func_003DDD70(temp_a0_37);
    }
    if (M2C_FIELD(arg0, s32 *, 0xB8) != 0) {
        temp_a0_38 = M2C_FIELD(arg0, s32 *, 0xB8) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0xB8) = temp_a0_38;
        func_003DDD70(temp_a0_38);
    }
    if (M2C_FIELD(arg0, s32 *, 0xC0) != 0) {
        temp_a0_39 = M2C_FIELD(arg0, s32 *, 0xC0) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0xC0) = temp_a0_39;
        func_003DDD70(temp_a0_39);
    }
    var_v0_2 = M2C_FIELD(arg0, s32 *, 0xC4);
    if (var_v0_2 != 0) {
        if (var_v0_2 != 0) {
            var_v0_2 += temp_s1;
            M2C_FIELD(arg0, s32 *, 0xC4) = var_v0_2;
        }
        func_00498B28(var_v0_2);
    }
    if (M2C_FIELD(arg0, s32 *, 0xCC) != 0) {
        temp_a0_40 = M2C_FIELD(arg0, s32 *, 0xCC) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0xCC) = temp_a0_40;
        func_003C65E8(temp_a0_40);
    }
    if (M2C_FIELD(arg0, s32 *, 0xD0) != 0) {
        temp_a0_41 = M2C_FIELD(arg0, s32 *, 0xD0) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0xD0) = temp_a0_41;
        func_00427698(temp_a0_41);
    }
    if (M2C_FIELD(arg0, s32 *, 0xD4) != 0) {
        temp_a0_42 = M2C_FIELD(arg0, s32 *, 0xD4) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0xD4) = temp_a0_42;
        func_00427698(temp_a0_42);
    }
    if (M2C_FIELD(arg0, s32 *, 0xD8) != 0) {
        temp_a0_43 = M2C_FIELD(arg0, s32 *, 0xD8) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0xD8) = temp_a0_43;
        func_00454410(temp_a0_43);
    }
    if (M2C_FIELD(arg0, s32 *, 0xDC) != 0) {
        temp_a0_44 = M2C_FIELD(arg0, s32 *, 0xDC) + temp_s1;
        M2C_FIELD(arg0, s32 *, 0xDC) = temp_a0_44;
        func_003E5818(temp_a0_44);
    }
    *(s32 *)0x6214DC = 0;
}
