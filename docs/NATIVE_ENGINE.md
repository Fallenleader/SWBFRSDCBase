# Aurek: the native engine, plan and progress

This replaces the "lift PSP functions one at a time" approach of the earlier ExperimentalRewrite work. That approach left the
game PSP-shaped (MIPS register locals, MIPS stack arrays, PSP data layout, one big lock, a renderer that imitates the PSP GE) and
could not get the Vita past ~13 FPS, because the cost is spread over thousands of decompiled functions with no hotspot to fix.

**Name:** Aurek, the first letter of Aurebesh: a nod to Star Wars, to Rebellion, and to the A of their Asura engine, whose files it
reads. The logo is `engine/branding/aurek_logo.png`; it becomes the engine's identity (boot screen, icons, about page) once the
builds are acceptable. Code prefix: `ak_` / `AK_`.

**The new approach:** Aurek, a native engine in `engine/`, written per device from the start, that loads the original game files and
reproduces the game's behaviour. The decompiled game (`src/game`, `platform/common`) stays in the repository as the
**specification and test oracle only**. Nothing in `engine/` includes it, links it, or depends on its data layout.

## Rules (checked by `engine/tools/check_independence.sh`, run by every engine build)

1. `engine/` never includes or links `src/game`, `platform/common`, `platform/<device>` (the old ports) or generated decompiler output.
2. No PSP concepts in engine interfaces: no sceGu/GE state, no PSP vertex formats, no 480x272, no guest pointers or guest memory,
   no vblank pacing, no big lock, no PSP thread priorities. PSP formats exist only inside the asset loaders, which turn them into
   native structures at load (or at cook time).
3. Behaviour comes from reading the decompiled code (and Ghidra): rules, numbers, timings, AI decisions. The engine reimplements
   it with its own data structures. Where exactness matters (damage, physics, AI choices), a side-by-side check against the
   decompiled build is written, as `RS_LIFT_CHECK` did for collision.
4. Per-device code is first-class: each device has its own renderer, threading, memory and audio back end, written for that
   hardware's strengths. The shared engine is data-oriented (arrays of components, job-parallel updates) so it scales from the
   Old 3DS's 2 cores to a PC's 16+.
5. Original data is never committed. The engine reads the owner's UMD files (ISO or extracted); device-specific cooked caches are
   built from them on the device or by the PC conversion tool.
6. Owner's standing rules still apply: every performance flag, refreshed settings.txt with every build, builds overwrite the
   previous ones in `D:\SWBFRSDecomp\builds`, commit + push every change.

## Layout

```
engine/
  core/        types, log, memory arenas, file access, math, job system, settings
  assets/      loaders for the game's files: Asura containers, RSCF resources, textures, level geometry, materials,
               models, skeletons, animation, collision (PHEN), navigation (NAV1), entities (ENTI), sounds, scripts
  world/       entity storage (structure-of-arrays), spatial grid, transforms, the frame's job graph
  game/        rules (conquest, CTF, hunt, space), command posts, tickets, spawning, soldiers, weapons, vehicles, heroes, AI
  render/      device-independent scene: cameras, culling, draw lists, materials (PSP-style, lightweight PBR, full PBR)
  audio/       mixer front end, music/speech streaming
  net/         RS server protocol client, host/dedicated mode
  ui/          front end menus, HUD, text
  platform/    one folder per device: desktop (Windows/Linux/Deck), vita, 3ds, ps4, ps5
               each provides: window/present, gfx back end, input, audio out, threads/cores, files, clocks, memory
  tools/       akinspect (loads a level, prints and exports it), check_independence.sh, cooker
```

## Device targets

| Device | Frame rate | Bots | Shading | Notes |
|---|---|---|---|---|
| PS Vita | 30 min, 60 goal | 64 | lightweight PBR when headroom allows | GXM, 3 cores + 4th (CapUnlocker), 960x544 |
| Old 3DS | 20 | PSP count (16 players) | PSP-style | citro3d, core 1 used, PSP controls |
| New 3DS | 30 | PSP count | PSP-style | split input (twin-stick on C-stick), cores 2/3 |
| Steam Deck | 60 | 64 | Frostbite PBR | Vulkan |
| PC (Windows/Linux) | 30/60/120/240/monitor | 128 | Frostbite PBR, optional ray tracing (RTX acceleration when present) | Vulkan |
| PS4 | 60 | 128 | Frostbite PBR | |
| PS5 | 60/120 | 128 | Frostbite PBR, optional ray tracing (no RTX checks) | |
| Server | headless | per session table | none | self-hosted matches from serversession tables |

