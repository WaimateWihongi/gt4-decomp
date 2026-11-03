/* types.h for the host (PC) build: found before include/types.h because the port build puts
 * port/include first on the include path. The PS2 build never reads this folder.
 * Same names as include/types.h; the 128-bit EE types, which a 32-bit x86 gcc cannot declare with
 * mode(TI), become a 16-byte aligned pair of 64-bit halves (same size and alignment as on the EE;
 * code doing arithmetic on them will not compile, which marks it for porting). */
#ifndef TYPES_H
#define TYPES_H

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
typedef struct { u64 lo, hi; } __attribute__((aligned(16))) u128;
typedef u128 s128;

#endif
