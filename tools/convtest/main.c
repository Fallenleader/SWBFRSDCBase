/* Host check of platform/common/convert.c (not part of any port): convtest <folder holding PSP_GAME> <output folder> [workers] */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "convert.h"
int main(int argc, char **argv){
    if (argc < 3) { fprintf(stderr, "usage: convtest <disc root> <out dir> [workers]\n"); return 2; }
    if (rs_convert_start(argv[1], argv[2], argc > 3 ? atoi(argv[3]) : 2, 0)) return 1;
    rs_conv_status_t s; int last = -1;
    for (;;) { usleep(200000); rs_convert_status(&s);
        int pct = s.work_total ? (int)(s.work_done * 100 / s.work_total) : 0;
        if (pct / 10 != last / 10 || s.phase >= 3) { fprintf(stderr, "phase %d  files %d/%d ok, %d to do, %d done  %d%%\n", s.phase, s.files_ok, s.files_total ? s.files_total : s.files_ok + s.files_todo, s.files_todo, s.files_done, pct); last = pct; }
        if (s.phase == RS_CONV_DONE) return 0;
        if (s.phase == RS_CONV_FAILED) { fprintf(stderr, "FAILED: %s\n", s.message); return 1; } } }
