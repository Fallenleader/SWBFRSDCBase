#include "ak_vfs.h"
#include "../platform/plat.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <dirent.h>
#include <sys/stat.h>

/* ISO 9660: 2048-byte sectors, primary volume descriptor at sector 16, root directory record at +156.
 * Directory record: u8 length, u8 ext, u32le extent, u32be, u32le size, u32be, 7 date, u8 flags (2 = dir), ..., u8 name length @32, name @33. */
struct ak_vfs {
    FILE *iso; char dir[512]; char desc[600];
    u32 root_lba, root_size;
};

static bool iso_read(ak_vfs *v, u32 lba, u32 off, void *dst, u32 n)
{
    if (fseek(v->iso, (long)lba * 2048 + (long)off, SEEK_SET) != 0) return false;
    return fread(dst, 1, n, v->iso) == n;
}

static bool name_eq(const u8 *iso_name, u32 len, const char *want, size_t wl)
{
    for (u32 i = 0; i < len; i++) if (iso_name[i] == ';') { len = i; break; }   /* ";1" version */
    if (len && iso_name[len - 1] == '.') len--;                                 /* "NAME." (no extension) */
    if (len != wl) return false;
    for (u32 i = 0; i < len; i++) if (toupper(iso_name[i]) != toupper((u8)want[i])) return false;
    return true;
}

/* find one path component in a directory extent */
static bool iso_find(ak_vfs *v, u32 lba, u32 size, const char *name, size_t nl, u32 *olba, u32 *osize, bool *isdir)
{
    u8 sec[2048];
    for (u32 s = 0; s * 2048 < size; s++) {
        if (!iso_read(v, lba + s, 0, sec, 2048)) return false;
        for (u32 p = 0; p < 2048;) {
            u8 len = sec[p];
            if (len == 0) break;                               /* records never cross sectors: rest of this sector is padding */
            if (p + len > 2048 || len < 34) break;
            u8 nlen = sec[p + 32];
            if (nlen && !(nlen == 1 && sec[p + 33] <= 1) && name_eq(sec + p + 33, nlen, name, nl)) {
                *olba = ak_rd32(sec + p + 2); *osize = ak_rd32(sec + p + 10); *isdir = (sec[p + 25] & 2) != 0;
                return true;
            }
            p += len;
        }
    }
    return false;
}

static bool iso_lookup(ak_vfs *v, const char *path, u32 *lba, u32 *size, bool *isdir)
{
    *lba = v->root_lba; *size = v->root_size; *isdir = true;
    while (*path == '/') path++;
    while (*path) {
        const char *e = strchr(path, '/'); size_t n = e ? (size_t)(e - path) : strlen(path);
        if (!*isdir || !iso_find(v, *lba, *size, path, n, lba, size, isdir)) return false;
        path += n; while (*path == '/') path++;
    }
    return true;
}

static bool file_exists(const char *p) { struct stat st; return stat(p, &st) == 0; }

ak_vfs *ak_vfs_open(const char *const *dirs, int n)
{
    ak_vfs *v = (ak_vfs *)calloc(1, sizeof *v);
    if (!v) return NULL;
    for (int i = 0; i < n; i++) {
        char p[600];
        snprintf(p, sizeof p, "%s/game.iso", dirs[i]);
        FILE *f = fopen(p, "rb");
        if (f) {
            v->iso = f; u8 pvd[2048];
            if (iso_read(v, 16, 0, pvd, 2048) && pvd[0] == 1 && !memcmp(pvd + 1, "CD001", 5)) {
                v->root_lba = ak_rd32(pvd + 156 + 2); v->root_size = ak_rd32(pvd + 156 + 10);
                snprintf(v->desc, sizeof v->desc, "game.iso in %s", dirs[i]);
                return v;
            }
            fclose(f); v->iso = NULL;
            AK_WARN("vfs", "%s is not an ISO 9660 image", p);
        }
        snprintf(p, sizeof p, "%s/GAME/PSP_GAME", dirs[i]);
        if (file_exists(p)) {
            snprintf(v->dir, sizeof v->dir, "%s/GAME", dirs[i]);
            snprintf(v->desc, sizeof v->desc, "extracted files in %s", v->dir);
            return v;
        }
    }
    free(v);
    return NULL;
}

