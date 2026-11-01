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
typedef void (*vfs_progress_fn)(unsigned long long done, unsigned long long total, const char *name);
int vfs_iso_extract(const char *iso_path, const char *dest_dir, vfs_progress_fn progress);   /* 0 = every file extracted */
