/* NON_MATCHING: functional draft, 8 of 13 instructions differ from the original.
   Source: hand. Equivalence with the original is NOT verified. */
unsigned long *func_004AB318(unsigned long *out, unsigned long mask, unsigned char *tags, unsigned long *src)
{
    do {
        if (mask << 63) {
            out[0] = *src;
            out[1] = *tags;
            out += 2;
        }
        src++;
        tags++;
        mask >>= 1;
    } while (mask);
    return out;
}
