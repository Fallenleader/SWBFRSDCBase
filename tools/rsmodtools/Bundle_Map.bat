@echo off
rem Drop a map folder (or one era folder) onto this file: it is packed and installed as a new map (see mapinfo.txt in the folder).
if "%~1"=="" (echo Drop a map folder onto this file. & pause & exit /b)
py -3 "%~dp0rs_modtools.py" bundle "%~1" || python "%~dp0rs_modtools.py" bundle "%~1"
pause
