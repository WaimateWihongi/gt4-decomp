/* NON_MATCHING: functional draft, 10 of 36 instructions differ from the original.
   Source: hand. Equivalence with the original is NOT verified. */
struct O { char pad[0xAC]; char *buf; int size; char padB4[0xC8 - 0xB4]; char busy; };
extern char *D_006D622C;
extern int D_006D6230;
extern int D_0064A308;
extern int D_0064A30C;
extern int D_008A0338;
extern void *D_008A0560;
extern "C" int func_0050B460(int, int, int, O *);
int func_0050E940(O *o, void *cb, int param) {
    o->busy = 0;
    int r = -0xF;
    if (D_0064A308 != 1) return r;
    r = -0x10;
    if (D_0064A30C == 0) return r;
    D_006D622C = o->buf;
    D_008A0560 = cb;
    D_008A0338 = param;
    D_006D6230 = o->size;
    int c = func_0050B460(1, 0xA7, 0xCC, o);
    int x = -5;
    if (c == 0) x = 0;
    return x;
}
