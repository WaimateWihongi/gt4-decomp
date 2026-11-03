/* compiler: ee-gcc2.96-no-strict-aliasing */
/* NON_MATCHING: functional draft, 15 of 16 instructions differ from the original.
   Source: hand. Equivalence with the original is NOT verified. */
struct Bits { int pad; unsigned char count; unsigned char bits[1]; };
bool func_0055EFC8(Bits *b, int i)
{
    if (i < 0) return false;
    if (i >= b->count) return false;
    if ((b->bits[i >> 3] & (1 << (i & 7))) > 0) return true;
    else return false;
}
