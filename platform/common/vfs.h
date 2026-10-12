#pragma once
/* game files from an ISO image (vfs.c).  Paths inside the image are "iso:/PSP_GAME/..."; other paths are host files. */
#include <stdio.h>
#include <stddef.h>
int vfs_iso_mount(const char *iso_path);                 /* 0 = mounted */
int vfs_iso_active(void);
int vfs_iso_resolve(const char *rel, char *out, size_t cap);   /* case-insensitive lookup -> "iso:/..." (1 = found) */
int vfs_stat(const char *full, int *isdir, unsigned *size);
FILE *vfs_fopen(const char *full, const char *mode);
void *vfs_opendir(const char *full);
int vfs_readdir(void *d, char *name, size_t cap, char *full, size_t fcap);   /* 1 = an entry, 0 = end */
void vfs_closedir(void *d);
