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

/* ---- MD5 (RFC 1321) */
static u32 md5_rol(u32 x, int c) { return (x << c) | (x >> (32 - c)); }
static void md5_block(u32 h[4], const u8 *b)
{
    static const u32 K[64] = {
        0xd76aa478,0xe8c7b756,0x242070db,0xc1bdceee,0xf57c0faf,0x4787c62a,0xa8304613,0xfd469501,0x698098d8,0x8b44f7af,0xffff5bb1,0x895cd7be,
        0x6b901122,0xfd987193,0xa679438e,0x49b40821,0xf61e2562,0xc040b340,0x265e5a51,0xe9b6c7aa,0xd62f105d,0x02441453,0xd8a1e681,0xe7d3fbc8,
        0x21e1cde6,0xc33707d6,0xf4d50d87,0x455a14ed,0xa9e3e905,0xfcefa3f8,0x676f02d9,0x8d2a4c8a,0xfffa3942,0x8771f681,0x6d9d6122,0xfde5380c,
        0xa4beea44,0x4bdecfa9,0xf6bb4b60,0xbebfbc70,0x289b7ec6,0xeaa127fa,0xd4ef3085,0x04881d05,0xd9d4d039,0xe6db99e5,0x1fa27cf8,0xc4ac5665,
        0xf4292244,0x432aff97,0xab9423a7,0xfc93a039,0x655b59c3,0x8f0ccc92,0xffeff47d,0x85845dd1,0x6fa87e4f,0xfe2ce6e0,0xa3014314,0x4e0811a1,
        0xf7537e82,0xbd3af235,0x2ad7d2bb,0xeb86d391 };
    static const int R[64] = { 7,12,17,22,7,12,17,22,7,12,17,22,7,12,17,22, 5,9,14,20,5,9,14,20,5,9,14,20,5,9,14,20,
                               4,11,16,23,4,11,16,23,4,11,16,23,4,11,16,23, 6,10,15,21,6,10,15,21,6,10,15,21,6,10,15,21 };
    u32 w[16]; for (int i = 0; i < 16; i++) w[i] = (u32)b[4 * i] | (u32)b[4 * i + 1] << 8 | (u32)b[4 * i + 2] << 16 | (u32)b[4 * i + 3] << 24;
    u32 a = h[0], bb = h[1], c = h[2], d = h[3];
    for (int i = 0; i < 64; i++) {
        u32 f; int g;
        if (i < 16) { f = (bb & c) | (~bb & d); g = i; }
        else if (i < 32) { f = (d & bb) | (~d & c); g = (5 * i + 1) & 15; }
        else if (i < 48) { f = bb ^ c ^ d; g = (3 * i + 5) & 15; }
        else { f = c ^ (bb | ~d); g = (7 * i) & 15; }
        u32 t = d; d = c; c = bb; bb = bb + md5_rol(a + f + K[i] + w[g], R[i]); a = t;
    }
    h[0] += a; h[1] += bb; h[2] += c; h[3] += d;
}
void ak_md5(const void *data, size_t n, u8 out[16])
{
    u32 h[4] = { 0x67452301, 0xefcdab89, 0x98badcfe, 0x10325476 };
    const u8 *p = (const u8 *)data; size_t left = n; u8 tail[128];
    while (left >= 64) { md5_block(h, p); p += 64; left -= 64; }
    memset(tail, 0, sizeof tail); memcpy(tail, p, left); tail[left] = 0x80;
    size_t tl = left + 1 + 8 <= 64 ? 64 : 128; u64 bits = (u64)n * 8;
    for (int i = 0; i < 8; i++) tail[tl - 8 + i] = (u8)(bits >> (8 * i));
    md5_block(h, tail); if (tl == 128) md5_block(h, tail + 64);
    for (int i = 0; i < 4; i++) for (int j = 0; j < 4; j++) out[4 * i + j] = (u8)(h[i] >> (8 * j));
}

#include <time.h>
void ak_local_date(int *month, int *day)
{
    time_t now = time(NULL); struct tm *lt = localtime(&now);
    *month = lt ? lt->tm_mon + 1 : 0; *day = lt ? lt->tm_mday : 0;
}
