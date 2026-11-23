#!/bin/sh
# SWBFRS Conversion Tool: the game's media for the 3DS, into Converted/3DS next to this script (see Convert_3DS.bat).
d="$(cd "$(dirname "$0")" && pwd)"
exec "$d/SWBFRS_ConversionTool" 3ds --out "$d/Converted/3DS" "$@"
