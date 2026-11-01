r"""Lossless, human-readable text form of binary data (the map "scripts": every chunk the map tool has no richer format for).

One item per line; the items are read back in order and must give back exactly the same bytes:
    u32 123            unsigned 32-bit integer (decimal)
    i32 -5             signed 32-bit integer
    x32 0x8a3f0012     32-bit value written in hexadecimal (hashes, flags, pointers)
    f32 1.5            32-bit float (written so that it reads back to the same bits)
    u16 7 / u8 3       16-bit / 8-bit unsigned integers
    str "text"         NUL-terminated 8-bit text, then zero bytes up to the next multiple of 4 (from the start of the text)
    wstr "text"        NUL-terminated UTF-16 text (2 bytes a character)
    hex 01 02 ff       raw bytes
Comments start with # (whole lines, or after an item).  Escapes in strings: \\  \"  \n  \t  \xNN (8-bit) and \uNNNN (UTF-16).
Editing: change values freely; text can be made longer or shorter (the chunk is re-measured when the map is packed), but anything
that points INTO the chunk by offset would then be wrong - change string lengths only where nothing else depends on them.
Python 2.7 and 3.x."""
from __future__ import print_function
import struct, math

def _printable(b): return 32 <= b < 127
def _esc(s, wide=False):
    out = []
    for ch in s:
        o = ord(ch)
        if ch == '\\': out.append('\\\\')
        elif ch == '"': out.append('\\"')
        elif ch == '\n': out.append('\\n')
        elif ch == '\t': out.append('\\t')
        elif 32 <= o < 127: out.append(ch)
        elif wide: out.append('\\u%04x' % o)
        else: out.append('\\x%02x' % o)
    return ''.join(out)
def _unesc(s):
    out = []; i = 0
    while i < len(s):
        c = s[i]
        if c == '\\' and i + 1 < len(s):
            n = s[i + 1]
            if n == 'n': out.append('\n'); i += 2; continue
            if n == 't': out.append('\t'); i += 2; continue
            if n == 'x': out.append(chr(int(s[i + 2:i + 4], 16))); i += 4; continue
            if n == 'u': out.append(chr(int(s[i + 2:i + 6], 16)) if str is not bytes else unichr(int(s[i + 2:i + 6], 16))); i += 6; continue
            out.append(n); i += 2; continue
        out.append(c); i += 1
    return ''.join(out)

def _str_at(d, p):
    """an 8-bit string item at p: (text, total bytes incl. the NUL and the zero padding to 4) or None"""
    e = d.find(b'\0', p)
    if e < 0 or e - p < 3: return None
    if not all(_printable(b) or b in (9, 10) for b in bytearray(d[p:e])): return None
    if e - p <= 4 and _nice_float(d[p:p + 4]): return None                     # a float whose bytes happen to look like text
    n = e - p + 1; tot = (n + 3) & ~3
    if p + tot > len(d) or any(bytearray(d[e:p + tot])): return None           # padding must be zeros (round trip)
    return d[p:e].decode('latin1'), tot
def _wstr_at(d, p):
    chars = []; q = p
    while q + 2 <= len(d):
        c = struct.unpack_from('<H', d, q)[0]; q += 2
        if c == 0: break
        if not (32 <= c < 127 or c in (9, 10) or 0xA0 <= c < 0x100): return None
        chars.append(c)
    else: return None
    if len(chars) < 3: return None
    return u''.join(unichr(c) if str is bytes else chr(c) for c in chars), q - p
def _nice_float(raw):
    if len(raw) < 4: return False
    v = struct.unpack('<f', raw[:4])[0]
    return not (math.isnan(v) or math.isinf(v)) and 1e-4 <= abs(v) <= 1e7
def _f32_ok(v, raw):
    if v == 0 or math.isnan(v) or math.isinf(v): return False
    a = abs(v)
    if not (1e-5 <= a <= 1e7): return False
    return struct.pack('<f', float(_fmtf(v))) == raw
def _fmtf(v):
    for p in range(6, 10):
        s = '%.*g' % (p, v)
        if struct.pack('<f', float(s)) == struct.pack('<f', v): return s
    return repr(v)

def dump(d, notes=None):
    """bytes -> list of lines.  notes: {offset: comment} written before the item at that offset (field names, if known)."""
    d = bytes(d); lines = []; p = 0; n = len(d); notes = notes or {}
    while p < n:
        if p in notes: lines.append('# ' + notes[p])
        if n - p >= 4:
            s = _str_at(d, p)
            if s:
                lines.append('str "%s"' % _esc(s[0])); p += s[1]; continue
            w = _wstr_at(d, p)
            if w:
                lines.append('wstr "%s"' % _esc(w[0], True)); p += w[1]; continue
            raw = d[p:p + 4]; u = struct.unpack('<I', raw)[0]; f = struct.unpack('<f', raw)[0]
            if u == 0: lines.append('u32 0')
            elif u < 0x10000: lines.append('u32 %d' % u)
            elif u >= 0xFFFF0000: lines.append('i32 %d' % struct.unpack('<i', raw)[0])
            elif _f32_ok(f, raw): lines.append('f32 %s' % _fmtf(f))
            else: lines.append('x32 0x%08x' % u)
            p += 4; continue
        if n - p >= 2: lines.append('u16 %d' % struct.unpack_from('<H', d, p)[0]); p += 2; continue
        lines.append('u8 %d' % bytearray(d[p:p + 1])[0]); p += 1
    return lines

def _num(s): return int(s, 0)
def _strip_comment(s):
    """drop a trailing '# ...' (outside a quoted string)"""
    q = False; i = 0
    while i < len(s):
        c = s[i]
        if c == '\\' and q: i += 2; continue
        if c == '"': q = not q
        elif c == '#' and not q: return s[:i].rstrip()
        i += 1
    return s
def parse(lines):
    """lines (as written by dump, possibly edited) -> bytes"""
    out = bytearray()
    for ln in lines:
        s = _strip_comment(ln.strip())
        if not s: continue
        k, _, rest = s.partition(' '); rest = rest.strip()
        if k in ('str', 'wstr'):
            if not (rest.startswith('"') and rest.endswith('"')): raise ValueError('bad string: ' + s)
            t = _unesc(rest[1:-1])
            if k == 'str':
                b = t.encode('latin1') + b'\0'; out += b + b'\0' * (((len(b) + 3) & ~3) - len(b))
            else:
                for ch in t: out += struct.pack('<H', ord(ch))
                out += b'\0\0'
        elif k == 'u32': out += struct.pack('<I', _num(rest) & 0xFFFFFFFF)
        elif k == 'i32': out += struct.pack('<i', _num(rest))
        elif k == 'x32': out += struct.pack('<I', _num(rest) & 0xFFFFFFFF)
        elif k == 'f32': out += struct.pack('<f', float(rest))
        elif k == 'u16': out += struct.pack('<H', _num(rest) & 0xFFFF)
        elif k == 'u8': out += struct.pack('<B', _num(rest) & 0xFF)
        elif k == 'hex': out += bytearray(int(x, 16) for x in rest.split())
        else: raise ValueError('unknown item: ' + s)
    return bytes(out)

if __name__ == '__main__':
    import sys, os
    sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
    from chunks import chunks
    bad = tot = 0
    for f in sys.argv[1:]:
        d = open(f, 'rb').read()
        for p, t, s, v, fl in chunks(d):
            body = d[p + 16:p + s]; tot += 1
            if parse(dump(body)) != body: bad += 1; print('MISMATCH', f, t, hex(p))
    print('%d chunks, %d mismatches' % (tot, bad))
