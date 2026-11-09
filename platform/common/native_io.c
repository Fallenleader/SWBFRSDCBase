/* Native file layer (ExperimentalRewrite): rs_fs_* (rs_platform.h) and the game's file calls bound to it.
 *
 * Replaces the emulated IoFileMgr of hle.c.  Differences from the emulation, all towards how a native program behaves:
 *  - reads and writes let go of the guest lock while they run, so the game's other threads (audio streaming, the loader, the
 *    renderer feed) keep running during a load instead of the whole game stopping for every read;
 *  - the handle table has its own lock, so it can be used from any thread;
 *  - sceIoMkdir creates the folder (it was a no-op).
 * What the game sees is unchanged: the same handles, error codes, stat and directory entry layouts. */
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <pthread.h>
#include <dirent.h>
#include <sys/stat.h>
#include "psp_impl.h"
#include "vfs.h"
#include "rs_platform.h"

const char *rs_game_root(void);
const char *rs_patch_file(const char *rel_path, const char *host_path);
int rs_custom_map_file(const char *rel, char *out, size_t cap);
int rs_custom_map_dirent(const char *dir, int k, char *name, size_t cap, char *host, size_t hcap);
int rs_mod_file(const char *rel, char *out, size_t cap);
void rs_atrac_note_file(const char *host_path);
void rs_atrac_note_read(const char *path, long pos, u32 n);
void rs_movie_note_file(const char *host_path);

#define ERR_NOENT  0x80010002u
#define ERR_BADF   0x80010009u
#define ERR_MFILE  0x80010018u
#define MAXFD 128
#define PATHMAX 1500

typedef struct { FILE *f; void *d; int used; char path[PATHMAX]; int extra; } fd_t;   /* extra: custom maps listed so far */
static fd_t fds[MAXFD];
static pthread_mutex_t fs_mx = PTHREAD_MUTEX_INITIALIZER;
#define LOCK() pthread_mutex_lock(&fs_mx)
#define UNLOCK() pthread_mutex_unlock(&fs_mx)

static const char *strip_dev(const char *p){ const char *q = strchr(p, ':'); return q ? q + 1 : p; }

/* case-insensitive path walk under the game folder */
static int resolve_ci(const char *rel, char *out, size_t cap){
    if (vfs_iso_active()) return vfs_iso_resolve(rel, out, cap);
    char cur[1024]; snprintf(cur, sizeof cur, "%s", rs_game_root()); char tmp[1024]; snprintf(tmp, sizeof tmp, "%s", rel); char *save = 0;
    for (char *tok = strtok_r(tmp, "/\\", &save); tok; tok = strtok_r(0, "/\\", &save)) {
        char probe[PATHMAX]; snprintf(probe, sizeof probe, "%s/%s", cur, tok); struct stat st;
        if (stat(probe, &st) == 0) { snprintf(cur, sizeof cur, "%s", probe); continue; }
        DIR *d = opendir(cur); if (!d) return 0; struct dirent *e; int found = 0;
        while ((e = readdir(d))) if (!strcasecmp(e->d_name, tok)) { snprintf(probe, sizeof probe, "%s/%s", cur, e->d_name); snprintf(cur, sizeof cur, "%s", probe); found = 1; break; }
        closedir(d);
        if (!found) { snprintf(probe, sizeof probe, "%s/%s", cur, tok); snprintf(out, cap, "%s", probe); return 0; } }
    snprintf(out, cap, "%s", cur); return 1; }

/* Raw-sector opens ("sce_lbn0xLBN_size0xSIZE"): each file found gets a stable fake start sector; those paths map back to it. */
typedef struct { u32 lbn, sectors; char path[PATHMAX]; } lbn_t;
static lbn_t *lbns; static int nlbn, caplbn; static u32 next_lbn = 0x100;
static u32 lbn_for(const char *full, u32 size){
    for (int i = 0; i < nlbn; i++) if (!strcmp(lbns[i].path, full)) return lbns[i].lbn;
    if (nlbn == caplbn) { caplbn = caplbn ? caplbn * 2 : 1024; lbns = realloc(lbns, (size_t)caplbn * sizeof(lbn_t)); }
    lbn_t *e = &lbns[nlbn++]; e->lbn = next_lbn; e->sectors = (size + 2047) / 2048 + 1; snprintf(e->path, sizeof e->path, "%s", full); next_lbn += e->sectors; return e->lbn; }
static const char *lbn_lookup(u32 lbn){ for (int i = 0; i < nlbn; i++) if (lbn >= lbns[i].lbn && lbn < lbns[i].lbn + lbns[i].sectors) return lbns[i].path; return 0; }

