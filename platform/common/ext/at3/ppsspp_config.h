#pragma once
/* rsvita: architecture switches for atrac3plusdsp.cpp */
#define PPSSPP_ARCH(x) PPSSPP_ARCH_##x
#if defined(__x86_64__) || defined(_M_X64)
#define PPSSPP_ARCH_AMD64 1
#define PPSSPP_ARCH_SSE2 1
#elif defined(__i386__) || defined(_M_IX86)
#define PPSSPP_ARCH_X86 1
#define PPSSPP_ARCH_SSE2 1
#elif defined(__ARM_NEON) || defined(__ARM_NEON__)
#define PPSSPP_ARCH_ARM_NEON 1
#endif
