@echo off
rem Makes a replacement movie in the PS Vita movie format, for mods\movies\<NAME>.mp4 (NAME as the game's file, e.g. INTRO).
rem   vita_movie.bat input.mov INTRO.mp4
rem Format: 960x544, H.264 Main profile level 3.1, 30 fps, 5000 kbps average / 8000 kbps peak, 2-pass VBR, YUV 4:2:0 8-bit,
rem AAC-LC 160 kbps, MP4 (moov first).  Needs ffmpeg on PATH.  The Vita build plays the game's own movie instead of a
rem replacement outside this format (see log.txt).
if "%~2"=="" (echo usage: vita_movie.bat input output.mp4 & exit /b 1)
set VF=scale=960:544:force_original_aspect_ratio=decrease,pad=960:544:(ow-iw)/2:(oh-ih)/2,fps=30,format=yuv420p
set V=-c:v libx264 -profile:v main -level:v 3.1 -pix_fmt yuv420p -b:v 5000k -maxrate 8000k -bufsize 8000k
ffmpeg -y -i "%~1" -vf "%VF%" %V% -pass 1 -passlogfile "%~n2_2pass" -an -f mp4 NUL || exit /b 1
ffmpeg -y -i "%~1" -vf "%VF%" %V% -pass 2 -passlogfile "%~n2_2pass" -c:a aac -profile:a aac_low -b:a 160k -ar 44100 -ac 2 -movflags +faststart "%~2" || exit /b 1
del "%~n2_2pass*.log*" 2>nul
echo %~2: done
