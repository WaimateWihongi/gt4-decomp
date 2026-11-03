/* NON_MATCHING: functional draft, 77 of 95 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

u32 func_00541D78();             /* extern */
u32 func_00541DD8(void *, void *);                  /* extern */
M2C_UNK func_00542310(void *, void *, u32);         /* extern */

u32 func_00542160(void *arg0) {
    struct StackFrame_00542160 { void * sp0; s8 pad0[0xC]; } sp_;
    u32 temp_a2;
    u32 temp_v1;
    u32 var_a0;
    u32 var_s0;
    u32 var_v0;
    void *temp_a1;
    void *var_s2;

    var_s2 = NULL;
    sp_.sp0 = NULL;
loop_2:
    var_v0 = func_00541DD8(arg0, ((s8 *)&sp_));
    if (var_v0 == 0) {
        if (sp_.sp0 == NULL) {
            temp_a1 = M2C_FIELD(arg0, void **, 0x8008);
            var_v0 = 0;
            if (temp_a1 != NULL) {
                var_v0 = func_00541D78(arg0, temp_a1);
                if (var_v0 == 0) {
loop_7:
                    var_v0 = func_00541DD8(arg0, ((s8 *)&sp_));
                    temp_a2 = var_v0;
                    if (temp_a2 == 0) {
                        if (sp_.sp0 != NULL) {
                            var_a0 = 0;
                            var_s0 = 0;
                            if (temp_a2 < (u32) M2C_FIELD(sp_.sp0, u32 *, 0x110)) {
                                if (var_s2 != *M2C_FIELD(sp_.sp0, s32 **, 0x10C)) {
loop_15:
                                    var_a0 += 1;
                                    if (var_a0 < M2C_FIELD(sp_.sp0, u32 *, 0x110)) {
                                        if (var_s2 != *((var_a0 * 4) + M2C_FIELD(sp_.sp0, s32 **, 0x10C))) {
                                            goto loop_15;
                                        }
                                        var_s0 = var_a0 + 1;
                                    }
                                } else {
                                    var_s0 = 1;
                                }
                            }
                            temp_v1 = M2C_FIELD(sp_.sp0, u32 *, 0x110);
                            if (var_s0 < temp_v1) {
                                var_v0 = func_00541D78(arg0, sp_.sp0, temp_a2);
                                if (var_v0 == 0) {
                                    var_v0 = func_00541D78(arg0, *((var_s0 * 4) + M2C_FIELD(sp_.sp0, s32 **, 0x10C)));
                                    if (var_v0 != 0) {

                                    } else {
                                        goto block_27;
                                    }
                                }
                            } else {
                                var_v0 = 0;
                                if (var_s0 == temp_v1) {
                                    func_00542310(arg0, sp_.sp0, temp_a2);
                                    var_s2 = sp_.sp0;
block_27:
                                    if (sp_.sp0 == NULL) {
                                        goto block_28;
                                    }
                                    goto loop_7;
                                }
                            }
                        } else {
block_28:
                            var_v0 = 0;
                        }
                    }
                }
            }
        } else {
            goto loop_2;
        }
    }
    return var_v0;
}
