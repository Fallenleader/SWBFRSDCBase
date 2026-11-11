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

/* log output (the core formats; the device writes: stdout + log.txt, ux0:data/SWBFRS/log.txt, sdmc:/3ds/SWBFRS/log.txt) */
void ak_plat_log_write(const char *line);

#endif
