#!/usr/bin/env python3
"""Aurek's Vita trophy pack: one trophy per medal on the game's medals page (28: Infra_Elite is not
on it and nothing earns it) and a platinum, built from the user's own game files.

    python3 tools/trophy/make_trophies.py <the folder holding GAME/PSP_GAME/USRDIR> [--platinum image.png] [--out dir]

Writes <out>/sce_sys/trophy/AURK00001_00/TROPHY.TRP (out: engine/platform/vita by default; the Vita CMake packs it into the VPK when
it is there).  The pack is not kept in the repository: its names, descriptions and pictures are the game's.

- Grades: a medal's tier (the medals page's bronze / silver / gold columns, 0x08AE34B0); the eight single medals are gold (by request).
- Names: the medal's Name (STDTEXT); details: its row's description on the medals page (MISC/MENU/MENU_AM.ASR), with the target.
  The two date medals say what Aurek asks for (a match won on that day - by request, the original wanted an online game).
- Pictures: the medal's own cell of Medals_01.tga / Medals_02.tga (BFF_OPTIONS.GUI; the cells of 08A35158), 240 x 240 on black.
- The platinum: "Renegade Legend" until its picture is supplied (--platinum).
Needs Pillow.  The TRP layout (unsigned: the NoTrpDrm plugin lets the system take it): a 0x40 header (magic DCA24D00, version 2,
the file's size, the entry count, 0x40 per entry, a SHA-1 of the whole file at 0x1C with that field zeroed), 0x40-byte entries
(name 32, offset u64, size u64, flags u32, 12 zero) and the files, each but the last padded to 16 (big-endian throughout).
"""
import hashlib, io, os, struct, sys
from xml.sax.saxutils import escape
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'asura'))
from PIL import Image

TITLE, NAME = 'AURK00001', 'Star Wars Battlefront: Renegade Squadron (Aurek)'
DETAIL = 'Medals of the Aurek port.'
SIGN = '<!--Sce-Np-Trophy-Signature: ' + 'x' * 320 + '-->\n'
ICON = 240

# the medals, in the game's order (0x08ADC738): blueprint, Name (STDTEXT), Test_Number
MEDALS = [('Complete_Campaign', 260, 1), ('Galactic_Conquest', 324, 1), ('Scourge_Infra_Bronze', 267, 50), ('Scourge_infra_silver', 268, 150),
          ('Scourge_infra_Gold', 269, 300), ('Infra_Elite', 261, 1), ('Wookie_Life_Hero', 262, 1), ('Endor_Day_Hero', 263, 1),
          ('Tank_Buster_Bronze', 270, 10), ('Tank_Buster_Silver', 271, 25), ('Tank_Buster_Gold', 272, 50), ('Rogue_Leader_Bronze', 273, 10),
          ('Rogue_Leader_Silver', 274, 25), ('Rogue_Leader_Gold', 275, 100), ('Conqueror_Bronze', 276, 5), ('Conqueror_Silver', 277, 15),
          ('Conqueror_Gold', 278, 30), ('Flag_Carrier_Bronze', 279, 5), ('Flag_Carrier_Silver', 280, 15), ('Flag_Carrier_Gold', 281, 30),
          ('Capture_Master_Bronze', 282, 10), ('Capture_Master_Silver', 283, 25), ('Capture_Master_Gold', 284, 50), ('Conqueror_Supreme', 264, 1),
          ('Hero_Vanquisher', 265, 10), ('Super_Slicer', 266, 15), ('Jedi_Master_Bronze', 257, 25), ('Jedi_Master_Silver', 258, 75),
          ('Jedi_Master_Gold', 259, 150)]
# the medals page's rows (0x08AE34B0: bronze / silver / gold medal, -1 none), their descriptions (0x08AE3478) and cells (08A35158)
ROWS = [(8, 9, 10), (11, 12, 13), (26, 27, 28), (14, 15, 16), (17, 18, 19), (20, 21, 22), (-1, 23, -1), (-1, 24, -1), (-1, 25, -1),
        (-1, 0, -1), (-1, 1, -1), (2, 3, 4), (-1, 6, -1), (-1, 7, -1)]
