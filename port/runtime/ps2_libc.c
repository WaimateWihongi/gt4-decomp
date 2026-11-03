/* Host versions of the game's hand-written assembly library routines (config/asm_functions.txt):
   newlib's R5900 string functions and libgcc's soft-float double helpers. They are defined under the
   names the game's sources call (func_ADDR for the asm string routines, the libgcc names for the
   soft-float ones), so port/tools/resolve.py maps their PS2 addresses to them. */
#include <string.h>

void *func_005A4724(void *d, const void *s, unsigned n) { return memcpy(d, s, n); }   /* memcpy */
void *func_005A47D4(void *d, const void *s, unsigned n) { return memmove(d, s, n); }  /* memmove */
void *func_005A48D8(void *d, int c, unsigned n) { return memset(d, c, n); }           /* memset */
void *func_005A4644(const void *s, int c, unsigned n) { return memchr(s, c, n); }     /* memchr */
int func_0057F238(const char *a, const char *b) { return strcmp(a, b); }              /* strcmp */
unsigned func_0057F260(const char *s) { return strlen(s); }                           /* strlen */
char *func_005A5DC8(char *d, const char *s) { return strcat(d, s); }                  /* strcat */
char *func_005A5EF4(const char *s, int c) { return strchr(s, c); }                    /* strchr */
char *func_005A609C(char *d, const char *s) { return strcpy(d, s); }                  /* strcpy */
char *func_005A6AB0(char *d, const char *s, unsigned n) { return strncpy(d, s, n); }  /* strncpy */

/* libgcc soft-double helpers (the EE has no double-precision FPU) */
double dpadd(double a, double b) { return a + b; }
double dpsub(double a, double b) { return a - b; }
double dpmul(double a, double b) { return a * b; }
double dpdiv(double a, double b) { return a / b; }
int dpcmp(double a, double b) { return a < b ? -1 : a > b ? 1 : a == b ? 0 : 1; }  /* unordered: 1 */
double fptodp(float f) { return f; }
double litodp(int i) { return i; }
int dptoli(double d) { return (int)d; }
float func_0057FAF8(double d) { return (float)d; }                                    /* dptofp */
float __floatdisf_ps2(long long v) { return (float)v; }
