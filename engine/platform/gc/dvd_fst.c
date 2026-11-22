/* GameCube: the disc's own file system (a GCM image's FST) as the stdio device "dvd:" (read only).  For a disc image that carries
 * the game's files beside aurek.dol (files/aurek/...): Swiss loading an image from the SD card, or Dolphin booting a folder
 * (sys/main.dol + files/).  Paths match case-insensitively.  Reads go through a 32 KB block cache (the drive wants 32-byte aligned
 * buffers and lengths), or straight into the caller's buffer when it is aligned; one reader at a time. */
#include <gccore.h>
#include <ogc/dvd.h>
#include <sys/iosupport.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

typedef struct { u8 dir; u32 name, off, len; } fst_e;   /* dir: len = the index after its last child; file: off, len */
static fst_e *fe; static u32 nfe; static const char *names; static dvdcmdblk cmd; static mutex_t mx = LWP_MUTEX_NULL;
static u8 cache[32u << 10] __attribute__((aligned(32))); static u32 c_off = 0xFFFFFFFFu, c_len;

static u32 be32(const u8 *p) { return (u32)p[0] << 24 | (u32)p[1] << 16 | (u32)p[2] << 8 | p[3]; }
static bool raw(void *dst, u32 off, u32 len)         /* (dst 32-aligned, off 4-aligned, len a multiple of 32) */
{
    DCInvalidateRange(dst, len);
    return DVD_ReadPrio(&cmd, dst, len, off, 2) >= 0;
}
static bool disc_read(u8 *dst, u32 off, u32 len, u32 limit)   /* any offset / length; limit: don't read past it (the file's end) */
{
    while (len) {
        if (((uintptr_t)dst & 31) == 0 && (off & 31) == 0 && len >= 32) {   /* straight in, whole 32-byte lines */
            u32 n = len & ~31u; if (n > (1u << 20)) n = 1u << 20;
            if (!raw(dst, off, n)) return false;
            dst += n; off += n; len -= n; continue;
        }
        if (off < c_off || off >= c_off + c_len) {
            c_off = off & ~31u; u32 room = limit > c_off ? limit - c_off : 32; c_len = sizeof cache < room ? sizeof cache : (room + 31) & ~31u;
            if (!raw(cache, c_off, c_len)) { c_off = 0xFFFFFFFFu; return false; }
        }
        u32 k = c_off + c_len - off; if (k > len) k = len;
        memcpy(dst, cache + (off - c_off), k); dst += k; off += k; len -= k;
    }
    return true;
}

static s32 find(const char *path)                    /* "dvd:/a/b" or "/a/b": the entry, -1 none */
{
    const char *p = strchr(path, ':'); p = p ? p + 1 : path;
    u32 cur = 0;
    while (*p == '/') p++;
    while (*p) {
        const char *e = strchr(p, '/'); size_t n = e ? (size_t)(e - p) : strlen(p);
        if (!fe[cur].dir) return -1;
        s32 hit = -1;
        for (u32 i = cur + 1; i < fe[cur].len && i < nfe; i = fe[i].dir ? fe[i].len : i + 1) {
            const char *nm = names + fe[i].name;
            if (strlen(nm) == n && !strncasecmp(nm, p, n)) { hit = (s32)i; break; }
        }
        if (hit < 0) return -1;
        cur = (u32)hit; p += n; while (*p == '/') p++;
    }
    return (s32)cur;
}

