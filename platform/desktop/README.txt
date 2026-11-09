Star Wars Battlefront: Renegade Squadron - decompiled, for PC (Steam Deck / Linux, Windows)

Setup
  1. Put this folder anywhere (it keeps everything next to the program: game files, saves, mods, settings).
  2. Copy your UMD image into this folder as  game.iso  .  The first start extracts it into GAME\ and deletes it, then converts the
     game's sound to WAV and its movies to MP4 (converted\).  The window title shows the progress.  This happens once.
     (Already extracted?  Put the folder that holds PSP_GAME here as GAME\ instead.)
  3. Start it:  Windows: SWBFRS.exe     Steam Deck / Linux: ./swbfrs
     Steam Deck: in Desktop mode, Steam > Add a Game > Add a Non-Steam Game > Browse > swbfrs; then play it from Game mode.
     Choose the "Gamepad" controller layout (the Deck's controls are an Xbox-style pad).

Renderers (Windows: Options > Graphics Settings, or RS_RENDERER in settings.txt; used from the next start):
  Vulkan       the default; Vulkan 1.3, or 1.1/1.2 with dynamic rendering (GTX 750 Ti / RX 400 / Intel HD 500 class and newer)
  OpenGL       OpenGL 2.1 with framebuffer objects: for old GPUs and drivers without Vulkan
  DirectX 12   Direct3D 12 through Mesa's Dozen driver (vulkan_dzn.dll + dxil.dll, included): for GPUs with only a D3D12 driver
  If the chosen renderer cannot start, the game uses Vulkan, then OpenGL (log.txt says which).
Graphics Settings also has Ray Tracing Features (On/Off: an RTX 2060 / RX 6600 / Arc A380 class GPU) and Resolution
(720p / 1080p / 1440p / 4K: the internal resolution and the window size).  Ray tracing at 4K is heavy: 1440p or 1080p keeps 60.
Steam Deck: Vulkan only (720p, no ray tracing); no Graphics Settings entry.
Windows: SDL2.dll and the DirectX 12 DLLs must stay next to SWBFRS.exe.  Linux: libSDL2 (installed on SteamOS).

Controls (pad - Xbox controllers natively through XInput, PlayStation and Switch pads, the Steam Deck's own controls):
  A/B/X/Y = Cross/Circle/Square/Triangle, Menu/Start = Start, View/Back = Select, D-pad, LB or LT = L, RB or RT = R,
  sticks (the right stick looks); Steam Deck back buttons L4/L5 = L, R4/R5 = R.
Keyboard: WASD move, arrow keys look, Space/Enter = Cross, Backspace = Circle, Q = Square, E = Triangle, Esc = Start, Tab = Select,
          Shift = L, Ctrl = R, I/J/K/L = D-pad, F11 or Alt+Enter = full screen.

settings.txt: every option (resolution scale, shadows, PBR, ray tracing, mods, game options); log.txt: the last session's log.
Mods: mods\textures, mods\maps, mods\movies, mods\files - as on the consoles (the SWBF mod tools write them).
