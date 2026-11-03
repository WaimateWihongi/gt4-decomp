/* NON_MATCHING: functional draft, 8 of 46 instructions differ from the original.
   Source: hand. Equivalence with the original is NOT verified. */
#include "types.h"
extern int D_0064A308;
extern int D_0064A30C;
extern char D_0064A310[];
extern char D_008A04D8[];
extern char D_008A02B0[];
extern char D_008A0398[];
extern "C" int func_0050B460(int arg0, int arg1, int arg2, int arg3);
extern "C" s32 func_0050E6E8(char *arg0, s32 arg1, s32 arg2) {
    char *self = arg0;
    self[0x14] = 0;
    s32 r = -0xF;
    if (D_0064A308 != 1)
        return r;
    r = -0x10;
    if (D_0064A30C == 0)
        return r;
    char *g = D_008A0398;
    *(s16 *)D_0064A310 = 0;
    *(s32 *)D_008A04D8 = arg1;
    s32 v2c = *(s32 *)(self + 0x2C);
    s32 v28 = *(s32 *)(self + 0x28);
    *(s32 *)(g + 0x10) = v2c;
    *(s32 *)(g + 0x14) = v28;
    *(s32 *)D_008A02B0 = arg2;
    *(s32 *)(g + 0x0) = *(s32 *)(self + 0x18);
    *(s32 *)(g + 0x4) = *(s32 *)(self + 0x1C);
    *(s32 *)(g + 0x8) = *(s32 *)(self + 0x20);
    *(s32 *)(g + 0xC) = *(s32 *)(self + 0x24);
    s32 c = func_0050B460(4, 0x12, 0x30, (int)self);
    s32 x = -5;
    if (c == 0)
        x = 0;
    return x;
}
