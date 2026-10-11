#pragma once
/* rsvita: aligned allocation for the standalone ATRAC3/3+ decoder (portable: no posix_memalign on the Vita's newlib) */
#include <stdlib.h>
#include <stdint.h>
static inline void *AllocateAlignedMemory(size_t size, size_t align){
    if (align < sizeof(void *)) align = sizeof(void *);
    unsigned char *raw = (unsigned char *)malloc(size + align + sizeof(void *)); if (!raw) return 0;
    uintptr_t p = ((uintptr_t)(raw + sizeof(void *)) + align - 1) & ~(uintptr_t)(align - 1);
    ((void **)p)[-1] = raw; return (void *)p; }
static inline void FreeAlignedMemory(void *p){ if (p) free(((void **)p)[-1]); }
