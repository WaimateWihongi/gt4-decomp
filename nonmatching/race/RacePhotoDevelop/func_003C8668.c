/* NON_MATCHING: functional draft, 53 of 72 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void *func_005C0FC8(s32, M2C_UNK, M2C_UNK, void *); /* extern */

void func_003C8668(void *arg0) {
    s32 temp_a0;
    s32 var_s4;
    void *temp_s3;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *var_s0;
    void *var_s1;

    var_s4 = 0;
    if (*M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), s32 **, 0x60) > 0) {
        var_s1 = arg0;
        do {
            var_s0 = NULL;
            temp_s3 = *(void * *)((var_s4 * 4) + M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), void **, 0x60), s32 *, 8));
            temp_v1 = M2C_FIELD(temp_s3, void **, 0x2880);
            if (temp_v1 != NULL) {
                temp_v0 = M2C_FIELD(temp_v1, void **, 8);
                var_s0 = func_005C0FC8(M2C_FIELD(temp_v0, s32 *, 4), 0x5F6F98, 0, temp_v1 + M2C_FIELD(temp_v0, s16 *, 0));
            }
            temp_v1_2 = M2C_FIELD(var_s0, void **, 8);
            temp_a0 = var_s4 * 0x2E4;
            var_s4 += 1;
            M2C_FIELD(var_s0, void **, 0) = (void *) (temp_a0 + arg0 + 0x23454);
            M2C_FIELD((temp_v1_2 + 0x80), M2C_UNK (**)(void *), 4)(var_s0 + M2C_FIELD(temp_v1_2, s16 *, 0x80));
            M2C_FIELD(var_s0, void **, 0x1664) = (void *) (var_s1 + 0x29A70);
            M2C_FIELD(var_s0, void **, 0x1660) = (void *) (var_s1 + 0x245B0);
            M2C_FIELD(temp_s3, s32 *, 0x2898) = (s32) (M2C_FIELD(arg0, s32 *, 0x2EF30) ^ 1);
            var_s1 += 0xE20;
        } while (var_s4 < *M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), s32 **, 0x60));
    }
}
