#ifndef _WIN32
#define _GNU_SOURCE
#endif
/* Desktop platform (Windows, Linux, Steam Deck): the parts of plat.h that need no window.
 * Window, present and the Vulkan back end join at milestone 1.2. */
#include "../plat.h"
#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <windows.h>
#include <malloc.h>
#else
#include <pthread.h>
#include <time.h>
#include <unistd.h>
#ifdef __linux__
#include <sched.h>
#endif
#endif

void *ak_plat_alloc(size_t size, size_t align)
{
#ifdef _WIN32
    return _aligned_malloc(size, align);
#else
    void *p = NULL;
    return posix_memalign(&p, align < sizeof(void *) ? sizeof(void *) : align, size) == 0 ? p : NULL;
#endif
}
void ak_plat_free(void *p)
{
#ifdef _WIN32
    _aligned_free(p);
#else
    free(p);
#endif
}

u64 ak_plat_time_us(void)
{
#ifdef _WIN32
    static LARGE_INTEGER f; LARGE_INTEGER c;
    if (!f.QuadPart) QueryPerformanceFrequency(&f);
    QueryPerformanceCounter(&c);
    return (u64)(c.QuadPart / f.QuadPart) * 1000000u + (u64)(c.QuadPart % f.QuadPart) * 1000000u / (u64)f.QuadPart;
#else
    struct timespec t; clock_gettime(CLOCK_MONOTONIC, &t);
    return (u64)t.tv_sec * 1000000u + (u64)t.tv_nsec / 1000u;
#endif
}
void ak_plat_sleep_us(u64 us)
{
#ifdef _WIN32
    Sleep((DWORD)((us + 999) / 1000));
#else
    struct timespec t = { (time_t)(us / 1000000u), (long)(us % 1000000u) * 1000 }; nanosleep(&t, NULL);
#endif
}

int ak_plat_core_count(void)
{
#ifdef _WIN32
    SYSTEM_INFO si; GetSystemInfo(&si); return (int)si.dwNumberOfProcessors;
#else
    long n = sysconf(_SC_NPROCESSORS_ONLN); return n > 0 ? (int)n : 1;
#endif
}

struct ak_thread {
#ifdef _WIN32
    HANDLE h;
#else
    pthread_t t;
#endif
    ak_thread_fn fn; void *arg;
};
#ifdef _WIN32
static DWORD WINAPI thread_entry(LPVOID p) { ak_thread *t = (ak_thread *)p; t->fn(t->arg); return 0; }
#else
static void *thread_entry(void *p) { ak_thread *t = (ak_thread *)p; t->fn(t->arg); return NULL; }
#endif
ak_thread *ak_plat_thread_start(const char *name, ak_thread_fn fn, void *arg, int core, size_t stack)
{
    ak_thread *t = (ak_thread *)calloc(1, sizeof *t);
    if (!t) return NULL;
    t->fn = fn; t->arg = arg;
#ifdef _WIN32
    t->h = CreateThread(NULL, stack, thread_entry, t, 0, NULL);
    if (t->h && core >= 0) SetThreadAffinityMask(t->h, (DWORD_PTR)1 << core);
    (void)name;
#else
    pthread_attr_t at; pthread_attr_init(&at);
    if (stack) pthread_attr_setstacksize(&at, stack);
    if (pthread_create(&t->t, &at, thread_entry, t) != 0) { free(t); t = NULL; }
    pthread_attr_destroy(&at);
#ifdef __linux__
    if (t) {
        pthread_setname_np(t->t, name);
        if (core >= 0) { cpu_set_t s; CPU_ZERO(&s); CPU_SET(core, &s); pthread_setaffinity_np(t->t, sizeof s, &s); }
    }
#endif
#endif
    return t;
}
void ak_plat_thread_join(ak_thread *t)
{
    if (!t) return;
#ifdef _WIN32
    WaitForSingleObject(t->h, INFINITE); CloseHandle(t->h);
#else
    pthread_join(t->t, NULL);
#endif
    free(t);
}

void ak_plat_log_write(const char *line)
{
    static FILE *lf;
    if (!lf) lf = fopen("log.txt", "w");
    fprintf(stderr, "%s\n", line);
    if (lf) { fprintf(lf, "%s\n", line); fflush(lf); }
}
