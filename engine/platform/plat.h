/* The interface every device implements (engine/platform/<device>/).  Only what the engine needs, in the engine's terms:
 * no PSP firmware concepts.  Grows milestone by milestone (window/present and the gfx back end at 1.2, input at 1.5, audio at 1.9). */
#ifndef RS_PLAT_H
#define RS_PLAT_H
#include "../core/rs_core.h"

/* memory: large allocations (arenas, GPU-visible memory comes from the gfx back end) */
void *rs_plat_alloc(size_t size, size_t align);
void  rs_plat_free(void *p);

/* time */
u64  rs_plat_time_us(void);              /* monotonic */
void rs_plat_sleep_us(u64 us);

/* cores and threads.  The job system starts one worker per core the device offers to the game:
 * Vita 3 (+1 with CapUnlocker), Old 3DS 1-2, New 3DS 2-4, PC/Deck/PS4/PS5 all but one. */
typedef struct rs_thread rs_thread;
typedef void (*rs_thread_fn)(void *arg);
int        rs_plat_core_count(void);
rs_thread *rs_plat_thread_start(const char *name, rs_thread_fn fn, void *arg, int core /* -1 = any */, size_t stack);
void       rs_plat_thread_join(rs_thread *t);

/* log output (the core formats; the device writes: stdout + log.txt, ux0:data/SWBFRS/log.txt, sdmc:/3ds/SWBFRS/log.txt) */
void rs_plat_log_write(const char *line);

#endif
