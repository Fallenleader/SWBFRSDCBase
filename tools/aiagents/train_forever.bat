@echo off
rem Unattended AI training against the real game.  Double-click it, or run it from a command prompt.
rem It runs until you type  stop  and press Enter in this window (or press Ctrl+C); either way it saves the model first.
rem Run it again to continue from where it stopped.  Settings: configs\infantry_game.yaml (game location, maps, network size).
cd /d "%~dp0"
if not exist .venv\Scripts\python.exe (
  echo The training environment is not installed yet: running setup_env.bat first.
  call setup_env.bat || (echo Setup failed. & pause & exit /b 1)
)
call .venv\Scripts\activate.bat
title RS AI training - type stop and press Enter to finish
python run_training.py --config configs\infantry_game.yaml %*
echo.
echo Training stopped.  The model is in runs\infantry_v1\ (latest.zip, best.zip); progress in runs\infantry_v1\progress_game.csv
pause
