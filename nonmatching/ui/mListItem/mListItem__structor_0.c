/* NON_MATCHING: functional draft, 203 of 210 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0025A7E0(void *, void *);              /* extern */
M2C_UNK func_0026A118(void *, M2C_UNK);             /* extern */
M2C_UNK func_002B3AF8(void *, s32);                 /* extern */
M2C_UNK func_002B4F40(void *, s32, s32);            /* extern */
M2C_UNK func_002B5E70(void *, M2C_UNK);             /* extern */
void *func_00326750(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_00328420(void *);                      /* extern */
M2C_UNK func_003285A8(void *);                      /* extern */
M2C_UNK func_003285F8(void *);                      /* extern */
M2C_UNK func_00328738(void *, void **, M2C_UNK);    /* extern */
M2C_UNK func_00576788(M2C_UNK);                     /* extern */
M2C_UNK func_005767C0(M2C_UNK);                     /* extern */
M2C_UNK func_005E7F28(void *, s32, s32, void *);    /* extern */

void func_002B4A00(void *arg0, u32 arg1) {
    s32 sp0;
    struct StackFrame_002B4A00 { s8 pad0[0x10]; void * sp10; void * sp14; void * sp18; s8 pad1[0x4]; } sp_;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_s1;
    s32 temp_s1_4;
    s32 temp_s3;
    s32 temp_s7;
    s32 temp_v0_2;
    s32 var_s2;
    s32 var_s3;
    u32 var_s2_2;
    void **temp_s1_2;
    void **temp_s1_3;
    void **temp_v1;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_fp;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s2;
    void *temp_s4;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v1_2;
    void *var_a0;
    void *var_s0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xE8);
    temp_fp = arg0 + (temp_a0 * 0x10) + 0xC8;
    temp_s7 = (s32) (M2C_FIELD(temp_fp, s32 *, 8) - M2C_FIELD(temp_fp, s32 *, 4)) >> 2;
    if (temp_s7 != arg1) {
        temp_s4 = arg0 + ((1 - temp_a0) * 0x10) + 0xC8;
        temp_v0 = func_00326750(0x20, 4, 0x69BDF8);
        func_00328420(temp_v0);
        M2C_FIELD(temp_v0, s16 *, 0x1C) = 0;
        M2C_FIELD(temp_v0, s32 *, 4) = 0x66E658;
        M2C_FIELD(temp_v0, f32 *, 0x18) = 0x0.0p+0f;
        M2C_FIELD(temp_v0, s16 *, 0x1C) = (s32) ((s32) M2C_FIELD(temp_v0, s16 *, 0x1C) & 0xFFFEFFFF & 0xFFFDFFFF & 0xFFFBFFFF);
        M2C_FIELD(temp_v0, s32 *, 8) = 0;
        M2C_FIELD(temp_v0, f32 *, 0xC) = 0x0.0p+0f;
        M2C_FIELD(temp_v0, f32 *, 0x10) = 0x0.0p+0f;
        M2C_FIELD(temp_v0, f32 *, 0x14) = 0x0.0p+0f;
        sp_.sp14 = temp_v0;
        func_00328738(((s8 *)&sp_), &sp_.sp14, 0x66E658);
        temp_s3 = M2C_FIELD(temp_s4, s32 *, 8);
        temp_a0_2 = M2C_FIELD(temp_s4, s32 *, 4);
        temp_v0_2 = (s32) (temp_s3 - temp_a0_2) >> 2;
        if (arg1 < (u32) temp_v0_2) {
            temp_s2 = temp_a0_2 + (arg1 * 4);
            sp_.sp10 = temp_s2;
            temp_s1 = M2C_FIELD(temp_s4, s32 *, 8);
            var_s0 = temp_s2;
            if (temp_s2 != temp_s1) {
                var_a0 = var_s0;
                do {
                    var_s0 += 4;
                    func_002B5E70(var_a0, 2);
                    var_a0 = var_s0;
                } while (var_s0 != temp_s1);
            }
            M2C_FIELD(temp_s4, s32 *, 8) = (s32) ((s32) M2C_FIELD(temp_s4, s32 *, 8) - (s32) (((s32) temp_s3 - (s32) (temp_s2))));
        } else {
            func_005E7F28(temp_s4, temp_s3, arg1 - temp_v0_2, ((s8 *)&sp_));
        }
        func_002B5E70(((s8 *)&sp_), 2);
        var_s3 = 0;
        if ((s32) arg1 > 0) {
            var_s2 = 0;
            do {
                if (var_s3 < temp_s7) {
                    temp_s1_2 = M2C_FIELD(temp_s4, s32 *, 4) + var_s2;
                    temp_v1 = M2C_FIELD(temp_fp, s32 *, 4) + var_s2;
                    if (temp_s1_2 != temp_v1) {
                        temp_s0 = *temp_v1;
                        if (temp_s0 != NULL) {
                            func_003285A8(temp_s0);
                        }
                        temp_a0_3 = *temp_s1_2;
                        if (temp_a0_3 == NULL) {
                            *temp_s1_2 = temp_s0;
                        } else {
                            func_003285F8(temp_a0_3);
                            *temp_s1_2 = temp_s0;
                        }
                    }
                } else {
                    temp_s1_3 = M2C_FIELD(temp_s4, s32 *, 4) + var_s2;
                    temp_v0_3 = func_00326750(0x20, 4, 0x69BDF8);
                    func_00328420(temp_v0_3);
                    M2C_FIELD(temp_v0_3, s16 *, 0x1C) = 0;
                    M2C_FIELD(temp_v0_3, s32 *, 4) = 0x66E658;
                    M2C_FIELD(temp_v0_3, s32 *, 8) = 0;
                    M2C_FIELD(temp_v0_3, f32 *, 0xC) = 0x0.0p+0f;
                    M2C_FIELD(temp_v0_3, s16 *, 0x1C) = (s32) ((s32) M2C_FIELD(temp_v0_3, s16 *, 0x1C) & 0xFFFEFFFF & 0xFFFDFFFF & 0xFFFBFFFF);
                    M2C_FIELD(temp_v0_3, f32 *, 0x10) = 0x0.0p+0f;
                    M2C_FIELD(temp_v0_3, f32 *, 0x14) = 0x0.0p+0f;
                    M2C_FIELD(temp_v0_3, f32 *, 0x18) = 0x0.0p+0f;
                    sp_.sp18 = temp_v0_3;
                    func_00328738(((s8 *)&sp_), &sp_.sp18, 0x66E658);
                    if (temp_s1_3 != ((s8 *)&sp_)) {
                        if (sp0 != NULL) {
                            func_003285A8(sp0);
                        }
                        temp_a0_4 = *temp_s1_3;
                        if (temp_a0_4 != NULL) {
                            func_003285F8(temp_a0_4);
                        }
                        *temp_s1_3 = sp0;
                    }
                    func_002B5E70(((s8 *)&sp_), 2);
                }
                var_s3 += 1;
                var_s2 += 4;
            } while (var_s3 < (s32) arg1);
        }
        var_s2_2 = arg1;
        func_00576788(0x8381C8);
        M2C_FIELD(arg0, s32 *, 0xE8) = (s32) (1 - M2C_FIELD(arg0, s32 *, 0xE8));
        func_002B3AF8(arg0, M2C_FIELD(arg0, s32 *, 0x124));
        M2C_FIELD(arg0, s32 *, 0x150) = 1;
        func_005767C0(0x8381C8);
        func_0025A7E0(((s8 *)&sp_), arg0);
        temp_s1_4 = M2C_FIELD(sp0, s32 *, 0x14);
        func_0026A118(((s8 *)&sp_), 2);
        temp_s0_2 = arg0 + ((1 - M2C_FIELD(arg0, s32 *, 0xE8)) * 0x10) + 0xC8;
        if ((s32) var_s2_2 < temp_s7) {
            do {
                temp_a0_5 = var_s2_2 * 4;
                var_s2_2 += 1;
                temp_v1_2 = *(void * *)(M2C_FIELD(temp_s0_2, s32 *, 4) + temp_a0_5);
                temp_a0_6 = M2C_FIELD(temp_v1_2, s32 *, 8);
                M2C_FIELD(temp_v1_2, s32 *, 8) = 0;
                if (temp_a0_6 != 0) {
                    func_002B4F40(arg0, temp_s1_4, temp_a0_6);
                }
            } while ((s32) var_s2_2 < temp_s7);
        }
    }
}