/* size the game should see: a mod / data patch may replace the file with a larger or smaller one */
static u32 eff_size(const char *full, u32 base){
    if (vfs_iso_active()) return base;
    const char *root = rs_game_root(); size_t rl = strlen(root); if (strncmp(full, root, rl)) return base;
    const char *alt = rs_patch_file(full + rl, full); struct stat st; if (alt && stat(alt, &st) == 0) return (u32)st.st_size; return base; }
static void mod_redirect(char *full, size_t cap){
    const char *root = rs_game_root(); size_t rl = strlen(root); char mf[PATHMAX];
    if (strncmp(full, root, rl) || !rs_mod_file(full + rl, mf, sizeof mf)) return;
    snprintf(full, cap, "%s", mf); }
/* custom maps: a map file the game asks for may come from the custom maps folder */
static void custom_map(const char *p, char *full, size_t cap){
    char cf[PATHMAX]; int r = rs_custom_map_file(strip_dev(p), cf, sizeof cf); int isd; unsigned sz;
    if (r == 1) { snprintf(full, cap, "%s", cf); fprintf(stderr, "[MAPS] %s -> %s\n", p, cf); }
    else if (r == 2 && vfs_stat(full, &isd, &sz) != 0) { char alt[PATHMAX]; resolve_ci(cf, alt, sizeof alt); if (vfs_stat(alt, &isd, &sz) == 0) { fprintf(stderr, "[MAPS] %s -> %s\n", p, cf); snprintf(full, cap, "%s", alt); } } }

static int new_fd(FILE *f, void *d, const char *full){
    LOCK(); for (int i = 3; i < MAXFD; i++) if (!fds[i].used) { fds[i] = (fd_t){f, d, 1, {0}, 0}; snprintf(fds[i].path, sizeof fds[i].path, "%s", full); UNLOCK(); return i; }
    UNLOCK(); return -1; }
static fd_t *get_fd(int fd){ return fd >= 0 && fd < MAXFD && fds[fd].used ? &fds[fd] : 0; }

/* ======================================================================== rs_fs_* */
int rs_fs_open(const char *p, int mode){
    char full[PATHMAX]; unsigned lb = 0, lsz = 0; int rd = (mode & 3) == RS_FS_READ;
    if (sscanf(strip_dev(p), "/sce_lbn0x%x_size0x%x", &lb, &lsz) == 2 || sscanf(strip_dev(p), "sce_lbn0x%x_size0x%x", &lb, &lsz) == 2) {
        LOCK(); const char *lp = lbn_lookup(lb); if (lp) snprintf(full, sizeof full, "%s", lp); UNLOCK();
        if (!lp) { fprintf(stderr, "[IO] unknown raw sector open %s\n", p); return (int)ERR_NOENT; } }
    else resolve_ci(strip_dev(p), full, sizeof full);
    if (rd) {
        custom_map(p, full, sizeof full);
        const char *root = rs_game_root(); size_t rl = strlen(root); char mf[PATHMAX];
        const char *mrel = strncmp(full, root, rl) ? strip_dev(p) : full + rl;
        if (rs_mod_file(mrel, mf, sizeof mf)) { fprintf(stderr, "[MODS] %s -> %s\n", p, mf); snprintf(full, sizeof full, "%s", mf); }
        if (!vfs_iso_active()) { rl = strlen(root); const char *rel = strncmp(full, root, rl) ? strip_dev(p) : full + rl;
            const char *alt = rs_patch_file(rel, full); if (alt) snprintf(full, sizeof full, "%s", alt); } }
    const char *fm = rd ? "rb" : (((mode & 3) == RS_FS_WRITE && (mode & RS_FS_TRUNC)) ? "wb" : "r+b");
    if ((mode & RS_FS_CREATE) && !(mode & RS_FS_TRUNC) && !vfs_iso_active()) { FILE *t = fopen(full, "ab"); if (t) fclose(t); }
    FILE *f = vfs_fopen(full, fm); if (!f && (mode & 3) == RS_FS_RW) f = vfs_fopen(full, "rb");
    if (!f) { fprintf(stderr, "[IO] open FAILED %s\n", p); return (int)ERR_NOENT; }
    fprintf(stderr, "[IO] open %s\n", p); rs_atrac_note_file(full); rs_movie_note_file(full);
    { extern void rs_fx_file_opened(const char *) __attribute__((weak)); if (rs_fx_file_opened) rs_fx_file_opened(full); }   /* gfx_fx.c: map, lights, dumps */
    int fd = new_fd(f, 0, full); if (fd < 0) { fclose(f); return (int)ERR_MFILE; } return fd; }