DESC = [0x92AF858B, 0xB574B2B9, 0x0A231776, 0xF88D97AB, 0x1747B0D0, 0xD9B7DE66, 0xA0BFA5C5, 0x1C5CCB5E, 0xB0164DBE, 0x832805F8, 0xBB0D8603,
        0x75C7771B, 0xC8449E1C, 0xADA302C9]
CELL = [[(0, 0, 2), (.25, 0, 2), (.5, 0, 2)], [(0, .5, 2), (.25, .5, 2), (.5, .5, 2)], [(0, 0, 1), (.5, 0, 1), (.25, 0, 1)],
        [(0, .5, 1), (.5, .5, 1), (.25, .5, 1)], [(0, .25, 2), (.25, .25, 2), (.5, .25, 2)], [(0, .25, 1), (.5, .25, 1), (.25, .25, 1)],
        [None, (.75, .5, 1), None], [None, (.25, .75, 1), None], [None, (.75, .25, 2), None], [None, (0, .75, 1), None],
        [None, (.75, 0, 2), None], [(0, .75, 2), (.25, .75, 2), (.5, .75, 2)], [None, (.5, .75, 1), None], [None, (.75, 0, 1), None]]
DATE_DETAIL = {6: 'Win a match on the 25th of December.', 7: 'Win a match on the 4th of July.'}


def chunks(d):
    p = 8 if d[:8] == b'Asura   ' else 0
    while p + 16 <= len(d):
        tag = d[p:p + 4]; size = struct.unpack_from('<I', d, p + 4)[0]
        if size < 16: break
        yield tag, d[p + 16:p + size]
        p += size


def stdtext(path):
    for tag, b in chunks(open(path, 'rb').read()):
        if tag == b'LTXT' and struct.unpack_from('<I', b, 4)[0] == 0:
            n = struct.unpack_from('<I', b, 0)[0]; q = 8; out = []
            for _ in range(n):
                l = struct.unpack_from('<I', b, q)[0]; q += 4
                out.append(b[q:q + 2 * l].decode('utf-16-le').rstrip('\0')); q += 2 * l
            return out
    return []


def menutext(path):
    out = {}
    for tag, b in chunks(open(path, 'rb').read()):
        if tag != b'HTXT': continue
        n = struct.unpack_from('<I', b, 0)[0]; q = 12
        for _ in range(n):
            k, l = struct.unpack_from('<II', b, q); q += 8
            out[k] = b[q:q + 2 * l].decode('utf-16-le', 'replace').rstrip('\0'); q += 2 * l
    return out


def png(im):
    b = io.BytesIO(); im.save(b, 'PNG', optimize=True); return b.getvalue()


def trp(files):
    base = 0x40 + 0x40 * len(files); entries = blob = b''; off = base
    for i, (name, data) in enumerate(files):
        entries += name.encode().ljust(32, b'\0') + struct.pack('>QQI', off, len(data), 0) + bytes(12)
        pad = (-len(data)) % 16 if i < len(files) - 1 else 0
        blob += data + bytes(pad); off += len(data) + pad
    head = (bytes.fromhex('dca24d00') + struct.pack('>IQII', 2, off, len(files), 0x40) + bytes(4)).ljust(0x40, b'\0')
    body = head + entries + blob
    return body[:0x1C] + hashlib.sha1(body).digest() + body[0x30:]


