/* NON_MATCHING: functional draft, 125 of 141 instructions differ from the original.
   Source: m2c (tools/cpu_solve.py). Equivalence with the original is NOT verified. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_003A4600(void *);                      /* extern */
M2C_UNK func_003A7538(void *);                      /* extern */
M2C_UNK func_003AB198(void *);                      /* extern */

void func_0039A908(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0x67E278;
    func_003AE850();
    func_003A9758(arg0 + 0xBC);
    func_00574D78(arg0 + 0xD8);
    func_003A84F0(arg0 + 0x108);
    func_003A7538(arg0 + 0xD58);
    func_003A5CC8(arg0 + 0x10E4);
    func_003BEC40(arg0 + 0x1108);
    func_003A3900(arg0 + 0x1170);
    func_003A49A0(arg0 + 0x11B0);
    func_003AB198(arg0 + 0x1300);
    func_003A3AE0(arg0 + 0x1398);
    func_003A4600(arg0 + 0x13F0);
    func_003A4360(arg0 + 0x1438);
    func_003A4360(arg0 + 0x14A8);
    func_003A4360(arg0 + 0x1518);
    func_003A4360(arg0 + 0x1588);
    func_003A4360(arg0 + 0x15F8);
    func_003A5288(arg0 + 0x1668);
    func_003A5288(arg0 + 0x1684);
    func_003A5288(arg0 + 0x16A0);
    func_003A5288(arg0 + 0x16BC);
    func_003A6368(arg0 + 0x16D8);
    func_003A6368(arg0 + 0x1748);
    func_003DD7C8(arg0 + 0x17B8);
    func_003A4E68(arg0 + 0x17BC);
    func_003A49A0(arg0 + 0x228C);
    func_003A49A0(arg0 + 0x23DC);
    func_003A49A0(arg0 + 0x252C);
    func_003A49A0(arg0 + 0x267C);
    func_003A49A0(arg0 + 0x27CC);
    func_003A49A0(arg0 + 0x291C);
    func_003A49A0(arg0 + 0x2A6C);
    func_003AE5A8(arg0 + 0x2BBC);
    func_003A65C0(arg0 + 0x2D14);
    func_003A5998(arg0 + 0x2D78);
    func_003ADDA8(arg0 + 0x2DA0);
    func_003A9D80(arg0 + 0x39FC);
    func_003AC3E8(arg0 + 0x3C50);
    func_003AC818(arg0 + 0x3E30);
    func_003ACE18(arg0 + 0x3E60);
    func_003AD4D8(arg0 + 0x3E98);
    func_003AE2D8(arg0 + 0x3EEC);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, u8 *, 0x30) = 0U;
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) & ~0xFF & 0xFFFF00FF & 0xFF00FFFF);
    M2C_FIELD(arg0, s32 *, 0x24) = -1;
    M2C_FIELD(arg0, s32 *, 0x28) = -0xA;
    M2C_FIELD(arg0, u8 *, 0x30) = (s32) M2C_FIELD(arg0, u8 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x38) = 0x01000000;
    M2C_FIELD(arg0, s32 *, 0x3C) = 1;
    M2C_FIELD(arg0, u8 *, 0x40) = (s32) M2C_FIELD(arg0, u8 *, 0x40);
    M2C_FIELD(arg0, s8 *, 0x48) = 1;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C) = 0;
    M2C_FIELD(arg0, s8 *, 0x2D) = 0;
    M2C_FIELD(arg0, s8 *, 0x2E) = 0;
    M2C_FIELD(arg0, s8 *, 0x2F) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s8 *, 0x47) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    if (*(s32 *)0x621510 == 0) {
        func_0039B2B8();
    }
    *(s32 *)0x621510 += 1;
}