**Frostbite PBR** = the BRDF of "Moving Frostbite to PBR" (Lagarde & de Rousiers 2014), as used in EA's Star Wars Battlefront II
(2017): renormalised Disney/Burley diffuse, GGX (Trowbridge-Reitz) NDF, height-correlated Smith GGX visibility, Schlick Fresnel,
Karis split-sum environment term with Lagarde's specular occlusion. The existing Vulkan version is in `platform/linux_test/gfx_vk.c`
(reference only; the engine's renderer gets its own).

## Stages

### Stage 1: independence (owner priority 1)

The engine plays a full match natively, on desktop first (fast iteration, Linux harness) and on Vita at each milestone.

| # | Milestone | Done when |
|---|---|---|
| 1.0 | Skeleton | `engine/` builds on desktop and Vita; independence check passes |
| 1.1 | Level assets | every level file's geometry, materials and textures load into native structures; counts match `tools/asura` |
| 1.2 | Level viewer | desktop and Vita draw a level natively (static geometry in GPU buffers, batched per material), free camera |
| 1.3 | Models, skeletons, animation | soldiers, props and vehicles load and animate |
| 1.4 | Entities, collision, navigation | ENTI objects placed, PHEN collision queries, NAV1 graph |
| 1.5 | Soldiers and weapons | one player walks, shoots, takes damage, respawns (numbers from the decompiled code) |
| 1.6 | Game rules | conquest: command posts, capture, tickets, win/lose; then CTF, hunt, space |
| 1.7 | AI | bots navigate, fight, capture; parallel per bot |
| 1.8 | Vehicles and heroes | ground, air, space vehicles; hero unlocks |
| 1.9 | Audio | effects, music, speech |
| 1.10 | Front end and HUD | menus, loadouts, colour picker, map selection, galactic conquest, campaign |
| 1.11 | Network | RS server protocol, hosting, dedicated server mode |
| 1.12 | Parity | the engine replaces the decompiled build on every device; the old ports are retired |

### Stage 2: Vita 30 FPS, 64 bots (owner priority 2)

Built in from 1.2 onward rather than tuned afterwards: frame work split into jobs across the cores, static geometry uploaded once,
few large draws, no per-draw CPU vertex conversion, textures in GXM-native formats, a per-frame budget per subsystem.

### Stage 3: Vita toward 60 FPS (owner priority 3), then lightweight PBR

### Stage 4: the other devices to their targets (3DS, Deck, PC, PS4, PS5), Frostbite PBR, ray tracing

### Stage 5: server testing, then mod support

## Progress

| Date | Milestone | State |
|---|---|---|
| 2026-11-11 | plan | this document |
| 2026-11-11 | 1.0 | **done (desktop)**: `engine/core` (`ak_core`), `engine/platform/plat.h` + desktop, CMake with every performance flag and LTO, independence check passes. Vita/3DS toolchains join at 1.2 |
| 2026-11-11 | 1.1 | **level geometry, materials, textures done**: `engine/assets/asura.c`. Strips become indexed triangle lists in engine axes (Y up), grouped into batches by (layer, object, material) with per-object bounds. Checked against `tools/asura` on HOTH: 25,347 triangles identical (positions, winding, material, object, layer) and 92/92 textures identical pixel for pixel. SPACE_HOTH and TATOOINE load too. A level loads in 10-15 ms on desktop. Indices are 32-bit (TATOOINE has 65,731 vertices). Next in 1.1: EMOD object records, then models/skeletons (1.3) |
| 2026-11-11 | 1.2 | **built, waiting for the Vita test.** Viewer `engine/app/viewer.c` on two back ends. Desktop OpenGL 3.3 (`platform/desktop`, development and image checks under Xvfb): HOTH, TATOOINE and SPACE_HOTH render correctly, and game.iso gives the same image as extracted files. Vita GXM (`platform/vita`): geometry and textures in a CDRAM pool, textures sampled as P8 with the palette in video memory, 3 pipelines, back-face culling (winding checked on desktop), shaders compiled once with libshacccg and cached. Delivered to `builds\Aurek\Vita` (aurek.vpk, title AURK00001, data in ux0:data/Aurek, game files also found in ux0:data/SWBFRS). Open: no mip-maps on Vita yet; level lighting approximated (vertex colour x2, the game's 128 = full convention) until the game's own level lighting is read (1.4); no fog/sky yet |
| 2026-11-11 | 1.2 | **Vita test 1** (owner, all 45 levels): steady 60 fps (vsync), GPU wait 0, 1,000+ draws on Naboo still 60. Problems found and fixed: levels mirrored (axes now a half turn about X: (x, -y, -z), game winding kept); material blend modes (flags: 0x2 alpha test, 0x1000 additive, 0x20000 alpha-blended decal, 0x40000 animated, 0x1 self-lit; `mode` is a surface type, not a render state); the blend layer uses material texture slot 3; coplanar painted surfaces marked at load and drawn after their base with depth bias; far plane 8 km. Space levels' capital ships are props/entities, not level geometry: they arrive with 1.3/1.4. Animated materials (water, screens) still static |
| 2026-11-11 | 1.3 | **models and skeletons done; animation next.** `engine/assets/model.c`: every model group of a level (TEXT/MTRL/HSKN/HSKL/HMPT/HSBB, meshes "Name", "L1#Name", "L2#Name", HCAN clips). Meshes are rigid (part i rides bone i; part `flags` = the group's material index, 0xFFFFFFFF = invisible helper). Bind poses identical to `tools/asura/rigid_io.py` vertex for vertex (X_Wing, Stormtrooper); clean under ASan/UBSan on six levels; 200-260 models per level load in 3-4 ms on desktop. Renderer: per-draw transform (`ak_gfx_set_transform`), all models of a level in one vertex/index buffer. Viewer: model gallery (CIRCLE). Correction to test 1: the space levels' capital ships are level geometry and render correctly; what they lack is the sky. Next: HCAN clip decoding (from the game's reader), skybox (SKYB) |
| 2026-11-11 | 1.3 | **animation done.** HCAN v5 decoded from the game's reader (func_08827220) and checked on every clip of four levels (206/312/164/268 load): header, channel table (rot count/first, pos count/first per bone, + a root-motion channel with flag 0x10), packed rotations ("smallest three", 10-bit components x 1/sqrt2, 2-bit index i drops component (i+3) mod 4, the three stored follow cyclically: worked out from a barrel roll and verified by key-to-key smoothness), u16 key times over the duration, float3 positions, per-bone lengths (flag 0x1), extra, box (0x8), f32, events. Keys are absolute local transforms in skeleton bone order; position keys share the rotation times when counts match. Channels without rotation keys are unanimated (upper-body overlay clips). Sampling: binary search + nlerp, wrap/clamp. Gallery plays clips (d-pad up/down). Human bodies have no head geometry (the head part is empty): heads are chosen per body ("Head 1..3" properties) and come with the soldier assembly in 1.5 |
| 2026-11-11 | 1.3 | **sky box (ground levels).** SKYB v10: tint (0..255), turn about the vertical axis, five textures front, back, left, right, up. Face layout checked from the pixels on HOTH (distinct faces): horizon loop front, right, back, left with each face's right edge meeting the next face's left edge (mean seam error 6 vs 78), up face's bottom edge on the front's top (3 vs 216+). TATOOINE reuses two images that do not tile, so its seams are in the data. Space levels store their sky as placed panels (5 matrices at about -749 m; the textures are probably the level's nebula/star images): not read yet. FOG values are read but not applied: their fields do not yet make sense as plain linear fog (Tatooine 11-75 m), to be taken from the game's fog code |
| 2026-11-11 | 1.4 | **entities, collision, navigation loaded natively.** Entities (`assets/entity.c`): models placed from vehicle spawns (type 27: two team vehicles, position, Euler), walkers (13: position, rotation rows) and every record with position + quaternion before a model name hash (turrets, droids, props, objectives); vehicle spawns sit 0.01-0.27 m above the collision ground, which checks both. Collision (`world/ak_collision.c`): PHEN triangles with the game's flags and materials, rebuilt into a native float BVH (the PSP's byte-quantised trees dropped); raycasts identical to brute force on 3,000 random rays per level; 33-56 ms to build on desktop. Navigation (`world/ak_nav.c`): NAV1 graph with a native grid for nearest-node queries and A*; 96-100% of nodes on collision ground, ground levels one connected graph (SPACE_KESSEL two: the hangars), all test paths found at 1.1-1.5x straight distance, ~0.05 ms each on desktop. Still open in 1.4: the gameplay meaning of the other entity types (command posts, soldier spawns, regions), which comes with the rules in 1.6 |

Tools: `build/engine/akinspect <LEVEL.PSP> [--obj out.obj] [--tex dir]` prints what a level holds and exports it.
`build/engine/aurek_viewer` (desktop) with `AK_DATA_DIR`, `AK_LEVEL="CLASSIC HOTH"`, `AK_SCREENSHOT=out.ppm`, `AK_CAMERA=x,y,z,yaw,pitch` for headless image checks.
Vita: `cmake -S engine/platform/vita -B build/aurek_vita && cmake --build build/aurek_vita` (VitaSDK 2026-10-15 + vitaShaRK, SceShaccCgExt, taihen).
