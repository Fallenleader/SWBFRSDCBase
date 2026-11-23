#!/usr/bin/env python3
r"""Builds a GameCube disc image (.iso, the GCM layout) of Aurek with the game inside, for Dolphin, Swiss or a burned disc.

It needs four things, and says which is missing or wrong:
    the game files       the UMD's GAME (or PSP_GAME) folder as extracted, or the UMD image (.iso; its files are unpacked onto the disc)
    the Converted folder the game's media in the GameCube's own formats (music, voices, effects as DSP-ADPCM, the movies as THP):
                         Converted\GameCube, written by Convert_GameCube.bat in the SWBFRS Conversion Tool's folder
    aurek.dol            the GameCube build
    settings.txt         its settings

Double-click it (or run "python make_gcm.py"): a window opens.  Drop the four items on it - one at a time, all at once, or a folder
holding them - or use Browse; each is recognised by what it is and checked (a tick, or what is wrong in red).  What sits next to the
script, in the folder above or in a folder beside it is filled in at the start.  When all four check out, Convert builds Aurek_GC.iso
(next to the script unless you choose another place).  The window stays open: the result or the problem is shown in it.
Items dropped onto make_gcm.py itself are filled in the same way.  Drag and drop in the window needs the tkinterdnd2 package: the
script installs it for you (pip, once) the first time; without it, Browse works.

Without a window: python make_gcm.py --cli [the items, any order] [--out file.iso] [--region usa|pal|japan] [--id AURE01] [--pause]
(or --game / --converted / --dol / --settings to name each).  It lists the four items with OK / NO and builds only when all are OK.

What goes on the disc is what aurek.dol looks for when no SD card has an "aurek" folder: /aurek/settings.txt, /aurek/GAME/PSP_GAME
and /aurek/converted.  The PSP's own firmware update (PSP_GAME/SYSDIR/UPDATE) is left out: it is never read.  What the converted
files replace is left out too:
    X.PMF        when converted/.../X.PMF.thp exists (the engine never reads the original movie)
    X.AT3        cut to its first 4 KB when converted/.../X.AT3.adp exists (the engine reads only the RIFF header: the encoder
                 delay and the loop points)
    GMSND.AM     cut to its first 256 KB when converted/.../GMSND.AM.d exists (the engine reads only its index)
The converter's manifest.txt is left out as well.  The image is padded to the full disc size (1,459,978,240 bytes) like an image of a
pressed disc; --no-pad (or untick it in the window) stops at the last file.

On a GameCube with an SD card (SD2SP2, SD Gecko) and Swiss, either works:
    - aurek.dol started from Swiss, with the game in an "aurek" folder on the card (aurek/GAME, aurek/converted, aurek/settings.txt)
    - Aurek_GC.iso on the card, started from Swiss: aurek.dol finds the image on the card (the newest Aurek image in the card's top
      two folder levels) and reads it as a file - Swiss's drive emulation serves Nintendo SDK games, not libogc programs  The region (default usa) is the disc's, which a console's own boot menu checks;
Swiss and Dolphin don't mind.  The boot program is Aurek's own small apploader (platform/gc/apploader); no Nintendo code is used."""
import argparse, os, struct, sys, subprocess, threading

DISC_MAX = 1459978240
ALIGN = 0x8000                                   # files start on 32 KB boundaries (the drive reads whole blocks)

def be32(v): return struct.pack('>I', v)

# the apploader, built from apploader/ (apploader.c, apploader.ld) by build_apploader(); kept here so the script needs no compiler
APPLOADER_ENTRY = 0x81200000
APPLOADER_BIN = bytes.fromhex(
    '3d20812039290028912300003d208120392900a4912400003d20812039290040912500004e8000203d40812039200000'
    '390a01c0912a01c0912800044e8000203d20812038e00012392901c038c900ac854600042c0a00004182001880a6ffb8'
    '2c05000054a800347d4a2a144082002c34e7ffff4082ffdc7c0004ac4c00012c806901004e8000207c00406c7c0004ac'
    '7c0047ac390800207c0850404180ffec4bffffd03d4081207c671b78806a01c0392a01c02c03000040a2002c39290120'
    '912700003920002091240000392004209125000039200001912a01c0386000014e8000202c030001418200a081490004'
    '390900ac2c0a00125546103a7cc64214206a00133900000040a10008386000012c0300013863ffff40a2001871080001'
    '4182000891490004386000004e80002085060004380a00012c080000418200108166ffb82c0b000040a200107c0a0378'
    '390000014bffffbc3908001f9167000055080034554a103a910400007d49521490090004814a0020812901207d295214'
    '912500004bffff5839090020910700003900010091040000812901209125000039200002912a01c04e80002000000000'
    '000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000'
    '000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000'
    '000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000'
    '000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000'
    '000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000'
    '000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000'
    '000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000')

