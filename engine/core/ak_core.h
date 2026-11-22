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
typedef enum { AK_LOG_INFO, AK_LOG_WARN, AK_LOG_ERROR, AK_LOG_VERBOSE } ak_log_level;
void ak_log(ak_log_level lv, const char *tag, const char *fmt, ...) AK_PRINTF(3, 4);
/* AK_LOG (settings.txt): 0 = no log at all (for frame-rate checks), 1 = the usual info / warnings / errors, 2 = everything
 * (AK_VERBOSE lines too: input, state changes, AI, vehicles, weapons, scripts, audio, per-second render stats), each line
 * stamped with the time.  ak_log_level_now() lets hot paths skip building a verbose line. */
extern int ak_log_setting;
void ak_log_set_level(int level);
static inline int ak_log_level_now(void) { return ak_log_setting; }
#define AK_VERBOSE(tag, ...) do { if (AK_UNLIKELY(ak_log_setting >= 2)) ak_log(AK_LOG_VERBOSE, tag, __VA_ARGS__); } while (0)
#define AK_INFO(tag, ...)  ak_log(AK_LOG_INFO, tag, __VA_ARGS__)
#define AK_WARN(tag, ...)  ak_log(AK_LOG_WARN, tag, __VA_ARGS__)
#define AK_ERROR(tag, ...) ak_log(AK_LOG_ERROR, tag, __VA_ARGS__)

/* ---- memory: a linear arena per lifetime (level, frame).  Freed as a whole; no per-object frees on hot paths. */
typedef struct ak_arena {
    u8 *base; size_t size, used; size_t peak; const char *name;
    size_t top;                        /* bytes taken from the end for short-lived scratch (ak_arena_alloc_top) */
} ak_arena;
bool  ak_arena_init_n(ak_arena *a, size_t size, const char *name);   /* backed by ak_plat_alloc */
#define ak_arena_init(a, size) ak_arena_init_n((a), (size), __FILE__ ":" #a)
void  ak_arena_report(void);                                 /* logs every live arena: its size and the most it has held */
void  ak_arena_free(ak_arena *a);
void *ak_arena_alloc(ak_arena *a, size_t size, size_t align); /* NULL when full */
void *ak_arena_zalloc(ak_arena *a, size_t size, size_t align);
static inline void ak_arena_reset(ak_arena *a) { a->used = 0; a->top = 0; }
/* short-lived scratch from the arena's end, freed in reverse order: mark = ak_arena_top_mark(a) before, ak_arena_top_release(a, mark)
 * after.  The arena's lasting allocations cannot reach it while it is held (load-time buffers that must not stay). */
void *ak_arena_alloc_top(ak_arena *a, size_t size, size_t align);
static inline size_t ak_arena_top_mark(const ak_arena *a) { return a->top; }
static inline void ak_arena_top_release(ak_arena *a, size_t mark) { a->top = mark; }
/* gives back the end of the arena's last allocation p (asked as `size`): it keeps `keep` bytes; nothing if p is not the last */
static inline void ak_arena_trim(ak_arena *a, void *p, size_t size, size_t keep) { if ((u8 *)p + size == a->base + a->used && keep <= size) a->used -= size - keep; }
char *ak_strndup(ak_arena *a, const char *s, size_t n);      /* up to n chars, 0-ended */
/* saved data (the profile, a galactic conquest): a file at `path` where the device has a writable file system; on the GameCube
 * (AK_HAS_MEMCARD) a file on the memory card in slot A or B named by `key` (up to 24 characters), `title` its description in the
 * console's memory card screen.  read: the bytes found (up to cap), -1 none. */
bool ak_save_write(const char *key, const char *path, const char *title, const void *data, u32 n);
s32  ak_save_read(const char *key, const char *path, void *buf, u32 cap);
bool ak_save_delete(const char *key, const char *path);
#define AK_NEW(a, T, n) ((T *)ak_arena_zalloc((a), sizeof(T) * (size_t)(n), _Alignof(T)))

/* ---- files: whole-file reads into an arena (level files are 8-12 MB; read once, parsed in place) */
typedef struct { u8 *data; size_t size; } ak_blob;
bool ak_file_read(const char *path, ak_arena *a, ak_blob *out);

/* ---- hashing (the game's resource names are matched case-insensitively) */
u32 ak_hash_name(const char *s);    /* FNV-1a over lower-cased bytes, '/' == '\\' */

/* AK_SMALL_MEMORY: the consoles with little memory (the GameCube's 24 MB) default to the memory-saving forms (settings can
 * switch each): sounds kept ADPCM (AK_AUDIO_ADPCM), level resources read from the disc one at a time (AK_LEVEL_STREAM). */
#if defined(__GAMECUBE__)
#define AK_SMALL_MEMORY 1
#define AK_HAS_ARAM 1                  /* sounds kept in the GameCube's audio memory */
#define AK_HAS_MEMCARD 1               /* saves on the memory card: no writable file system assumed (a disc, an SD card) */
#else
#define AK_SMALL_MEMORY 0
#ifdef AK_ARAM_TEST
#define AK_HAS_ARAM 1                  /* (tests: platform/null keeps a pretend ARAM) */
#endif
#endif

/* ---- little-endian reads from unaligned data (all game files are little endian).  Big-endian devices (Wii U, GameCube) swap;
 * the little-endian ones compile these to plain loads.  AK_BIG_ENDIAN: values in memory read from the files must be swapped. */
#if defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
#define AK_BIG_ENDIAN 1
static inline u16 ak_le16(u16 v) { return __builtin_bswap16(v); }
static inline u32 ak_le32(u32 v) { return __builtin_bswap32(v); }
#else
#define AK_BIG_ENDIAN 0
static inline u16 ak_le16(u16 v) { return v; }
static inline u32 ak_le32(u32 v) { return v; }
#endif
static inline u16 ak_rd16(const u8 *p) { u16 v; memcpy(&v, p, 2); return ak_le16(v); }
static inline u32 ak_rd32(const u8 *p) { u32 v; memcpy(&v, p, 4); return ak_le32(v); }
static inline f32 ak_rdf32(const u8 *p) { u32 v; memcpy(&v, p, 4); v = ak_le32(v); f32 f; memcpy(&f, &v, 4); return f; }
/* little-endian writes (the profile save, written back in the game's own layout) */
static inline void ak_wr16(u8 *p, u16 v) { v = ak_le16(v); memcpy(p, &v, 2); }
static inline void ak_wr32(u8 *p, u32 v) { v = ak_le32(v); memcpy(p, &v, 4); }

/* MD5 (RFC 1321): the game's profile save carries one over its data (08831CE8) */
void ak_local_date(int *month, int *day);   /* today on the device's clock: month 1..12, day 1..31 (0 0 unknown) */
void ak_md5(const void *data, size_t n, u8 out[16]);

#endif
