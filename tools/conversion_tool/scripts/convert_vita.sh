#!/bin/sh
# SWBFRS Conversion Tool: the game's media for the Vita, into Converted/Vita next to this script (see Convert_Vita.bat).
d="$(cd "$(dirname "$0")" && pwd)"
exec "$d/SWBFRS_ConversionTool" vita --out "$d/Converted/Vita" "$@"