def build_apploader(here):
    """the apploader's binary: built with devkitPPC from apploader/ (cached next to it)"""
    src = os.path.join(here, 'apploader')
    out = os.path.join(src, 'apploader.bin')
    if not os.path.exists(out) or os.path.getmtime(out) < os.path.getmtime(os.path.join(src, 'apploader.c')):
        dkp = os.environ.get('DEVKITPRO', '/opt/devkitpro'); bin_ = os.path.join(dkp, 'devkitPPC', 'bin')
        elf = out + '.elf'
        subprocess.check_call([os.path.join(bin_, 'powerpc-eabi-gcc'), '-Os', '-mcpu=750', '-meabi', '-mhard-float', '-G0', '-msdata=none',
                               '-ffreestanding', '-nostdlib', '-fno-builtin', '-T', os.path.join(src, 'apploader.ld'), '-o', elf,
                               os.path.join(src, 'apploader.c')])
        subprocess.check_call([os.path.join(bin_, 'powerpc-eabi-objcopy'), '-O', 'binary', elf, out])
        entry = subprocess.check_output([os.path.join(bin_, 'powerpc-eabi-nm'), elf]).decode()
        e = [l.split()[0] for l in entry.splitlines() if l.endswith(' entry')][0]
        open(out + '.entry', 'w').write(e)
    return open(out, 'rb').read(), int(open(out + '.entry').read(), 16)

SKIP_DIRS = {'UPDATE'}                         # under PSP_GAME/SYSDIR: the PSP firmware update (never read)
REGIONS = {'usa': (1, 'E'), 'pal': (2, 'P'), 'japan': (0, 'J')}

def tree_of(host, disc, skip_update=False):
    """(disc path, host path) for every file under host, placed under disc"""
    out = []
    for dp, dns, fns in os.walk(host):
        rel = os.path.relpath(dp, host)
        if skip_update and rel.replace('\\', '/').upper().endswith('SYSDIR'):
            dns[:] = [d for d in dns if d.upper() not in SKIP_DIRS]
        for f in fns:
            r = os.path.normpath(os.path.join(rel, f)).replace('\\', '/')
            hp = os.path.join(dp, f)
            out.append((disc + '/' + r if r != '.' else disc, hp, 0, os.path.getsize(hp)))
    return out

