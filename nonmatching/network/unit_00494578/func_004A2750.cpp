/* NON_MATCHING: functional draft, 16 of 30 instructions differ from the original.
   Source: hand. Equivalence with the original is NOT verified. */
#include "spr.h"
typedef unsigned long u64;
static inline float minf(float a, float b) { float r; __asm__("min.s %0, %1, %2" : "=f"(r) : "f"(a), "f"(b)); return r; }
static inline float maxf(float a, float b) { float r; __asm__("max.s %0, %1, %2" : "=f"(r) : "f"(a), "f"(b)); return r; }
struct Scratch { char pad0[0x1a0]; u64 test; char pad1[0x30]; u64 flags; };
extern "C" void func_004A2750(int atst, float aref)
{
    atst &= 7;
    Scratch *s = (Scratch *)spr_base();
    aref = minf(maxf(aref * 128.0f, 0.0f), 255.0f);
    int ref = (int)aref;
    u64 test = s->test;
    u64 flags = s->flags;
    test = (test & ~0xEUL) | ((u64)atst << 1);
    flags |= 0x400040UL;
    test = (test & ~0xFF0UL) | ((u64)(ref & 0xFF) << 4);
    s->flags = flags;
    s->test = test;
}
