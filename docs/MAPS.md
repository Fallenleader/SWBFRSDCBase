# Maps: export, edit, rebuild, add as new maps

`tools/asura/maptool.py` unpacks a Renegade Squadron level into ordinary files (FBX meshes, PNG textures, WAV sounds and plain text
for everything else). It then packs the folder back into the game's own `.PSP` level format, and can install the result as a **new
map** that the game lists in Instant Action after its own.

You need Python 3. `numpy` is optional: install it (`pip install numpy`) and textures with many colours pack much faster.

```
python3 tools/asura/maptool.py list    <game folder>                     # the maps and their eras
python3 tools/asura/maptool.py unpack  <game folder> HOTH -o maps        # -> maps/HOTH/CLASSIC/...
python3 tools/asura/maptool.py verify  maps/HOTH/CLASSIC                 # what changed (untouched = identical to the original)
python3 tools/asura/maptool.py pack    maps/HOTH/CLASSIC -o HOTH.PSP     # back to the game's format
python3 tools/asura/maptool.py install maps/HOTH --id HOTH_MOD --name "Hoth (Modded)" --data <data folder>
```

The `<game folder>` is the folder that holds `PSP_GAME` (or `PSP_GAME/USRDIR/ENVS` itself).

## 1. Maps, eras and files

Every level is one self-contained file: `PSP_GAME/USRDIR/ENVS/<ERA>/<MAP>.PSP`.

* **CLASSIC** is the Galactic Civil War.
* **PREQUEL** is the Clone Wars.
* **CAMPAIGN** holds the story missions.

A map that exists in more than one era has one file per era. Each file has its own entities, teams, sounds and scripts. `unpack <game folder> <MAP>` therefore writes one folder per era:

```
maps/GEONOSIS/CLASSIC/      (everything of ENVS/CLASSIC/GEONOSIS.PSP)
maps/GEONOSIS/PREQUEL/      (everything of ENVS/PREQUEL/GEONOSIS.PSP)
```

Edit each era separately. The folders do not share files.

## 2. What an era folder holds

| Path | What it is |
|---|---|
| `map.txt` | The layout of the level file: one line per chunk, in file order, naming the file that holds it. |
| `textures/**.png` | Every texture, RGBA 8-bit with alpha kept. The folders follow the game's resource names (`textures/graphics/environments/hoth/snow_1.png`). |
| `sounds/**.wav` | Every sound effect, 16-bit PCM mono. |
| `env/Env.fbx` | The level geometry, FBX 7.4 (Maya 2025 and earlier, 3ds Max, MotionBuilder, any Autodesk FBX SDK importer). |
| `models/*.fbx` | The map's props (turrets, dishes, debris): a mesh, a joint per part and a rigid skin. |
| `scripts/<TAG>/<n>_<name>.lua` | Every other chunk as a Lua script. One folder per chunk type; `<n>` is the chunk's number in the file. |
| `resources/*.lua` | Embedded resources that are neither textures, sounds nor meshes (fragment data, some animation sets), as Lua scripts. |
| `rs_map.lua` | The scripts' value constructors, for running a script with Lua 5.3 / 5.4 (not needed by `pack`). |
| `README.txt` | A short reminder of the above. |
| `.maptool/` | The original level file and a record of what was unpacked. Do not edit or delete it: `pack` compares against it. |

### The script format (Lua)

Each script is a Lua file that returns its chunk as a list of typed values, in file order. Comments start with `--`.
Tables inside the list (`{ ... }`) only group values, such as one record of a list; `pack` flattens them.

```lua
require "rs_map"
-- FOG: distance fog
return chunk "FOG " {
  f32(0.88235366),                 -- red (0..1)
  f32(0.8974125),                  -- green
  f32(0.9025889),                  -- blue
  u32(0),
  f32(175),                        -- fog start distance
  f32(225),                        -- fog end distance
  u32(0), f32(0.5), f32(0.5),
}
```

The value constructors:

```
u32(123)           unsigned 32-bit integer
i32(-5)            signed 32-bit integer
x32(0x8a3f0012)    32-bit value in hex (name hashes, flags, ids)
f32(1.5)           32-bit float (printed so it reads back exactly)
u16(7) / u8(3)     16 / 8-bit values
str "text"         8-bit text, NUL-terminated, padded with zeros to 4 bytes
wstr "text"        UTF-16 text
hex "01 02 ff"     raw bytes
```

Strings use Lua's escapes: `\\  \"  \n  \t  \xNN` (8-bit) and `\u{XXXX}` (in `wstr`). Resources kept as data use
`return resource "<name>" { ... }` the same way.

