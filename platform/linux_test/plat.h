#pragma once
/* Small portability shim so the same runtime builds with gcc on Linux and MinGW-w64 on Windows. */
#ifdef _WIN32
#include <windows.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#undef near
#undef far
#define usleep(us) Sleep(((us) + 999) / 1000)
#define sleep(s)   Sleep((s) * 1000)
#define strtok_r(s, d, p) strtok_s((s), (d), (p))
#endif
