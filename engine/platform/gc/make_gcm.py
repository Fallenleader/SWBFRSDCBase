#!/usr/bin/env python3
"""Builds a GameCube disc image (.iso, the GCM layout) of Aurek with the game inside, for Dolphin, Swiss or a burned disc.

Put this script in a folder with:
    aurek.dol            the GameCube build
    settings.txt         its settings (optional: without it the build's defaults)
    the game, one of:    GAME/PSP_GAME/...  (the UMD's files, as extracted)
                         PSP_GAME/...       (the same without the GAME folder)
                         game.iso           (or any other PSP .iso: the UMD image; its files are unpacked onto the disc)
    converted/           (optional) the game's media in the GameCube's own formats (music, voices and effects as DSP-ADPCM .adp,
                         the movies as THP), as the SWBFRS Conversion Tool writes it: Converted/GameCube here, or in the tool's
                         folder beside this one (its Convert_GameCube script), or converted/ here
and run it with no arguments:

    python make_gcm.py                       ->  Aurek_GC.iso next to it

What goes on the disc is what aurek.dol looks for when no SD card has an "aurek" folder: /aurek/settings.txt, /aurek/GAME/PSP_GAME
and /aurek/converted.  A PSP .iso is unpacked onto the disc (its files read straight out of the image).  The PSP's own firmware update
(PSP_GAME/SYSDIR/UPDATE) is left out: it is never read.  With converted/ present, what it replaces is left out too:
    X.PMF        when converted/.../X.PMF.thp exists (the engine never reads the original movie)
    X.AT3        cut to its first 4 KB when converted/.../X.AT3.adp exists (the engine reads only the RIFF header: the encoder
                 delay and the loop points)
    GMSND.AM     cut to its first 256 KB when converted/.../GMSND.AM.d exists (the engine reads only its index: the lines and the
                 bundle's table)
The converter's manifest.txt is left out as well (only the converter reads it).
The boot program is Aurek's own small apploader (platform/gc/apploader); no Nintendo code is used.

Options: --dir <folder> (default: this script's folder), --dol, --settings, --game (a GAME / PSP_GAME folder or a PSP .iso),
--converted, --out, --region usa|pal|japan (default usa: the disc's region, which a console's own boot menu checks; Swiss and
Dolphin don't mind), --id (six characters; the fourth is set from the region)."""
import argparse, os, struct, sys, subprocess

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

