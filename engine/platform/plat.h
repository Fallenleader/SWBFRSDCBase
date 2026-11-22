/* The interface every device implements (engine/platform/<device>/).  Only what the engine needs, in the engine's terms:
 * no PSP firmware concepts.  Grows milestone by milestone (window/present and the gfx back end at 1.2, input at 1.5, audio at 1.9). */
#ifndef AK_PLAT_H
#define AK_PLAT_H
#include "../core/ak_core.h"

/* memory: large allocations (arenas, GPU-visible memory comes from the gfx back end) */
void *ak_plat_alloc(size_t size, size_t align);
void  ak_plat_free(void *p);

/* time */
u64  ak_plat_time_us(void);              /* monotonic */
void ak_plat_sleep_us(u64 us);

/* cores and threads.  The job system starts one worker per core the device offers to the game:
 * Vita 3 (+1 with CapUnlocker), Old 3DS 1-2, New 3DS 2-4, PC/Deck/PS4/PS5 all but one. */
typedef struct ak_thread ak_thread;
typedef void (*ak_thread_fn)(void *arg);
int        ak_plat_core_count(void);
ak_thread *ak_plat_thread_start(const char *name, ak_thread_fn fn, void *arg, int core /* -1 = any */, size_t stack);
void       ak_plat_thread_join(ak_thread *t);

/* start-up: clocks, controllers, the user folder.  Called before anything else. */
bool ak_plat_init(void);
/* folders searched for the game's files (game.iso or GAME/), in order; and the engine's own folder (settings.txt, log, caches) */
const char *const *ak_plat_data_dirs(int *n);
const char *ak_plat_user_dir(void);

/* input: one pad, in engine terms (sticks -1..1, +y up).  Desktop maps keyboard/controller onto it. */
enum {
    AK_BTN_CROSS = 1 << 0, AK_BTN_CIRCLE = 1 << 1, AK_BTN_SQUARE = 1 << 2, AK_BTN_TRIANGLE = 1 << 3,
    AK_BTN_L = 1 << 4, AK_BTN_R = 1 << 5, AK_BTN_START = 1 << 6, AK_BTN_SELECT = 1 << 7,
    AK_BTN_UP = 1 << 8, AK_BTN_DOWN = 1 << 9, AK_BTN_LEFT = 1 << 10, AK_BTN_RIGHT = 1 << 11
};
typedef struct { f32 lx, ly, rx, ry; u32 held, pressed; } ak_input;
bool ak_plat_poll(ak_input *in);         /* false: the user asked to quit */
/* Does this device have a second analogue stick (rx/ry) for free aim?  PC (gamepad or mouse), Steam Deck, Vita, PS4, PS5: yes;
 * New 3DS: yes (the C-stick; twin-stick is an option there, AK_TWIN_STICK); Old 3DS: no - only the game's own scheme. */
bool ak_plat_has_right_stick(void);
/* trophies (the Vita's own, through sceNpTrophy - they need the NoTrpDrm plugin; elsewhere none): set up once the renderer runs
   (the Vita shows the system's first-time dialog), then unlock by id; asking again for one already earned does nothing */
void ak_plat_trophy_init(void);
void ak_plat_trophy_unlock(int id);

/* audio output (1.9): the device calls `fn` from its own audio thread for `frames` of interleaved stereo s16 at `rate` */
typedef void (*ak_audio_fn)(s16 *out, u32 frames, void *user);
bool ak_plat_audio_open(u32 rate, ak_audio_fn fn, void *user);
void ak_plat_audio_close(void);
#ifdef AK_HAS_MEMCARD
/* the GameCube's memory card (slot A, else B): whole files by name; read gives the bytes found (up to cap), -1 none */
bool ak_plat_memcard_write(const char *key, const char *title, const void *data, u32 n);
s32  ak_plat_memcard_read(const char *key, void *buf, u32 cap);
bool ak_plat_memcard_delete(const char *key);
#endif
#ifdef AK_HAS_ARAM
/* the GameCube's ARAM: a store returns its address (0 = full; 512 bytes after each may be read); reads are 32-byte aligned both
 * sides, n a multiple of 32 */
u32  ak_plat_aram_store(const void *src, u32 n);
void ak_plat_aram_read(void *dst, u32 aram, u32 n);
u32  ak_plat_aram_mark(void);
void ak_plat_aram_release(u32 mark);
#endif

/* log output (the core formats; the device writes: stdout + log.txt, ux0:data/SWBFRS/log.txt, sdmc:/3ds/SWBFRS/log.txt) */
void ak_plat_log_write(const char *line);

#endif
