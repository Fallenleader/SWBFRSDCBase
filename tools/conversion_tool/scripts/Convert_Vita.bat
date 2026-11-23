@echo off
rem SWBFRS Conversion Tool: the game's media for the Vita, into Converted\Vita next to this script.
rem The game: game.iso, GAME (holding PSP_GAME) or PSP_GAME next to the tool, in the folder above it, or in a folder beside it;
rem or drop the game (folder or .iso) on this script.  Needs SWBFRS_ConversionTool.exe (and for Vita / GameCube ffmpeg.exe) here.
cd /d "%~dp0"
"%~dp0SWBFRS_ConversionTool.exe" vita --out "%~dp0Converted\Vita" --pause %*
