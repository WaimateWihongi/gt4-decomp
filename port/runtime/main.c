/* GT4 PC port runtime (milestone 1-2): host the decompiled game in a 32-bit Windows process.

   - The PS2 RAM range is part of this exe (ps2mem.s) at 0x00100000; CORE.GT4.elf's loaded segments
     are copied into it at their PS2 addresses, so every pointer in the game's data is valid as is.
   - Every PS2 function that has host C gets a 5-byte `jmp` at its PS2 address (port_thunks, generated
     by port/tools/resolve.py), so function pointers taken from the game's data (vtables, callback
     tables) land in the host code.
   - Scratchpad and hardware register pages are plain memory for now; a crash prints which game
     function it happened in.
   Usage: gt4.exe [path\to\CORE.GT4.elf]   (default: orig\SCUS-97328\CORE.GT4.elf next to the repo) */
#include <windows.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

extern char ps2_ram[], ps2_ram_end[];
extern const struct { unsigned addr; void *fn; } port_thunks[];
extern const unsigned port_thunk_count;

#define PS2_RAM_BASE 0x00100000u

static FILE *logf;

static void plog(const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt); vfprintf(stderr, fmt, ap); va_end(ap);
    if (logf) { va_start(ap, fmt); vfprintf(logf, fmt, ap); va_end(ap); fflush(logf); }
}

void port_log(const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt); vfprintf(stderr, fmt, ap); va_end(ap);
    if (logf) { va_start(ap, fmt); vfprintf(logf, fmt, ap); va_end(ap); fflush(logf); }
}

extern void ps2_kernel_init(void);
extern const unsigned port_missing[];
extern const unsigned port_missing_count;
extern char port_missing_entry[] __asm__("_port_missing");

/* Reached through port/runtime/missing.s: a PS2 function with no host code, called by pointer. */
void port_missing_hit(unsigned addr)
{
    static unsigned seen[4096];
    static unsigned n;
    unsigned i;
    for (i = 0; i < n; i++)
        if (seen[i] == addr) return;
    if (n < 4096) seen[n++] = addr;
    port_log("[missing] %08x called through a pointer (no host code yet)\n", addr);
}

/* A game function with no host C yet: log it the first time it is reached. */
void port_stub_hit(unsigned addr, const char *name)
{
    static unsigned seen[4096];
    static unsigned n;
    unsigned i;
    for (i = 0; i < n; i++)
        if (seen[i] == addr) return;
    if (n < 4096) seen[n++] = addr;
    plog("[stub] %08x %s\n", addr, name);
}

/* The PS2 function a host code address belongs to: the thunk target closest below it. */
static unsigned ps2_function_of(uintptr_t pc)
{
    unsigned i, best = 0;
    uintptr_t bestfn = 0;
    for (i = 0; i < port_thunk_count; i++) {
        uintptr_t f = (uintptr_t)port_thunks[i].fn;
        if (f <= pc && f > bestfn) { bestfn = f; best = port_thunks[i].addr; }
    }
    return best;
}

static int has_host_code(unsigned addr)
{
    unsigned i;
    for (i = 0; i < port_thunk_count; i++)
        if (port_thunks[i].addr == addr) return 1;
    return 0;
}

static LONG WINAPI on_crash(EXCEPTION_POINTERS *e)
{
    EXCEPTION_RECORD *r = e->ExceptionRecord;
    if (r->ExceptionCode == DBG_PRINTEXCEPTION_C || r->ExceptionCode == 0x406D1388)
        return EXCEPTION_CONTINUE_SEARCH;
    plog("\n[crash] code %08lx at eip %08lx (in PS2 function %08x)", r->ExceptionCode,
         (unsigned long)e->ContextRecord->Eip, ps2_function_of(e->ContextRecord->Eip));
    if (r->ExceptionCode == EXCEPTION_ACCESS_VIOLATION && r->NumberParameters >= 2)
        plog(", %s address %08lx", r->ExceptionInformation[0] ? "writing" : "reading",
             (unsigned long)r->ExceptionInformation[1]);
    plog("\n");
    {
        /* the caller chain: the return address on top of the stack (a call through a null pointer
           crashes at eip 0 with it there), then the frame-pointer chain */
        DWORD *esp = (DWORD *)e->ContextRecord->Esp, *ebp = (DWORD *)e->ContextRecord->Ebp;
        int i;
        if (!IsBadReadPtr(esp, 4))
            plog("  return address on stack %08lx (in PS2 function %08x)\n", esp[0], ps2_function_of(esp[0]));
        for (i = 0; i < 12 && ebp && !IsBadReadPtr(ebp, 8); i++, ebp = (DWORD *)ebp[0])
            plog("  frame %2d: %08lx (in PS2 function %08x)\n", i, ebp[1], ps2_function_of(ebp[1]));
    }
    ExitProcess(3);
    return EXCEPTION_CONTINUE_SEARCH;
}

