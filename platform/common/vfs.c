/* Game files from an ISO image (ISO 9660, as UMD images are) instead of an extracted folder.
 *
 * The SDK layer (hle.c) names files by host path.  When an ISO is mounted, paths inside it are "iso:/PSP_GAME/..." (the names as
 * stored in the image), and vfs_fopen() returns an ordinary FILE * over the file's byte range in the image (fopencookie), so every
 * reader (hle.c, the ATRAC decoder in audio.c) works unchanged.  Read-only. */
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/stat.h>
#include <dirent.h>
#include "psp_impl.h"
#include "vfs.h"

typedef struct inode { char name[64]; u32 lbn, size; int isdir, nkids; struct inode *kids; } inode_t;
static inode_t iso_root; static char iso_path[512]; static int iso_on;

static u32 rd32(const u8 *p){ return (u32)p[0] | ((u32)p[1] << 8) | ((u32)p[2] << 16) | ((u32)p[3] << 24); }
static int read_dir(FILE *f, inode_t *dir, int depth){
    if (depth > 16) return -1;
    u8 *buf = malloc(dir->size ? dir->size : 2048); if (!buf) return -1;
    if (fseeko(f, (off_t)dir->lbn * 2048, SEEK_SET) || fread(buf, 1, dir->size, f) != dir->size) { free(buf); return -1; }
    int cap = 0;
    for (u32 p = 0; p < dir->size; ) {
        u32 len = buf[p];
        if (!len) { p = (p / 2048 + 1) * 2048; continue; }                      /* records never cross a sector: rest of the sector is padding */
        if (p + 33 > dir->size || p + len > dir->size) break;
        const u8 *r = buf + p; u32 nl = r[32];
        if (nl == 1 && (r[33] == 0 || r[33] == 1)) { p += len; continue; }     /* "." and ".." */
        if (dir->nkids == cap) { cap = cap ? cap * 2 : 16; inode_t *k = realloc(dir->kids, sizeof *k * (size_t)cap); if (!k) break; dir->kids = k; }
        inode_t *n = &dir->kids[dir->nkids++]; memset(n, 0, sizeof *n);
        if (nl > sizeof n->name - 1) nl = sizeof n->name - 1;
        memcpy(n->name, r + 33, nl); n->name[nl] = 0;
        char *semi = strchr(n->name, ';'); if (semi) *semi = 0;                  /* "FILE.EXT;1" */
        size_t l = strlen(n->name); if (l && n->name[l - 1] == '.') n->name[l - 1] = 0;
        n->lbn = rd32(r + 2); n->size = rd32(r + 10); n->isdir = (r[25] & 2) != 0;
        p += len; }
    free(buf);
    for (int i = 0; i < dir->nkids; i++) if (dir->kids[i].isdir) read_dir(f, &dir->kids[i], depth + 1);
    return 0; }

int vfs_iso_mount(const char *path){
    FILE *f = fopen(path, "rb"); if (!f) return -1;
    u8 pvd[2048];
    if (fseeko(f, 16 * 2048, SEEK_SET) || fread(pvd, 1, sizeof pvd, f) != sizeof pvd || pvd[0] != 1 || memcmp(pvd + 1, "CD001", 5)) {
        fprintf(stderr, "[VFS] %s is not an ISO 9660 image\n", path); fclose(f); return -1; }
    memset(&iso_root, 0, sizeof iso_root); iso_root.isdir = 1; iso_root.lbn = rd32(pvd + 156 + 2); iso_root.size = rd32(pvd + 156 + 10);
    int r = read_dir(f, &iso_root, 0); fclose(f);
    if (r) { fprintf(stderr, "[VFS] cannot read the directories of %s\n", path); return -1; }
    snprintf(iso_path, sizeof iso_path, "%s", path); iso_on = 1;
    fprintf(stderr, "[VFS] game files from the ISO image %s\n", path);
    return 0; }
int vfs_iso_active(void){ return iso_on; }

/* "iso:/A/B" or a relative path inside the image -> node (names compared without case) */
static const inode_t *find(const char *path){
    if (!strncmp(path, "iso:", 4)) path += 4;
    const inode_t *n = &iso_root; char tok[128];
    while (*path) {
        while (*path == '/' || *path == '\\') path++;
        if (!*path) break;
        size_t l = strcspn(path, "/\\"); if (l >= sizeof tok) return 0;
        memcpy(tok, path, l); tok[l] = 0; path += l;
        if (!strcmp(tok, ".")) continue;
        const inode_t *k = 0; for (int i = 0; i < n->nkids; i++) if (!strcasecmp(n->kids[i].name, tok)) { k = &n->kids[i]; break; }
        if (!k) return 0; n = k; }
    return n; }
