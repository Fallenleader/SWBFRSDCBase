# AI agents: training tools (branch `AIAgents`)

This folder holds the training tools for neural-network soldier AI in Renegade Squadron. The first target is infantry combat.

- The training stack runs on a PC only.
- The game never needs Python. A trained policy runs in the game through `native/rsnn.c` (see `docs/INFERENCE.md`).

## What works, and what doesn't yet

| | |
|---|---|
| Training stack (PPO, seeds, checkpoints, metrics, evaluation, export) | works |
| Native C inference matches PyTorch (fp32 exact, int8 same actions) | works |
| Real bot state streamed from the game (`RS_AI_BRIDGE`), recordings, baseline metrics | works |
| **Training against the real game** | **blocked**: the game doesn't apply the policy's actions to bots yet (`docs/INTEGRATION.md`) |

`env: pipeline_check` is an abstract stand-in, **not the game**. It only proves the tooling runs end to end. Its scores say nothing about how a policy plays Renegade Squadron.

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

## First experiment

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

## Initial model: `configs/infantry_v0.yaml`

| | |
|---|---|
| Observation | 66 floats (`rsai/spaces.py OBS_NAMES`). Own state (6), nearest 4 enemies and 4 allies (offset, distance, present), crowd counts (4), and 8 pending features (health, ammunition, weapon, class, facing, line of sight, incoming damage, cover) with their 8 mask bits. The pending ones are 0 until the game exposes them, so the input size won't change when they arrive. |
| Action | One of 10 tactical choices per decision: hold, advance, retreat, strafe left or right, seek cover, flank left or right, suppress, support ally. The game's own movement and aiming are meant to carry them out. |
| Reward | Survival, death, inactivity are live now. Kills, damage, friendly fire, team support, flanking, positioning and objective each have a slot and turn on with their instrumentation (`rsai/rewards.py`). |
| Network | MLP 64-64, tanh, separate policy and value heads. PPO lr 3e-4, n_steps 512, batch 256, 10 epochs, gamma 0.99, GAE 0.95, clip 0.2, entropy 0.01. |
| Decisions | 5 per second, 15 agents (PSP parity: 16 players). |

Expand one behaviour at a time once the game applies actions:
1. engage (target choice + hold / advance / retreat);
2. then strafing and evasion;
3. then cover (needs cover data);
4. then flanking and support.

## Files

| | |
|---|---|
| `rsai/protocol.py` | the bridge's wire format (mirrors `platform/common/ai_bridge.h`) |
| `rsai/bridge.py` | the trainer's TCP server; `record` command |
| `rsai/spaces.py` | observation and action definitions, the observation builder |
| `rsai/rewards.py` | reward terms and which are live |
| `rsai/envs/game_env.py` | Gymnasium env over the real game (refuses to train until actions are applied) |
| `rsai/envs/pipeline_check.py` | the tooling-check env (not the game) |
| `train.py`, `evaluate.py`, `export.py` | training, evaluation (policies, baselines, recordings), export |
| `native/rsnn.[ch]` | the C runner for the game; `native/rsnn_test.c` + `tests/check_native.py` check it |
| `docs/INTEGRATION.md` | what the game exposes, what is missing, how actions will be applied |
| `docs/INFERENCE.md` | native inference choice, costs, deployment workflow |
