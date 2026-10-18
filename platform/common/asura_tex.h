#pragma once
#include <stdint.h>
/* Decode the texture whose resource name ends with name_suffix from the Asura container at path (vfs path) to RGBA8 (byte order
 * R,G,B,A; malloc'd).  0 = ok. */
int asura_load_texture(const char *path, const char *name_suffix, uint32_t **rgba, int *w, int *h);
