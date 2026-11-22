#!/usr/bin/env python3
"""Builds a GameCube disc image (GCM / .iso) that holds aurek.dol and the game's files, for Dolphin or Swiss (or a burned disc on a
modded console).  The files go in the image's /aurek folder, where aurek.dol looks when no SD card holds an "aurek" folder.

    python3 make_gcm.py --dol build/gc/aurek.dol --data <folder> --out aurek_gc.iso

<folder> holds settings.txt and the game: game.iso (the owner's UMD image) or GAME/PSP_GAME/...; also converted/ for music and
speech, if there is one.  Nothing of the game is in the image unless it is in that folder.  The boot program is Aurek's own small
apploader (platform/gc/apploader); no Nintendo code is used.  Images are limited to a GameCube disc (1,459,978,240 bytes)."""
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

def walk(root):
    """the folder as a tree: (name, path, children or None for a file), names sorted case-insensitively as the FST expects"""
    items = []
    for n in sorted(os.listdir(root), key=lambda s: s.upper()):
        p = os.path.join(root, n)
        if os.path.isdir(p): items.append((n, p, walk(p)))
        elif os.path.isfile(p): items.append((n, p, None))
    return items

def main():
    ap = argparse.ArgumentParser(description=__doc__.split('\n')[0])
    ap.add_argument('--dol', required=True); ap.add_argument('--data', required=True); ap.add_argument('--out', required=True)
    ap.add_argument('--id', default='AURK01', help='six-character game ID (default AURK01)')
    ap.add_argument('--rebuild-apploader', action='store_true', help='build the apploader from apploader/ (devkitPPC) instead of the copy here')
    a = ap.parse_args()
    here = os.path.dirname(os.path.abspath(__file__))
    apl, apl_entry = build_apploader(here) if a.rebuild_apploader else (APPLOADER_BIN, APPLOADER_ENTRY)
    dol = open(a.dol, 'rb').read()

    # layout: boot.bin 0x0, bi2.bin 0x440, the apploader 0x2440, the DOL, the FST, then the files
    apl_hdr = b'2026/11/22\0\0\0\0\0\0' + be32(apl_entry) + be32(len(apl)) + be32(0) + be32(0)
    dol_off = (0x2460 + len(apl) + 0x1F) & ~0x1F
    dol_off = (dol_off + 0xFFF) & ~0xFFF
    tree = [('aurek', os.path.abspath(a.data), walk(a.data))]

    entries = []; names = bytearray(); files = []   # entries: [flags, name_off, off/parent, size/next]
    def add(items, parent):
        for n, p, kids in items:
            no = len(names); names.extend(n.encode('ascii', 'replace') + b'\0')
            if kids is None:
                entries.append([0, no, 0, os.path.getsize(p)]); files.append((len(entries) - 1, p))
            else:
                i = len(entries); entries.append([1, no, parent, 0]); add(kids, i); entries[i][3] = len(entries)
    entries.append([1, 0, 0, 0]); add(tree, 0); entries[0][3] = len(entries)
    fst_off = (dol_off + len(dol) + ALIGN - 1) & ~(ALIGN - 1)
    fst_size = 12 * len(entries) + len(names)
    pos = (fst_off + fst_size + ALIGN - 1) & ~(ALIGN - 1)
    for i, p in files:
        entries[i][2] = pos; pos = (pos + entries[i][3] + ALIGN - 1) & ~(ALIGN - 1)
    total = pos
    if total > DISC_MAX: sys.exit('the image would be %.0f MB: more than a GameCube disc holds (1392 MB)' % (total / 1048576))

    boot = bytearray(0x440)
    boot[0:6] = a.id.encode()[:6].ljust(6, b'0'); boot[0x1C:0x20] = be32(0xC2339F3D)
    title = b'Aurek (Star Wars Battlefront: Renegade Squadron)'; boot[0x20:0x20 + len(title)] = title
    boot[0x420:0x430] = be32(dol_off) + be32(fst_off) + be32(fst_size) + be32(fst_size)
    bi2 = bytearray(0x2000)
    fst = bytearray()
    for f, no, o, s in entries: fst += be32((f << 24) | no) + be32(o) + be32(s)
    fst += names

    with open(a.out, 'wb') as o:
        o.write(boot); o.write(bi2); o.write(apl_hdr); o.write(apl)
        o.seek(dol_off); o.write(dol)
        o.seek(fst_off); o.write(fst)
        for i, p in files:
            o.seek(entries[i][2])
            with open(p, 'rb') as f:
                while True:
                    b = f.read(1 << 20)
                    if not b: break
                    o.write(b)
        o.truncate(total)
    print('%s: %.1f MB, %d files (the DOL at 0x%x, the FST at 0x%x)' % (a.out, total / 1048576, len(files), dol_off, fst_off))

if __name__ == '__main__':
    main()
