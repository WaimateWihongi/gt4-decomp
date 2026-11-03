/* compiler: ee-gcc2.96-no-strict-aliasing */
/* NON_MATCHING: functional draft, 6 of 56 instructions differ from the original.
   Source: hand. Equivalence with the original is NOT verified. */
#define F(o) (*(float *)((char *)self + (o)))
#define I(o) (*(int *)((char *)self + (o)))
extern void *func_005A48D8(void *, int, unsigned);
extern int func_004A5DA0(float);
void func_004A0080(void *self)
{
    float zero; int v;
    func_005A48D8((char *)self + 0x3E0, 0, 0x680);
    I(0x4A8) = 0;
    zero = F(0x4A8);
    F(0x478) = -1.0f;
    F(0x49C) = 180.0f;
    F(0x3FC) = 1.0f; F(0x400) = 1.0f; F(0x404) = 1.0f; F(0x408) = 1.0f; F(0x40C) = 1.0f;
    F(0x420) = 1.0f; F(0x424) = 1.0f; F(0x428) = 1.0f; F(0x42C) = 1.0f; F(0x448) = 1.0f;
    F(0x4A4) = 1.0f; F(0x4AC) = 1.0f;
    v = func_004A5DA0(zero);
    F(0xAE0) = 0.2f;
    F(0xAEC) = 1.0f;
    F(0xAE4) = 0.2f;
    I(0x3EC) = v;
    F(0xAE8) = 0.2f;
    F(0xABC) = 1.0f;
    *(short *)((char *)self + 0x48) = 7;
    F(0xAB0) = zero;
    F(0xAB4) = zero;
    F(0xAB8) = zero;
    *((signed char *)self + 2) = 2;
}
