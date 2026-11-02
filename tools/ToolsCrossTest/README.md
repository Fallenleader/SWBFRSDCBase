# ToolsCrossTest: Battlefront 1 / Battlefront II / Elite Squadron maps in Renegade Squadron

These are experimental tools that sit beside the regular Maya bundle (`tools/maya`). That bundle is not changed.

## What converts

| Source | Input | Read with |
|---|---|---|
| SWBF1 / SWBF2 mod tools world | `Worlds/<MAP>/world1/<map>.wld` (with `.ter`, `.msh`, `.odf`, `.rgn`, `.pth` next to it) | `swbf_world.py`, `swbf_msh.py` |
| SWBF1 / SWBF2 munged level | `_LVL_PC/<MAP>/<map>1.lvl` | unmunged first with **swbf-unmunge** (`bf_unmunge.py`) |
| Elite Squadron (PSP) | the map folder `ENVS/<ERA>/<MAP>/` (`<MAP>GR.PSP` ground, `SP` space, `IN` interiors, `HV` heroes) | `tools/asura/maptool.py`; the geometry, texture and collision formats match RS |

What carries over:
- Terrain (height, blend layers, colour).
- Static objects (render meshes, with collision meshes or primitives).
- Textures, resized to 256 px by default.
- Command posts, regions and paths. These are listed in `bf_gameplay.lua`.

What a converted map gets from the base RS map you pick (for example `--base HOTH`):
- Its gameplay entities: command posts, spawns, vehicles, turrets. These are moved onto the new ground.
- Its sounds and loading screen.
- A re-baked AI graph.

## Command line (Python 3)

```
python bf2rs.py info  <world.wld | level.lvl>
python bf2rs.py fbx   <world.wld | level.lvl> -o OUT                    -> OUT/bf_world.fbx, OUT/bf_gameplay.lua, textures
python bf2rs.py rsmap <world.wld | level.lvl> --game <RS game folder> --base HOTH --era CLASSIC -o OUT --install <data folder> --id MY_MAP
python es2rs.py fbx   <ES map folder> [--part GR] -o OUT                  -> OUT/_es/GR/ (Lua scripts per chunk, PNGs, env/Env.fbx)
python es2rs.py rsmap <ES map folder> --game <RS game folder> --base HOTH -o OUT --install <data folder> --id MY_MAP
```

Options:
- `--step 4` keeps every 4th terrain vertex.
- `--radius M` cuts the map to M metres around the centre.
- `--tex 256` sets the texture size.
- `--detail high` uses the full-detail meshes instead of the low-detail ones.
- `--version swbf|swbf_ii` picks the game for a `.lvl`.

`--install` writes the map into `<data>/mods/maps/` and adds a line to `mods/mod_maps.txt`. See `docs/how_to_mod_maps.md`.

The chunks of an RS or ES level unpack to readable Lua with `maptool.py unpack`, and `maptool.py pack` compiles them back to the binary chunks.

## Maya 2020

1. Install Python 3 on the PC. Maya 2020's own Python is 2.7, so the converters run outside Maya.
2. In the Script Editor's MEL tab, run:
   ```
   python("import sys; sys.path.insert(0, 'D:/SWBFRSDecomp/tools/ToolsCrossTest')");
   source "D:/SWBFRSDecomp/tools/ToolsCrossTest/rs_crosstest.mel"; rsCrossMenu();
   ```
3. Open **RS Cross-Game Maps > Settings...** and set:
   - the Python 3 command (default `py -3`),
   - the RS game folder (the one that holds PSP_GAME),
   - a work folder,
   - the data folder (the one that holds `mods/`).

Menu:
- **Import BF1 / BF2 World**: brings the world into the scene as FBX.
- **Import Elite Squadron Map** (ground or space): brings the map into the scene as FBX.
- **Build Renegade Squadron Map**: converts the map and installs it.

To ship an edited level, use the regular `tools/maya` menu (Renegade Squadron > Export Selected / level export).

## swbf-unmunge

Munged `.lvl` files need `swbf-unmunge.exe` (github.com/PrismaticFlower/swbf-unmunge, release 1.3.0) next to these scripts or on the PATH. On Linux and the Steam Deck it runs under Wine. It is not committed to the repo. The delivered folder includes it with its `third_party.md` licence notes.

## Tested

- SWBF2 munged Hoth (`hot1.lvl`) was converted with `--base HOTH --era CLASSIC`, then installed as `RS_TEST`. It loads and plays in Instant Action: terrain, AT-ATs, the shield generator, command posts and bots.
- SWBF1 Hoth: unmunge and `info` work.
- ES Hoth (`HOTHGR.PSP`): it unpacks, and its geometry and collision import.

## Limits

- ES entities (ENTI v0), level objects (EMOD v7) and the AI graph (NAV1 v16) are not converted. Gameplay comes from the base map.
- BF props are static: no destructibles and no animated doors.
- Terrain water and foliage are not converted.
- Large BF maps should use `--step 4` or more, and `--radius`, to stay within the PSP/Vita memory budget.
