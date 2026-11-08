@echo off
rem Creates the training environment in tools\aiagents\.venv (Windows, Python 3.10-3.13 from python.org on PATH as "py" or "python").
cd /d "%~dp0"
where py >nul 2>nul && (set PY=py -3) || (set PY=python)
%PY% -m venv .venv || goto :err
call .venv\Scripts\activate.bat
python -m pip install --upgrade pip || goto :err
python -m pip install torch==2.15.0 --index-url https://download.pytorch.org/whl/cpu || goto :err
python -m pip install -r requirements.txt || goto :err
python -c "import torch, gymnasium, stable_baselines3; print('torch', torch.__version__, 'gymnasium', gymnasium.__version__, 'sb3', stable_baselines3.__version__)"
echo.
echo Ready.  Activate with:  tools\aiagents\.venv\Scripts\activate.bat
exit /b 0
:err
echo Setup failed. & exit /b 1
