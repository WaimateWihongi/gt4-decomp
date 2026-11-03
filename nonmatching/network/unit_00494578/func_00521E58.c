/* NON_MATCHING: functional draft, 2 of 38 instructions differ from the original.
   Source: hand. Equivalence with the original is NOT verified. */
extern int func_00538EE8(unsigned char *, unsigned char *);
int func_00521E58(int a0, unsigned char *buf, unsigned int lim, unsigned int *pos)
{
    unsigned char c = 0;
    int n;
    do {
        func_00538EE8(buf + *pos, &c);
        if (c == 0) goto tail;
        n = c;
        *pos += n + 1;
    } while (!(lim < *pos));
    return 0xC35A;
tail:
    *pos += 5;
    return lim < *pos ? 0xC35A : 0;
}
