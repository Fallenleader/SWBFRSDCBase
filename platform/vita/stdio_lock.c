/* One lock around the C library's FILE functions.
 *
 * VitaSDK's newlib is built without stdio locking (newlib.h: _RETARGETABLE_LOCKING undefined, so sys/lock.h makes every FILE
 * lock a no-op, and __sfp_lock_acquire is an empty function).  Two threads writing to the same FILE (stderr: the log), or opening and
 * closing files at the same time (the FILE list), corrupt its state.  Logs of builds that run the renderer, the game and the audio
 * threads on separate cores show exactly that: duplicated and truncated log lines where two threads printed at once.
 *
 * The build links with -Wl,--wrap=<name> for each function below, so every call to it - in this program and in the libraries it
 * links (vitaGL) - comes here first and runs under one recursive lock.  The lock is created in main() before any other thread
 * exists; before that the calls go straight through. */
#include <stdio.h>
#include <stdarg.h>
#include <pthread.h>

static pthread_mutex_t m; static volatile int ready;
void rs_stdio_lock_init(void){
    pthread_mutexattr_t a; pthread_mutexattr_init(&a); pthread_mutexattr_settype(&a, PTHREAD_MUTEX_RECURSIVE);
    pthread_mutex_init(&m, &a); pthread_mutexattr_destroy(&a); ready = 1; }
#define L() do { if (ready) pthread_mutex_lock(&m); } while (0)
#define U() do { if (ready) pthread_mutex_unlock(&m); } while (0)

FILE *__real_fopen(const char *, const char *);
FILE *__wrap_fopen(const char *p, const char *mode){ L(); FILE *r = __real_fopen(p, mode); U(); return r; }
FILE *__real_fopencookie(void *, const char *, cookie_io_functions_t);
FILE *__wrap_fopencookie(void *c, const char *mode, cookie_io_functions_t io){ L(); FILE *r = __real_fopencookie(c, mode, io); U(); return r; }
int __real_fclose(FILE *);
int __wrap_fclose(FILE *f){ L(); int r = __real_fclose(f); U(); return r; }
int __real_fflush(FILE *);
int __wrap_fflush(FILE *f){ L(); int r = __real_fflush(f); U(); return r; }
size_t __real_fwrite(const void *, size_t, size_t, FILE *);
size_t __wrap_fwrite(const void *b, size_t s, size_t n, FILE *f){ L(); size_t r = __real_fwrite(b, s, n, f); U(); return r; }
size_t __real_fread(void *, size_t, size_t, FILE *);
size_t __wrap_fread(void *b, size_t s, size_t n, FILE *f){ L(); size_t r = __real_fread(b, s, n, f); U(); return r; }
int __real_fputs(const char *, FILE *);
int __wrap_fputs(const char *s, FILE *f){ L(); int r = __real_fputs(s, f); U(); return r; }
int __real_fputc(int, FILE *);
int __wrap_fputc(int c, FILE *f){ L(); int r = __real_fputc(c, f); U(); return r; }
char *__real_fgets(char *, int, FILE *);
char *__wrap_fgets(char *s, int n, FILE *f){ L(); char *r = __real_fgets(s, n, f); U(); return r; }
int __real_fseek(FILE *, long, int);
int __wrap_fseek(FILE *f, long o, int w){ L(); int r = __real_fseek(f, o, w); U(); return r; }
long __real_ftell(FILE *);
long __wrap_ftell(FILE *f){ L(); long r = __real_ftell(f); U(); return r; }
int __real_setvbuf(FILE *, char *, int, size_t);
int __wrap_setvbuf(FILE *f, char *b, int mode, size_t n){ L(); int r = __real_setvbuf(f, b, mode, n); U(); return r; }
int __real_vfprintf(FILE *, const char *, va_list);
int __wrap_vfprintf(FILE *f, const char *fmt, va_list ap){ L(); int r = __real_vfprintf(f, fmt, ap); U(); return r; }
int __wrap_fprintf(FILE *f, const char *fmt, ...){ va_list ap; va_start(ap, fmt); L(); int r = __real_vfprintf(f, fmt, ap); U(); va_end(ap); return r; }
int __wrap_printf(const char *fmt, ...){ va_list ap; va_start(ap, fmt); L(); int r = __real_vfprintf(stdout, fmt, ap); U(); va_end(ap); return r; }
int __real_puts(const char *);
int __wrap_puts(const char *s){ L(); int r = __real_puts(s); U(); return r; }
