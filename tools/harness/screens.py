"""Screen recognition for the harness driver.  A signature is a 48x27 grey thumbnail of the whole screen, the left heading word at
full size (Planet / Mode / Era ... differ only there) and the place where Launch appears; a frame
is the reference with the smallest mean absolute difference.  Only these small signatures are stored - not the game's images."""
import json, os
from PIL import Image
_PATH = os.path.join(os.path.dirname(__file__), 'screens.json')
_REF = json.load(open(_PATH)) if os.path.exists(_PATH) else {}

def signature(path):
    im = Image.open(path).convert('L')
    a = list(im.resize((48, 27), Image.BILINEAR).tobytes())
    b = list(im.crop((20, 48, 150, 68)).tobytes())          # the left heading word at full size (Planet / Mode / Era / Profile ...)
    c = list(im.crop((180, 165, 300, 190)).resize((60, 12), Image.BILINEAR).tobytes())   # where Launch appears under the buttons
    return a + b * 2 + c * 4

def launch_shown(path):
    """The Launch button under Random / Game Options (the planet list once the playlist has an entry): blue, else the red backdrop"""
    from PIL import ImageStat
    return ImageStat.Stat(Image.open(path).convert('RGB').crop((185, 168, 295, 188))).mean[2] > 50

def classify(path, limit=10.0):
    t = signature(path); best, bd = None, 1e9
    for k, r in _REF.items():
        d = sum(abs(x - y) for x, y in zip(t, r)) / len(t)
        if d < bd: best, bd = k, d
    if best in ('planet', 'planet_playlist'):
        best = 'planet_playlist' if launch_shown(path) else 'planet'; bd = min(bd, limit)
    return (best if bd <= limit else None), bd

def make(refs):
    json.dump({k: signature(f) for k, f in refs.items()}, open(_PATH, 'w'))
