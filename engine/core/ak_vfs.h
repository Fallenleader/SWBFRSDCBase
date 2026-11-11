/* Game file access.  The owner's UMD contents are found either as an image (<data>/game.iso, read in place, no extraction) or
 * as extracted files (<data>/GAME/PSP_GAME/...).  Paths are relative to the disc root, '/' separated, case-insensitive:
 * "PSP_GAME/USRDIR/ENVS/CLASSIC/HOTH.PSP". */
#ifndef AK_VFS_H
#define AK_VFS_H
#include "ak_core.h"

typedef struct ak_vfs ak_vfs;
ak_vfs *ak_vfs_open(const char *const *data_dirs, int ndirs);  /* first folder holding game.iso or GAME/ wins */
void    ak_vfs_close(ak_vfs *v);
const char *ak_vfs_describe(const ak_vfs *v);                   /* "game.iso in ux0:data/SWBFRS" (log) */
bool    ak_vfs_read(ak_vfs *v, const char *path, ak_arena *a, ak_blob *out);
/* names (files only, upper case as stored) of a directory; returns the count, names written into the arena */
int     ak_vfs_list(ak_vfs *v, const char *dir, ak_arena *a, const char ***names);
#endif
