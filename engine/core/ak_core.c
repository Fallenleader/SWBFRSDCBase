#include "ak_core.h"
#include "../platform/plat.h"
#include <stdarg.h>
#include <stdio.h>

void ak_log(ak_log_level lv, const char *tag, const char *fmt, ...)
{
    char line[1024];
    static const char *lvn[] = { "", "warning: ", "error: " };
    int n = snprintf(line, sizeof line, "[%s] %s", tag, lvn[lv]);
    va_list ap; va_start(ap, fmt);
    if (n >= 0 && (size_t)n < sizeof line) vsnprintf(line + n, sizeof line - (size_t)n, fmt, ap);
    va_end(ap);
    ak_plat_log_write(line);
}

bool ak_arena_init(ak_arena *a, size_t size)
{
    a->base = (u8 *)ak_plat_alloc(size, 64); a->size = a->base ? size : 0; a->used = a->peak = 0;
    return a->base != NULL;
}
void ak_arena_free(ak_arena *a) { ak_plat_free(a->base); memset(a, 0, sizeof *a); }
void *ak_arena_alloc(ak_arena *a, size_t size, size_t align)
{
    size_t p = AK_ALIGN_UP(a->used, align);
    if (AK_UNLIKELY(p + size > a->size)) { AK_ERROR("mem", "arena full (%zu of %zu, asked %zu)", a->used, a->size, size); return NULL; }
    a->used = p + size; if (a->used > a->peak) a->peak = a->used;
    return a->base + p;
}
void *ak_arena_zalloc(ak_arena *a, size_t size, size_t align)
{
    void *p = ak_arena_alloc(a, size, align);
    if (p) memset(p, 0, size);
    return p;
}

bool ak_file_read(const char *path, ak_arena *a, ak_blob *out)
{
    FILE *f = fopen(path, "rb");
    if (!f) { AK_ERROR("file", "cannot open %s", path); return false; }
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    out->data = n > 0 ? (u8 *)ak_arena_alloc(a, (size_t)n + 1, 64) : NULL; out->size = 0;
    if (out->data) { out->size = fread(out->data, 1, (size_t)n, f); out->data[out->size] = 0; }
    fclose(f);
    return out->data && out->size == (size_t)n;
}

u32 ak_hash_name(const char *s)
{
    u32 h = 2166136261u;
    for (; *s; s++) {
        u8 c = (u8)*s;
        if (c >= 'A' && c <= 'Z') c = (u8)(c + 32);
        if (c == '/') c = '\\';
        h = (h ^ c) * 16777619u;
    }
    return h;
}