int vfs_iso_resolve(const char *rel, char *out, size_t cap){
    const inode_t *n = find(rel); if (!n) { snprintf(out, cap, "iso:/%s", rel); return 0; }
    /* rebuild the path with the names as stored (the caller compares paths as strings) */
    char tmp[1024] = ""; const char *p = rel; const inode_t *d = &iso_root; char tok[128];
    while (*p) { while (*p == '/' || *p == '\\') p++; if (!*p) break; size_t l = strcspn(p, "/\\"); if (l >= sizeof tok) break; memcpy(tok, p, l); tok[l] = 0; p += l;
        if (!strcmp(tok, ".")) continue;
        for (int i = 0; i < d->nkids; i++) if (!strcasecmp(d->kids[i].name, tok)) { d = &d->kids[i]; break; }
        strncat(tmp, "/", sizeof tmp - strlen(tmp) - 1); strncat(tmp, d->name, sizeof tmp - strlen(tmp) - 1); }
    snprintf(out, cap, "iso:%s", tmp[0] ? tmp : "/"); return 1; }
int vfs_stat(const char *full, int *isdir, unsigned *size){
    if (!strncmp(full, "iso:", 4)) { const inode_t *n = find(full); if (!n) return -1; *isdir = n->isdir; *size = n->isdir ? 2048 : n->size; return 0; }
    struct stat st; if (stat(full, &st)) return -1; *isdir = S_ISDIR(st.st_mode) ? 1 : 0; *size = (u32)st.st_size; return 0; }

/* a file inside the image as a FILE * */
#ifdef __vita__
typedef off_t vfs_off_t;                         /* newlib's cookie seek takes off_t */
#else
typedef off64_t vfs_off_t;
#endif
typedef struct { FILE *iso; u64 base; u32 size; s64 pos; } isof_t;
static ssize_t ck_read(void *c, char *buf, size_t n){
    isof_t *f = c; if (f->pos >= f->size) return 0; if ((u64)f->pos + n > f->size) n = (size_t)(f->size - f->pos);
    if (fseeko(f->iso, (off_t)(f->base + (u64)f->pos), SEEK_SET)) return -1;
    size_t r = fread(buf, 1, n, f->iso); f->pos += (s64)r; return (ssize_t)r; }
static int ck_seek(void *c, vfs_off_t *off, int wh){
    isof_t *f = c; s64 p = wh == SEEK_SET ? *off : (wh == SEEK_CUR ? f->pos + *off : (s64)f->size + *off);
    if (p < 0) return -1; f->pos = p; *off = p; return 0; }
static int ck_close(void *c){ isof_t *f = c; fclose(f->iso); free(f); return 0; }
FILE *vfs_fopen(const char *full, const char *mode){
    if (strncmp(full, "iso:", 4)) return fopen(full, mode);
    if (mode[0] != 'r' || strchr(mode, '+')) return 0;                         /* the image is read-only */
    const inode_t *n = find(full); if (!n || n->isdir) return 0;
    isof_t *f = calloc(1, sizeof *f); if (!f) return 0;
    f->iso = fopen(iso_path, "rb"); if (!f->iso) { free(f); return 0; }
    setvbuf(f->iso, NULL, _IOFBF, 64 * 1024);
    f->base = (u64)n->lbn * 2048; f->size = n->size;
    cookie_io_functions_t io = {ck_read, 0, ck_seek, ck_close};
    FILE *r = fopencookie(f, "rb", io); if (!r) { ck_close(f); return 0; }
    return r; }

/* directory listing */
typedef struct { const inode_t *n; DIR *d; int i; char base[1024]; } vdir_t;
void *vfs_opendir(const char *full){
    vdir_t *v = calloc(1, sizeof *v); if (!v) return 0;
    if (!strncmp(full, "iso:", 4)) { v->n = find(full); if (!v->n || !v->n->isdir) { free(v); return 0; } }
    else { v->d = opendir(full); if (!v->d) { free(v); return 0; } }
    snprintf(v->base, sizeof v->base, "%s", full); return v; }
int vfs_readdir(void *dp, char *name, size_t cap, char *full, size_t fcap){
    vdir_t *v = dp;
    if (v->n) { if (v->i >= v->n->nkids) return 0; const inode_t *k = &v->n->kids[v->i++];
        snprintf(name, cap, "%s", k->name); snprintf(full, fcap, "%s/%s", v->base, k->name); return 1; }
    struct dirent *e; while ((e = readdir(v->d)) && (!strcmp(e->d_name, ".") || !strcmp(e->d_name, ".."))) ;
    if (!e) return 0; snprintf(name, cap, "%s", e->d_name); snprintf(full, fcap, "%s/%s", v->base, e->d_name); return 1; }
void vfs_closedir(void *dp){ vdir_t *v = dp; if (!v) return; if (v->d) closedir(v->d); free(v); }
