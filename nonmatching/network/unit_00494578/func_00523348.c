/* NON_MATCHING: functional draft, 1 of 83 instructions differ from the original.
   Source: hand. Equivalence with the original is NOT verified. */
extern char D_00863EC0[];
extern char D_00863F00[];
extern int D_00863E40[];
extern int D_0064B450;
extern int func_0056F4D8(void *, void *, int *, int);
extern int func_0056F568(void *, void *, int, int, int *, int);
extern void func_0053A860(void *);
extern int func_0053A890(void *, unsigned int *);
extern void func_0053A998(int);
int func_00523348(void)
{
    char timer[0x10];
    int status;
    unsigned int elapsed = 0;
    int found = 0;
    int i, n, id;
    n = func_0056F4D8(D_00863EC0, D_00863F00, D_00863E40, 0x20);
    if (n > 0) {
        func_0053A860(timer);
again:
        for (i = 0; i < n; i++) {
            id = D_00863E40[i];
            if (func_0056F568(D_00863EC0, D_00863F00, id, 8, &status, 4)) return 0xC350;
            if ((status & 3) == 3) { found = 1; D_0064B450 = id; break; }
        }
        if (found) goto done;
        func_0053A890(timer, &elapsed);
        if (elapsed > 0x17318) return 0xC350;
        func_0053A998(2);
        goto again;
    }
    return 0xC350;
done:
    return 0;
}
