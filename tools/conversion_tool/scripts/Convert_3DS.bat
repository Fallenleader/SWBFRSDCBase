@echo off
rem SWBFRS Conversion Tool: the game's media for the 3DS, into Converted\3DS next to this script.
rem The game: game.iso, GAME (holding PSP_GAME) or PSP_GAME next to the tool, in the folder above it, or in a folder beside it;
rem or drop the game (folder or .iso) on this script.  Needs SWBFRS_ConversionTool.exe (and for Vita / GameCube ffmpeg.exe) here.
cd /d "%~dp0"
"%~dp0SWBFRS_ConversionTool.exe" 3ds --out "%~dp0Converted\3DS" --pause %*
