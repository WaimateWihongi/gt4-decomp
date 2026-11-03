/* NON_MATCHING: functional draft, 28 of 35 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_0045C898(void *arg0) {
    f32 temp_f2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f1;
    f32 var_f1_2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x388);
    if (M2C_FIELD(arg0, f32 *, 0x3B4) < 0x0.0p+0f) {
        var_f0 = M2C_FIELD(arg0, f32 *, 0x3A4);
        var_f1 = M2C_FIELD(arg0, f32 *, 0x390);
    } else {
        var_f0 = M2C_FIELD(arg0, f32 *, 0x390);
        var_f1 = M2C_FIELD(arg0, f32 *, 0x3A4);
    }
    M2C_FIELD(arg0, f32 *, 0x3D4) = (f32) (var_f0 - temp_f2);
    M2C_FIELD(arg0, f32 *, 0x3DC) = (f32) (var_f1 + temp_f2);
    if (!(M2C_FIELD(arg0, f32 *, 0x3B8) < 0x0.0p+0f)) {
        var_f0_2 = M2C_FIELD(arg0, f32 *, 0x394);
        var_f1_2 = M2C_FIELD(arg0, f32 *, 0x3A8);
    } else {
        var_f0_2 = M2C_FIELD(arg0, f32 *, 0x3A8);
        var_f1_2 = M2C_FIELD(arg0, f32 *, 0x394);
    }
    M2C_FIELD(arg0, f32 *, 0x3D8) = (f32) (var_f0_2 - temp_f2);
    M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) (var_f1_2 + temp_f2);
    M2C_FIELD(arg0, f32 *, 0x3E4) = (f32) (M2C_FIELD(arg0, f32 *, 0x3DC) - M2C_FIELD(arg0, f32 *, 0x3D4));
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3E0) - M2C_FIELD(arg0, f32 *, 0x3D8));
}
