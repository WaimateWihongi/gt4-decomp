/* NON_MATCHING: functional draft, 2 of 87 instructions differ from the original.
   Source: hand. Equivalence with the original is NOT verified. */
struct Rot { int x0; float c; float s; };
struct V { float x, y; };
struct Quad { struct V v[4]; };
void func_0026F630(struct Rot *self, float *minx, float *miny, float *maxx, float *maxy)
{
    float c, s, x0, y0, x1, y1, cx, cy;
    struct Quad q;
    struct V *p;
    int i;
    if (self->x0 == 0) { c = self->c; s = -self->s; } else { c = 1.0f; s = 0.0f; }
    y0 = *miny; x0 = *minx; x1 = *maxx; y1 = *maxy;
    cx = (x0 + x1) * 0.5f;
    cy = (y0 + y1) * 0.5f;
    {
        struct Quad t = {{{cx, y0}, {x1, cy}, {cx, y1}, {x0, cy}}};
        q = t;
        *minx = 999999.0f;
        *miny = 999999.0f;
        *maxx = -999999.0f;
        *maxy = -999999.0f;
    }
    p = q.v;
    for (i = 3; i >= 0; i--) {
        float x = p->x * c - p->y * s;
        float y = p->x * s + p->y * c;
        p++;
        if (x < *minx) *minx = x;
        if (*maxx < x) *maxx = x;
        if (y < *miny) *miny = y;
        if (*maxy < y) *maxy = y;
    }
}