int rs_fs_close(int fd){
    LOCK(); fd_t *e = get_fd(fd); if (e) { if (e->f) fclose(e->f); if (e->d) vfs_closedir(e->d); e->used = 0; } UNLOCK(); return 0; }

int64_t rs_fs_read(int fd, void *dst, size_t n){
    fd_t *e = get_fd(fd); if (!e || !e->f) return (int32_t)ERR_BADF;
    long pos = ftell(e->f);
    rs_guest_unlock(); size_t got = fread(dst, 1, n, e->f); rs_guest_lock();
    if (got >= 512) rs_atrac_note_read(e->path, pos, (u32)got);    /* a sound read out of a bundle (GMSND.AM speech) */
#ifdef RS_CENSUS
    { extern u32 *rs_census_shadow; u32 a = GA(dst); if (rs_census_shadow) for (u32 o = 0; o < got && a + o < 0x10000000u; o += 4) rs_census_shadow[(a + o) >> 2] = 1; }
#endif
    return (int64_t)got; }

int64_t rs_fs_write(int fd, const void *src, size_t n){
    if (fd == 1 || fd == 2) return (int64_t)fwrite(src, 1, n, stderr);
    fd_t *e = get_fd(fd); if (!e || !e->f) return (int32_t)ERR_BADF;
    rs_guest_unlock(); size_t put = fwrite(src, 1, n, e->f); rs_guest_lock(); return (int64_t)put; }

int64_t rs_fs_seek(int fd, int64_t off, int whence){
    fd_t *e = get_fd(fd); if (!e || !e->f) return -1;
    fseeko(e->f, (off_t)off, whence); return (int64_t)ftello(e->f); }

int rs_fs_stat(const char *p, rs_fs_stat_t *st){
    char full[PATHMAX]; int isdir; unsigned sz;
    resolve_ci(strip_dev(p), full, sizeof full); custom_map(p, full, sizeof full); mod_redirect(full, sizeof full);
    if (vfs_stat(full, &isdir, &sz) != 0) { fprintf(stderr, "[IO] getstat MISSING %s\n", p); return -1; }
    st->is_dir = isdir; st->size = isdir ? sz : eff_size(full, (u32)sz);
    LOCK(); st->sector = isdir ? 0 : lbn_for(full, (u32)st->size); UNLOCK(); return 0; }

int rs_fs_opendir(const char *p){
    char full[PATHMAX]; resolve_ci(strip_dev(p), full, sizeof full); void *d = vfs_opendir(full);
    if (!d) { fprintf(stderr, "[IO] dopen FAILED %s\n", p); return (int)ERR_NOENT; }
    int fd = new_fd(0, d, full); if (fd < 0) { vfs_closedir(d); return (int)ERR_MFILE; } return fd; }

int rs_fs_readdir(int fd, char *name, size_t cap, rs_fs_stat_t *st){
    fd_t *e = get_fd(fd); if (!e || !e->d) return (int)ERR_BADF;
    char full[2000];
    if (!vfs_readdir(e->d, name, cap, full, sizeof full)) {
        if (!rs_custom_map_dirent(e->path, e->extra, name, cap, full, sizeof full)) return 0;   /* custom maps after the folder's own */
        e->extra++; }
    mod_redirect(full, sizeof full);
    int isdir = 0; unsigned sz = 0; vfs_stat(full, &isdir, &sz);
    st->is_dir = isdir; st->size = isdir ? 0 : eff_size(full, (u32)sz);
    LOCK(); st->sector = isdir ? 0 : lbn_for(full, (u32)st->size); UNLOCK(); return 1; }

int rs_fs_mkdir(const char *p){
    if (vfs_iso_active() && !strncmp(p, "disc0:", 6)) return -1;
    char full[PATHMAX]; resolve_ci(strip_dev(p), full, sizeof full);
#ifdef _WIN32
    int r = mkdir(full);
#else
    int r = mkdir(full, 0777);
#endif
    struct stat st; return r == 0 || (stat(full, &st) == 0 && S_ISDIR(st.st_mode)) ? 0 : -1;      /* an existing folder: done (as before) */
}

