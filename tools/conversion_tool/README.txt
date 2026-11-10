SWBFRS Conversion Tool
======================

Prepares the game's media for a device on your PC, where it takes a minute instead of the device's
own (slow) first-start conversion. It uses your own copy of the game; nothing of the game ships with it.

Target so far: Nintendo 3DS - all of the game's audio (music, voices, effects) converted to DSP-ADPCM,
the 3DS sound chip's own format, exactly as the 3DS build would write it itself.

How to use (3DS)
  1. Put your UMD image next to SWBFRS_ConversionTool.exe as game.iso, or the extracted game as a
     folder named GAME (the folder that holds PSP_GAME).
  2. Double-click SWBFRS_ConversionTool.exe. It writes the folder converted_3ds next to itself
     (about 400 MB; around a minute).
  3. Copy converted_3ds to the 3DS SD card and rename it:   sdmc:/3ds/SWBFRS/converted
     The game then only checks it at start (a few seconds) and plays the converted audio.

  Use the same game files on the 3DS (game.iso or GAME in sdmc:/3ds/SWBFRS) as you converted.

Command line
  SWBFRS_ConversionTool [3ds] [game.iso | game folder] [output folder]
  Running it again on the same output only checks it, and redoes what is missing or out of date.
