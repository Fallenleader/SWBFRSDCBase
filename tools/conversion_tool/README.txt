SWBFRS Conversion Tool
======================

Prepares the game's media for a console on your PC, where it takes minutes, instead of the console's
own (slow) first-start conversion. It uses your own copy of the game; nothing of the game ships with it.

Targets
  Vita      the Vita's formats: all audio (music, voices, effects) as 16-bit WAV, the movies as MP4
            (the PSP's H.264 picture as it is, AAC sound): exactly what the Vita build writes itself
            at first start.
  3DS       all audio as DSP-ADPCM, the 3DS sound chip's own format. (No movies: nothing plays them
            on the 3DS yet.)
  GameCube  the GameCube's own formats: the audio as DSP-ADPCM (its DSP's format), the movies as THP
            (the GameCube's movie format: Motion JPEG + DSP-ADPCM sound).
  (Wii U: scheduled for later.)

What goes in this folder
  SWBFRS_ConversionTool.exe     the tool
  Convert_Vita.bat              one script per console: double-click it
  Convert_3DS.bat
  Convert_GameCube.bat
  ffmpeg.exe                    needed for the Vita and GameCube movies (https://ffmpeg.org/download.html,
                                any recent build; or have it on PATH)
  the game                      game.iso (your UMD image), or the extracted GAME folder (holding PSP_GAME),
                                or PSP_GAME. It may also sit in the folder above this one, or in a folder
                                beside it (the GameCube build folder's GAME, for example). Or drag the game
                                (folder or .iso) onto a script.

Each script writes into Converted\<console> next to itself:
  Converted\Vita       copy to the Vita as  ux0:data/SWBFRS/converted   (or ux0:data/Aurek/converted)
  Converted\3DS        copy to the 3DS SD card as  sdmc:/3ds/SWBFRS/converted
  Converted\GameCube   make_gcm.py finds it by itself when this folder sits beside the GameCube build
                       folder (builds\Aurek\ConversionTool beside builds\Aurek\GameCube): it packs it into
                       the disc image and leaves out the originals it replaces (the .PMF movies; the .AT3
                       music cut to the 4 KB header the game reads for the loop points; GMSND.AM cut to
                       its 256 KB index). The disc then fits (about 1370 MB of 1392 MB).

  Running a script again only checks its folder and redoes what is missing or out of date.

The movies
  Vita       the picture is copied untouched (480x272, 29.97 fps); sound AAC-LC 160 kbit/s 44.1 kHz.
  GameCube   512x384 (4:3): the PSP picture (480x272) is scaled to the full width keeping its shape and
             letterboxed with black bars above and below - never cropped or stretched. 29.97 fps. Sound
             32 kHz stereo DSP-ADPCM, in step with the picture. The GameCube build plays them (the
             opening logos at start; START or A skips).
             Picture quality: --video-kbps N (default 1500). Higher looks better but must still fit the
             disc: make_gcm.py says if it does not, and suggests a rate. To redo the movies at another
             rate, delete Converted\GameCube\PSP_GAME\USRDIR\FMV and run the script again.

Command line
  SWBFRS_ConversionTool [vita | 3ds | gc] [--out folder] [--video-kbps N] [--ffmpeg path] [game.iso | game folder]
  Without --out: Converted\<console> next to the tool. Without a target: gc next to aurek.dol, else 3ds.
  Linux: the same with SWBFRS_ConversionTool and the convert_<console>.sh scripts.
