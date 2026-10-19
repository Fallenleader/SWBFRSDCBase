#pragma once
/* Guest addresses in platform code (see src/game/rs_base.h).
 *  - 32-bit targets: a guest address is a native pointer.
 *  - 64-bit targets (RS_GUEST64): a guest address is an offset into the window at rs_gbase (platform/common/guest64.c), laid out
 *    as the PSP's memory: the game image at its PSP address, scratchpad, VRAM, heap and the stacks of the threads that run game
 *    code.  Native objects whose address the game is given must be in the window (rs_guest_alloc, or a game thread's stack).
 *
 *   GP(a)      native pointer to guest address a
 *   GA(p)      guest address of a native pointer into guest memory
 *   GIMG(va)   guest address of the game-image location va (a PSP address 0x088xxxxx..) */
#include <stdint.h>
#include <stddef.h>

#ifdef RS_GUEST64
extern uint8_t *rs_gbase;
#define GP(a)     ((void *)(rs_gbase + (uint32_t)(a)))
/* (the asm makes the memory escape, so the compiler knows guest accesses through rs_gbase may reach it: see rs_base.h) */
static inline uint32_t rs_ga(const void *p){ __asm__ volatile("" : : "r"(p) : "memory"); return (uint32_t)((uintptr_t)p - (uintptr_t)rs_gbase); }
#define GA(p)     rs_ga(p)
#define GIMG(va)  ((uint32_t)(va))
#define GFN(a)    rs_fn_native((uint32_t)(a))
void *rs_fn_native(uint32_t guest_addr);
#else
#define GP(a)     ((void *)(uintptr_t)(uint32_t)(a))
#define GA(p)     ((uint32_t)(uintptr_t)(p))
extern uint32_t rs_image_w[];
#define GIMG(va)  ((uint32_t)(uintptr_t)rs_image_w + ((uint32_t)(va) - 0x08804000u))
#define GFN(a)    ((void *)(uintptr_t)(uint32_t)(a))
#endif

/* typed access to guest memory */
#define GU8(a)    (*(volatile uint8_t *)GP(a))
#define GU16(a)   (*(volatile uint16_t *)GP(a))
#define GU32(a)   (*(volatile uint32_t *)GP(a))
#define GF32(a)   (*(volatile float *)GP(a))

/* memory inside the guest window for native objects the game is given an address of (never freed; 32-bit: plain memory) */
void *rs_guest_alloc(size_t size, size_t align);
