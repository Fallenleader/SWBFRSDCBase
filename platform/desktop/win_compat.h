/* Windows (mingw-w64 through zig): the few POSIX calls the shared code makes (forced in with -include) */
#pragma once
#ifdef _WIN32
#include <stdlib.h>
#include <direct.h>
#include <io.h>
#include <sys/stat.h>
static inline int rs_mkdir2(const char *p, int m){ (void)m; return _mkdir(p); }
#define RS_MKDIR_SEL(_1, _2, N, ...) N
#define mkdir(...) RS_MKDIR_SEL(__VA_ARGS__, rs_mkdir2, _mkdir)(__VA_ARGS__)
static inline int setenv(const char *k, const char *v, int o){ if (!o && getenv(k)) return 0; return _putenv_s(k, v); }
#endif
