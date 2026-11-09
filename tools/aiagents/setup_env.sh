#!/usr/bin/env bash
# Creates the training environment in tools/aiagents/.venv (Linux / Steam Deck / WSL; Python 3.10-3.13).
set -e; cd "$(dirname "$0")"
python3 -m venv .venv; . .venv/bin/activate
pip install --upgrade pip
pip install torch==2.15.0 --index-url https://download.pytorch.org/whl/cpu
pip install -r requirements.txt
python -c "import torch, gymnasium, stable_baselines3; print('torch', torch.__version__, 'gymnasium', gymnasium.__version__, 'sb3', stable_baselines3.__version__)"
echo "Ready.  Activate with:  . tools/aiagents/.venv/bin/activate"