typedef struct { u32 off, len, pos; } dfile;
static int d_open(struct _reent *r, void *fs, const char *path, int flags, int mode)
{
    (void)mode;
    if ((flags & 3) != O_RDONLY) { r->_errno = EROFS; return -1; }
    s32 i = find(path); if (i < 0 || fe[i].dir) { r->_errno = ENOENT; return -1; }
    dfile *f = (dfile *)fs; f->off = fe[i].off; f->len = fe[i].len; f->pos = 0;
    return (int)(intptr_t)f;
}
static int d_close(struct _reent *r, void *fd) { (void)r; (void)fd; return 0; }
static ssize_t d_read(struct _reent *r, void *fd, char *ptr, size_t len)
{
    dfile *f = (dfile *)fd; if (f->pos >= f->len) return 0;
    if (len > f->len - f->pos) len = f->len - f->pos;
    LWP_MutexLock(mx); bool ok = disc_read((u8 *)ptr, f->off + f->pos, (u32)len, f->off + f->len); LWP_MutexUnlock(mx);
    if (!ok) { r->_errno = EIO; return -1; }
    f->pos += (u32)len; return (ssize_t)len;
}
static off_t d_seek(struct _reent *r, void *fd, off_t pos, int dir)
{
    dfile *f = (dfile *)fd; off_t b = dir == SEEK_CUR ? f->pos : dir == SEEK_END ? f->len : 0;
    if (b + pos < 0) { r->_errno = EINVAL; return -1; }
    f->pos = (u32)(b + pos); return f->pos;
}
static void fill_stat(s32 i, struct stat *st)
{
    memset(st, 0, sizeof *st); st->st_ino = (ino_t)i;
    st->st_mode = fe[i].dir ? S_IFDIR | 0555 : S_IFREG | 0444; st->st_size = fe[i].dir ? 0 : fe[i].len; st->st_nlink = 1;
}
static int d_fstat(struct _reent *r, void *fd, struct stat *st) { (void)r; dfile *f = (dfile *)fd; memset(st, 0, sizeof *st); st->st_mode = S_IFREG | 0444; st->st_size = f->len; return 0; }
static int d_stat(struct _reent *r, const char *path, struct stat *st) { s32 i = find(path); if (i < 0) { r->_errno = ENOENT; return -1; } fill_stat(i, st); return 0; }
typedef struct { u32 dir, next; } ddir;
static DIR_ITER *d_diropen(struct _reent *r, DIR_ITER *ds, const char *path)
{
    s32 i = find(path); if (i < 0 || !fe[i].dir) { r->_errno = ENOENT; return NULL; }
    ddir *d = (ddir *)ds->dirStruct; d->dir = (u32)i; d->next = (u32)i + 1; return ds;
}
static int d_dirreset(struct _reent *r, DIR_ITER *ds) { (void)r; ddir *d = (ddir *)ds->dirStruct; d->next = d->dir + 1; return 0; }
static int d_dirnext(struct _reent *r, DIR_ITER *ds, char *name, struct stat *st)
{
    ddir *d = (ddir *)ds->dirStruct;
    if (d->next >= fe[d->dir].len || d->next >= nfe) { r->_errno = ENOENT; return -1; }
    u32 i = d->next; d->next = fe[i].dir ? fe[i].len : i + 1;
    snprintf(name, 256, "%s", names + fe[i].name); if (st) fill_stat((s32)i, st);
    return 0;
}
static int d_dirclose(struct _reent *r, DIR_ITER *ds) { (void)r; (void)ds; return 0; }
static int d_chdir(struct _reent *r, const char *path) { s32 i = find(path); if (i < 0 || !fe[i].dir) { r->_errno = ENOENT; return -1; } return 0; }

static const devoptab_t dvd_dev = {
    .name = "dvd", .structSize = sizeof(dfile), .open_r = d_open, .close_r = d_close, .read_r = d_read, .seek_r = d_seek,
    .fstat_r = d_fstat, .stat_r = d_stat, .dirStateSize = sizeof(ddir), .diropen_r = d_diropen, .dirreset_r = d_dirreset,
    .dirnext_r = d_dirnext, .dirclose_r = d_dirclose, .lstat_r = d_stat, .chdir_r = d_chdir,
};

bool gc_dvd_mount(void)                              /* true: "dvd:" is there */
{
    DVD_Init();
    if (DVD_Mount() < 0) return false;
    static u8 hdr[0x440] __attribute__((aligned(32)));
    if (!raw(hdr, 0, sizeof hdr) || be32(hdr + 0x1C) != 0xC2339F3Du) return false;   /* (the GameCube disc magic) */
    u32 fo = be32(hdr + 0x424), fs = be32(hdr + 0x428);
    if (!fo || fs < 12 || fs > (4u << 20)) return false;
    u8 *f = (u8 *)memalign(32, (fs + 31) & ~31u); if (!f || !raw(f, fo, (fs + 31) & ~31u)) { free(f); return false; }
    nfe = be32(f + 8); if (!nfe || (u64)nfe * 12 > fs) { free(f); return false; }
    fe = (fst_e *)malloc(sizeof *fe * nfe);
    for (u32 i = 0; i < nfe; i++) { const u8 *e = f + 12 * i; fe[i].dir = e[0] != 0; fe[i].name = be32(e) & 0xFFFFFF; fe[i].off = be32(e + 4); fe[i].len = be32(e + 8); }
    fe[0].name = 0; names = (const char *)f + 12 * nfe;
    LWP_MutexInit(&mx, false);
    return AddDevice(&dvd_dev) >= 0;
}