The chunks whose layout is known are written with every field named in a comment, and their lists as one table per record
(`{ -- object 12 ... }`):

* `EMOD`: the level objects and their bounds.
* `FOG `: colour, start and end distance.
* `SKYB`: the sky box textures and tint.
* `TEXT`, `MTRL`: texture lists and materials.
* `FNFO`: the file size, set by `pack`.
* `TTXT`, `hmap`: the map screen.

Other chunks use the generic form, one value at a time. That covers entities, command posts, AI, effects, sound banks,
cut-scenes, collision and the navigation mesh.

**Plain lists and Lua code.** `pack` reads the plain form above by itself; no Lua is needed. A script can also be real Lua
code — loops, functions, tables generated from data, `require` of your own modules — as long as it returns
`chunk "<TAG>" { ... }`. `pack` runs such a script with Lua 5.3 or 5.4 (`lua5.4`, `lua5.3` or `lua` on the PATH), with
`rs_map.lua` defining the constructors. Run directly by Lua, `chunk` returns the packed bytes, so a converter for another
game's map format can be written in Lua (or generate these files from any language):

```lua
require "rs_map"
local cps = { {"cp1", 10, 0, 20}, {"cp2", -40, 0, 75} }     -- e.g. read from another format
local t = { u32(#cps) }
for _, c in ipairs(cps) do t[#t + 1] = { str(c[1]), f32(c[2]), f32(c[3]), f32(c[4]) } end
return chunk "XXXX" (t)
```

**Older folders.** Folders unpacked by an earlier `maptool` have `.txt` scripts (one `u32 123  # comment` item per line).
`pack` still reads them; `maptool.py convert <era folder>` turns them into Lua scripts and updates `map.txt`
(edits are kept, and an unchanged script still counts as unchanged).

**Editing:**

* Change any value.
* Lists can grow or shrink, but keep their counts right: a count is just another field.
* Text can be made longer or shorter.

Values that point **into** a chunk by byte offset are not adjusted, so change lengths only where nothing else points past them.

### map.txt

```
0002 resource 0 0x0 2 0x208009 "\\graphics\\objects\\rebeldish.tga" textures/graphics/objects/rebeldish.png
2481 chunk "FOG " 1 0x1 scripts/FOG_/2481.lua
```

Each line is one of these forms:

* `<n> chunk "<TAG>" <version> <flags> <file>`
* `<n> resource <version> <flags> <type> <unk> "<name>" <file>`

`pack` builds the file in the order of these lines, so you can do the following:

* **Remove a line** to drop a chunk.
* **Reorder lines.**
* **Add a chunk**: write `new` instead of the number and name a file for it, a `.lua` script, or a `.png` / `.wav` for a resource.

## 3. Editing each kind of file

### Textures (PNG)

* Keep the size a power of two. The size may change, for example 128×128 → 256×256.
* All four channels count:
  * Alpha is transparency for cut-out and blended surfaces.
  * On character textures, alpha is the team-colour mask.
* The game stores 16- or 256-colour palettes. An image with no more colours than that is stored exactly. A richer one is reduced by median cut plus k-means over RGBA.
* Smaller mip levels are rebuilt from the edited image.

### Sounds (WAV)

Use 16-bit PCM. Stereo is mixed to mono. The sample rate is kept as the file has it.

### Level geometry (env/Env.fbx)

The level is grouped into **level objects** (the `EMOD` chunk), and each object is a mesh:

* `o003_Bridge00` is object 3, named "Bridge00".
* Its blended second-texture layer, if any, is a second mesh named `o003_Bridge00__blend`. In that layer, vertex alpha is the blend weight.

The game culls each object by its bounds, and `pack` widens the bounds of every object whose geometry changed.

**Materials** are named `m034_bridge`, meaning material 34 of the map's material list. Its colour texture is linked to the PNG in `../textures/`.

Each vertex carries:

* position
* normal
* UV
* colour (RGB, plus alpha on the blend layer)

**Axes and units:** Y is up, 1 unit = 1 metre. Maya imports this as 100 cm. Export back in any unit; the importer converts.

**Rules for the importer:**

* Keep the `o<number>_` prefix on mesh names. A mesh without one is added to the nearest object, and `pack` reports that.
* Polygons are triangulated, and object transforms are applied.
* A material named `m<number>_...` keeps that material.
* Any other material gets a new material made for the texture it uses. Point its colour texture at a PNG in this folder's `textures/`. A PNG that is not already a texture of the level is added to the level as a new texture.
* A material with no texture uses material 0, and `pack` says so.
* The triangles are rebuilt into GE strips of at most 160 vertices, the game's own limit being 175.

### Collision (the col_ meshes in env/Env.fbx)