def main():
    args = sys.argv[1:]
    if not args: print(__doc__); return 1
    root = args[0]; plat = None; out = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..', 'engine', 'platform', 'vita')
    if '--platinum' in args: plat = args[args.index('--platinum') + 1]
    if '--out' in args: out = args[args.index('--out') + 1]
    usr = os.path.join(root, 'GAME', 'PSP_GAME', 'USRDIR') if os.path.isdir(os.path.join(root, 'GAME')) else os.path.join(root, 'PSP_GAME', 'USRDIR')
    std = stdtext(os.path.join(usr, 'TEXT', 'STDTEXT.ASR'))
    menu = menutext(os.path.join(usr, 'MISC', 'MENU', 'MENU_AM.ASR'))
    sheets = load_sheets(os.path.join(usr, 'GUIMENU', 'BFF_OPTIONS.GUI'))
    tier, row_of = {}, {}
    for r, row in enumerate(ROWS):
        single = sum(1 for k in row if k >= 0) == 1
        for t, k in enumerate(row):
            if k >= 0: tier[k] = 'G' if single else 'BSG'[t]; row_of[k] = (r, t)
    head = ('<trophyconf version="1.1" platform="psp2" policy="large">\n <npcommid>%s_00</npcommid>\n'
            ' <trophyset-version>01.00</trophyset-version>\n <parental-level license-area="default">0</parental-level>\n' % TITLE)
    conf = [SIGN, head]; trop = [SIGN, head, ' <title-name>%s</title-name>\n <title-detail>%s</title-detail>\n' % (escape(NAME), DETAIL)]
    conf.append(' <trophy id="000" hidden="no" ttype="P" pid="-1"/>\n')
    trop.append(' <trophy id="000" hidden="no" ttype="P" pid="-1">\n  <name>Renegade Legend</name>\n  <detail>Earn every other trophy.</detail>\n </trophy>\n')
    pngs = []
    def medal_icon(k):
        r, t = row_of[k]; u, v, s = CELL[r][t]; sh = sheets[s]; w, h = sh.size
        cell = sh.crop((int(u * w), int(v * h), int((u + .25) * w), int((v + .25) * h))).resize((ICON - 16, ICON - 16), Image.LANCZOS)
        im = Image.new('RGBA', (ICON, ICON), (0, 0, 0, 255)); im.alpha_composite(cell, (8, 8)); return im
    for k, (bp, nid, need) in enumerate(MEDALS):
        if k not in row_of: continue                                    # (Infra_Elite: not on the medals page, nothing earns it - no trophy)
        tid = k + 1 if k < 5 else k; g = tier[k]; r, _ = row_of[k]   # (frontend.c medal_trophy: the same numbering)
        name = std[nid].strip() if nid < len(std) else bp
        det = DATE_DETAIL.get(k) or menu.get(DESC[r], '').strip()
        if need > 1 and k not in DATE_DETAIL: det = '%s (%d)' % (det.rstrip('.'), need)
        conf.append(' <trophy id="%03d" hidden="no" ttype="%s" pid="000"/>\n' % (tid, g))
        trop.append(' <trophy id="%03d" hidden="no" ttype="%s" pid="000">\n  <name>%s</name>\n  <detail>%s</detail>\n </trophy>\n'
                    % (tid, g, escape(name), escape(det)))
        pngs.append(('TROP%03d.PNG' % tid, png(medal_icon(k))))
    conf.append('</trophyconf>\n'); trop.append('</trophyconf>\n')
    if plat: pim = Image.open(plat).convert('RGBA').resize((ICON, ICON), Image.LANCZOS)
    else: pim = medal_icon(23)                                          # (Conqueror Supreme until the platinum's own picture comes)
    icon0 = Image.new('RGB', (320, 176), (0, 0, 0)); ic = medal_icon(23).convert('RGB').resize((160, 160), Image.LANCZOS); icon0.paste(ic, (80, 8))
    files = [('TROPCONF.SFM', ''.join(conf).encode()), ('TROP.SFM', ''.join(trop).encode()), ('ICON0.PNG', png(icon0)),
             ('TROP000.PNG', png(pim))] + pngs
    dst = os.path.join(out, 'sce_sys', 'trophy', TITLE + '_00', 'TROPHY.TRP')
    os.makedirs(os.path.dirname(dst), exist_ok=True); open(dst, 'wb').write(trp(files))
    print(dst, len(row_of) + 1, 'trophies', os.path.getsize(dst), 'bytes')
    return 0


def load_sheets(gui):
    """Medals_01 / Medals_02 as RGBA images, through the asura tools' extractor (tools/asura/extract.py)."""
    import tempfile, subprocess, glob
    tmp = tempfile.mkdtemp()
    subprocess.run([sys.executable, os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'asura', 'extract.py'), gui, '-o', tmp],
                   check=True, stdout=subprocess.DEVNULL)
    out = {}
    for f in glob.glob(os.path.join(tmp, '**', '*.png'), recursive=True):
        b = os.path.basename(f).lower()
        if b == 'medals_01.png': out[1] = Image.open(f).convert('RGBA')
        if b == 'medals_02.png': out[2] = Image.open(f).convert('RGBA')
    return out


if __name__ == '__main__':
    sys.exit(main())