void ak_vfs_close(ak_vfs *v) { if (v) { if (v->iso) fclose(v->iso); free(v); } }
const char *ak_vfs_describe(const ak_vfs *v) { return v->desc; }

/* extracted files: the folder may not keep the disc's case (Windows copies, FAT on the Vita are case-insensitive anyway; Linux is not),
 * so each component is matched case-insensitively */
static bool dir_resolve(const char *root, const char *path, char *out, size_t on)
{
    snprintf(out, on, "%s", root);
    while (*path == '/') path++;
    while (*path) {
        const char *e = strchr(path, '/'); size_t n = e ? (size_t)(e - path) : strlen(path);
        size_t ol = strlen(out); snprintf(out + ol, on - ol, "/%.*s", (int)n, path);
        if (!file_exists(out)) {
            out[ol] = 0; DIR *d = opendir(out); bool found = false;
            if (d) {
                struct dirent *de;
                while ((de = readdir(d))) if (strlen(de->d_name) == n && name_eq((const u8 *)de->d_name, (u32)n, path, n)) {
                    snprintf(out + ol, on - ol, "/%s", de->d_name); found = true; break;
                }
                closedir(d);
            }
            if (!found) return false;
        }
        path += n; while (*path == '/') path++;
    }
    return true;
}

bool ak_vfs_read(ak_vfs *v, const char *path, ak_arena *a, ak_blob *out)
{
    if (v->iso) {
        u32 lba, size; bool isdir;
        if (!iso_lookup(v, path, &lba, &size, &isdir) || isdir) { AK_ERROR("vfs", "%s: not on the disc", path); return false; }
        out->data = (u8 *)ak_arena_alloc(a, (size_t)size + 1, 64); out->size = size;
        if (!out->data || !iso_read(v, lba, 0, out->data, size)) return false;
        out->data[size] = 0;
        return true;
    }
    char p[1024];
    if (!dir_resolve(v->dir, path, p, sizeof p)) { AK_ERROR("vfs", "%s: not found in %s", path, v->dir); return false; }
    return ak_file_read(p, a, out);
}

static int name_cmp(const void *x, const void *y) { return strcmp(*(const char *const *)x, *(const char *const *)y); }

int ak_vfs_list(ak_vfs *v, const char *dir, ak_arena *a, const char ***names)
{
    int cap = 256, n = 0;
    const char **list = AK_NEW(a, const char *, cap);
    if (!list) return 0;
    if (v->iso) {
        u32 lba, size; bool isdir; u8 sec[2048];
        if (!iso_lookup(v, dir, &lba, &size, &isdir) || !isdir) return 0;
        for (u32 s = 0; s * 2048 < size; s++) {
            if (!iso_read(v, lba + s, 0, sec, 2048)) break;
            for (u32 p = 0; p < 2048 && sec[p] >= 34 && p + sec[p] <= 2048; p += sec[p]) {
                u8 nlen = sec[p + 32];
                if ((sec[p + 25] & 2) || !nlen || n >= cap) continue;
                char *s2 = (char *)ak_arena_alloc(a, nlen + 1u, 1);
                if (!s2) break;
                u32 k = 0;
                for (; k < nlen && sec[p + 33 + k] != ';'; k++) s2[k] = (char)sec[p + 33 + k];
                s2[k] = 0; list[n++] = s2;
            }
        }
    } else {
        char p[1024];
        if (!dir_resolve(v->dir, dir, p, sizeof p)) return 0;
        DIR *d = opendir(p);
        if (!d) return 0;
        struct dirent *de;
        while ((de = readdir(d)) && n < cap) {
            if (de->d_name[0] == '.') continue;
            char fp[1300]; snprintf(fp, sizeof fp, "%s/%s", p, de->d_name);
            struct stat st;
            if (stat(fp, &st) != 0 || S_ISDIR(st.st_mode)) continue;
            size_t l = strlen(de->d_name); char *s2 = (char *)ak_arena_alloc(a, l + 1, 1);
            if (!s2) break;
            for (size_t k = 0; k <= l; k++) s2[k] = (char)toupper((u8)de->d_name[k]);
            list[n++] = s2;
        }
        closedir(d);
    }
    qsort(list, (size_t)n, sizeof *list, name_cmp);
    *names = list;
    return n;
}
