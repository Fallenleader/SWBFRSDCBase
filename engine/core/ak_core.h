/* Native engine core: basic types, logging, memory arenas, file access.
 * Device independent; every device's platform layer (engine/platform/<device>) supplies what plat.h declares. */
#ifndef AK_CORE_H
#define AK_CORE_H
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

typedef uint8_t  u8;  typedef int8_t  s8;
typedef uint16_t u16; typedef int16_t s16;
typedef uint32_t u32; typedef int32_t s32;
typedef uint64_t u64; typedef int64_t s64;
typedef float f32;

#define AK_ARRAY_LEN(a) (sizeof(a) / sizeof((a)[0]))
#define AK_ALIGN_UP(x, a) (((x) + ((a) - 1)) & ~(size_t)((a) - 1))
#if defined(__GNUC__) || defined(__clang__)
#define AK_LIKELY(x) __builtin_expect(!!(x), 1)
#define AK_UNLIKELY(x) __builtin_expect(!!(x), 0)
#define AK_PRINTF(a, b) __attribute__((format(printf, a, b)))
#else
#define AK_LIKELY(x) (x)
#define AK_UNLIKELY(x) (x)
#define AK_PRINTF(a, b)
#endif

/* ---- logging */
typedef enum { AK_LOG_INFO, AK_LOG_WARN, AK_LOG_ERROR } ak_log_level;
void ak_log(ak_log_level lv, const char *tag, const char *fmt, ...) AK_PRINTF(3, 4);
#define AK_INFO(tag, ...)  ak_log(AK_LOG_INFO, tag, __VA_ARGS__)
#define AK_WARN(tag, ...)  ak_log(AK_LOG_WARN, tag, __VA_ARGS__)
#define AK_ERROR(tag, ...) ak_log(AK_LOG_ERROR, tag, __VA_ARGS__)

/* ---- memory: a linear arena per lifetime (level, frame).  Freed as a whole; no per-object frees on hot paths. */
typedef struct ak_arena {
    u8 *base; size_t size, used; size_t peak;
} ak_arena;
bool  ak_arena_init(ak_arena *a, size_t size);              /* backed by ak_plat_alloc */
void  ak_arena_free(ak_arena *a);
void *ak_arena_alloc(ak_arena *a, size_t size, size_t align); /* NULL when full */
void *ak_arena_zalloc(ak_arena *a, size_t size, size_t align);
static inline void ak_arena_reset(ak_arena *a) { a->used = 0; }
#define AK_NEW(a, T, n) ((T *)ak_arena_zalloc((a), sizeof(T) * (size_t)(n), _Alignof(T)))

/* ---- files: whole-file reads into an arena (level files are 8-12 MB; read once, parsed in place) */
typedef struct { u8 *data; size_t size; } ak_blob;
bool ak_file_read(const char *path, ak_arena *a, ak_blob *out);

/* ---- hashing (the game's resource names are matched case-insensitively) */
u32 ak_hash_name(const char *s);    /* FNV-1a over lower-cased bytes, '/' == '\\' */

/* ---- little-endian reads from unaligned data (all game files are little endian) */
static inline u16 ak_rd16(const u8 *p) { u16 v; memcpy(&v, p, 2); return v; }
static inline u32 ak_rd32(const u8 *p) { u32 v; memcpy(&v, p, 4); return v; }
static inline f32 ak_rdf32(const u8 *p) { f32 v; memcpy(&v, p, 4); return v; }

#endif
