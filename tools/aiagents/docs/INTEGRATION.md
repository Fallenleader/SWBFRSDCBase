# Connecting the trainer to the game

Status on 2026-11-08 (branch `AIAgents`):

| Piece | State |
|---|---|
| Bots' state streamed from a real match | **Works.** Checked in a Tatooine conquest match on the Linux test build: 394 snapshots, 34 bot lives, 18 deaths. |
| Observation vector built from that stream | **Works.** It covers the features listed as available below. |
| Policy actions sent back to the game | **Works.** These are the lockstep replies. |
| Game applying those actions to its bots | **Not done yet.** This is the blocker for training on real gameplay. |
| Kill, damage, health, ammunition, weapon, facing, line-of-sight and cover data | **Not exposed yet.** Each one has a slot in the observation, masked off for now. |

`GameBridgeEnv` refuses to train until the game reports that it applies actions (header `caps` bit 0). A policy trained on actions that change nothing would look like it learned something when it had not.

## The bridge (game side)

The bridge is `platform/common/ai_bridge.c` and `ai_bridge.h`. It is in desktop builds only (Windows, Steam Deck/Linux); PS5, Vita and 3DS never contain it.

Each setting is read from the environment variable first, then from `settings.txt`:

| Setting | Meaning |
|---|---|
| `RS_AI_BRIDGE=127.0.0.1:47800` | Connect to the trainer. Unset means the bridge is off. |
| `RS_AI_BRIDGE_HZ=5` | Snapshots per second of game time (counted in game frames). |
| `RS_AI_BRIDGE_SYNC=1` | Lockstep: wait for the trainer's reply after each snapshot. |
| `RS_AI_BRIDGE_RAW=<bytes>` | Also send the first `<bytes>` of each bot's AI object. This is for finding fields that aren't traced yet. |

The bridge runs from `rs_patches_frame` (once per frame, after the pad read). It reads the game's AI object table at `0x08C2A880` (`rs_ai_snapshot` in `game_patches.c`). The wire format is in `ai_bridge.h`, and `rsai/protocol.py` mirrors it.

## What the game gives now

These are per-bot fields, traced earlier for the idle-bot fixes (`game_patches.c`):

| Field | Source |
|---|---|
| id | The soldier object's `+4`. The id is stable for one life; a respawned bot gets a new id. |
| team | AI object `+12`. Tatooine showed the values 2 and 3. |
| position | The soldier sub-object's virtual `+0x14`. |
| squad, squad order, the squad's command post | AI object `+0xE4`; squad `+0x4C` and `+0x3C`. |
| goal type | Behaviour `+0xC`, then `+10`. |
| vehicle | AI object `+0xF8`. |
| controller | AI object `+0x54`. |
| flags | AI object `+0xC8`. Bit 0x20 means the bot was taken out of its squad. |

**How death shows:** a dead bot leaves the table, so death is detected as a record that stops (`evaluate.py`, `rewards.py`). The alive flag stayed 1 for every record in the test.

**What the trainer derives from positions:** velocity, the nearest 4 enemies and 4 allies (offset, distance), and enemy and ally counts within 20 and 50 units.

**Not covered:** the player's own soldier isn't in the AI table, so it isn't in the stream.

## The blocker: applying actions to bots

What was found:

- **The player's soldier** is updated by `func_0899530C` (the soldier class's virtual at data index 777521). It reads the controls from its input object at soldier `+92`, via that object's virtual `+8`: `getAction(n)`, which returns a float.
  - Actions 0 to 5 are traced: turn, look, aim X, aim Y, move, strafe (`twin_stick.c`).
  - The update also reads actions 7, 9, 10, 18, 21, 22, 24 and 25. These are buttons (fire, jump and so on) not yet named.
- **Bots don't go through that update.** In gdb, `rs_soldier_frame` (the hook on `func_0899530C`) was hit only for the player's soldier during a 16-bot match. Bots are driven by the AI's behaviour and goal objects instead (`+0xB0`, the goal factories next to `func_08956D80`, and squad orders).

So there are two ways to apply a policy's actions.

**A. Tactical control (recommended).** The policy picks one of the actions in `rsai/spaces.py` (hold, advance, retreat, strafe, seek cover, flank left or right, suppress, support an ally) a few times a second. The game's own navigation, aiming and firing carry it out.

This is cheap to run on 3DS and Vita, and it keeps movement and aiming as they are in the original game. It needs:

1. The goal or behaviour call that sends a bot to a position. Known so far:
   - `func_08926478(commander, squad, post)` sends a squad to a command post.
   - `func_0898D728` puts a bot in a squad.
   - A per-bot "move to point" goal still has to be found among the goal factories (Ghidra: the callers of the AI object pool, `func_08956118`).
2. The bot's target field: which enemy it engages. Then "suppress" and "support ally" can set it.
3. A native hook in the AI's per-bot update. It applies the trainer's action (`rs_ai_bridge_action(id)` in `ai_bridge.c`) as a goal and sets `caps` bit 0.

**B. Low-level control.** Give each bot an input object like the player's and run it through `func_0899530C` with action values from the policy.

This lets the network learn movement and aiming itself. But it needs many more training steps and a larger network, and the soldier update would run for every bot. That is too costly for 3DS and Vita. It's kept as an option for PC-only experiments.

## Instrumentation still to add

| Need | Lead |
|---|---|
| Kills, damage dealt and taken, friendly fire | The damage message is type `0x9E500986`: `{type, source id, source +0x54, amount}`. `func_089D710C` builds it (`game_20.c`: 15419, 27771, 28256). Hook its receiver and stream events (source id, target id, amount). |
| Health | It isn't in the first 512 bytes of the AI object. Every death in the test fit no field that falls to 0. Next, dump the soldier object (`so = o + *(*(o) - 16)`) with a larger `RS_AI_BRIDGE_RAW`, or watch the player's HUD health read. |
| Ammunition, weapon, class | The HUD's weapon panel (`rs_loadout_frame` / `loadout_slots.c` knows the player's slots) and the soldier object. |
| Facing | Soldier `+0x118` is the aim direction (player, look centring). Check that bots use it too. |
| Line of sight | The game's level ray query (`func_088B73C4`; masks traced with `RS_COL_LOG`). Call it natively from the bridge for each pair of agent and nearest enemy. |
| Cover | There is no cover data in the game. Derive cover points per map offline from the collision data (rays around each nav point), or from line of sight at run time. |
| Command post positions and owners | `CP_IDS` at `0x08B1B510`. `func_08ABC6F8(0x08C2BA28, id, 1)` gives the post object, and `soldier_pos` gives its position. Ownership comes from the commander's take/hold/ours masks (`ai_cmd +0x48..0x4A`). |

## Recording the original AI (baseline)

1. On Windows, in a prompt, start the recorder:
   ```
   tools\aiagents\.venv\Scripts\activate.bat
   cd tools\aiagents
   python -m rsai.bridge record --port 47800 --out runs\rec_baseline.npz --seconds 300
   ```
2. Start the AIAgents Windows build with `RS_AI_BRIDGE=127.0.0.1:47800` (in `settings.txt` or in the environment), and play or spectate a match.
3. Get the metrics:
   ```
   python evaluate.py --recording runs\rec_baseline.npz
   ```
   This gives survival, deaths per bot-minute, inactivity, and spacing to enemies and allies. The other metrics are listed as not measured until their instrumentation is in.