static int load_elf(const char *path)
{
    FILE *f = fopen(path, "rb");
    unsigned char eh[52];
    unsigned i, phoff, phnum, phentsize, loaded = 0;
    if (!f) { plog("cannot open %s\n", path); return 0; }
    if (fread(eh, 1, 52, f) != 52 || memcmp(eh, "\x7f" "ELF", 4)) { plog("%s is not an ELF\n", path); return 0; }
    phoff = *(uint32_t *)(eh + 28); phentsize = *(uint16_t *)(eh + 42); phnum = *(uint16_t *)(eh + 44);
    for (i = 0; i < phnum; i++) {
        uint32_t ph[8];
        fseek(f, phoff + i * phentsize, SEEK_SET);
        if (fread(ph, 4, 8, f) != 8) break;
        if (ph[0] != 1) continue;  /* PT_LOAD */
        {
            uint32_t off = ph[1], vaddr = ph[2], filesz = ph[4], memsz = ph[5];
            if (vaddr < PS2_RAM_BASE || vaddr + memsz > (uint32_t)(uintptr_t)ps2_ram_end) {
                plog("segment %08x+%x outside the reserved RAM\n", vaddr, memsz);
                continue;
            }
            fseek(f, off, SEEK_SET);
            if (fread((void *)(uintptr_t)vaddr, 1, filesz, f) != filesz) plog("short read\n");
            memset((void *)(uintptr_t)(vaddr + filesz), 0, memsz - filesz);
            plog("loaded %08x-%08x (%u bytes from file)\n", vaddr, vaddr + memsz, filesz);
            loaded++;
        }
    }
    fclose(f);
    return loaded > 0;
}

static void *map_at(uintptr_t addr, size_t size, const char *what)
{
    void *p = VirtualAlloc((void *)addr, size, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
    plog("%-28s %08lx: %s\n", what, (unsigned long)addr, p == (void *)addr ? "mapped" : "NOT available");
    return p;
}

static int setup_ok;

/* Runs before every other constructor (the game's sources have global C++ objects whose
   constructors the C runtime runs at start-up): the data image and thunks must be in place first. */
__attribute__((constructor(101))) static void port_setup(void)
{
    const char *elf = getenv("GT4_ELF") ? getenv("GT4_ELF") : "orig\\SCUS-97328\\CORE.GT4.elf";
    DWORD old;
    unsigned i;
    logf = fopen("gt4_port.log", "w");
    AddVectoredExceptionHandler(1, on_crash);
    plog("GT4 PC port runtime: %u PS2 functions with host code\n", port_thunk_count);
    if ((uintptr_t)ps2_ram != PS2_RAM_BASE) {
        plog("PS2 RAM block is at %p, not %08x: link order or image base is wrong\n", (void *)ps2_ram, PS2_RAM_BASE);
        ExitProcess(2);
    }
    if (!VirtualProtect(ps2_ram, ps2_ram_end - ps2_ram, PAGE_EXECUTE_READWRITE, &old)) {
        plog("VirtualProtect failed (%lu)\n", GetLastError());
        ExitProcess(2);
    }
    if (!load_elf(elf)) ExitProcess(2);
    /* functions without host code first (a logging `call`), then the real jumps, which win */
    for (i = 0; i < port_missing_count; i++) {
        unsigned char *p = (unsigned char *)(uintptr_t)port_missing[i];
        p[0] = 0xE8;  /* call rel32 */
        *(int32_t *)(p + 1) = (int32_t)((char *)port_missing_entry - (char *)(p + 5));
    }
    plog("wrote %u logging thunks for functions without host code\n", port_missing_count);
    for (i = 0; i < port_thunk_count; i++) {
        unsigned char *p = (unsigned char *)(uintptr_t)port_thunks[i].addr;
        p[0] = 0xE9;  /* jmp rel32 */
        *(int32_t *)(p + 1) = (int32_t)((char *)port_thunks[i].fn - (char *)(p + 5));
    }
    plog("wrote %u jmp thunks\n", port_thunk_count);
    map_at(0x70000000, 0x4000, "scratchpad");
    map_at(0x10000000, 0x10000, "EE hardware registers");
    map_at(0x11000000, 0x10000, "VU0/VU1 memory");
    map_at(0x12000000, 0x2000, "GS privileged registers");
    plog("setup done; game constructors run next\n");
    setup_ok = 1;
}

int main(int argc, char **argv)
{
    plog("main reached (setup %s)\n", setup_ok ? "ok" : "MISSING");
    ps2_kernel_init();

    plog("running static constructors\n");
    if (has_host_code(0x005ADF20)) ((void (*)(void))0x005ADF20)(); else plog("skip 005ADF20 (no host code)\n");
    if (has_host_code(0x0048EF90)) ((void (*)(void))0x0048EF90)(); else plog("skip 0048EF90 (no host code)\n");
    if (!has_host_code(0x00107F08)) { plog("main has no host code\n"); return 2; }
    plog("calling main (func_00107F08)\n");
    {
        int r = ((int (*)(int, char **))0x00107F08)(argc, argv);
        plog("main returned %d\n", r);
    }
    return 0;
}
