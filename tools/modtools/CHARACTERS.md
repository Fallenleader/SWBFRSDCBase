# Characters and weapons (character/chartool.py, weapon/weapontool.py)

    python character\chartool.py list   <game folder> characters
    python character\chartool.py export <game folder> Stormtrooper -o work
    (edit work\Stormtrooper\Stormtrooper.fbx and its textures)
    python character\chartool.py import <game folder> work\Stormtrooper --data <data folder>

`weapon\weapontool.py` takes the same commands. It lists weapons; `export` and `import` work for any model.

## What is exported

`<Name>.fbx` holds the following:
- **The mesh:** in the bind pose, with its UVs and normals.
- **The joints:** the game's skeleton, with its names and bind pose.
- **A skin:** each vertex has weight 1 on the joint its part rides.
- **A material:** linked to the texture PNG.
- **The hit boxes:** one `col_<joint>` box mesh under each joint that has one (the game's per-joint boxes, `HSBB`).

The other files:
- `<Name>_L1.fbx`, `<Name>_L2.fbx`: the lower details, when the game has them.
- `textures\*.png`: the textures.
- `chartool.json`: what was exported. `import` compares against it, so do not edit it.

## What import does
For every level of the game that contains the model:

- **The model:** rebuilt from the edited FBX. A vertex follows the joint with its largest weight.
- **The lower details:** rebuilt from their own FBX if you edited it, otherwise from the main FBX.
- **The hit boxes:** taken from the `col_<joint>` meshes, as the box around each mesh in its joint's space. With no `col_` meshes, they are measured around each joint's part of the new mesh.
- **The texture:** re-encoded if the PNG changed, keeping the game's format.

The levels are written to `<data>/mods/files/PSP_GAME/USRDIR/ENVS/<era>/<LEVEL>.PSP`, and the game reads these in place of its own. If a level is already there, the import starts from it, so edits to several models accumulate.