/* ======================================================================== the game's file calls (PSP IoFileMgr ABI) -> rs_fs_* */
static inline void *GPA(u32 a){ return g_mem + GADDR(a); }    /* a game address as the firmware calls get it */
static const char *gs(u32 a){ return (const char *)GPA(a); }
static void put_stat(u32 dst, const rs_fs_stat_t *st){            /* SceIoStat: mode, attr, size (64-bit), times, private[0] = sector */
    u8 *p = (u8 *)GPA(dst); memset(p, 0, 0x58); u32 m = st->is_dir ? 0x1000 : 0x2000; memcpy(p, &m, 4);
    if (!st->is_dir || st->size) { u32 lo = (u32)st->size, hi = (u32)(st->size >> 32); memcpy(p + 8, &lo, 4); memcpy(p + 12, &hi, 4); }
    if (!st->is_dir) memcpy(p + 0x40, &st->sector, 4); }

u32 psp_sceIoOpen(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3){ (void)a2; (void)a3; (void)t0; (void)t1; (void)t2; (void)t3;
    int m = (int)(a1 & 3) | ((a1 & 0x100) ? RS_FS_APPEND : 0) | ((a1 & 0x200) ? RS_FS_CREATE : 0) | ((a1 & 0x400) ? RS_FS_TRUNC : 0);
    return (u32)rs_fs_open(gs(a0), m); }
u32 psp_sceIoClose(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3){ (void)a1; (void)a2; (void)a3; (void)t0; (void)t1; (void)t2; (void)t3; return (u32)rs_fs_close((int)a0); }
u32 psp_sceIoDclose(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3){ (void)a1; (void)a2; (void)a3; (void)t0; (void)t1; (void)t2; (void)t3; return (u32)rs_fs_close((int)a0); }
u32 psp_sceIoRead(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3){ (void)a3; (void)t0; (void)t1; (void)t2; (void)t3; return (u32)rs_fs_read((int)a0, GPA(a1), a2); }
u32 psp_sceIoWrite(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3){ (void)a3; (void)t0; (void)t1; (void)t2; (void)t3; return (u32)rs_fs_write((int)a0, GPA(a1), a2); }
u64 psp_sceIoLseek(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3){ (void)a1; (void)t1; (void)t2; (void)t3;
    if (!get_fd((int)a0)) return (u64)0xFFFFFFFF00000000ull | ERR_BADF;
    int64_t off = (int64_t)(((u64)a3 << 32) | a2); return (u64)rs_fs_seek((int)a0, off, t0 == 0 ? SEEK_SET : (t0 == 1 ? SEEK_CUR : SEEK_END)); }
u32 psp_sceIoGetstat(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3){ (void)a2; (void)a3; (void)t0; (void)t1; (void)t2; (void)t3;
    rs_fs_stat_t st; if (rs_fs_stat(gs(a0), &st)) return ERR_NOENT; put_stat(a1, &st); return 0; }
u32 psp_sceIoDopen(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3){ (void)a1; (void)a2; (void)a3; (void)t0; (void)t1; (void)t2; (void)t3; return (u32)rs_fs_opendir(gs(a0)); }
u32 psp_sceIoDread(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3){ (void)a2; (void)a3; (void)t0; (void)t1; (void)t2; (void)t3;
    char name[256]; rs_fs_stat_t st; int r = rs_fs_readdir((int)a0, name, sizeof name, &st); if (r <= 0) return (u32)r;
    u8 *p = (u8 *)GPA(a1); memset(p, 0, 0x160); put_stat(a1, &st); if (st.is_dir) memset(p + 8, 0, 8);
    strncpy((char *)p + 0x58, name, 255); return 1; }
u32 psp_sceIoMkdir(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3){ (void)a1; (void)a2; (void)a3; (void)t0; (void)t1; (void)t2; (void)t3;
    return rs_fs_mkdir(gs(a0)) == 0 ? 0 : 0x80010011u; }

/* The disc: game data is always present (a folder or an image), so the drive reports a disc inserted and ready (0x32); the inserted
 * notification (sceUmdRegisterUMDCallBack) is delivered by the callback system (hle.c until threads are native). */
#define NOARGS(n) u32 psp_##n(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3){ (void)a0; (void)a1; (void)a2; (void)a3; (void)t0; (void)t1; (void)t2; (void)t3;
NOARGS(sceUmdCheckMedium) return 1; }
NOARGS(sceUmdActivate) return 0; }
NOARGS(sceUmdGetDriveStat) return 0x32; }
NOARGS(sceUmdWaitDriveStat) return 0x32; }
NOARGS(sceUmdWaitDriveStatCB) return 0x32; }
NOARGS(sceUmdGetErrorStat) return 0; }
NOARGS(sceUmdUnRegisterUMDCallBack) return 0; }
