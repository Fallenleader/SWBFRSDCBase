# Desktop builds (platform/desktop)

**This branch (WindowsExperimental): `make windows`** builds its target (the other targets build here too).

The PS5 setup (64-bit guest, the Vulkan renderer with PBR, shadow maps, ray tracing where wanted, movies from MP4, mods) on a PC:
an SDL2 window with a Vulkan swapchain (`gfx_vk_setup_window`), SDL2 game controllers and keyboard, SDL2 audio.  Everything lives next to
the executable (see `README.txt`, shipped with the build).  Cross-built here with zig (`pip install ziglang`):

| make | Branch | Output | Defaults |
|---|---|---|---|
| `make deck` | SteamDeckExperimental | `build/deck/SWBFRS/swbfrs` (Linux x86-64, glibc 2.31+, Zen 2) | 1440x816 internal, no ray tracing, full screen, 64 players |
| `make windows` | WindowsExperimental | `build/windows/SWBFRS/SWBFRS.exe` (Windows 10/11 x64, AVX2) | 1920x1088 internal, ray tracing off (RS_RT=1 turns it on) |
| `make rtx` | WindowsRTXExperimental | `build/rtx/SWBFRS/SWBFRS.exe` | 2880x1632 internal, hardware ray tracing on (VK_KHR_ray_query on RTX cores), NVIDIA GPU preferred |

Needs `../ext`: `vkinc/` (Vulkan headers), `sdlinc/` (Linux SDL2 headers), `SDL2-2.30.9/` (SDL2 mingw development release), and
FFmpeg built with zig (`ext/ffbuild.sh lin|win` -> `ffmpeg-lin/`, `ffmpeg-win/`).

Windows: game threads run on stacks inside the guest window (their frames need guest addresses); Windows threads cannot be created on a
given stack, so each one switches to it (`rs_on_stack`, the TEB's stack bounds updated).  `win_compat.h` supplies the few POSIX calls.