def main():
    here = os.path.dirname(os.path.abspath(__file__))
    ap = argparse.ArgumentParser(description='Builds a GameCube disc image of Aurek with the game inside (see the top of this file).')
    ap.add_argument('--dir', default=here, help='the folder holding aurek.dol, settings.txt and the game (default: this script\'s)')
    ap.add_argument('--dol'); ap.add_argument('--settings'); ap.add_argument('--game'); ap.add_argument('--converted')
    ap.add_argument('--out'); ap.add_argument('--region', default='usa', choices=sorted(REGIONS))
    ap.add_argument('--id', default='AURE01', help='six-character game ID (default AURE01; the fourth character follows --region)')
    ap.add_argument('--rebuild-apploader', action='store_true', help='build the apploader from apploader/ (devkitPPC) instead of the copy here')
    a = ap.parse_args()
    d = os.path.abspath(a.dir)
    out = os.path.abspath(a.out or os.path.join(d, 'Aurek_GC.iso'))

    # ---- what goes in
    dol_path = a.dol or find_ci(d, 'aurek.dol')
    if not dol_path or not os.path.isfile(dol_path): sys.exit('no aurek.dol in %s (or give --dol)' % d)
    settings = a.settings or find_ci(d, 'settings.txt')
    if settings and not os.path.isfile(settings): sys.exit('%s: not found' % settings)

    files = []                                  # (disc path under /aurek, host path, offset in it, size)
    game = a.game
    if not game:
        g = find_ci(d, 'GAME')
        if g and find_ci(g, 'PSP_GAME'): game = g
        elif find_ci(d, 'PSP_GAME'): game = find_ci(d, 'PSP_GAME')
        else:
            isos = [os.path.join(d, n) for n in sorted(os.listdir(d)) if n.lower().endswith('.iso') and os.path.abspath(os.path.join(d, n)) != out]
            isos = [p for p in isos if is_psp_iso(p)]
            if len(isos) > 1: sys.exit('more than one PSP .iso in %s: %s (give --game)' % (d, ', '.join(os.path.basename(p) for p in isos)))
            game = isos[0] if isos else None
    if not game: sys.exit('no game in %s: put the UMD\'s GAME/PSP_GAME folder (or PSP_GAME, or its .iso) there, or give --game' % d)
    game = os.path.abspath(game)
    if os.path.isfile(game):
        if not is_psp_iso(game): sys.exit('%s is not a PSP UMD image' % game)
        files += iso_tree(game, 'GAME/PSP_GAME', skip_update=True); psp = game; what = 'the UMD image %s (unpacked)' % os.path.basename(game)
    else:
        if os.path.basename(game).upper() == 'PSP_GAME': psp = game
        else:
            psp = find_ci(game, 'PSP_GAME')
            if not psp: sys.exit('%s has no PSP_GAME folder' % game)
        files += tree_of(psp, 'GAME/PSP_GAME', skip_update=True)
        umd = find_ci(os.path.dirname(psp), 'UMD_DATA.BIN')
        if umd and os.path.basename(os.path.dirname(psp)).upper() == 'GAME': files.append(('GAME/UMD_DATA.BIN', umd, 0, os.path.getsize(umd)))
        what = 'the game folder %s' % psp
    need = ['USRDIR/MISC/COMMON.ASR', 'USRDIR/SOUNDS/GMSND.ASR', 'USRDIR/ENVS']
    have = {t[0].upper() for t in files}
    missing = [n for n in need if not any(h.startswith(('GAME/PSP_GAME/' + n).upper()) for h in have)]
    if missing: sys.exit('the game %s lacks %s: is it the whole UMD?' % (psp, ', '.join(missing)))
    conv = a.converted or find_converted(d)
    saved = 0; replaced = 0
    if conv and os.path.isdir(conv):
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
    else: conv = None
    if settings: files.append(('settings.txt', settings, 0, os.path.getsize(settings)))
    files.sort(key=lambda t: t[0].upper())

    apl, apl_entry = build_apploader(here) if a.rebuild_apploader else (APPLOADER_BIN, APPLOADER_ENTRY)
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
                hint = '; the movies run at about %d kbit/s: convert them again at %d or less (delete converted/PSP_GAME/USRDIR/FMV, then SWBFRS_ConversionTool gc --video-kbps %d)' % (now, fit, fit)
        sys.exit('the image would be %.0f MB: more than a GameCube disc holds (1392 MB)%s' % (total / 1048576, hint))

    region, rc = REGIONS[a.region]
    gid = (a.id.upper() + '000000')[:6]; gid = gid[:3] + rc + gid[4:]
    boot = bytearray(0x440)
    boot[0:6] = gid.encode(); boot[0x1C:0x20] = be32(0xC2339F3D)
    title = b'Aurek (Star Wars Battlefront: Renegade Squadron)'; boot[0x20:0x20 + len(title)] = title
    boot[0x420:0x430] = be32(dol_off) + be32(fst_off) + be32(fst_size) + be32(fst_size)
    bi2 = bytearray(0x2000); bi2[0x18:0x1C] = be32(region)       # (the disc's region: 0 Japan, 1 USA, 2 PAL)
    fst = bytearray()
    for f, no, o, s in entries: fst += be32((f << 24) | no) + be32(o) + be32(s)
    fst += names

    tmp = out + '.part'
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
                    if not b: sys.exit('%s: shorter than expected' % p)
                    o.write(b); left -= len(b)
            if n % 200 == 0: print('  %d / %d files' % (n, len(placed)), end='\r', flush=True)
        o.truncate(total)
    os.replace(tmp, out)
    print('%s: %.1f MB (%s, ID %s)' % (out, total / 1048576, a.region, gid))
    print('  in it: %s, %s%s; %d files under /aurek' % (os.path.basename(dol_path), what,
          (', settings.txt' if settings else ', no settings.txt (the defaults)') + (', converted media from %s' % conv if conv else ', no converted media (no music, voices or movies)'), len(placed)))
    if conv: print('  %d originals left out or cut to what the engine reads (their converted copies are on the disc): %.1f MB saved' % (replaced, saved / 1048576))

if __name__ == '__main__':
    main()