def iso_tree(iso, disc, skip_update=False):
    """(disc path, iso path, offset, size) for every file under PSP_GAME in a PSP UMD image (ISO 9660, 2 KB sectors)"""
    out = []
    with open(iso, 'rb') as f:
        def sector(n, count=1):
            f.seek(n * 2048); return f.read(2048 * count)
        pvd = sector(16); root = pvd[156:156 + 34]
        def walk(lba, size, rel):
            data = sector(lba, (size + 2047) // 2048); p = 0
            while p < size:
                l = data[p]
                if l == 0: p = (p // 2048 + 1) * 2048; continue
                r = data[p:p + l]; p += l
                ext, ln, fl, nl = struct.unpack_from('<I', r, 2)[0], struct.unpack_from('<I', r, 10)[0], r[25], r[32]
                name = r[33:33 + nl]
                if name in (b'\0', b'\1'): continue
                n = name.decode('ascii', 'replace').split(';')[0]
                path = rel + '/' + n if rel else n
                if fl & 2:
                    if skip_update and rel.upper() == 'PSP_GAME/SYSDIR' and n.upper() in SKIP_DIRS: continue
                    walk(ext, ln, path)
                else:
                    out.append((path, ext * 2048, ln))
        walk(struct.unpack_from('<I', root, 2)[0], struct.unpack_from('<I', root, 10)[0], '')
    return [(disc + '/' + p[len('PSP_GAME/'):], iso, o, n) for p, o, n in out if p.upper().startswith('PSP_GAME/')]

def find_converted(d):
    """the GameCube's converted media: converted/ or Converted/GameCube here, else Converted/GameCube in a folder beside this one
    (the conversion tool's own folder, where its Convert_GameCube script writes)"""
    c = find_ci(d, 'converted')
    if c and os.path.isdir(c):
        g = find_ci(c, 'GameCube')
        if g and os.path.isdir(g): return g
        if find_ci(c, 'PSP_GAME'): return c
    up = os.path.dirname(d)
    for n in sorted(os.listdir(up)) if os.path.isdir(up) else []:
        s = os.path.join(up, n)
        if os.path.isdir(s) and os.path.abspath(s) != os.path.abspath(d):
            c = find_ci(s, 'converted'); g = c and find_ci(c, 'GameCube')
            if g and os.path.isdir(g) and find_ci(g, 'PSP_GAME'): return g
    return None

def find_ci(folder, name):
    """a file or folder in folder by name, any letter case"""
    if not os.path.isdir(folder): return None
    for n in os.listdir(folder):
        if n.upper() == name.upper(): return os.path.join(folder, n)
    return None

def is_psp_iso(path):
    """a PSP UMD image: ISO 9660 whose system id says PSP GAME"""
    try:
        with open(path, 'rb') as f:
            f.seek(0x8000); pvd = f.read(64)
        return pvd[1:6] == b'CD001' and b'PSP GAME' in pvd[8:40]
    except OSError:
        return False

class BuildError(Exception):
    pass

# ---------------------------------------------------------------- the four inputs: what each is, and whether it is usable
# Each check returns (ok, note): note says what is wrong, or what was found.

def check_dol(p):
    if not p or not os.path.isfile(p): return False, 'missing: drop aurek.dol (the GameCube build) here'
    try:
        with open(p, 'rb') as f: h = f.read(0x100)
    except OSError as e: return False, str(e)
    entry = struct.unpack('>I', h[0xE0:0xE4])[0] if len(h) >= 0xE4 else 0
    if len(h) < 0x100 or not (0x80000000 <= entry < 0x81800000): return False, 'not a GameCube program (.dol)'
    return True, '%.1f MB' % (os.path.getsize(p) / 1048576)

def check_settings(p):
    if not p or not os.path.isfile(p): return False, 'missing: drop settings.txt (the GameCube build\'s settings) here'
    try:
        t = open(p, 'r', encoding='utf-8', errors='replace').read(200000)
    except OSError as e: return False, str(e)
    if 'AK_' not in t: return False, 'not an Aurek settings.txt (no AK_ settings in it)'
    return True, '%d settings' % sum(1 for l in t.splitlines() if l.strip().startswith('AK_') and '=' in l)

GAME_NEED = ['USRDIR/MISC/COMMON.ASR', 'USRDIR/SOUNDS/GMSND.ASR', 'USRDIR/ENVS']
def game_files(game):
    """(the disc's files of the game, the PSP_GAME folder or image, a description); raises BuildError"""
    files = []
    if os.path.isfile(game):
        if not is_psp_iso(game): raise BuildError('%s is not a PSP UMD image' % game)
        files += iso_tree(game, 'GAME/PSP_GAME', skip_update=True); psp = game; what = 'the UMD image %s (unpacked)' % os.path.basename(game)
    else:
        if os.path.basename(os.path.normpath(game)).upper() == 'PSP_GAME': psp = game
        else:
            psp = find_ci(game, 'PSP_GAME')
            if not psp: raise BuildError('%s has no PSP_GAME folder' % game)
        files += tree_of(psp, 'GAME/PSP_GAME', skip_update=True)
        umd = find_ci(os.path.dirname(os.path.normpath(psp)), 'UMD_DATA.BIN')
        if umd and os.path.basename(os.path.dirname(os.path.normpath(psp))).upper() == 'GAME': files.append(('GAME/UMD_DATA.BIN', umd, 0, os.path.getsize(umd)))
        what = 'the game folder %s' % psp
    have = {t[0].upper() for t in files}
    missing = [n for n in GAME_NEED if not any(h.startswith(('GAME/PSP_GAME/' + n).upper()) for h in have)]
    if missing: raise BuildError('the game lacks %s: is it the whole UMD?' % ', '.join(missing))
    return files, psp, what

def check_game(p):
    if not p or not os.path.exists(p): return False, 'missing: drop the game here (its GAME or PSP_GAME folder, or the UMD .iso)'
    if os.path.isfile(p) and not is_psp_iso(p): return False, 'not a PSP UMD image'
    psp = p if os.path.isfile(p) or os.path.basename(os.path.normpath(p)).upper() == 'PSP_GAME' else find_ci(p, 'PSP_GAME')
    if not psp: return False, 'no PSP_GAME folder in it'
    if os.path.isdir(psp):
        miss = [n for n in GAME_NEED if not os.path.exists(os.path.join(psp, *n.split('/'))) and not _exists_ci(psp, n)]
        if miss: return False, 'incomplete: no %s (is it the whole UMD?)' % ', '.join(miss)
        return True, 'game folder'
    return True, 'UMD image, %.0f MB' % (os.path.getsize(p) / 1048576)

def _exists_ci(base, rel):
    cur = base
    for part in rel.split('/'):
        cur = find_ci(cur, part)
        if not cur: return False
    return True

def check_converted(p):
    if not p or not os.path.isdir(p): return False, 'missing: drop the Converted folder here (Convert_GameCube.bat in the conversion tool writes Converted\\GameCube)'
    man = find_ci(p, 'manifest.txt')
    if not man: return False, 'no manifest.txt: not a folder the conversion tool wrote (or not finished)'
    head = open(man, 'r', errors='replace').readline().strip()
    if head.startswith('rsconv 3a'): return False, 'this is the 3DS conversion: use Converted\\GameCube'
    if head == 'rsconv 3' or (head.startswith('rsconv') and not head.startswith('rsconv 3g')): return False, 'this is the Vita conversion: use Converted\\GameCube'
    if not find_ci(p, 'PSP_GAME'): return False, 'empty: no PSP_GAME folder in it'
    parts = 0; thp = 0; adp = 0
    for dp, dn, fn in os.walk(p):
        for f in fn:
            u = f.upper()
            if u.endswith('.PART') or '.PART.' in u: parts += 1
            elif u.endswith('.THP'): thp += 1
            elif u.endswith('.ADP'): adp += 1
    if parts: return False, 'unfinished (%d files still being written): let the conversion finish, or run Convert_GameCube again' % parts
    return True, '%d movies, %d sounds' % (thp, adp)

CHECKS = {'game': check_game, 'converted': check_converted, 'dol': check_dol, 'settings': check_settings}
NAMES = {'game': 'Game files', 'converted': 'Converted folder', 'dol': 'aurek.dol', 'settings': 'settings.txt'}

def classify(p, depth=0):
    """what a dropped path is: {kind: path} (a folder holding several of them gives several)"""
    out = {}
    p = os.path.abspath(p)
    if os.path.isfile(p):
        n = os.path.basename(p).lower()
        if n.endswith('.dol'): out['dol'] = p
        elif n.endswith('.txt') and (n == 'settings.txt' or check_settings(p)[0]): out['settings'] = p   # (not a README)
        elif n.endswith('.iso') and is_psp_iso(p): out['game'] = p
        return out
    if not os.path.isdir(p): return out
    if find_ci(p, 'manifest.txt') and find_ci(p, 'PSP_GAME'): out['converted'] = p; return out     # a conversion's folder
    g = find_ci(p, 'GameCube')
    if g and os.path.isdir(g) and find_ci(g, 'manifest.txt'): out['converted'] = g; return out      # the tool's Converted folder
    if os.path.basename(p).upper() == 'PSP_GAME' or find_ci(p, 'PSP_GAME'): out['game'] = p; return out
    if depth < 2:                                                                                     # a folder holding them
        for n in sorted(os.listdir(p)):
            for k, v in classify(os.path.join(p, n), depth + 1).items():
                out.setdefault(k, v)
    return out

def autodetect(d):
    """what sits by the script: its folder, the folder above, a folder beside it (as the conversion tool looks)"""
    found = {}
    def take(folder, depth):
        if not os.path.isdir(folder): return
        for k, v in classify(folder, depth).items(): found.setdefault(k, v)
    take(d, 1)
    up = os.path.dirname(os.path.abspath(d))
    for n in sorted(os.listdir(up)) if os.path.isdir(up) else []:
        sd = os.path.join(up, n)
        if os.path.isdir(sd) and os.path.abspath(sd) != os.path.abspath(d): take(sd, 1)
    if not found.get('converted'):
        c = find_converted(d)
        if c: found['converted'] = c
    return found

# ---------------------------------------------------------------- the build
def build(dol_path, settings, game, conv, out, region_name='usa', gid='AURE01', progress=None, rebuild_apploader=False, pad=True):
    """writes the disc image; returns a summary.  progress(done, total) is called as files are written.  raises BuildError"""
    for k, v in (('dol', dol_path), ('settings', settings), ('game', game), ('converted', conv)):
        ok, note = CHECKS[k](v)
        if not ok: raise BuildError('%s: %s' % (NAMES[k], note))
    here = os.path.dirname(os.path.abspath(__file__))
    files, psp, what = game_files(os.path.abspath(game))
    saved = 0; replaced = 0
    cfiles = [t for t in tree_of(conv, 'converted') if t[0].upper() != 'CONVERTED/MANIFEST.TXT' and not t[0].upper().endswith('.PART')]
    cset = {t[0].upper() for t in cfiles}
    cdirs = {t[0].upper().rsplit('/', 1)[0] for t in cfiles}
    kept = []
    for dp, hp, off, size in files:
        u = dp.upper()
        c = u.startswith('GAME/') and 'CONVERTED/' + u[len('GAME/'):] or None
        if c and u.endswith('.PMF') and c + '.THP' in cset:
            saved += size; replaced += 1; continue
        if c and u.endswith('.AT3') and c + '.ADP' in cset and size > 4096:
            saved += size - 4096; replaced += 1; kept.append((dp, hp, off, 4096)); continue
        if c and u.endswith('/GMSND.AM') and c + '.D' in cdirs and size > (256 << 10):
            saved += size - (256 << 10); replaced += 1; kept.append((dp, hp, off, 256 << 10)); continue
        kept.append((dp, hp, off, size))
    files = kept + cfiles
    files.append(('settings.txt', settings, 0, os.path.getsize(settings)))
    files.sort(key=lambda t: t[0].upper())

    apl, apl_entry = build_apploader(here) if rebuild_apploader else (APPLOADER_BIN, APPLOADER_ENTRY)
    dol = open(dol_path, 'rb').read()

    # ---- the FST: / -> aurek -> the files' folders (each folder's entries sorted by name, any case, as the format expects)
    root = {}
    for dp, hp, off, size in files:
        node = root; parts = dp.split('/')
        for q in parts[:-1]: node = node.setdefault(q, {})
        node[parts[-1]] = (hp, off, size)
    tree = {'aurek': root}
    entries = []; names = bytearray(); placed = []     # entries: [flags, name offset, offset / parent, size / next]
    def add(node, parent):
        for n in sorted(node, key=lambda s: s.upper()):
            no = len(names); names.extend(n.encode('ascii', 'replace') + b'\0')
            v = node[n]
            if isinstance(v, dict):
                i = len(entries); entries.append([1, no, parent, 0]); add(v, i); entries[i][3] = len(entries)
            else:
                entries.append([0, no, 0, v[2]]); placed.append((len(entries) - 1, v))
    entries.append([1, 0, 0, 0]); add(tree, 0); entries[0][3] = len(entries)

    # ---- layout: boot.bin 0x0, bi2.bin 0x440, the apploader 0x2440, the DOL, the FST, then the files
    apl_hdr = b'2026/11/22\0\0\0\0\0\0' + be32(apl_entry) + be32(len(apl)) + be32(0) + be32(0)
    dol_off = (0x2460 + len(apl) + 0xFFF) & ~0xFFF
    fst_off = (dol_off + len(dol) + ALIGN - 1) & ~(ALIGN - 1)
    fst_size = 12 * len(entries) + len(names)
    pos = (fst_off + fst_size + ALIGN - 1) & ~(ALIGN - 1)
    for i, p in placed:
        entries[i][2] = pos; pos = (pos + entries[i][3] + ALIGN - 1) & ~(ALIGN - 1)
    total = pos
    if total > DISC_MAX:
        hint = ''
        thps = [hp for dp, hp, off, size in files if dp.upper().endswith('.THP')]
        if thps:                                   # the movies' picture rate that would fit: their length from the THP headers
            secs = 0.0; tb = 0
            for t in thps:
                with open(t, 'rb') as f: h = f.read(24)
                fps = struct.unpack('>f', h[16:20])[0]; secs += struct.unpack('>I', h[20:24])[0] / fps if fps > 0 else 0; tb += os.path.getsize(t)
            if secs > 0:
                now = tb * 8 / secs / 1000 - 293        # (the sound: 32 kHz stereo DSP-ADPCM, 293 kbit/s)
                fit = int((now - (total - DISC_MAX + (16 << 20)) * 8 / secs / 1000) / 50) * 50
                hint = '. The movies run at about %d kbit/s: convert them again at %d or less (delete Converted\\GameCube\\PSP_GAME\\USRDIR\\FMV, then SWBFRS_ConversionTool gc --video-kbps %d)' % (now, fit, fit)
        raise BuildError('the image would be %.0f MB: more than a GameCube disc holds (1392 MB)%s' % (total / 1048576, hint))

    region, rc = REGIONS[region_name]
    gid = (gid.upper() + '000000')[:6]; gid = gid[:3] + rc + gid[4:]
    boot = bytearray(0x440)
    boot[0:6] = gid.encode(); boot[0x1C:0x20] = be32(0xC2339F3D)
    title = b'Aurek (Star Wars Battlefront: Renegade Squadron)'; boot[0x20:0x20 + len(title)] = title
    boot[0x420:0x430] = be32(dol_off) + be32(fst_off) + be32(fst_size) + be32(fst_size)
    bi2 = bytearray(0x2000); bi2[0x18:0x1C] = be32(region)       # (the disc's region: 0 Japan, 1 USA, 2 PAL)
    fst = bytearray()
    for f, no, o, s in entries: fst += be32((f << 24) | no) + be32(o) + be32(s)
    fst += names

    tmp = out + '.part'
    try:
        with open(tmp, 'wb') as o:
            o.write(boot); o.write(bi2); o.write(apl_hdr); o.write(apl)
            o.seek(dol_off); o.write(dol)
            o.seek(fst_off); o.write(fst)
            for n, (i, (p, off, size)) in enumerate(placed):
                o.seek(entries[i][2])
                with open(p, 'rb') as f:
                    f.seek(off); left = size
                    while left > 0:
                        b = f.read(min(left, 4 << 20))
                        if not b: raise BuildError('%s: shorter than expected' % p)
                        o.write(b); left -= len(b)
                if progress and (n % 20 == 0 or n == len(placed) - 1): progress(n + 1, len(placed))
            o.truncate(DISC_MAX if pad else total)        # (pad: the full disc size, 1,459,978,240 bytes, as a pressed disc's image)
        os.replace(tmp, out)
    except BaseException:
        try: os.remove(tmp)
        except OSError: pass
        raise
    if pad: total = DISC_MAX
    return ('%s: %.1f MB (%s, ID %s)\n  in it: %s, %s, settings.txt, converted media from %s; %d files under /aurek\n'
            '  %d originals left out or cut to what the engine reads (their converted copies are on the disc): %.1f MB saved'
            % (out, total / 1048576, region_name, gid, os.path.basename(dol_path), what, conv, len(placed), replaced, saved / 1048576))

# ---------------------------------------------------------------- the window
def gui(here, dropped):
    import tkinter as tk
    from tkinter import ttk, filedialog, messagebox
    dnd = None
    try:
        import tkinterdnd2 as dnd
    except ImportError:
        try:      # drag and drop needs tkinterdnd2 (it brings the tkdnd extension): installed once, for this user
            subprocess.run([sys.executable, '-m', 'pip', 'install', '--user', '--quiet', 'tkinterdnd2'], check=True, timeout=300,
                           creationflags=getattr(subprocess, 'CREATE_NO_WINDOW', 0))
            import site, importlib; importlib.invalidate_caches()
            if site.getusersitepackages() not in sys.path: sys.path.append(site.getusersitepackages())
            import tkinterdnd2 as dnd
        except Exception:
            dnd = None
    root = dnd.Tk() if dnd else tk.Tk()
    root.title('Aurek - GameCube disc image'); root.minsize(760, 0)
    state = {k: None for k in CHECKS}
    state.update(autodetect(here))
    for k, v in classify_many(dropped).items(): state[k] = v
    out_var = tk.StringVar(value=os.path.join(here, 'Aurek_GC.iso'))
    region_var = tk.StringVar(value='usa'); pad_var = tk.BooleanVar(value=True)
    busy = {'on': False}

    frm = ttk.Frame(root, padding=12); frm.pack(fill='both', expand=True)
    drop = tk.Label(frm, relief='groove', bd=2, height=3, bg='#eef3f8', font=('Segoe UI', 10),
                    text=('Drop the game files, the Converted folder, aurek.dol and settings.txt here\n(one at a time, all at once, or a folder that holds them)'
                          if dnd else 'Drag and drop needs the tkinterdnd2 package (pip install tkinterdnd2).\nUse the Browse buttons, or drop the items onto make_gcm.py itself.'))
    drop.grid(row=0, column=0, columnspan=4, sticky='ew', pady=(0, 10))
    rows = {}
    for r, k in enumerate(['game', 'converted', 'dol', 'settings'], start=1):
        mark = tk.Label(frm, width=2, font=('Segoe UI', 12, 'bold')); mark.grid(row=r * 2 - 1, column=0, sticky='w')
        ttk.Label(frm, text=NAMES[k], width=16, font=('Segoe UI', 10, 'bold')).grid(row=r * 2 - 1, column=1, sticky='w')
        path = ttk.Label(frm, text='', width=70); path.grid(row=r * 2 - 1, column=2, sticky='w')
        def browse(k=k):
            if k in ('dol', 'settings'):
                p = filedialog.askopenfilename(filetypes=[('aurek.dol', '*.dol')] if k == 'dol' else [('settings.txt', '*.txt')])
            elif k == 'game':
                p = filedialog.askdirectory(title='The game: its GAME or PSP_GAME folder (Cancel to pick a .iso)') or \
                    filedialog.askopenfilename(filetypes=[('PSP UMD image', '*.iso')])
            else:
                p = filedialog.askdirectory(title='The Converted folder (Converted\\GameCube)')
            if p:
                got = classify(p) if k != 'settings' else {'settings': p}
                state[k] = got.get(k, p); refresh()
        ttk.Button(frm, text='Browse...', command=browse).grid(row=r * 2 - 1, column=3, padx=(6, 0))
        note = tk.Label(frm, text='', fg='#a00', anchor='w', justify='left', wraplength=620)
        note.grid(row=r * 2, column=1, columnspan=3, sticky='w', pady=(0, 6))
        rows[k] = (mark, path, note)
    r0 = 9
    ttk.Separator(frm).grid(row=r0, column=0, columnspan=4, sticky='ew', pady=8)
    ttk.Label(frm, text='Disc image', font=('Segoe UI', 10, 'bold')).grid(row=r0 + 1, column=1, sticky='w')
    ttk.Entry(frm, textvariable=out_var, width=70).grid(row=r0 + 1, column=2, sticky='w')
    def browse_out():
        p = filedialog.asksaveasfilename(defaultextension='.iso', initialfile='Aurek_GC.iso', filetypes=[('GameCube disc image', '*.iso')])
        if p: out_var.set(p)
    ttk.Button(frm, text='Browse...', command=browse_out).grid(row=r0 + 1, column=3, padx=(6, 0))
    ttk.Label(frm, text='Region', font=('Segoe UI', 10, 'bold')).grid(row=r0 + 2, column=1, sticky='w', pady=(6, 0))
    ttk.Combobox(frm, textvariable=region_var, values=sorted(REGIONS), state='readonly', width=10).grid(row=r0 + 2, column=2, sticky='w', pady=(6, 0))
    ttk.Checkbutton(frm, text='Full disc size (1,459,978,240 bytes, as an image of a pressed disc)', variable=pad_var).grid(row=r0 + 2, column=2, sticky='e', pady=(6, 0))
    prog = ttk.Progressbar(frm, maximum=100); prog.grid(row=r0 + 3, column=0, columnspan=4, sticky='ew', pady=(12, 4))
    status = tk.Label(frm, text='', anchor='w', justify='left', wraplength=730); status.grid(row=r0 + 4, column=0, columnspan=4, sticky='w')
    btn = ttk.Button(frm, text='Convert')
    btn.grid(row=r0 + 5, column=0, columnspan=4, pady=(10, 0), ipadx=30, ipady=4)

    def refresh():
        all_ok = True
        for k, (mark, path, note) in rows.items():
            ok, msg = CHECKS[k](state[k])
            all_ok &= ok
            mark.config(text='✔' if ok else '✘', fg='#080' if ok else '#c00')
            path.config(text=state[k] or '-')
            note.config(text=msg, fg='#555' if ok else '#a00')
        btn.config(state='normal' if all_ok and not busy['on'] else 'disabled')
        if not busy['on']:
            status.config(text='Everything checks out: press Convert.' if all_ok else 'Something is missing or wrong (red above): drop or browse for it.', fg='#080' if all_ok else '#a00')
    def on_drop(ev):
        if busy['on']: return
        paths = root.tk.splitlist(ev.data)
        got = classify_many(paths)
        if not got: status.config(text='Not recognised: %s' % ', '.join(paths), fg='#a00'); return
        state.update(got); refresh()
    if dnd:
        drop.drop_target_register(dnd.DND_FILES); drop.dnd_bind('<<Drop>>', on_drop)
        root.drop_target_register(dnd.DND_FILES); root.dnd_bind('<<Drop>>', on_drop)
    def run():
        busy['on'] = True; btn.config(state='disabled'); prog['value'] = 0
        status.config(text='Reading the game and the converted files...', fg='#000')
        out = os.path.abspath(out_var.get()); reg = region_var.get(); pad = pad_var.get()
        def prog_cb(n, t): root.after(0, lambda: (prog.configure(value=100.0 * n / t), status.config(text='Writing: %d of %d files' % (n, t), fg='#000')))
        def work():
            try:
                msg = build(state['dol'], state['settings'], state['game'], state['converted'], out, reg, progress=prog_cb, pad=pad); err = None
            except BuildError as e: msg, err = None, str(e)
            except Exception as e: msg, err = None, '%s: %s' % (type(e).__name__, e)
            def done():
                busy['on'] = False; refresh()
                if err: status.config(text='Failed: ' + err, fg='#a00'); messagebox.showerror('Aurek - GameCube disc image', err)
                else: prog['value'] = 100; status.config(text=msg, fg='#080'); messagebox.showinfo('Aurek - GameCube disc image', 'Done: ' + msg.splitlines()[0])
            root.after(0, done)
        threading.Thread(target=work, daemon=True).start()
    btn.config(command=run)
    refresh()
    root.mainloop()

def classify_many(paths):
    got = {}
    for p in paths:
        for k, v in classify(p).items(): got[k] = v
    return got

def main():
    here = os.path.dirname(os.path.abspath(__file__))
    argv = sys.argv[1:]
    # no options: the window (items dropped onto the script arrive as plain paths: they are filled in)
    if all(not a.startswith('-') for a in argv) and '--cli' not in argv:
        try:
            gui(here, argv); return
        except Exception as e:     # no tkinter (some Linux Pythons): the console way, which waits before closing
            print('(no window: %s)' % e)
            return console(here, argv, pause=True)
    ap = argparse.ArgumentParser(description='Builds a GameCube disc image of Aurek with the game inside (see the top of this file).')
    ap.add_argument('--cli', action='store_true', help='no window')
    ap.add_argument('--dir', default=here, help='where to look for what is not given (default: this script\'s folder, the one above, the ones beside)')
    ap.add_argument('--dol'); ap.add_argument('--settings'); ap.add_argument('--game'); ap.add_argument('--converted')
    ap.add_argument('--out'); ap.add_argument('--region', default='usa', choices=sorted(REGIONS))
    ap.add_argument('--id', default='AURE01', help='six-character game ID (default AURE01; the fourth character follows --region)')
    ap.add_argument('--pause', action='store_true', help='wait for Enter before closing')
    ap.add_argument('--no-pad', action='store_true', help='stop at the last file instead of padding to the full disc size')
    ap.add_argument('--rebuild-apploader', action='store_true', help='build the apploader from apploader/ (devkitPPC) instead of the copy here')
    ap.add_argument('paths', nargs='*', help='the game, the Converted folder, aurek.dol, settings.txt (any order; recognised by what they are)')
    a = ap.parse_args()
    given = {'dol': a.dol, 'settings': a.settings, 'game': a.game, 'converted': a.converted}
    return console(os.path.abspath(a.dir), a.paths, pause=a.pause, given=given, out=a.out, region=a.region, gid=a.id, rebuild=a.rebuild_apploader, pad=not a.no_pad)

def console(d, paths, pause=False, given=None, out=None, region='usa', gid='AURE01', rebuild=False, pad=True):
    state = autodetect(d); state.update(classify_many(paths))
    for k, v in (given or {}).items():
        if v: state[k] = os.path.abspath(v)
    bad = 0
    print('Aurek - GameCube disc image\n')
    for k in ['game', 'converted', 'dol', 'settings']:
        ok, note = CHECKS[k](state.get(k)); bad += not ok
        print('  %s %-17s %s\n      %s' % ('OK ' if ok else 'NO ', NAMES[k], state.get(k) or '-', note))
    code = 0
    if bad:
        print('\nNot built: %d of the 4 items are missing or wrong (see above).' % bad); code = 1
    else:
        out = os.path.abspath(out or os.path.join(d, 'Aurek_GC.iso'))
        try:
            print(); print(build(state['dol'], state['settings'], state['game'], state['converted'], out, region, gid,
                                 progress=lambda n, t: print('  writing %d / %d files' % (n, t), end='\r', flush=True), rebuild_apploader=rebuild, pad=pad))
        except BuildError as e:
            print('\nFailed: %s' % e); code = 1
    if pause:
        try: input('\nPress Enter to close.')
        except EOFError: pass
    return code

if __name__ == '__main__':
    sys.exit(main() or 0)
