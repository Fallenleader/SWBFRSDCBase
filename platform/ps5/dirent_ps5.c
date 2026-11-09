/* Directory reading for the PS5 build: open(O_DIRECTORY) + getdents.  The system C library's opendir() (libSceLibcInternal)
 * fails for every directory of a homebrew title (the PSP game's sceIoDopen then never sees its ENVS folder and the game waits for
 * it for ever), while open() and getdents() of the same directories work.  These definitions take the place of the imports. */
#include <dirent.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

struct _dirdesc { int fd, len, pos; char buf[64 * 1024]; };

DIR *opendir(const char *path){
    int fd = open(path, O_RDONLY | O_DIRECTORY);
    if (fd < 0) { fprintf(stderr, "[PS5] opendir %s: errno %d\n", path, errno); return NULL; }
    DIR *d = calloc(1, sizeof *d); if (!d) { close(fd); errno = ENOMEM; return NULL; }
    d->fd = fd; return d; }

struct dirent *readdir(DIR *d){
    for (;;) {
        if (d->pos >= d->len) {
            d->pos = 0; d->len = getdents(d->fd, d->buf, (int)sizeof d->buf);
            if (d->len <= 0) { if (d->len < 0) fprintf(stderr, "[PS5] getdents: errno %d\n", errno); d->len = 0; return NULL; } }
        struct dirent *e = (struct dirent *)(d->buf + d->pos);
        if (e->d_reclen == 0) { d->len = 0; return NULL; }
        d->pos += e->d_reclen;
        if (e->d_fileno == 0) continue;                 /* deleted entry */
        return e; } }

int closedir(DIR *d){ if (!d) return -1; close(d->fd); free(d); return 0; }
void rewinddir(DIR *d){ lseek(d->fd, 0, SEEK_SET); d->len = d->pos = 0; }
