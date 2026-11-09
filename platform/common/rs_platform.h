#pragma once
/* Device-agnostic platform interface (ExperimentalRewrite).
 *
 * The decompiled game reached the hardware through the PSP firmware (sce* calls), which this project used to emulate (hle.c: one
 * table of firmware handlers, called through generated register-block glue, all under one "big lock").  On this branch each system
 * is replaced by a native module with a plain typed interface, declared here; every device implements it (or uses the common
 * implementation), and the game's firmware calls are bound straight to it (native_*.c define the psp_<sceName> entry points the
 * game links against; platform/common/mkglue.py generates emulated glue only for the calls not converted yet).
 *
 * Conversion status is tracked in docs/REWRITE.md. */
#include <stddef.h>
#include <stdint.h>

/* ---- guest lock (transitional) ----
 * Until the game's threads are converted, the game code runs one thread at a time under the guest lock (hle.c).  A native module
 * that blocks (file reads, waits) lets go of it while it blocks, so the game's other threads run meanwhile, as they would on any
 * multitasking system. */
void rs_guest_unlock(void);
void rs_guest_lock(void);

/* ---- files (native_io.c) ----
 * Paths are the game's own ("disc0:/PSP_GAME/USRDIR/...", "ms0:/...", relative): the device prefix is dropped and the rest is
 * looked up case-insensitively under the game's data folder (or inside the game image), after mods, custom maps and data patches. */
enum { RS_FS_READ = 1, RS_FS_WRITE = 2, RS_FS_RW = 3, RS_FS_APPEND = 0x100, RS_FS_CREATE = 0x200, RS_FS_TRUNC = 0x400 };
typedef struct { int is_dir; uint64_t size; uint32_t sector; } rs_fs_stat_t;      /* sector: a stable number per file (raw-sector opens) */
int     rs_fs_open(const char *path, int mode);                 /* >= 0 handle, < 0 error */
int     rs_fs_close(int fd);
int64_t rs_fs_read(int fd, void *dst, size_t n);               /* bytes read */
int64_t rs_fs_write(int fd, const void *src, size_t n);
int64_t rs_fs_seek(int fd, int64_t off, int whence);           /* SEEK_SET / SEEK_CUR / SEEK_END -> new position */
int     rs_fs_stat(const char *path, rs_fs_stat_t *st);         /* 0 = found */
int     rs_fs_opendir(const char *path);                        /* >= 0 handle */
int     rs_fs_readdir(int fd, char *name, size_t cap, rs_fs_stat_t *st);   /* 1 = an entry, 0 = end, < 0 error */
int     rs_fs_mkdir(const char *path);
