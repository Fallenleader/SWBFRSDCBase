# RS mod tools

These tools turn maps into folders of ordinary files you can edit, and turn a folder back into a Renegade Squadron map.

## Setup

1. Install Python 3. On Windows, `py -3` comes with the python.org installer.
2. Keep this folder next to `tools/asura`. `tools/ToolsCrossTest` is also needed for BF and ES maps.
3. Fill in `rsmodtools.ini`:
   - `game_folder`: the extracted game, the folder that holds `PSP_GAME`.
   - `data_folder`: where new maps are installed. This is the folder that holds `mods\`. For the PC build it is the game folder. For Vita or PS5, use a local folder and copy its `mods\maps` across afterwards.

## Dump

Run **`Dump_All_Maps.bat`** once. It writes every map, in every era, to `maps_src\<MAP>\<ERA>\`:

| Path | What it holds |
|---|---|
| `scripts\<TAG>\*.lua` | Every chunk of the level as a Lua script: entities, sky (`SKYB`), fog (`FOG_`), sounds, effects, AI and more. Open them in any text editor. The format is described in `docs/MAPS.md`. |
| `textures\*.png` | Textures. |
| `sounds\*.wav` | Sounds. |
| `env\Env.fbx` | Level geometry and collision (`col_` meshes), for Maya 2025 or Blender. |
| `models\*.fbx` | Props. |
| `map.txt` | The chunk order. Add, remove or reorder lines. |
| `<MAP>\mapinfo.txt` | The id, shown name and base map used when the map is bundled. |

Other games:
- `rs_modtools.py dump --bf <world.wld | level.lvl>` dumps an SWBF1 or SWBF2 world to `maps_src\BF\<name>\`. You get FBX, textures, and `bf_gameplay.lua` with its command posts, regions and paths.
- `rs_modtools.py dump --es <ENVS\<ERA>\<MAP>>` dumps an Elite Squadron map, geometry only, to `maps_src\ES\<MAP>\`.

## Bundle

Drag a map folder (or a single era folder) onto **`Bundle_Map.bat`**.
- Every era is packed into a level file and installed into `<data_folder>\mods\maps` as a new map, named by `mapinfo.txt`. It appears in Instant Action's Planet list.
- Files you didn't change are copied as they are. Edited ones are converted: PNG to palette texture, WAV to VAG, FBX to strips, Lua to binary.
- If you drop an era folder and there is no `id` in `mapinfo.txt`, the folder is only packed, to `<era folder>\<MAP>.PSP`.

Command line: `rs_modtools.py bundle <folder> [--id MY_MAP] [--name "My Map"] [--data <folder>] [--base HOTH]`

## Maya 2025

- `tools/maya`: the Renegade Squadron menu (`rs_asura.mel`).
- `tools/ToolsCrossTest`: the RS Cross-Game Maps menu (`rs_crosstest.mel`).

Both run inside Maya 2025. Its Python 3.11 runs the converters, so no outside Python is needed.

## Not yet

Entities are still written as plain value lists (`u32(...)`, `f32(...)`). Named fields for command posts, spawns and vehicle spawns, and authoring them from a BF2 mission script, are the next step. See `MODTOOLS_RESUME.md` at the top of the project folder.
