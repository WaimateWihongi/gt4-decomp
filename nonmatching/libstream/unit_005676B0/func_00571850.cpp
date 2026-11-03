/* compiler: ee-gcc2.96-no-strict-aliasing */
/* NON_MATCHING: functional draft, 16 of 18 instructions differ from the original.
   Source: hand. Equivalence with the original is NOT verified. */
struct O { int x0; int x4; int x8; int xC; char pad[0x2C]; int x3C; };
static inline int reset(O *o, unsigned int n) {
    if (n < 0x40) return 2;
    o->xC = n - 0x40; o->x3C = 0; o->x8 = n - 0x40; o->x4 = 0; o->x0 = 0;
    return 0;
}
extern "C" int func_00571850(O *o, unsigned int n) {
    if (o == 0) return 2;
    if (n < 0x80) return 2;
    return reset(o, n);
}