What players, vehicles, shots and the AI collide with is separate from what is drawn (the `PHEN` chunk). `unpack` exports it into `Env.fbx` as meshes whose names start with `col_`, and `pack` rebuilds it from them. Collision can be as simple (a few boxes) or as detailed as the level needs: the game tests every collision triangle it is near, so keep it to what must block.

**Naming:** `col_[type_...][c<number>_]name`, for example `col_static_c12_Bunker`, `col_kinematic_Fence`, `col_hull_c5_Box01`, `col_wall`.

* **Type words** (any number, in any order; none means `static`). The game marks each collision polygon with "ignored by" bits, and a test skips polygons carrying the bits it excludes. Measured in the game:

| Word | Bits | Effect |
|---|---|---|
| `static` | 0 | Blocks everything: soldiers, vehicles, shots, AI line of sight. Use this for walls and floors. |
| `kinematic` | 4 | Not touched by soldiers or vehicles; shots and AI sight still hit it. The game uses it on the drawn geometry of details (railings, pipes, lights) so you can pass through them but shoot them. A blocker that should not block paths needs this word. |
| `hull` | 2+8 | The game's invisible `Col` boxes round buildings and at the map's edge: blocks soldiers and vehicles, but the AI sees through it (as `noai`), and one rare test (bit 2) ignores it. |
| `noai` | 8 | The AI's line-of-sight and path tests pass through it; blocks everything else. |
| `twosided` | 1 | Hit by rays from both sides. |
| `f<4 hex digits>` | raw | Any other bits, written as they were. `f0010` is used on terrain; `f0400`, `f0800`, `f1000`, `f2000`, `f4000`, `f8000` make the polygon ignored by one class of mover each (`f1000`: soldiers; the others: vehicle classes). |

* **`c<number>`** names a collision object. Meshes with the same number become one object (the game sorts collision into objects, each with its own bounding tree). A mesh without a number becomes an object of its own. Keep the numbers on exported meshes; give new meshes new numbers or none.
* **Materials** named `cmat<number>` are collision materials (footstep sound, surface effects). A polygon without one gets `cmat0`. The exported `cmat` colours only tell them apart in the viewport.
* Quads stay quads (one record, two triangles); triangles stay triangles; bigger polygons are split into fans. A collision object can have up to 65534 vertices.
* Only the meshes are read: hidden or not, `col_` meshes are never drawn.

`pack` rebuilds the collision only when the `col_` meshes describe a different set of triangles, materials or types from the original; otherwise the original chunk is kept byte for byte. It reports what it did. If `Env.fbx` has no `col_` meshes at all, the original collision is kept.

### The AI navigation graph (nav mesh)

Bots find their way on a graph of walkable circles (the `NAV1` chunk): each node is a circle (0.5 to 6 m) where a soldier can stand,
linked to the nodes a soldier can walk to in a straight line; nodes and links are closed to the vehicle classes that do not fit
(four classes, largest first), and one-way links let soldiers drop down ledges.  A level whose walkable ground changed needs a new graph:

    maptool.py bake <era folder>

bakes it from the collision (the `col_` meshes of `env/Env.fbx`; the original collision if there are none) into `nav/navmesh.nav`,
points `map.txt`'s NAV1 line at it, and writes `nav/navmesh_preview.fbx` (the nodes as discs, one mesh per vehicle-class mask) to look
at.  `pack` then builds it into the level.  What counts:

* floors: collision polygons sloped less than 50 degrees, not `hull` and not the level's edge, with 1.8 m free above them;
* walls: collision polygons a soldier collides with (not `kinematic`);
* steps up to 0.6 m are walked, drops of 0.6 to 4 m become one-way links;
* walkable areas smaller than 150 m2 (roofs, crates) are left out; the graph covers the area the level's own graph covered (+10 m),
  or the level's edge box for a new level;
* vehicle classes need 14 / 6.5 / 3.5 / 2 m of clearance (measured on the shipped levels).

