# SWBF Renegade Squadron mod tools

| Folder | What it is |
|---|---|
| `maya/swbf_rs_tools.py` | The Maya 2025 plug-in: the **SWBF** menu |
| `maptool/` | Levels: unpack, edit, bake the AI navigation graph, pack, install as a custom map (`MAPS.md`) |
| `character/` | Characters: export to FBX (mesh, joints, skin weights, texture, LODs, hit boxes), import back (`CHARACTERS.md`) |
| `weapon/` | Weapons: the same, for weapons |
| `lib/` | The shared Python code (keep it next to the other folders) |

All of it is Python 3. Maya 2025 has Python 3.11 with numpy built in.

To use the tools outside Maya, install Python 3.9 or later from python.org, then run `pip install numpy`. numpy is only needed for baking navigation.

## Installing the Maya plug-in (Maya 2025)

1. Unzip this folder somewhere permanent, e.g. `D:\SWBFRSDecomp\tools\SWBF_RS_ModTools`. Keep the folder layout: the plug-in finds `lib\` through `..\lib`.
2. In Maya: **Windows > Settings/Preferences > Plug-in Manager > Browse...**, then pick `maya\swbf_rs_tools.py`.
3. Tick **Loaded** and **Auto load** for `swbf_rs_tools.py`. A **SWBF** menu appears in the main menu bar.
4. Open **SWBF > Settings...** and set three folders:
   - **Game folder**: the extracted game, the folder that contains `PSP_GAME`. On a console it is `ux0:data/SWBFRS/GAME` (Vita) or `/data/SWBFRS/GAME` (PS5); copy it to the PC.
   - **Data folder**: where the tools write `mods\`. Copy its `mods` folder to `ux0:data/SWBFRS/` (Vita) or `/data/SWBFRS/` (PS5).
   - **Work folder**: unpacked levels and models (default `~\SWBF_RS_work`).

The FBX plug-in (`fbxmaya`) must be available. It ships with Maya, and the menu loads it when needed.

### Alternative: install by module file
Put a file `SWBF_RS.mod` in `Documents\maya\2025\modules\` containing:

    + SWBF_RS 1.0 D:\SWBFRSDecomp\tools\SWBF_RS_ModTools
    MAYA_PLUG_IN_PATH +:= maya

Then load `swbf_rs_tools.py` in the Plug-in Manager as in step 3.

## The SWBF menu

| Item | Does |
|---|---|
| Import RS Map... | Pick a map and era. It is unpacked into the work folder, and its geometry (`o<N>_...` meshes) and collision (`col_...` meshes) are imported under `RS_Map_<MAP>_<ERA>` |
| Bake Nav Mesh | Writes the map's meshes back to `env/Env.fbx`, bakes the AI navigation graph from the `col_` meshes, and shows the nodes as discs in `RS_NavPreview` (not exported) |
| Export Map... | Rebuilds the level, offering to bake first if you have not. Either installs it as a **new custom map** (`mods/maps`, the original stays) or **replaces the original** level (`mods/files/...`) |
| Import RS Character... | Pick a character. It is imported as mesh, joints (bind pose), skin weights, texture and hit boxes (`col_<joint>`) under `RS_Char_<Name>` |
| Export Character | Writes the selected character back into every level that has it (`mods/files/...` in the data folder) |
| Import RS Weapon... / Export Weapon | The same, for weapons |

## Rules (all tools)

- **Units and axes:** Y up, 1 unit = 1 m. Maya's default centimetres are handled: the importer and exporter convert.
- **Collision:** a mesh whose name starts with `col_` is collision, never drawn.
  - In levels: `col_[type_]...`, where the type is `static`, `kinematic`, `hull`, `noai`, `twosided` or `f<hex>` (see `MAPS.md`).
  - In characters and weapons: `col_<joint name>` is that joint's hit box (the box around the mesh, in the joint's space).
- **Level meshes:** keep the `o<N>_` prefix (the level object). Materials named `m<N>_...` keep the level's material. Any other material with a texture becomes a new one.
- **Characters and weapons:**
  - Keep the joints: the same names, hierarchy and bind pose, because the game's animations drive them.
  - Each vertex follows the joint with its largest weight, since the PSP models are rigid per part.
  - Add, delete, reshape and re-UV freely.
  - Edit the texture PNG in `textures\` beside the FBX; it can be any size.
- **Lower details (LODs):** `<Name>_L1.fbx` and `_L2.fbx` in the model's work folder. If you do not edit them, the edited main mesh is used at every distance.

## In the game
Copy the data folder's `mods` folder to `ux0:data/SWBFRS/` (Vita) or `/data/SWBFRS/` (PS5).

- **Custom maps** appear in Instant Action.
- **Replaced levels and models** (`mods/files/...`) are used in place of the game's own files.
- Delete a file from `mods/files` to undo it.
