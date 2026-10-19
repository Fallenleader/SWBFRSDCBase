#pragma once
/* The guest window of 64-bit targets (guest64.c): the PSP's memory map. */
#include <stddef.h>
#define RS_G_SCRATCH      0x00010000u
#define RS_G_VRAM         0x04000000u
#define RS_G_VRAM_SIZE    (8u << 20)
#define RS_G_IMAGE        0x08804000u
#define RS_G_HEAP         0x0A000000u
#ifndef RS_G_HEAP_SIZE
#define RS_G_HEAP_SIZE    (64u << 20)
#endif
#define RS_G_STACKS       0x0E000000u
#define RS_G_STACKS_SIZE  (32u << 20)
#define RS_G_PLAT         0x10000000u
#define RS_G_PLAT_SIZE    (16u << 20)
#define RS_G_WINDOW       0x11000000u           /* bytes the platform maps at rs_gbase */

void rs_guest64_init(void *window, size_t size);   /* after mapping RS_G_WINDOW bytes: copies the image, builds the function table */
void *rs_guest_stack(size_t size);                  /* stack memory for a thread that runs game code */
