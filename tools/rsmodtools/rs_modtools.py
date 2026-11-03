#!/usr/bin/env python3
"""RS mod tools: dump maps to editable folders, and bundle a folder back into a Renegade Squadron map.

  rs_modtools.py dump   [--game G] [--out SRC] [MAP ...]       every era of every RS map (or the ones named) -> SRC/<MAP>/<ERA>/
  rs_modtools.py dump   --bf <world.wld | level.lvl> ...      SWBF1/SWBF2 worlds -> SRC/BF/<name>/ (FBX, textures, bf_gameplay.lua)
  rs_modtools.py dump   --es <ENVS/<ERA>/<MAP> folder> ...    Elite Squadron maps (geometry only) -> SRC/ES/<MAP>/<part>/
  rs_modtools.py bundle <folder> [--id ID] [--name "Name"] [--data D] [--base MAP]
        <folder> is a map folder (era subfolders CLASSIC / PREQUEL / CAMPAIGN) or one era folder (map.txt).  Every era is packed
        and installed as a new map in <data>/mods/maps (definition <ID>.txt + <ERA>/<ID>.PSP); the game lists it in Instant Action.
        An era folder alone is packed to <folder>/<MAP>.PSP unless --id is given.

Drag and drop (Windows): drop a folder onto Bundle_Map.bat; run Dump_All_Maps.bat once.  Settings: rsmodtools.ini next to this file
(game folder, data folder, output folder), and per map an optional mapinfo.txt in the map folder:
    id = MY_MAP            the level file name: 1-24 characters A-Z 0-9 _
    name = My Map          the name shown in the Planet list
    base = HOTH            the game map whose loading screen and menu files the map borrows (default: the map it was dumped from)
Each era folder is the format of tools/asura/maptool.py (docs/MAPS.md): map.txt, textures/*.png, sounds/*.wav, env/Env.fbx,
models/*.fbx, scripts/<TAG>/*.lua (every other chunk as a Lua script, editable in any text editor)."""
import os, sys, re, argparse, configparser, json
HERE = os.path.dirname(os.path.abspath(__file__))
for p in (os.path.join(HERE, '..', 'asura'), os.path.join(HERE, 'asura')):
    if os.path.exists(os.path.join(p, 'maptool.py')): sys.path.insert(0, os.path.abspath(p)); break
XT = next((os.path.abspath(p) for p in (os.path.join(HERE, '..', 'ToolsCrossTest'), os.path.join(HERE, 'ToolsCrossTest')) if os.path.isdir(p)), None)
import maptool
ERAS = maptool.ERAS

def settings():
    c = configparser.ConfigParser(); c.read(os.path.join(HERE, 'rsmodtools.ini'))
    s = dict(c['rsmodtools']) if c.has_section('rsmodtools') else {}
    return {k: os.path.expandvars(os.path.expanduser(v)) for k, v in s.items() if v.strip()}

def read_kv(path):
    d = {}
    if os.path.exists(path):
        for line in open(path, encoding='utf-8', errors='replace'):
            line = line.split('#')[0].strip()
            if '=' in line: k, v = line.split('=', 1); d[k.strip().lower()] = v.strip().strip('"')
    return d

