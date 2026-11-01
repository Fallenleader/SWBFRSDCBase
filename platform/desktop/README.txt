Star Wars Battlefront: Renegade Squadron - decompiled, for PC (Steam Deck / Linux, Windows)

Setup
  1. Put this folder anywhere (it keeps everything next to the program: game files, saves, mods, settings).
  2. Copy your UMD image into this folder as  game.iso  .  The first start extracts it into GAME\ and deletes it, then converts the
     game's sound to WAV and its movies to MP4 (converted\).  The window title shows the progress.  This happens once.
     (Already extracted?  Put the folder that holds PSP_GAME here as GAME\ instead.)
  3. Start it:  Windows: SWBFRS.exe     Steam Deck / Linux: ./swbfrs
     Steam Deck: in Desktop mode, Steam > Add a Game > Add a Non-Steam Game > Browse > swbfrs; then play it from Game mode.
     Choose the "Gamepad" controller layout (the Deck's controls are an Xbox-style pad).

Needs a GPU with Vulkan 1.3 (any GPU from about 2016 on, with current drivers; the Steam Deck has it).
Windows: SDL2.dll must stay next to SWBFRS.exe.  Linux: libSDL2 (installed on SteamOS).

Controls (pad): A/B/X/Y = Cross/Circle/Square/Triangle, Start/Select, D-pad, L1 or L2 = L, R1 or R2 = R, sticks (the right stick looks).
Keyboard: WASD move, arrow keys look, Space/Enter = Cross, Backspace = Circle, Q = Square, E = Triangle, Esc = Start, Tab = Select,
          Shift = L, Ctrl = R, I/J/K/L = D-pad, F11 or Alt+Enter = full screen.

settings.txt: every option (resolution scale, shadows, PBR, ray tracing, mods, game options); log.txt: the last session's log.
Mods: mods\textures, mods\maps, mods\movies, mods\files - as on the consoles (the SWBF mod tools write them).
