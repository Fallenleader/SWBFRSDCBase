#pragma once
#include <stdint.h>
/* Decode the texture whose resource name ends with name_suffix from the Asura container at path (vfs path) to RGBA8 (byte order
 * R,G,B,A; malloc'd).  0 = ok. */
int asura_load_texture(const char *path, const char *name_suffix, uint32_t **rgba, int *w, int *h);
/* Every texture (RSCF type 2) of the Asura container at path: cb(resource name, key, RGBA8, w, h, ud) per texture; key = CRC-32 of its
 * level-0 texel bytes as stored (the runtime texture-replacement key, platform/linux_test/texrep.c).  Returns the count, < 0 = error. */
int asura_each_texture(const char *path, void (*cb)(const char *name, uint32_t key, const uint32_t *rgba, int w, int h, void *ud), void *ud);
