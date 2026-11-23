#!/bin/sh
# SWBFRS Conversion Tool: the game's media for the GameCube, into Converted/GameCube next to this script (see Convert_GameCube.bat).
d="$(cd "$(dirname "$0")" && pwd)"
exec "$d/SWBFRS_ConversionTool" gc --out "$d/Converted/GameCube" "$@"
