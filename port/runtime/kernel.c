/* The PS2 EE kernel (syscalls) on Windows: semaphores, threads, interrupt handlers.

   PS2 threads share one CPU and switch only at kernel calls; here each PS2 thread is a Windows
   thread, and one global lock (`big`) makes them take turns the same way: a thread holds it while
   it runs and releases it only where the PS2 kernel could switch (waiting on a semaphore, sleeping,
   rotating the ready queue). A 60 Hz timer thread raises the vertical-blank interrupts (causes 2 and
   3) through the handlers the game registered with AddIntcHandler.
   Syscall numbers follow the EE kernel's table; negative numbers are the interrupt-context ("i")
   variants and behave like their positive counterparts here. Anything else is logged once. */
#include <windows.h>
#include <stdio.h>
#include <stdint.h>

extern void port_log(const char *fmt, ...);

static CRITICAL_SECTION big;
static int big_ready;

void ps2_kernel_init(void)
{
    if (!big_ready) { InitializeCriticalSection(&big); big_ready = 1; }
    EnterCriticalSection(&big);  /* the main thread runs first */
}

static void release(void) { LeaveCriticalSection(&big); }
static void acquire(void) { EnterCriticalSection(&big); }

/* ---- semaphores ---- */
typedef struct { int count, max_count, init_count, wait_threads; unsigned attr, option; } SemaParam;
#define MAX_SEMA 256
static HANDLE sema[MAX_SEMA];
static volatile LONG sema_count[MAX_SEMA];

static int create_sema(SemaParam *p)
{
    int i;
    for (i = 1; i < MAX_SEMA; i++)
        if (!sema[i]) {
            int max = p->max_count > 0 ? p->max_count : 0x7FFFFFFF;
            sema[i] = CreateSemaphore(NULL, p->init_count, max, NULL);
            sema_count[i] = p->init_count;
            return i;
        }
    return -1;
}

static int wait_sema(int id)
{
    if (id <= 0 || id >= MAX_SEMA || !sema[id]) return -1;
    if (WaitForSingleObject(sema[id], 0) != WAIT_OBJECT_0) {
        release();
        WaitForSingleObject(sema[id], INFINITE);
        acquire();
    }
    InterlockedDecrement(&sema_count[id]);
    return id;
}

static int poll_sema(int id)
{
    if (id <= 0 || id >= MAX_SEMA || !sema[id]) return -1;
    if (WaitForSingleObject(sema[id], 0) != WAIT_OBJECT_0) return -0x1A1;  /* KE_SEMA_ZERO */
    InterlockedDecrement(&sema_count[id]);
    return id;
}

static int signal_sema(int id)
{
    if (id <= 0 || id >= MAX_SEMA || !sema[id]) return -1;
    InterlockedIncrement(&sema_count[id]);
    ReleaseSemaphore(sema[id], 1, NULL);
    return id;
}

/* ---- threads ---- */
typedef struct { int status; uint32_t func, stack; int stack_size; uint32_t gp; int init_prio, cur_prio;
                 unsigned attr, option; } ThreadParam;
#define MAX_THREAD 256
static struct { uint32_t func; int prio; HANDLE h, wake; int wakeups; } thr[MAX_THREAD];
static DWORD tls_id = TLS_OUT_OF_INDEXES;
static int nthreads = 1;  /* 0: unused, 1: the main thread */

static int current_thread(void)
{
    if (tls_id == TLS_OUT_OF_INDEXES) return 1;
    {
        int id = (int)(intptr_t)TlsGetValue(tls_id);
        return id ? id : 1;
    }
}

static int create_thread(ThreadParam *p)
{
    if (tls_id == TLS_OUT_OF_INDEXES) tls_id = TlsAlloc();
    if (nthreads + 1 >= MAX_THREAD) return -1;
    nthreads++;
    thr[nthreads].func = p->func;
    thr[nthreads].prio = p->init_prio;
    thr[nthreads].wake = CreateEvent(NULL, FALSE, FALSE, NULL);
    return nthreads;
}

static struct { int id; int arg; } start_args[MAX_THREAD];

static DWORD WINAPI thread_main(LPVOID v)
{
    int id = (int)(intptr_t)v;
    TlsSetValue(tls_id, (LPVOID)(intptr_t)id);
    acquire();
    port_log("[kernel] thread %d starts at %08x\n", id, thr[id].func);
    ((void (*)(int))(uintptr_t)thr[id].func)(start_args[id].arg);
    port_log("[kernel] thread %d returned\n", id);
    release();
    return 0;
}

