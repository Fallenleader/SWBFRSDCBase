/* RS_PROF=<file>: SIGPROF sampling profiler for the host build (all threads).  Writes "<pc hex>" per sample plus the
 * process memory map; resolve with tools/prof_report.py.  Linux x86 (32/64-bit). */
#if defined(HOST_BUILD) && defined(__linux__) && (defined(__x86_64__) || defined(__i386__))
#define _GNU_SOURCE
#include <signal.h>
#include <sys/time.h>
#include <ucontext.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NS (1 << 22)
static unsigned long *smp; static volatile int ns; volatile int rs_prof_on = 1;
static void on_prof(int sig, siginfo_t *si, void *uc){ (void)sig; (void)si; if (!rs_prof_on) return; int i = __sync_fetch_and_add(&ns, 1); if (i < NS) smp[i] = (unsigned long)((ucontext_t *)uc)->uc_mcontext.gregs[
#ifdef __x86_64__
REG_RIP
#else
REG_EIP
#endif
]; }
static const char *outp;
static void dump(void){
    FILE *f = fopen(outp, "w"); if (!f) return; int n = ns < NS ? ns : NS;
    FILE *m = fopen("/proc/self/maps", "r"); char line[512]; while (m && fgets(line, sizeof line, m)) fprintf(f, "M %s", line); if (m) fclose(m);
    for (int i = 0; i < n; i++) fprintf(f, "%lx\n", smp[i]); fclose(f); fprintf(stderr, "[PROF] %d samples -> %s\n", n, outp); }
__attribute__((constructor)) static void prof_init(void){
    outp = getenv("RS_PROF"); if (!outp) return; if (getenv("RS_BENCH_FROM")) rs_prof_on = 0;   /* bench: sample only the benchmark window */ smp = malloc(sizeof(unsigned long) * NS);
    struct sigaction sa; memset(&sa, 0, sizeof sa); sa.sa_sigaction = on_prof; sa.sa_flags = SA_SIGINFO | SA_RESTART; sigaction(SIGPROF, &sa, 0);
    struct itimerval it = {{0, 1000}, {0, 1000}}; setitimer(ITIMER_PROF, &it, 0); }
void rs_prof_dump(void){ if (outp) dump(); }
#else
volatile int rs_prof_on;
void rs_prof_dump(void){}
#endif
