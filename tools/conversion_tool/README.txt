SWBFRS Conversion Tool
======================

Prepares the game's media for a device on your PC, where it takes a minute instead of the device's
own (slow) first-start conversion. It uses your own copy of the game; nothing of the game ships with it.

Targets:
  3ds  Nintendo 3DS - all of the game's audio (music, voices, effects) converted to DSP-ADPCM, the 3DS
       sound chip's own format, exactly as the 3DS build would write it itself.
  gc   Nintendo GameCube - the GameCube's own formats: the audio as DSP-ADPCM (its DSP's format), and the
       movies as THP (the GameCube's movie format: Motion JPEG + DSP-ADPCM sound).

How to use (3DS)
  1. Put your UMD image next to SWBFRS_ConversionTool.exe as game.iso, or the extracted game as a
     folder named GAME (the folder that holds PSP_GAME).
  2. Double-click SWBFRS_ConversionTool.exe. It writes the folder converted_3ds next to itself
     (about 400 MB; around a minute).
  3. Copy converted_3ds to the 3DS SD card and rename it:   sdmc:/3ds/SWBFRS/converted
     The game then only checks it at start (a few seconds) and plays the converted audio.

  Use the same game files on the 3DS (game.iso or GAME in sdmc:/3ds/SWBFRS) as you converted.

How to use (GameCube)
  1. Put SWBFRS_ConversionTool.exe in the GameCube build folder (next to aurek.dol and make_gcm.py),
     with the game there as for make_gcm.py: game.iso, or the GAME folder (holding PSP_GAME), or PSP_GAME.
  2. Put ffmpeg.exe next to it (https://ffmpeg.org/download.html - any recent build; or have it on PATH).
     It encodes the movies' pictures; the sound is converted by the tool itself.
  3. Double-click SWBFRS_ConversionTool.exe. Next to aurek.dol it picks the gc target by itself and
     writes the folder "converted" (about 1 GB; a few minutes).
  4. Run make_gcm.py. It packs "converted" and leaves out the originals it replaces: the .PMF movies,
     the .AT3 music (cut to its 4 KB header, which the game reads for the loop points) and GMSND.AM (cut
     to its 256 KB index). The disc image then fits a GameCube disc (about 1370 MB of 1392 MB).

  The movies: 512x384 (4:3). The PSP picture (480x272) is scaled to the full width keeping its shape and
  letterboxed with black bars above and below - never cropped or stretched. 29.97 fps, as the PSP's.
  Sound 32 kHz stereo DSP-ADPCM, in step with the picture.
  Picture quality: --video-kbps N (default 1500). Higher looks better but must still fit the disc:
  make_gcm.py says if it does not, and suggests a rate. To redo the movies at another rate, delete
  converted/PSP_GAME/USRDIR/FMV and run the tool again.

Command line
  SWBFRS_ConversionTool [3ds | gc] [--video-kbps N] [--ffmpeg path] [game.iso | game folder] [output folder]
  Running it again on the same output only checks it, and redoes what is missing or out of date.
