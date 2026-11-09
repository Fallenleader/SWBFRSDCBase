@echo off
rem Unattended AI training using the Linux build of the game inside WSL (about 10x faster than the Windows build for now).
rem Double-click it.  It runs until you type  stop  and press Enter in this window, press Ctrl+C, or run stop_training.bat;
rem either way it saves first.  Run it again to continue.  Same model, settings and runs\ folder as train_forever.bat
rem (run one or the other, not both at once).
cd /d "%~dp0"
title RS AI training (WSL) - type stop and press Enter to finish
wsl -e true >nul 2>&1
if errorlevel 1 (
  echo WSL has no Linux installed.  Open PowerShell as administrator, run:  wsl --install -d Ubuntu
  echo then restart the PC, open Ubuntu once from the Start menu to create a user, and run this again.
  pause & exit /b 1
)
rem system packages, once (as WSL's root user: no password needed)
wsl -u root -e bash -c "test -f /root/.rsai_packages || (echo [wsl] installing SDL2 and Python venv support, once... && apt-get update -qq && DEBIAN_FRONTEND=noninteractive apt-get install -y -qq libsdl2-2.0-0 python3-venv python3-pip >/dev/null && touch /root/.rsai_packages)"
if errorlevel 1 (echo Installing the WSL packages failed. & pause & exit /b 1)
for /f "delims=" %%p in ('wsl wslpath -a "%~dp0wsl\train.sh"') do set SCRIPT=%%p
wsl -e bash "%SCRIPT%" %*
echo.
echo Training stopped.  The model is in runs\infantry_v1\ (latest.zip, best.zip); progress in runs\infantry_v1\progress_game.csv
pause
