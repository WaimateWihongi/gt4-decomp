/* compiler: ee-gcc2.96-no-strict-aliasing */
/* NON_MATCHING: functional draft, 34 of 78 instructions differ from the original.
   Source: hand. Equivalence with the original is NOT verified. */
struct Ent { signed char type; char pad1[3]; short start; short end; };
struct Group {
    int x; char pad4[4]; unsigned short *src; char *out;
    char pad10[0x214 - 0x10]; volatile int count; Ent ents[1];
};
struct S2 { char pad0[0x858]; int active; int cursor; };
extern "C" char *func_004B9820(char *, const unsigned short *);
extern "C" void *func_005A4724(void *, const void *, unsigned);
extern "C" unsigned short *func_005C15B0(int);
extern "C" void func_005C1628(void *) throw();
static inline int count(Group *g) { return g->count; }
extern "C" int func_004B86B8(S2 *s, char **out) {
    Group *g = (Group *)((char *)s + s->active * 0x41C + 0x20);
    int i = s->cursor;
    int n = count(g);
    if (i < n) {
        do {
            Ent *e = (Ent *)((int)g + (i << 3) + 0x218);
            s->cursor = ++i;
            if (g->x != 2 || e->type != 1) {
                unsigned short *buf = func_005C15B0((e->end - e->start + 1) << 1);
                func_005A4724(buf, (void *)(e->start * 2 + (int)g->src), (e->end - e->start) * 2);
                buf[e->end - e->start] = 0;
                func_004B9820(g->out, buf);
                *out = g->out;
                func_005C1628(buf);
                return e->type;
            }
            n = count(g);
        } while (i < n);
    }
    return 0;
}
