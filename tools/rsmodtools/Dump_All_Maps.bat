@echo off
rem Dumps every Renegade Squadron map (all eras) into editable folders (set game_folder in rsmodtools.ini first).
py -3 "%~dp0rs_modtools.py" dump %* || python "%~dp0rs_modtools.py" dump %*
pause
