# How to mod maps: the map list, custom maps, instances and eras

All files are in the game's data folder, in `mods/`:

| Build | Data folder |
|---|---|
| PS Vita | `ux0:data/SWBFRS` |
| PS5 | `/data/SWBFRS` |
| PC and Steam Deck | the game folder (or `RS_DATA_DIR`) |

| File | What it is |
|---|---|
| `mods/original_maps.txt` | The game's own 22 maps, as the game defines them. The game writes it at every start. It is only a reference: editing it changes nothing. |
| `mods/mod_maps.txt` | **The map list.** Instant Action's Planet list shows exactly these lines, in this order. The game makes it from `original_maps.txt` the first time, and then never overwrites it. |
| `mods/maps/<ID>.txt` | A custom map's definition, written by `maptool.py install`. |
| `mods/maps/CLASSIC/<ID>.PSP` | A custom map's Galactic Civil War level. |
| `mods/maps/PREQUEL/<ID>.PSP` | A custom map's Clone Wars level. |

To get the game's list back, delete `mod_maps.txt`; the game makes a new one at the next start. `RS_CUSTOM_MAPS=0` in
`settings.txt` turns all of this off.

## 1. A line of mod_maps.txt

```
map=GEONOSIS   classic=yes  prequel=yes  CQST=1 CTF1=1 CTF2=0 HCTF=1  space=0    # Geonosis
```

| Field | Meaning |
|---|---|
| `map=<ID>` | Which map this line lists. This is one of: a game map's id (as in `original_maps.txt`); a custom map's id (its files are in `mods/maps/`); or a new id for an **instance**. Ids are 1–24 characters from `A–Z 0–9 _`. |
| `name="..."` | The name shown. Optional: a game map shows its own name, and a custom map shows its definition's `Name`. |
| `level=<LEVEL>` | Makes this line an instance: it plays another map's level (a game map or a custom map) under this id. |
| `base=<MAP>` | The game map that a custom map borrows its loading screen and other files from. Defaults to the definition's `Base`, or `HOTH`. |
| `classic=yes\|no` | The **Galactic Civil War** era (Rebels against Empire). |
| `prequel=yes\|no` | The **Clone Wars** era (Republic against CIS). |
| `CQST=1\|0` | Conquest. |
| `CTF1=1\|0` | 1-Flag Capture the Flag. |
| `CTF2=1\|0` | 2-Flag Capture the Flag. |
| `HCTF=1\|0` | Hero Capture the Flag. |
| `space=0\|1` | A space battle (space rules and HUD). |
| `# ...` | A comment. A line starting with `#` is ignored. |

The mode codes are the game's own: its mode table at `0x08B1B900` reads `CQST CTF1 CTF2 HCTF GTAG CMPN`, and the last two are
Galactic Conquest and Campaign. Fields left out of a line keep the level's own values.

### Eras

* An era can only be offered if its **level file exists**:
  * for a game map, the game's `ENVS/CLASSIC/<MAP>.PSP` or `ENVS/PREQUEL/<MAP>.PSP`;
  * for a custom map, `mods/maps/CLASSIC/<ID>.PSP` or `mods/maps/PREQUEL/<ID>.PSP`.
* `original_maps.txt` and the list the game makes show a missing era as `no`, with a comment such as
  `# Hoth - no Clone Wars level`.
* Writing `prequel=yes` for a map that has no Clone Wars level does nothing; the game says so in its log.
* `no` hides an era that exists. For example, `classic=no` on Geonosis lists only the Clone Wars battle.
* A map with no era left is not listed.

### Modes

* The game only offers a mode if the level has what the mode needs: flags for CTF, heroes for Hero CTF.
* Turning a mode on for a level that was not built for it can give a broken or empty match. Turning modes **off** is
  always safe.

## 2. Common edits

* **Reorder the list:** move lines.
* **Hide a map:** delete the line, or put `#` in front of it.
* **Rename a map:** `name="Echo Base (Night)"`.
* **List a map twice, with other settings: an instance.**
  ```
  map=GEONOSIS_GCW   level=GEONOSIS   name="Geonosis (Civil War only)"   classic=yes prequel=no   CQST=1 CTF1=0 CTF2=0 HCTF=0  space=0
  ```
  The new id must be new: not a game map's id, and not used on another line. The instance plays the same level file.
  Files the game looks up by map name, such as the loading screen, come from the level's map (game maps) or from `base`
  (custom maps).

## 3. Adding a custom map

1. Make the level with `tools/asura/maptool.py`; the format guide is `docs/MAPS.md`. Unpack an existing map, edit it,
   then install it:
   ```
   python3 tools/asura/maptool.py install maps/HOTH --id MY_MAP --name "My Map" --data <data folder>
   ```
   This writes `mods/maps/MY_MAP.txt` and `mods/maps/<ERA>/MY_MAP.PSP`. Copying these files into another build's data
   folder works the same way.
2. Start the game. A custom map that `mod_maps.txt` does not list is added at the end of the list and appended to the
   file, with the comment `# added by the game`.
3. Move its line wherever you want it in the list, and set its name, eras and modes.

## 4. Adding an era to a map

The era a match is played in decides the sides:

* Galactic Civil War: Rebel Alliance against Galactic Empire.
* Clone Wars: Republic against CIS.

The level file of an era decides the battlefield: the ground, command posts, vehicles, props, sky and sounds.

To give a map an era it does not have:

1. **Choose the level for the new era.**
   * For a quick test, copy the existing era's level:
     * Galactic Civil War → Clone Wars: copy `mods/maps/CLASSIC/MY_MAP.PSP` to `mods/maps/PREQUEL/MY_MAP.PSP`.
     * Clone Wars → Galactic Civil War: copy it the other way round.
   * For a proper era, unpack the level with `maptool.py`, change it, and pack it into the other era's folder. Things to
     change:
     * The parked vehicles. A copied Galactic Civil War level keeps its AT-ATs and snowspeeders.
     * The command post and unit setup: the entity scripts in `scripts/ENTI/`.
     * The sounds and music.
2. **Turn the era on** in its line: `prequel=yes` (or `classic=yes`).
3. Start the game. The Era choice now offers both.

To add an era to a **game** map:

1. Make it a custom map, because the game's own files are not changed. Unpack the game map with `maptool.py`.
2. Install it under a new id, with both era folders.
3. List the new id in `mod_maps.txt`. Hide the original line if you want to.

Tested on the PC build: a copy of the Hoth test map's Galactic Civil War level, used as its Clone Wars level, loads as
Republic against CIS. The soldiers, weapons and HUD are the Clone Wars ones; the level's parked vehicles stay those of
the copied level.

## 5. The test map in this package

`mods/maps/RS_TEST` is the game's Hoth repacked with a warm sunset fog, so it is easy to recognise. It is listed three
times:

| Line | What it shows |
|---|---|
| `map=RS_TEST` | The custom map itself, with both eras. The Clone Wars level is a copy of the Galactic Civil War one, as in section 4. |
| `map=RS_TEST_TWO level=RS_TEST` | A second instance of the same level, with its own name. |
| `map=GEONOSIS_GCW level=GEONOSIS` | An instance of a game map, with the Galactic Civil War era and Conquest only. |

Boz Pity is commented out, to show hiding. Delete these lines, or the whole file, to go back to the game's list.

## 6. Troubleshooting

The game writes what it did with the list to its log, in lines starting `[MAPS]`:

* every custom map and instance it added;
* skipped lines, and why;
* eras that were left out.

On PC the log is `log.txt` next to the game.