# ------------------------------------------------------------------ dump
def dump(a, cfg):
    out = a.out or cfg.get('source_folder') or os.path.join(HERE, 'maps_src')
    if a.bf or a.es:
        if not XT: raise SystemExit('tools/ToolsCrossTest not found next to this folder')
        sys.path.insert(0, XT); import bf2rs, es2rs
        for w in a.bf or []:
            name = os.path.splitext(os.path.basename(w))[0]; o = os.path.join(out, 'BF', name)
            print('== %s -> %s' % (w, o)); bf2rs.main(['fbx', w, '-o', o])
        for f in a.es or []:
            name = os.path.basename(os.path.normpath(f))
            for part in ('GR', 'SP', 'IN', 'HV'):
                try: es2rs.find_part(f, part)
                except SystemExit: continue
                o = os.path.join(out, 'ES', name); print('== %s %s -> %s' % (f, part, o)); es2rs.main(['fbx', f, '--part', part, '-o', o])
        return
    game = a.game or cfg.get('game_folder')
    if not game: raise SystemExit('dump needs --game (or game_folder in rsmodtools.ini): the extracted game, the folder that holds PSP_GAME')
    envs = maptool.envs_dir(game); names = set()
    for era in ERAS:
        d = os.path.join(envs, era)
        if os.path.isdir(d): names |= {os.path.splitext(f)[0].upper() for f in os.listdir(d) if f.upper().endswith('.PSP')}
    want = [m.upper() for m in a.maps] or sorted(names)
    for m in want:
        for era, path in maptool.find_map(game, m):
            o = os.path.join(out, m, era)
            if os.path.exists(os.path.join(o, 'map.txt')) and not a.force: print('%s/%s: already dumped (--force to redo)' % (m, era)); continue
            print('== %s %s -> %s' % (m, era, o)); maptool.unpack(path, o, log=lambda *x: None)
        if not os.path.exists(os.path.join(out, m, 'mapinfo.txt')) and os.path.isdir(os.path.join(out, m)):
            open(os.path.join(out, m, 'mapinfo.txt'), 'w').write('# bundle settings for this map (rs_modtools.py bundle / Bundle_Map.bat)\n'
                'id = %s_MOD\nname = %s (mod)\nbase = %s\n' % (m, m.title().replace('_', ' '), m))
    print('done: %s' % out)

# ------------------------------------------------------------------ bundle
def bundle(a, cfg):
    folder = os.path.abspath(a.folder.rstrip('/\\'))
    single = os.path.exists(os.path.join(folder, 'map.txt'))
    mapdir = os.path.dirname(folder) if single else folder
    info = read_kv(os.path.join(mapdir, 'mapinfo.txt'))
    mid = (a.id or info.get('id') or '').upper()
    if single and not mid:
        b, rep = maptool.packdir(folder); [print('  ' + r) for r in rep]
        man = json.load(open(os.path.join(folder, '.maptool', 'manifest.json')))
        o = os.path.join(folder, os.path.basename(man.get('source', 'LEVEL.PSP'))); open(o, 'wb').write(b); print('packed: %s (%d bytes)' % (o, len(b))); return
    if not mid: raise SystemExit('no map id: give --id, or put "id = MY_MAP" in %s' % os.path.join(mapdir, 'mapinfo.txt'))
    data = a.data or info.get('data') or cfg.get('data_folder')
    if not data: raise SystemExit('no data folder: give --data, or set data_folder in rsmodtools.ini (PC: the game folder, Vita: ux0:data/SWBFRS copied locally, PS5: /data/SWBFRS)')
    name = a.name or info.get('name') or mid.replace('_', ' ').title()
    base = (a.base or info.get('base') or '').upper() or None
    if single:                                                   # one era: install just that era of the map
        import tempfile, shutil
        era = os.path.basename(folder).upper()
        if era not in ERAS: raise SystemExit('an era folder must be named CLASSIC, PREQUEL or CAMPAIGN (this is %s)' % folder)
        mapdir = tempfile.mkdtemp(prefix='rsbundle_'); os.symlink(folder, os.path.join(mapdir, era)) if hasattr(os, 'symlink') and os.name != 'nt' else shutil.copytree(folder, os.path.join(mapdir, era))
    maptool.install(mapdir, mid, name, data, basemap=base, log=print)
    print('installed %s ("%s") into %s/mods/maps - it appears in Instant Action\'s Planet list' % (mid, name, data))

def main(argv):
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest='cmd', required=True)
    d = sub.add_parser('dump'); d.add_argument('maps', nargs='*'); d.add_argument('--game'); d.add_argument('--out'); d.add_argument('--force', action='store_true')
    d.add_argument('--bf', nargs='+'); d.add_argument('--es', nargs='+')
    b = sub.add_parser('bundle'); b.add_argument('folder'); b.add_argument('--id'); b.add_argument('--name'); b.add_argument('--data'); b.add_argument('--base')
    a = ap.parse_args(argv); cfg = settings()
    (dump if a.cmd == 'dump' else bundle)(a, cfg)

if __name__ == '__main__':
    main(sys.argv[1:])
