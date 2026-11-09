#!/usr/bin/env bash
# Runs inside WSL (started by train_wsl.bat).  First run: copies the Linux game and your game files onto the Linux disk (reading
# them from D: through WSL is slow) and makes the Python environment there; then trains with the same model, settings and
# runs\ folder as the Windows trainer.  Type  stop  + Enter, press Ctrl+C, or run stop_training.bat to save and finish.
set -e
HERE="$(cd "$(dirname "$0")/.." && pwd)"            # tools\aiagents (on D:)
ROOT="$(cd "$HERE/../.." && pwd)"                   # D:\SWBFRSDecomp
W="$HOME/rsai"; mkdir -p "$W"
GAME_SRC="$ROOT/builds/Windows/SWBFRS_windows/SWBFRS/GAME"
[ -f "$ROOT/builds/AIAgents_linux/swbfrs" ] || { echo "missing: builds\\AIAgents_linux\\swbfrs (the Linux game)"; exit 1; }
cp -u "$ROOT/builds/AIAgents_linux/swbfrs" "$W/swbfrs"; chmod +x "$W/swbfrs"
if [ ! -d "$W/GAME/PSP_GAME" ]; then
  [ -d "$GAME_SRC/PSP_GAME" ] || { echo "missing: your game files at builds\\Windows\\SWBFRS_windows\\SWBFRS\\GAME"; exit 1; }
  echo "[wsl] copying the game files to the Linux disk (once, about 900 MB)..."; rm -rf "$W/GAME.part"; cp -r "$GAME_SRC" "$W/GAME.part"; mv "$W/GAME.part" "$W/GAME"
fi
if [ ! -x "$W/venv/bin/python" ] || [ ! -f "$W/venv/.ready" ]; then
  echo "[wsl] making the Python environment (once, a few minutes)..."
  rm -rf "$W/venv"; python3 -m venv "$W/venv"
  "$W/venv/bin/pip" install -q --upgrade pip
  "$W/venv/bin/pip" install -q torch --index-url https://download.pytorch.org/whl/cpu
  "$W/venv/bin/pip" install -q gymnasium stable-baselines3 numpy pyyaml tensorboard
  touch "$W/venv/.ready"
fi
"$W/venv/bin/python" -c "import torch, gymnasium, stable_baselines3, sys; print('[wsl] python', sys.version.split()[0], 'torch', torch.__version__, 'gymnasium', gymnasium.__version__, 'sb3', stable_baselines3.__version__)"
# the Windows settings, with the Linux game
sed -e "s|^  exe: .*|  exe: $W/swbfrs|" -e "s|^  game_dir: .*|  game_dir: $W|" "$HERE/configs/infantry_game.yaml" > "$HERE/configs/infantry_wsl.yaml"
cd "$HERE"
exec "$W/venv/bin/python" run_training.py --config configs/infantry_wsl.yaml "$@"
