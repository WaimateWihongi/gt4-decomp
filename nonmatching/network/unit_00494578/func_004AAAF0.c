/* NON_MATCHING: functional draft, 155 of 157 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_004AAAF0(void *arg0) {
    s32 temp_a2_2;
    s32 temp_v0_2;
    s32 var_t1;
    s32 var_v0;
    s32 var_v0_2;
    s8 temp_a0;
    s8 temp_a0_3;
    s8 temp_a1;
    s8 temp_t0;
    s8 temp_v1;
    s8 temp_v1_2;
    s8 var_a4;
    s8 var_a7;
    u8 temp_t2;
    void *temp_a0_2;
    void *temp_a2;
    void *temp_a5;
    void *temp_a5_2;
    void *temp_a6;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v0_4;

    var_a7 = M2C_FIELD(arg0, s8 *, 0xEBC);
    temp_v0 = arg0 + ((var_a7 * 0x14) + 0xC30);
    temp_a0 = M2C_FIELD(temp_v0, s8 *, 0xA);
    temp_v1 = M2C_FIELD(temp_v0, s8 *, 0xB);
    if (temp_a0 >= 0) {
        M2C_FIELD(((temp_a0 * 0x14) + arg0), s8 *, 0xC3B) = temp_v1;
    } else {
        M2C_FIELD(arg0, s8 *, 0xEBC) = temp_v1;
    }
    if (temp_v1 >= 0) {
        M2C_FIELD(((temp_v1 * 0x14) + arg0), s8 *, 0xC3A) = temp_a0;
    } else {
        M2C_FIELD(arg0, s8 *, 0xEBD) = temp_a0;
    }
    temp_a5 = arg0 + ((var_a7 * 0x14) + 0xC30);
    M2C_FIELD(temp_a5, s8 *, 8) = 0;
    var_t1 = var_a7 * 4;
    var_a4 = M2C_FIELD(temp_a5, s8 *, 0xC);
    temp_t0 = M2C_FIELD(temp_a5, s8 *, 0xD);
    if (var_a4 >= 0) {
        temp_a2 = arg0 + ((var_a4 * 0x14) + 0xC30);
        if (M2C_FIELD(temp_a2, u8 *, 8) == 1) {
            M2C_FIELD(temp_a2, s8 *, 0xD) = temp_t0;
            M2C_FIELD(temp_a2, u16 *, 0xE) = (u16) (M2C_FIELD(temp_a2, u16 *, 0xE) + M2C_FIELD(temp_a5, u16 *, 0xE));
            if (temp_t0 >= 0) {
                M2C_FIELD(((temp_t0 * 0x14) + arg0), s8 *, 0xC3C) = var_a4;
            }
            M2C_FIELD(temp_a5, u8 *, 0xB) = (u8) M2C_FIELD(arg0, u8 *, 0xEBF);
            M2C_FIELD(arg0, u8 *, 0xEBF) = (u8) var_a7;
            var_a7 = var_a4;
            var_t1 = var_a7 * 4;
            var_a4 = M2C_FIELD(temp_a2, s8 *, 0xC);
        }
    }
    if (temp_t0 >= 0) {
        temp_a2_2 = (temp_t0 * 0x14) + 0xC30;
        temp_a5_2 = arg0 + temp_a2_2;
        temp_t2 = M2C_FIELD(temp_a5_2, u8 *, 8);
        var_v0 = var_t1 + var_a7;
        if (temp_t2 == 1) {
            temp_a0_2 = arg0 + 0x10;
            temp_v0_2 = (var_v0 * 4) + 0xC30;
            temp_a6 = arg0 + temp_v0_2;
            M2C_FIELD(temp_a5_2, u16 *, 0xE) = (u16) (M2C_FIELD(temp_a5_2, u16 *, 0xE) + M2C_FIELD(temp_a6, u16 *, 0xE));
            *(s32 *)(temp_a0_2 + temp_a2_2) = *(s32 *)(temp_a0_2 + temp_v0_2);
            M2C_FIELD(temp_a5_2, s8 *, 0xC) = var_a4;
            if (var_a4 >= 0) {
                M2C_FIELD(((var_a4 * 0x14) + arg0), s8 *, 0xC3D) = temp_t0;
            }
            var_v0_2 = var_t1 + var_a7;
            if (M2C_FIELD(temp_a6, u8 *, 8) == temp_t2) {
                temp_a0_3 = M2C_FIELD(temp_a6, s8 *, 0xA);
                temp_v1_2 = M2C_FIELD(temp_a6, s8 *, 0xB);
                if (temp_a0_3 >= 0) {
                    M2C_FIELD(((temp_a0_3 * 0x14) + arg0), s8 *, 0xC3B) = temp_v1_2;
                } else {
                    M2C_FIELD(arg0, s8 *, 0xEB8) = temp_v1_2;
                }
                if (temp_v1_2 >= 0) {
                    M2C_FIELD(((temp_v1_2 * 0x14) + arg0), s8 *, 0xC3A) = temp_a0_3;
                } else {
                    M2C_FIELD(arg0, s8 *, 0xEB9) = temp_a0_3;
                }
                M2C_FIELD((((var_t1 + var_a7) * 4) + arg0), s8 *, 0xC38) = 0;
                var_v0_2 = var_t1 + var_a7;
            }
            M2C_FIELD(((var_v0_2 * 4) + arg0), u8 *, 0xC3B) = (u8) M2C_FIELD(arg0, u8 *, 0xEBF);
            M2C_FIELD(arg0, u8 *, 0xEBF) = (u8) var_a7;
            var_a7 = temp_t0;
            var_t1 = var_a7 * 4;
            goto block_25;
        }
    } else {
block_25:
        var_v0 = var_t1 + var_a7;
    }
    if (M2C_FIELD(((var_v0 * 4) + arg0), u8 *, 0xC38) == 0) {
        temp_a1 = M2C_FIELD(arg0, s8 *, 0xEB9);
        if (temp_a1 < 0) {
            M2C_FIELD(arg0, s8 *, 0xEB8) = var_a7;
        } else {
            M2C_FIELD(((temp_a1 * 0x14) + arg0), s8 *, 0xC3B) = var_a7;
        }
        temp_v0_3 = arg0 + (((var_t1 + var_a7) * 4) + 0xC30);
        M2C_FIELD(temp_v0_3, s8 *, 0xA) = temp_a1;
        M2C_FIELD(temp_v0_3, s8 *, 0xB) = -1;
        M2C_FIELD(arg0, s8 *, 0xEB9) = var_a7;
        M2C_FIELD(temp_v0_3, s8 *, 8) = 1;
    }
    temp_v0_4 = ((var_t1 + var_a7) * 4) + arg0;
    if ((s32) M2C_FIELD(arg0, u16 *, 0xEC0) < M2C_FIELD(temp_v0_4, s16 *, 0xC3E)) {
        M2C_FIELD(arg0, u16 *, 0xEC0) = (u16) M2C_FIELD(temp_v0_4, s16 *, 0xC3E);
    }
}
