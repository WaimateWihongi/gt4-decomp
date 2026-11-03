/* NON_MATCHING: functional draft, 38 of 44 instructions differ from the original.
   Source: hand. Equivalence with the original is NOT verified. */
static inline float minf(float a, float b) { float r; __asm__("min.s %0, %1, %2" : "=f"(r) : "f"(a), "f"(b)); return r; }
static inline float maxf(float a, float b) { float r; __asm__("max.s %0, %1, %2" : "=f"(r) : "f"(a), "f"(b)); return r; }
static inline int clampi(float x) { return (int)maxf(minf(x, 255.0f), 0.0f); }
extern "C" unsigned int func_003AFE18(unsigned int color, float rgb, float alpha) {
    int r = clampi((float)(int)(color & 0xFF) * rgb);
    int g = clampi((float)(int)((color >> 8) & 0xFF) * rgb);
    int b = clampi((float)(int)((color >> 16) & 0xFF) * rgb);
    int a = clampi((float)(int)(color >> 24) * alpha);
    return (a << 24) | (b << 16) | (g << 8) | r;
}
