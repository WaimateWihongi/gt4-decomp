/* NON_MATCHING: functional draft, 72 of 76 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_005ADF20(M2C_UNK, s32);                /* extern */

void func_004A1AB0(s32 arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;

    temp_a1 = M2C_FIELD((void *)0x70002000, s32 *, 0x200);
    if (temp_a1 != arg0) {
        var_v0 = 0x20000000;
        switch (arg0) {                             /* irregular */
        case 0:
            M2C_FIELD((void *)0x70002000, s32 *, 0x204) = 0;
block_9:
            if (M2C_FIELD((void *)0x70002000, u8 *, 0x2C2) != 0) {
                temp_a0 = M2C_FIELD((void *)0x70002000, s32 *, 0x1F8);
                var_v0_2 = 0;
                if (temp_a0 != 0) {
                    var_v0_2 = (temp_a0 & 0x0FFFFFFF) | M2C_FIELD((void *)0x70002000, s32 *, 0x204);
                }
                M2C_FIELD((void *)0x70002000, s32 *, 0x1F8) = var_v0_2;
                temp_a0_2 = M2C_FIELD((void *)0x70002000, s32 *, 0x1FC);
                var_v0_3 = 0;
                if (temp_a0_2 != 0) {
                    var_v0_3 = (temp_a0_2 & 0x0FFFFFFF) | M2C_FIELD((void *)0x70002000, s32 *, 0x204);
                }
                M2C_FIELD((void *)0x70002000, s32 *, 0x1FC) = var_v0_3;
                temp_a0_3 = M2C_FIELD((void *)0x70002000, s32 *, 0x208);
                var_v0_4 = 0;
                if (temp_a0_3 != 0) {
                    var_v0_4 = (temp_a0_3 & 0x0FFFFFFF) | M2C_FIELD((void *)0x70002000, s32 *, 0x204);
                }
                M2C_FIELD((void *)0x70002000, s32 *, 0x208) = var_v0_4;
                if (temp_a1 == 0) {
                    M2C_SYNC();
                    func_005ADF20(0, temp_a1);
                }
                M2C_FIELD((void *)0x70002000, s32 *, 0x200) = arg0;
            }
            break;
        default:
            var_v0 = 0x30000000;
            if (arg0 != 2) {
                return;
            }
        case 1:
            M2C_FIELD((void *)0x70002000, s32 *, 0x204) = var_v0;
            goto block_9;
        }
    }
}
