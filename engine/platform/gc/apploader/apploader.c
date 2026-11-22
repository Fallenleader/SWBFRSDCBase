/* A minimal GameCube apploader (Aurek's own, no Nintendo code): the boot ROM (or Dolphin's, or a loader that runs apploaders)
 * copies it to 0x81200000 and calls its entry for three functions: init, main (asked repeatedly: "read `size` bytes at disc
 * `offset` to `dst`", 0 when done) and close (the program's entry point).  It loads the DOL named by the disc header (0x420). */
typedef unsigned int u32;
typedef void (*report_fn)(const char *, ...);
static u32 hdr[8] __attribute__((aligned(32)));      /* disc header 0x420..0x43F: the DOL's offset first */
static u32 dol[64] __attribute__((aligned(32)));     /* the DOL's 0x100-byte header */
static int stage, sec;

static void ap_init(report_fn r) { (void)r; stage = 0; sec = 0; }
static int ap_main(void **dst, int *size, int *offset)
{
    if (stage == 0) { *dst = hdr; *size = 32; *offset = 0x420; stage = 1; return 1; }
    if (stage == 1) { *dst = dol; *size = 0x100; *offset = (int)hdr[0]; stage = 2; return 1; }
    while (sec < 18) {                                 /* 7 text sections, 11 data: offsets at 0, addresses at 0x48, sizes at 0x90 */
        int i = sec++;
        if (!dol[36 + i] || !dol[18 + i]) continue;
        *dst = (void *)dol[18 + i]; *size = (int)((dol[36 + i] + 31) & ~31u); *offset = (int)(hdr[0] + dol[i]);
        return 1;
    }
    return 0;
}
static void *ap_close(void)
{
    /* the loaded code: out of the data cache, into memory, and the instruction cache dropped */
    for (int i = 0; i < 18; i++) {
        if (!dol[36 + i] || !dol[18 + i]) continue;
        for (u32 a = dol[18 + i] & ~31u, e = dol[18 + i] + dol[36 + i]; a < e; a += 32) __asm__ volatile("dcbst 0,%0; sync; icbi 0,%0" :: "r"(a));
    }
    __asm__ volatile("sync; isync");
    return (void *)dol[56];                            /* the entry point (0xE0) */
}
__attribute__((section(".text.entry"))) void entry(void (**init)(report_fn), int (**main)(void **, int *, int *), void *(**close)(void))
{
    *init = ap_init; *main = ap_main; *close = ap_close;
}
