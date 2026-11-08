# AI agents: training tools (branch `AIAgents`)

This folder holds the training tools for neural-network soldier AI in Renegade Squadron. The first target is infantry combat.

- The training stack runs on a PC only.
- The game never needs Python. A trained policy runs in the game through `native/rsnn.c` (see `docs/INFERENCE.md`).

## Training on your PC (unattended)

1. Put the AIAgents build of the game in `builds\AIAgents\` (`SWBFRS.exe` and its DLLs), and have the PC game folder with `GAME\` at
   `builds\Windows\SWBFRS_windows\SWBFRS\`.  Other places: edit `game:` in `configs\infantry_game.yaml`.
2. Double-click `train_forever.bat` (the first time it installs the Python environment, a few minutes).
3. Leave it.  To finish, type `stop` and press Enter in its window (or press Ctrl+C): it saves first.  Run it again to continue.

What it does: starts the game headless on a fixed game clock as fast as the PC allows, in offline conquest matches over eight ground
maps; one side's bots (8) are the policy's, the other side is the game's original AI - the opponent and, in the same match, the
baseline; the sides swap every match.  It restarts the game if it crashes or stops answering.  Every 50,000 decisions it writes a
line comparing the two sides (deaths per bot-minute, command posts held and taken, enemies downed nearby, idling) and a score; the
best-scoring model so far is `best.zip`.

| File (runs\infantry_v1\) | |
|---|---|
| `latest.zip` | the model now (training continues from it) |
| `best.zip`, `best_score.txt` | the best comparison window so far (at least 20 game minutes) |
| `progress_game.csv` | the comparison, one row per report |
| `train_log.txt` | everything it printed |
| `checkpoints\` | a copy every 100,000 decisions |
| `tensorboard\` | `tensorboard --logdir runs` |
| `game\log.txt`, `game\log_previous.txt` | the game's own log, and the one before the last restart |

Reading the score: positive = the policy's side did better than the original AI's side over that window (fewer deaths per bot-minute,
more posts held, more enemies downed near it).  Expect it negative at first (the policy starts random), then rising; it levels off
when the policy has learnt what the available rewards can teach (see docs/INTEGRATION.md for what is not measured yet).

## Stack

- **Python 3.10–3.13**
- **PyTorch** (CPU)
- **Gymnasium**
- **Stable-Baselines3 PPO**
- TensorBoard for metrics
- ONNX, only as an optional export format

This is the smallest set that gives tested PPO, checkpointing and evaluation without writing them ourselves. The pinned versions are in `requirements.txt`; they were checked together on 2026-11-08.

A GPU isn't needed. The policy is a 9k-weight MLP, so the game is the bottleneck, not the network.

## Install (once)

Windows:
```
cd tools\aiagents
setup_env.bat
```

Linux, Steam Deck or WSL:
```
cd tools/aiagents
./setup_env.sh
```

Either way, the environment is created in `tools/aiagents/.venv`, separate from anything the game uses.

## Activate

Windows:
```
tools\aiagents\.venv\Scripts\activate.bat
cd tools\aiagents
```

Linux:
```
. tools/aiagents/.venv/bin/activate
cd tools/aiagents
```

## Tooling check (stand-in task, not the game)

This is the tooling check. It takes about 20 s per 20k steps on 1 CPU core.

```
python train.py --config configs/infantry_v0.yaml --seed 1 --timesteps 20000
python evaluate.py --model runs/infantry_v0_pipeline_check_s1/final.zip --seeds 1 2 3
python evaluate.py --baseline random
python export.py --model runs/infantry_v0_pipeline_check_s1/final.zip --out exports/infantry_v0 --onnx
python tests/check_native.py runs/infantry_v0_pipeline_check_s1/final.zip
```

- `tests/check_native.py` needs a C compiler (`cc`, or set `CC`).
- For several seeds, run `train.py` once per seed (`--seed 2`, `--seed 3`). The config lists `seeds: [1, 2, 3]`.
- To see the metrics: `tensorboard --logdir runs`

Each run writes `runs/<name>_<env>_s<seed>/` containing:
- `config.yaml` (the exact settings);
- `available_rewards.txt` (the reward terms that were actually live);
- `progress.csv` and TensorBoard events;
- `checkpoints/` (every 10k steps), `best/` and `eval/`, and `final.zip`.

## Recording the original AI from the real game

See `docs/INTEGRATION.md`, "Recording the original AI". In short:

```
python -m rsai.bridge record --port 47800 --out runs/rec_baseline.npz --seconds 300
```

Start the AIAgents game build with `RS_AI_BRIDGE=127.0.0.1:47800`. When the recording ends, run:

```
python evaluate.py --recording runs/rec_baseline.npz
```

## The model: `configs/infantry_game.yaml` (infantry_v1)

| | |
|---|---|
| Observation | 77 floats (`rsai/spaces.py OBS_NAMES`). Own state (8, with health), nearest 4 enemies and 4 allies (offset, distance, present), crowd counts (4), the nearest command post to take and the nearest of its own (11, with the share of posts held), and 7 pending features (ammunition, weapon, class, facing, line of sight, incoming damage, cover) with their 7 mask bits. The pending ones are 0 until the game exposes them, so the input size won't change when they arrive. |
| Action | One of 11 tactical choices per decision: hold, advance, retreat, strafe left or right, seek cover, flank left or right, suppress, support ally, capture post. Each becomes a destination (`spaces.destination`); the game's own movement, aiming and firing carry it out. |
| Reward | Live now: survival, death, damage taken, command posts taken / lost / held, idling, and enemies downed near the agent (a proxy for kills until kill events are in). Kills, damage dealt, friendly fire, flanking and positioning have slots for later (`rsai/rewards.py`). |
| Network | MLP 64-64, tanh, separate policy and value heads. PPO lr 3e-4, n_steps 1024 x 8 agents, batch 512, 10 epochs, gamma 0.99, GAE 0.95, clip 0.2, entropy 0.01. |
| Decisions | 5 per second of game time, 8 agents (one side; 16 players, PSP parity). |

Expand one behaviour at a time: engage and objectives first (now); then strafing and evasion; then cover (needs cover data); then
flanking and support (need facing and kill events to be rewarded properly).

## Files

| | |
|---|---|
| `rsai/protocol.py` | the bridge's wire format (mirrors `platform/common/ai_bridge.h`) |
| `rsai/bridge.py` | the trainer's TCP server; `record` command |
| `rsai/spaces.py` | observation and action definitions, the observation builder |
| `rsai/rewards.py` | reward terms and which are live |
| `rsai/gamevec.py` | the real game as a vector environment (one slot per bot of the policy's side), rewards and the side-by-side statistics |
| `rsai/game.py` | starting / stopping the game for training |
| `run_training.py`, `train_forever.bat` | unattended training (stop with `stop` or Ctrl+C; resumes) |
| `configs/infantry_game.yaml` | the game training's settings (game location, maps, network, PPO) |
| `rsai/envs/pipeline_check.py`, `train.py` | the tooling check (a stand-in task, not the game) |
| `evaluate.py`, `export.py` | evaluation of recordings / the tooling check, export for the game |
| `tests/control_test.py` | checks that the game obeys the trainer |
| `native/rsnn.[ch]` | the C runner for the game; `native/rsnn_test.c` + `tests/check_native.py` check it |
| `docs/INTEGRATION.md` | what the game exposes, what is missing, how actions will be applied |
| `docs/INFERENCE.md` | native inference choice, costs, deployment workflow |
