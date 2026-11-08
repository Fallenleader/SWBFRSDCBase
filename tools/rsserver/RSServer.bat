@echo off
rem The RS server in its own window.  Type /help in the window for the commands (/ban, /unban, /sessions ...).
rem GAME_DIR: the PC game folder (SWBFRS.exe and GAME\) used to host the serversession<N>.txt sessions.  Empty: the server looks next to
rem itself, then in ..\..\Windows\SWBFRS_windows\SWBFRS (the project layout).
set GAME_DIR=
title RS Server
cd /d "%~dp0"
if "%GAME_DIR%"=="" (python rsmaster.py %*) else (python rsmaster.py --game "%GAME_DIR%" %*)
pause
