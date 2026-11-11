/* Native engine core: basic types, logging, memory arenas, file access.
 * Device independent; every device's platform layer (engine/platform/<device>) supplies what plat.h declares. */
#ifndef RS_CORE_H
#define RS_CORE_H
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

typedef uint8_t  u8;  typedef int8_t  s8;
typedef uint16_t u16; typedef int16_t s16;
typedef uint32_t u32; typedef int32_t s32;
typedef uint64_t u64; typedef int64_t s64;
typedef float f32;

#define RS_ARRAY_LEN(a) (sizeof(a) / sizeof((a)[0]))
#define RS_ALIGN_UP(x, a) (((x) + ((a) - 1)) & ~(size_t)((a) - 1))
#if defined(__GNUC__) || defined(__clang__)
#define RS_LIKELY(x) __builtin_expect(!!(x), 1)
#define RS_UNLIKELY(x) __builtin_expect(!!(x), 0)
#define RS_PRINTF(a, b) __attribute__((format(printf, a, b)))
#else
#define RS_LIKELY(x) (x)
#define RS_UNLIKELY(x) (x)
#define RS_PRINTF(a, b)
#endif

/* ---- logging */
typedef enum { RS_LOG_INFO, RS_LOG_WARN, RS_LOG_ERROR } rs_log_level;
void rs_log(rs_log_level lv, const char *tag, const char *fmt, ...) RS_PRINTF(3, 4);
#define RS_INFO(tag, ...)  rs_log(RS_LOG_INFO, tag, __VA_ARGS__)
#define RS_WARN(tag, ...)  rs_log(RS_LOG_WARN, tag, __VA_ARGS__)
#define RS_ERROR(tag, ...) rs_log(RS_LOG_ERROR, tag, __VA_ARGS__)

/* ---- memory: a linear arena per lifetime (level, frame).  Freed as a whole; no per-object frees on hot paths. */
typedef struct rs_arena {
    u8 *base; size_t size, used; size_t peak;
} rs_arena;
bool  rs_arena_init(rs_arena *a, size_t size);              /* backed by rs_plat_alloc */
void  rs_arena_free(rs_arena *a);
void *rs_arena_alloc(rs_arena *a, size_t size, size_t align); /* NULL when full */
void *rs_arena_zalloc(rs_arena *a, size_t size, size_t align);
static inline void rs_arena_reset(rs_arena *a) { a->used = 0; }
#define RS_NEW(a, T, n) ((T *)rs_arena_zalloc((a), sizeof(T) * (size_t)(n), _Alignof(T)))

/* ---- files: whole-file reads into an arena (level files are 8-12 MB; read once, parsed in place) */
typedef struct { u8 *data; size_t size; } rs_blob;
bool rs_file_read(const char *path, rs_arena *a, rs_blob *out);

/* ---- hashing (the game's resource names are matched case-insensitively) */
u32 rs_hash_name(const char *s);    /* FNV-1a over lower-cased bytes, '/' == '\\' */

/* ---- little-endian reads from unaligned data (all game files are little endian) */
static inline u16 rs_rd16(const u8 *p) { u16 v; memcpy(&v, p, 2); return v; }
static inline u32 rs_rd32(const u8 *p) { u32 v; memcpy(&v, p, 4); return v; }
static inline f32 rs_rdf32(const u8 *p) { f32 v; memcpy(&v, p, 4); return v; }

#endif
