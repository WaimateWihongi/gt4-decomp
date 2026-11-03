/* NON_MATCHING: functional draft, 234 of 245 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0022F000();                 /* extern */
M2C_UNK func_0022F080(void *, s32);                 /* extern */
s32 func_0022F0F8(void *);                          /* extern */
M2C_UNK func_0022F178(void *, s32);                 /* extern */
M2C_UNK func_0022F3A8(void *, s32);                 /* extern */
s32 func_002319C0(void *);                          /* extern */
M2C_UNK func_002321F0(void *);                      /* extern */
s32 func_00233D28(s32);                             /* extern */
s32 func_00235C00(s32);                             /* extern */
M2C_UNK func_00250B98(void *, s32);                 /* extern */
M2C_UNK func_00250CE0(void *, M2C_UNK *);           /* extern */
M2C_UNK func_00251838(void *, M2C_UNK);             /* extern */
s32 func_0026B9A8();                                /* extern */
s32 func_0028B148();                                /* extern */
M2C_UNK func_002943E0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_002946B8(M2C_UNK *, void *, s32);      /* extern */
M2C_UNK func_00294F88(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_00295260(M2C_UNK *, void *, s32);      /* extern */
s32 func_005767A8(s32);                             /* extern */
M2C_UNK func_005767C0(s32);                         /* extern */
M2C_UNK func_005A47D4(s32 *, s32 *, M2C_UNK);       /* extern */
M2C_UNK func_005DAE00(void *, s32 *, s32 *);        /* extern */
M2C_UNK func_005DAF98(void *, void *);              /* extern */

void func_0022FBE0(void *arg0) {
    M2C_UNK sp10;
    s32 *temp_s0;
    s32 *temp_s0_2;
    s32 *temp_s1;
    s32 *temp_s1_2;
    s32 *temp_s5;
    s32 *temp_v1;
    s32 *temp_v1_2;
    s32 *var_s0;
    s32 *var_s0_2;
    s32 *var_v0;
    s32 *var_v0_2;
    s32 temp_s0_4;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s5_2;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_v0_3;
    void **var_s0_3;
    void *temp_a2;
    void *temp_s0_3;
    void *temp_s1_5;
    void *temp_s1_6;
    void *temp_s2;
    void *temp_s2_2;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s4;

    temp_s7 = arg0 + 0x48;
    if (func_005767A8(temp_s7) != 0) {
        temp_s2 = arg0 + 0x34;
        if (M2C_FIELD(arg0, s32 *, 0x44) != 0) {
            M2C_FIELD(arg0, s32 *, 0x44) = 0;
            var_s0 = M2C_FIELD(temp_s2, s32 **, 4);
            temp_s5 = M2C_FIELD(temp_s2, s32 **, 8);
            var_s4 = arg0 + 0x14;
            if (var_s0 != temp_s5) {
                do {
                    temp_v1 = M2C_FIELD(var_s4, s32 **, 8);
                    if (temp_v1 != M2C_FIELD(var_s4, s32 *, 0xC)) {
                        var_v0 = temp_v1 + 4;
                        if (temp_v1 != NULL) {
                            *temp_v1 = *var_s0;
                            var_v0 = M2C_FIELD(var_s4, s32 **, 8) + 4;
                        }
                        M2C_FIELD(var_s4, s32 **, 8) = var_v0;
                    } else {
                        func_005DAE00(var_s4, temp_v1, var_s0);
                    }
                    var_s0 += 4;
                } while (var_s0 != temp_s5);
            }
            temp_s1 = M2C_FIELD(temp_s2, s32 **, 4);
            temp_s0 = M2C_FIELD(temp_s2, s32 **, 8);
            func_005A47D4(temp_s1, temp_s0, 0);
            M2C_FIELD(temp_s2, s32 **, 8) = (s32 *) (M2C_FIELD(temp_s2, s32 **, 8) - (temp_s0 - temp_s1));
        } else {
            var_s4 = arg0 + 0x14;
        }
        temp_s2_2 = arg0 + 0x24;
        temp_s1_2 = M2C_FIELD(temp_s2_2, s32 **, 4);
        temp_s0_2 = M2C_FIELD(temp_s2_2, s32 **, 8);
        temp_s6 = func_002319C0(arg0);
        func_005A47D4(temp_s1_2, temp_s0_2, 0);
        M2C_FIELD(temp_s2_2, s32 **, 8) = (s32 *) (M2C_FIELD(temp_s2_2, s32 **, 8) - (temp_s0_2 - temp_s1_2));
        var_s0_2 = M2C_FIELD(var_s4, s32 **, 4);
        temp_s5_2 = M2C_FIELD(var_s4, s32 *, 8);
        if (var_s0_2 != temp_s5_2) {
            do {
                if (func_00233D28(*var_s0_2) == 0) {
                    temp_v1_2 = M2C_FIELD(temp_s2_2, s32 **, 8);
                    if (temp_v1_2 != M2C_FIELD(temp_s2_2, s32 *, 0xC)) {
                        var_v0_2 = temp_v1_2 + 4;
                        if (temp_v1_2 != NULL) {
                            *temp_v1_2 = *var_s0_2;
                            var_v0_2 = M2C_FIELD(temp_s2_2, s32 **, 8) + 4;
                        }
                        M2C_FIELD(temp_s2_2, s32 **, 8) = var_v0_2;
                    } else {
                        func_005DAE00(temp_s2_2, temp_v1_2, var_s0_2);
                    }
                }
                var_s0_2 += 4;
            } while (var_s0_2 != temp_s5_2);
        }
        if (var_s4 != temp_s2_2) {
            func_005DAF98(var_s4, temp_s2_2);
        }
        if (func_002319C0(arg0) != temp_s6) {
            temp_s0_3 = M2C_FIELD(arg0, void **, 0x10);
            func_00250B98(temp_s0_3, func_0028B148());
            func_00250B98(temp_s0_3, func_0026B9A8());
            M2C_FIELD(temp_s0_3, s32 *, 0xE0) = 0;
            temp_s1_3 = M2C_FIELD(arg0, s32 *, 0x6E8);
            if (temp_s1_3 & 1) {
                func_00251838(temp_s0_3, 0);
            }
            if (temp_s1_3 & 2) {
                func_00251838(temp_s0_3, 1);
            }
        }
        func_005767C0(temp_s7);
    }
    temp_v0 = arg0 + 0x24;
    if (M2C_FIELD(arg0, s32 *, 0x6E0) == 0) {
        temp_s1_4 = M2C_FIELD(temp_v0, s32 *, 8);
        var_s0_3 = M2C_FIELD(temp_v0, void ***, 4);
        if (var_s0_3 != temp_s1_4) {
            do {
                temp_a2 = *var_s0_3;
                var_s0_3 += 4;
                temp_v0_2 = M2C_FIELD(temp_a2, void **, 4);
                M2C_FIELD((temp_v0_2 + 0x2E0), M2C_UNK (**)(void *, void *, void *), 4)(temp_a2 + M2C_FIELD(temp_v0_2, s16 *, 0x2E0), arg0, temp_a2);
            } while (var_s0_3 != temp_s1_4);
        }
    }
    func_002321F0(arg0);
    temp_v0_3 = func_002319C0(arg0);
    if (temp_v0_3 != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x6DC) != 0) {
            temp_s0_4 = func_0022F000(arg0, 0);
            if (temp_s0_4 != func_00235C00(temp_v0_3)) {
                if (func_0022F000(arg0) != 0) {
                    temp_s1_5 = M2C_FIELD(arg0, void **, 0x10);
                    func_00295260(&sp10, arg0, func_0022F000(arg0));
                    func_00250CE0(temp_s1_5, &sp10);
                    func_00294F88(&sp10, 2);
                }
                func_0022F080(arg0, func_00235C00(temp_v0_3));
                if (func_0022F000(arg0) != 0) {
                    temp_s1_6 = M2C_FIELD(arg0, void **, 0x10);
                    func_002946B8(&sp10, arg0, func_0022F000(arg0));
                    func_00250CE0(temp_s1_6, &sp10);
                    func_002943E0(&sp10, 2);
                    func_0022F178(arg0, func_0022F000(arg0));
                } else {
                    func_0022F178(arg0, 0);
                }
            }
        }
    } else {
        func_0022F080(arg0, 0);
        func_0022F178(arg0, 0);
    }
    if ((M2C_FIELD(arg0, s32 *, 0x1D48) == 0) || (M2C_FIELD(arg0, s32 *, 0x1D40) != 0)) {
        func_0022F3A8(arg0, func_0022F0F8(arg0));
    }
}
