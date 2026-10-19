#!/usr/bin/env python3
"""PS5 home-screen assets from the game's own PSP presentation files (platform/ps5/sce_sys).

    python3 tools/ps5_assets.py <extracted disc: the folder holding PSP_GAME> [out dir, default platform/ps5/sce_sys]

  icon0.png   512x512 (PS5 launcher icon): the game's ICON0.PNG (144x80) on its own PIC1.PNG art
  pic0.dds    3840x2160 BC7 (selected-title background): PIC1.PNG (480x272) as the game shows it on the PS5, 16:9 (one row off
  pic1.dds    the top and the bottom), scaled 8x; pic1 (launch picture): package.sh copies pic0
  snd0.at9    SND0.AT3 decoded to 48 kHz stereo (ffmpeg, snd0.wav) and encoded to ATRAC9 at 144 kbps, looped, by Sony's at9tool
              (AT9TOOL=<path to PS4_at9tool.exe>, e.g. from github.com/BMK-Studio/AT9-AT3_Converter, ATRAC folder; run with wine off
              Windows.  Use wine's own msvcr120.dll: the one next to the tool there is a 64-bit build the 32-bit tool cannot load)

Needs Pillow, numpy and etcpak (pip install etcpak: its BC7 encoder is bc7enc), and ffmpeg for the sound."""
import os, struct, subprocess, sys
import numpy as np
from PIL import Image, ImageFilter, ImageEnhance

# ---------------------------------------------------------------- BC7 (etcpak: bc7enc)
def bc7(img):
    import etcpak
    p = etcpak.BC7CompressBlockParams(); p.init_perceptual_weights()
    return etcpak.compress_bc7(np.ascontiguousarray(img).tobytes(), img.shape[1], img.shape[0], p)

def dds_bc7(path, img):
    h, w = img.shape[:2]
    data = bc7(img)
    hdr = struct.pack('<4sIIIIIII44x', b'DDS ', 124, 0x000A1007, h, w, w * h, 0, 1)                    # caps|h|w|pixfmt|mipcount|linearsize
    hdr += struct.pack('<II4s20x', 32, 0x4, b'DX10')                                                   # pixel format: FourCC DX10
    hdr += struct.pack('<I16x', 0x1000)                                                                 # caps: texture
    hdr += struct.pack('<IIIII', 98, 3, 0, 1, 0)                                                        # BC7_UNORM, 2D, 1 array slice
    with open(path, 'wb') as f: f.write(hdr + data)

# ---------------------------------------------------------------- the pictures
def main(disc, out):
    g = os.path.join(disc, 'PSP_GAME')
    icon = Image.open(os.path.join(g, 'ICON0.PNG')).convert('RGBA')
    pic = Image.open(os.path.join(g, 'PIC1.PNG')).convert('RGB')
    os.makedirs(out, exist_ok=True)
    # icon0: the PIC1 art, square and dimmed, behind ICON0 scaled to the width
    side = min(pic.size); x = (pic.width - side) // 2
    back = pic.crop((x, 0, x + side, side)).resize((512, 512), Image.LANCZOS).filter(ImageFilter.GaussianBlur(6))
    back = ImageEnhance.Brightness(back).enhance(0.55).convert('RGBA')
    s = 496 / icon.width; ic = icon.resize((496, round(icon.height * s)), Image.LANCZOS)
    back.alpha_composite(ic, ((512 - ic.width) // 2, (512 - ic.height) // 2))
    back.convert('RGB').save(os.path.join(out, 'icon0.png'), optimize=True)
    # pic0 / pic1: 16:9 as on the PS5 (rows 1..270 of 272), 8x
    big = pic.crop((0, 1, 480, 271)).resize((3840, 2160), Image.LANCZOS).convert('RGBA')
    arr = np.asarray(big, dtype=np.uint8).copy(); arr[:, :, 3] = 255
    dds_bc7(os.path.join(out, 'pic0.dds'), arr)
    # the sound, decoded for the ATRAC9 encoder
    snd = os.path.join(g, 'SND0.AT3')
    if os.path.exists(snd):
        wav = os.path.join(out, 'snd0.wav')
        subprocess.run(['ffmpeg', '-v', 'error', '-y', '-i', snd, '-ar', '48000', '-ac', '2', '-c:a', 'pcm_s16le', wav], check=True)
        tool = os.environ.get('AT9TOOL')
        if tool:
            cmd = ([] if os.name == 'nt' else ['wine']) + [tool, '-e', '-br', '144', '-wholeloop', wav, os.path.join(out, 'snd0.at9')]
            subprocess.run(cmd, check=True, env=dict(os.environ, WINEDEBUG='-all')); os.remove(wav)
        else: print('AT9TOOL not set: snd0.wav left for an ATRAC9 encoder')
    print('wrote', ', '.join(sorted(os.listdir(out))))

if __name__ == '__main__':
    if len(sys.argv) < 2: raise SystemExit(__doc__)
    main(sys.argv[1], sys.argv[2] if len(sys.argv) > 2 else os.path.join(os.path.dirname(__file__), '..', 'platform', 'ps5', 'sce_sys'))
