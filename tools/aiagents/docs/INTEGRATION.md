# Connecting the trainer to the game

## Status (2026-11-08, branch `AIAgents`)

| Piece | State |
|---|---|
| Bots' state streamed from a real match (position, team, health, squad, vehicle) and the command posts (position, owner) | **Works.** |
| The game carrying out the policy's decisions | **Works.** Each policy bot gets a squad of its own, and the game walks it to the destination the trainer gives. Checked on Tatooine: held bots stayed at their start while the game's side left; bots sent 60 units away closed the distance in about 20 s. |
| The game starting a match and moving through team selection and results screens without anyone at the keyboard | **Works** (`RS_DEDICATED=2`). |
| Fast, headless training clock | **Works.** About 7x real time on the build machine with a fixed game clock, so faster PCs go faster. |
| Unattended training with a running comparison against the original AI | **Works.** See `run_training.py` and `train_forever.bat`. |
| Kill credit, damage dealt, friendly fire | **Not yet.** There's no killer id. A proxy rewards an enemy dying within 35 units of the agent. |
| Ammunition, weapon, class, facing, line of sight, cover | **Not yet.** Each has an observation slot, masked off. |

## Game-side settings

All of these live in the desktop builds (the bridge isn't in the PS5, Vita or 3DS builds). Each is read from the environment first, then from `settings.txt`.

| Setting | Meaning |
|---|---|
| `RS_AI_BRIDGE=127.0.0.1:47800` | Connect to the trainer. |
| `RS_AI_BRIDGE_HZ=5` | Snapshots, and therefore decisions, per second of game time. |
| `RS_AI_BRIDGE_SYNC=1` | Lockstep: the game waits for the trainer's reply after each snapshot. |
| `RS_AI_BRIDGE_CONTROL=1` | Apply the replies. Each reply names bots and gives each a destination. |
| `RS_AI_BRIDGE_RAW=<bytes>` | Also send raw AI-object bytes, for finding new fields. |
| `RS_DEDICATED=2` | Training host. The game hosts an offline match over `RS_SESSION_MAPS` by itself, with no window and no sound. When there are no soldiers for 20 s, it presses Cross every 3 s to get through team selection and the results screens. |
| `RS_AI_WINDOW=1` | With `RS_DEDICATED=2`, show the game in a window (to watch). |
| `RS_FAST=1 RS_VCLOCK=1` | No frame pacing, and a game clock of exactly 1/60 s per frame, so the game runs as fast as the CPU allows. |

## How a decision reaches the game

The traced squad layout:
- squad +0x98: the members' ids;
- squad +0xAC: the member count;
- squad +0x3C: the target (999 means a position);
- squad +0x40: the position;
- squad +0x4C: the order.

The function that gives a squad its destination is `func_0898D4F0`: with target 999 it returns squad +0x40. Order 0x3F0 (1008) is "go to the target's position". The game AI uses it with a soldier's id, for following.

For each bot in a reply, `rs_ai_command` (`game_patches.c`) does this:
1. It takes the bot out of its squad (`func_0898D7A8`).
2. It gives the bot a squad of its own: an emptied squad of its side that the policy used before, or a new one (`func_089268D0`). A side has only ten squads.
3. It sets order 0x3F0, target 999, and the destination.

The game's commander (`rs_ai_assign`) and the idle and stuck fixes leave these squads alone. Between matches the list is cleared.

Firing and aiming stay with the game, as do path finding, getting into vehicles and the rest. The policy decides where each bot goes; `rsai/spaces.py` `destination` turns each tactical action into a point.

## What the game gives (per bot)

| Field | Source |
|---|---|
| id | Soldier object `+4`, one per life. |
| team | AI object `+12`. |
| position | The soldier sub-object's virtual `+0x14`. |
| health | Soldier sub-object `+0x28`, where the sub-object is at `o + *(*o - 12)`. 0 or less means dead (`func_0898CD0C`, `func_089A64F4`). Typical values are 60, 133, and about 600 for heroes. The trainer also uses each bot's fraction of the highest health it has seen. |
| squad, order, target | AI object `+0xE4`; squad `+0x4C` and `+0x3C`. |
| vehicle | `+0xF8`. |
| policy flag | 1 if the bot is under the trainer. |

Command posts come from `CP_IDS` / `CP_COUNT`, plus `func_08ABC6F8(0x08C2BA28, id, 1)` for the object and its position. The owner is the side whose commander has the post in its "ours" mask (`+0x4A`).

## Still to add

| Need | Lead |
|---|---|
| Kills, damage dealt, friendly fire | Damage is the message `0x9E500986` `{type, source id, source +0x54, amount}`. It is delivered either through the target's virtual `+8` (`func_089D710C`) or through `func_08873D6C`. Hook the receiver of that message type and send events (source, target, amount). The scoreboard also keeps kills per player (`FE_ListFriendlyNumKills`): AI object `+0x54` looks like the persistent player id. |
| Ammunition, weapon, class | The soldier object (dump it with `RS_AI_BRIDGE_RAW` from the sub-object) and the HUD's weapon panel (`loadout_slots.c`). |
| Facing | Soldier `+0x118` is the player's aim direction (look centring). Check that bots use it too. |
| Line of sight | The game's ray query (`func_088B73C4`), called natively for each pair of agent and nearest enemy. |
| Cover | The game has no cover data. Derive cover points per map from collision rays, or from line of sight at run time. Until then, `seek_cover` falls back behind the nearest ally. |

## Fixes made along the way (desktop builds)

**Thread stacks are now reused.** Every voice line and sound stream starts a game thread. Each one took 1 MB of the 32 MB guest stack area and never gave it back, so a long session aborted with "out of thread stacks". That's about 30 sounds' worth: minutes of play at normal speed, and seconds when training fast.

This affected long PC sessions too. The fix (`guest64.c`, `desktop/main.c`, `hle.c`) is on the AIAgents branch, and the other desktop branches need it as well.