Baking Hoth takes about 30 seconds (Python 3 with numpy: Maya 2025's Python has it; elsewhere `pip install numpy`).

Workflow: unpack, edit (geometry and `col_` meshes), bake, pack (or install), play.


**Maya:**

* Import with *File → Import* (FBX).
* Export with *File → Export Selection → FBX export*, FBX 2014/2015 or later, ASCII or binary (both are read). Smoothing groups and tangents are not needed.
* Keep the mesh names.

### Props (models/*.fbx)

Props are rigid models: each part follows one joint, with weight 1. Edit the mesh and keep the joints and the skin. The joint with the largest weight decides a vertex's part. A prop is rebuilt from its FBX only when that file changed.

### Scripts

See the text format above.

## 4. Repacking

`pack <era folder>` writes the level:

1. Every chunk whose file did not change is copied from the original exactly.
2. Changed files are converted:
   * PNG → palette texture
   * WAV → VAG
   * FBX → strips
   * text → binary
3. The `FNFO` file size is updated.

An untouched folder packs to the original file byte for byte; `verify` checks that.

`pack` also prints what it rebuilt.

## 5. Adding the map to the game

```
python3 tools/asura/maptool.py install maps/HOTH --id HOTH_MOD --name "Hoth (Modded)" --data <data folder>
```

This packs every era folder of `maps/HOTH` and writes:

```
<data>/mods/maps/HOTH_MOD.txt               the definition
<data>/mods/maps/CLASSIC/HOTH_MOD.PSP       one level file per era the map has (CLASSIC / PREQUEL)
```

`<data>` is:

* **PS5:** `/data/SWBFRS`
* **PS Vita:** `ux0:data/SWBFRS`
* **PC:** the game folder, or `RS_DATA_DIR`

The **id** is 1–24 characters from `A-Z 0-9 _`. It is the level's file name and must not be one of the game's map names.

The definition file:

```
Name = Hoth (Modded)          # shown in the Planet list and the playlist
Base = HOTH                   # the original map it came from
Modes = 1 1 0 0               # optional: game modes offered (1 = yes), else Base's
Space = 0                     # optional: 1 = a space battle, else Base's
```

From `Base`, the map takes:

* which game modes it offers;
* ground or space;
* every file the game looks up by the map's name that the new map does not have, such as its loading screen. These come from the base map.

In the game, the new map is listed in **Instant Action → Planet** after the original 22. It works like any other map in the playlist, mode and era choice, and loading. `RS_CUSTOM_MAPS=0` in `settings.txt` hides custom maps.

The era choice offers the eras that have a level file: Galactic Civil War for `CLASSIC/`, Clone Wars for `PREQUEL/`.

**Limits:**

* Up to 64 custom maps.
* Custom maps are not counted in the profile's "maps played" statistics, which have a slot per original map only.
* Campaign levels (`CAMPAIGN/`) can be unpacked and packed, but only Instant Action lists new maps.

## 6. How it works (for developers)

**Tool side.** These files are in `tools/asura/`:

| File | Role |
|---|---|
| `maptool.py` | The CLI: unpack, pack, verify, convert, bake, install. |
| `luascript.py` | The Lua script format: writing, the plain-form reader, running Lua for scripts with code. |
| `rs_map.lua` | The constructors in Lua (`chunk` packs the bytes with `string.pack`). |
| `textdump.py` | The item syntax underneath (and the older `.txt` scripts), generic and lossless. |
| `chunkfmt.py` | The named-field forms of known chunks. |
| `envfbx.py` | Env ↔ FBX. |
| `fbxread.py` | FBX 7.x reader, ASCII and binary. |
| `texenc.py` | RGBA → palette texture, with swizzle and mips. |

They reuse the older tools `texture.py`, `pack.py` (strips, VAG, rigid models), `fbx.py` (prop export), `env.py`, `model.py`, `skeleton.py` and `rigid_io.py`.

**Runtime side.** `platform/common/custom_maps.c` does three things:

1. **The map table.** The game's 22-entry table at `0x08B1B980` (20 bytes each: prequel name, classic name, STDTEXT id, 4 per-mode bytes, space flag) is copied into a larger native table with the custom maps after it.
   * The eight functions that read the table are replaced through `tools/dc/hooks.py`, as are the two Instant Action list commands with their own bound of 22: `FE_ListAllMaps` and `FE_SelectMapPlanet`.
   * The profile's times-played counter (`func_089775E0`) ignores custom maps.
2. **Names.** A custom map's name is STDTEXT id `0x7F00 + n`, answered by the text lookup hook (`game_patches.c rs_stdtext_get`).
3. **Files.** The game finds a level by listing `ENVS/<ERA>` (`func_08A696F4`) and opening `ENVS/<ERA>/<NAME>.PSP` (`func_08978800`).
   * `hle.c` appends the custom levels to that directory listing (`sceIoDread`).
   * It sends opens and stats of those paths to `<data>/mods/maps`.
   * Any other file named after a custom map that does not exist is taken from the base map's.

**Level format notes:**

* **Env header.** The first word of the Env resource header is the number of **level objects** (`EMOD`), not of materials. The fifth word of each strip record is the strip's object.
* **EMOD record.** Each record is: name, position, ten flags, one flag, a zero, then the bounds relative to the position (min x, max x, min y, max y, min z, max z) and a radius.
* **FNFO** holds the file size.
