@echo off
rem Asks a running train_forever.bat to save and finish (within a few seconds).
cd /d "%~dp0"
if not exist runs\infantry_v1 (echo No training run found. & pause & exit /b 1)
echo stop> runs\infantry_v1\STOP
echo Asked the training to stop: it saves and closes the game within a few seconds.
timeout /t 5 >nul