static int start_thread(int id, int arg)
{
    if (id <= 1 || id > nthreads) return -1;
    start_args[id].id = id;
    start_args[id].arg = arg;
    thr[id].h = CreateThread(NULL, 1 << 20, thread_main, (LPVOID)(intptr_t)id, 0, NULL);
    return 0;
}

static int sleep_thread(void)
{
    int id = current_thread();
    if (!thr[id].wake) thr[id].wake = CreateEvent(NULL, FALSE, FALSE, NULL);
    if (thr[id].wakeups > 0) { thr[id].wakeups--; return id; }
    release();
    WaitForSingleObject(thr[id].wake, INFINITE);
    acquire();
    return id;
}

static int wakeup_thread(int id)
{
    if (id <= 0 || id > nthreads) return -1;
    if (!thr[id].wake) thr[id].wake = CreateEvent(NULL, FALSE, FALSE, NULL);
    thr[id].wakeups++;
    SetEvent(thr[id].wake);
    return id;
}

static int rotate(void)
{
    release();
    Sleep(0);
    acquire();
    return 0;
}

/* ---- interrupts: vertical blank at 60 Hz ---- */
#define MAX_HANDLER 32
static struct { int cause; uint32_t fn; uint32_t arg; } intc[MAX_HANDLER];
static int nintc;
static unsigned intc_enabled;
static HANDLE vblank_thread;

static void raise_intc(int cause)
{
    int i;
    if (!(intc_enabled & (1u << cause))) return;
    for (i = 0; i < nintc; i++)
        if (intc[i].fn && intc[i].cause == cause)
            ((int (*)(int))(uintptr_t)intc[i].fn)(cause);
}

static DWORD WINAPI vblank_main(LPVOID v)
{
    (void)v;
    for (;;) {
        Sleep(16);
        acquire();
        raise_intc(2);  /* INTC_VBLANK_S */
        raise_intc(3);  /* INTC_VBLANK_E */
        release();
    }
    return 0;
}

static int add_intc_handler(int cause, uint32_t fn, int next, uint32_t arg)
{
    (void)next;
    if (nintc >= MAX_HANDLER) return -1;
    intc[nintc].cause = cause; intc[nintc].fn = fn; intc[nintc].arg = arg;
    if (!vblank_thread) vblank_thread = CreateThread(NULL, 0, vblank_main, NULL, 0, NULL);
    return ++nintc;
}

/* ---- dispatcher ---- */
int ps2_syscall(int n, int a0, int a1, int a2, int a3)
{
    static unsigned char seen[512];
    int k = n < 0 ? -n : n;
    switch (k) {
    case 0x10: return add_intc_handler(a0, (uint32_t)a1, a2, (uint32_t)a3);   /* AddIntcHandler */
    case 0x11: if (a1 > 0 && a1 <= nintc) intc[a1 - 1].fn = 0; return 0;     /* RemoveIntcHandler */
    case 0x14: intc_enabled |= 1u << a0; return 1;                            /* EnableIntc */
    case 0x15: intc_enabled &= ~(1u << a0); return 1;                         /* DisableIntc */
    case 0x20: return create_thread((ThreadParam *)(uintptr_t)a0);            /* CreateThread */
    case 0x21: return 0;                                                      /* DeleteThread */
    case 0x22: return start_thread(a0, a1);                                   /* StartThread */
    case 0x23: release(); ExitThread(0); return 0;                            /* ExitThread */
    case 0x29: return rotate();                                               /* RotateThreadReadyQueue */
    case 0x2F: return current_thread();                                       /* GetThreadId */
    case 0x32: return sleep_thread();                                         /* SleepThread */
    case 0x33: case 0x34: return wakeup_thread(a0);                           /* (i)WakeupThread */
    case 0x3C: return a1 ? a1 : 0x01E00000;                                   /* SetupThread: stack top */
    case 0x3D: return a0;                                                     /* SetupHeap */
    case 0x3E: return 0x01D00000;                                             /* EndOfHeap */
    case 0x40: return create_sema((SemaParam *)(uintptr_t)a0);                /* CreateSema */
    case 0x41: if (a0 > 0 && a0 < MAX_SEMA && sema[a0]) { CloseHandle(sema[a0]); sema[a0] = 0; } return a0;
    case 0x42: case 0x43: return signal_sema(a0);                             /* (i)SignalSema */
    case 0x44: return wait_sema(a0);                                          /* WaitSema */
    case 0x45: case 0x46: return poll_sema(a0);                               /* (i)PollSema */
    case 0x64: case 0x68: return 0;                                           /* FlushCache, ... */
    }
    if (k < 512 && !seen[k]) { seen[k] = 1; port_log("[kernel] syscall %d (0x%x) not implemented, args %x %x %x %x\n", n, k, a0, a1, a2, a3); }
    return 0;
}
