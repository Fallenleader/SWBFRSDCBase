r"""Map scripts as Lua: the chunks of a level that have no richer format (entities, objects, effects, sounds, fog, sky, ...) and the
resources kept as data, written by maptool unpack as Lua files and read back by maptool pack.

A script is ordinary Lua (5.3 / 5.4) that returns its chunk as a list of typed values, in file order:

    require "rs_map"
    -- EMOD: the level's objects ...
    return chunk "EMOD" {
      u32(12),                       -- object count
      str "hoth",                    -- level name
      { -- object 0                     (a record: nested tables are only grouping, they are flattened)
        str "bunker",                -- name
        f32(12.5), f32(-3), f32(40), -- position x, y (down), z
      },
    }

Value constructors (each one item of the chunk's data, little-endian):
    u32(n) i32(n) x32(0x8a3f0012) f32(1.5) u16(n) u8(n)
    str "text"     NUL-terminated 8-bit text, zero-padded to a multiple of 4 bytes      (escapes: \\ \" \n \t \xNN \ddd)
    wstr "text"    NUL-terminated UTF-16 text                                          (\u{XXXX} for other characters)
    hex "01 02 ff" raw bytes
Resources kept as data use  return resource "name" { ... }  the same way.

maptool pack reads these files itself (no Lua needed); rs_map.lua (next to this file) defines the same constructors in Lua, so a
script can also be run by Lua (lua <script>: rs_map.chunk returns the packed bytes) - for porting maps from other formats a
converter can generate these files, or Lua code can build the lists programmatically (loops, functions, other modules).
Programmatic scripts are run through Lua when one is installed (lua, lua5.4, lua5.3 on the PATH); the plain form is parsed directly.

    to_lua(lines, header=[])  textdump / chunkfmt lines -> Lua text
    parse(text)               Lua text -> bytes
    from_text(path_txt)       an old .txt script -> Lua text (maptool convert)
Python 3."""
from __future__ import print_function
import re, os, shutil, subprocess, struct, tempfile
import textdump

KINDS = ('u32', 'i32', 'x32', 'f32', 'u16', 'u8', 'str', 'wstr', 'hex')

# ------------------------------------------------------------------ writing
def lua_str(t, wide=False):
    out = ['"']
    for ch in t:
        o = ord(ch)
        if ch == '\\': out.append('\\\\')
        elif ch == '"': out.append('\\"')
        elif ch == '\n': out.append('\\n')
        elif ch == '\t': out.append('\\t')
        elif 32 <= o < 127: out.append(ch)
        elif wide: out.append('\\u{%x}' % o)
        else: out.append('\\x%02x' % o)
    out.append('"'); return ''.join(out)

def _item(line):
    """one textdump item line -> (lua expression, comment) or (None, comment) for a comment / blank line"""
    s = line.strip()
    if not s: return None, None
    if s.startswith('#'): return None, s[1:].strip()
    body = textdump._strip_comment(s); com = s[len(body):].strip()
    if com.startswith('#'): com = com[1:].strip()
    k, _, rest = body.partition(' '); rest = rest.strip()
    if k in ('str', 'wstr'): return '%s %s' % (k, lua_str(textdump._unesc(rest[1:-1]), k == 'wstr')), com
    if k == 'hex': return 'hex "%s"' % rest, com
    if k in KINDS: return '%s(%s)' % (k, rest), com
    raise ValueError('unknown item: ' + s)

def to_lua(lines, header=(), kind='chunk', name=''):
    """lines in textdump syntax (chunkfmt's '# --- <record>' notes open a record table) -> Lua source"""
    out = ['require "rs_map"']
    for h in header: out.append('-- ' + h)
    pre = []                                     # leading comment lines go above 'return'
    i = 0
    while i < len(lines) and lines[i].startswith('#') and not lines[i].startswith('# ---'): pre.append('-- ' + lines[i][1:].strip()); i += 1
    out += pre
    out.append('return %s %s {' % (kind, lua_str(name)))
    depth = 1; pend = []                         # items of the current line (several per line when there is no comment)
    def ind(): return '  ' * depth
    def flush():
        if pend: out.append(ind() + ' '.join(e + ',' for e in pend)); del pend[:]
    for ln in lines[i:]:
        e, com = _item(ln)
        if e is None:
            flush()
            if com is None: out.append('')
            elif com.startswith('--- '):
                if depth > 1: depth -= 1; out.append(ind() + '},')
                out.append(ind() + '{ -- ' + com[4:]); depth += 1
            elif com.startswith('(rest') and depth > 1:
                depth -= 1; out.append(ind() + '},'); out.append(ind() + '-- ' + com)
            else: out.append(ind() + '-- ' + com)
            continue
        if com:
            flush(); out.append('%-34s -- %s' % (ind() + e + ',', com))
        else:
            pend.append(e)
            if len(pend) == 4: flush()
    flush()
    while depth > 1: depth -= 1; out.append(ind() + '},')
    out.append('}')
    return '\n'.join(out) + '\n'

def from_text(path):
    """an old maptool .txt script -> Lua (its first comment line names the chunk or resource)"""
    lines = open(path, encoding='latin1').read().split('\n')
    head = []; kind, name = 'chunk', ''
    if lines and lines[0].startswith('# chunk '):
        head = [lines[0][2:]]; name = lines[0].split()[2]; lines = lines[1:]
    elif lines and lines[0].startswith('# resource "'):
        head = [lines[0][2:]]; kind = 'resource'; name = textdump._unesc(re.match(r'# resource "((?:[^"\\]|\\.)*)"', lines[0]).group(1)); lines = lines[1:]
    while lines and not lines[-1].strip(): lines.pop()
    return to_lua(lines, head, kind, name)

# ------------------------------------------------------------------ reading
_TOK = re.compile(r'''
    (?P<ws>\s+) | (?P<lc>--\[(?P<eq>=*)\[) | (?P<com>--[^\n]*) |
    (?P<str>"(?:[^"\\\n]|\\.)*"|'(?:[^'\\\n]|\\.)*') |
    (?P<num>0[xX][0-9a-fA-F]+|(?:\d+\.?\d*|\.\d+)(?:[eE][+-]?\d+)?) |
    (?P<name>[A-Za-z_][A-Za-z0-9_]*) | (?P<op>[{}(),;\-.])''', re.X)

def _unlua(s):
    out = []; i = 0
    while i < len(s):
        c = s[i]
        if c != '\\': out.append(c); i += 1; continue
        n = s[i + 1]; i += 2
        if n == 'n': out.append('\n')
        elif n == 't': out.append('\t')
        elif n == 'r': out.append('\r')
        elif n == 'a': out.append('\a')
        elif n == 'b': out.append('\b')
        elif n == 'f': out.append('\f')
        elif n == 'v': out.append('\v')
        elif n == 'x': out.append(chr(int(s[i:i + 2], 16))); i += 2
        elif n == 'u':
            j = s.index('}', i); out.append(chr(int(s[i + 1:j], 16))); i = j + 1
        elif n.isdigit():
            j = i - 1; k = j
            while k < len(s) and k < j + 3 and s[k].isdigit(): k += 1
            out.append(chr(int(s[j:k]))); i = k
        elif n == 'z':
            while i < len(s) and s[i] in ' \t\r\n': i += 1
        else: out.append(n)
    return ''.join(out)

def _tokens(src):
    p = 0; toks = []; line = 1
    while p < len(src):
        m = _TOK.match(src, p)
        if not m: raise _Plain()                          # not the plain form: Lua runs it
        k = m.lastgroup if m.lastgroup != 'eq' else 'lc'
        if m.group('lc') is not None:
            end = src.find(']' + m.group('eq') + ']', m.end())
            if end < 0: raise ValueError('unterminated comment')
            line += src.count('\n', p, end); p = end + 2 + len(m.group('eq')); continue
        p = m.end()
        if k == 'ws': line += m.group(k).count('\n'); continue
        if k == 'com': continue
        toks.append((k, m.group(k), line))
    return toks

class _Plain(Exception): pass

def _parse_plain(src):
    """the plain form (as maptool writes it) -> list of (kind, value text); raises _Plain for anything programmatic"""
    t = _tokens(src); i = 0; items = []
    def at(j=0): return t[i + j] if i + j < len(t) else (None, None, 0)
    # require "rs_map" / require("rs_map") / local x = require ...  (only require statements before return)
    while at()[1] == 'require':
        i += 1
        if at()[1] == '(': i += 3
        else: i += 1
    if at()[1] != 'return': raise _Plain()
    i += 1
    if at()[1] not in ('chunk', 'resource'): raise _Plain()
    i += 1
    if at()[0] == 'str': i += 1
    elif at()[1] == '(' and at(1)[0] == 'str' and at(2)[1] == ')': i += 3
    def table():
        nonlocal i
        if at()[1] != '{': raise _Plain()
        i += 1
        while at()[1] != '}':
            if at()[1] == '{': table()
            elif at()[0] == 'name' and at()[1] in KINDS:
                k = at()[1]; i += 1
                if at()[0] == 'str': v = at()[1]; i += 1
                elif at()[1] == '(':
                    i += 1; neg = False
                    if at()[1] == '-': neg = True; i += 1
                    if at()[0] == 'num': v = ('-' if neg else '') + at()[1]
                    elif at()[0] == 'str' and not neg: v = at()[1]
                    else: raise _Plain()
                    i += 1
                    if at()[1] != ')': raise _Plain()
                    i += 1
                else: raise _Plain()
                items.append((k, v, at(-1)[2]))
            else: raise _Plain()
            if at()[1] in (',', ';'): i += 1
            elif at()[1] != '}': raise _Plain()
        i += 1
    table()
    if i != len(t): raise _Plain()
    return items

def _to_lines(items):
    out = []
    for k, v, ln in items:
        if k in ('str', 'wstr', 'hex'):
            if not (v[:1] in '"\'' ): raise ValueError('line %d: %s needs text' % (ln, k))
            t = _unlua(v[1:-1])
            if k == 'hex': out.append('hex ' + t); continue
            if k == 'str' and any(ord(c) > 255 for c in t): raise ValueError('line %d: str holds 8-bit text (use wstr)' % ln)
            out.append('%s "%s"' % (k, textdump._esc(t, k == 'wstr')))
        else:
            if v[:1] in '"\'': raise ValueError('line %d: %s needs a number' % (ln, k))
            if k != 'f32':
                try: n = int(v, 16) if re.match(r'^-?0[xX]', v) else int(v, 10)
                except ValueError:
                    f = float(v)
                    if f != int(f): raise ValueError('line %d: %s needs a whole number, not %s' % (ln, k, v))
                    n = int(f)
                v = str(n)
            out.append('%s %s' % (k, v))
    return out

def _lua_exe():
    for n in ('lua5.4', 'lua54', 'lua5.3', 'lua53', 'lua'):
        p = shutil.which(n)
        if p: return p
    return None

def _run_lua(path):
    """a programmatic script: run it with Lua (rs_map.lua in its dump mode writes the items, one per line)"""
    exe = _lua_exe()
    if not exe: raise ValueError('%s is not in the plain form maptool reads by itself, and no Lua interpreter (lua 5.3 / 5.4) was found to run it' % path)
    here = os.path.dirname(os.path.abspath(__file__)).replace('\\', '/')
    code = ('package.path = "%s/?.lua;" .. package.path; local m = require "rs_map"; m.DUMP = true; '
            'local ok, r = pcall(dofile, arg[1]); if not ok then io.stderr:write(tostring(r)); os.exit(1) end; io.write(r)') % here
    r = subprocess.run([exe, '-e', code.replace('arg[1]', repr(os.path.abspath(path)).replace("'", '"'))], capture_output=True)
    if r.returncode: raise ValueError('%s: %s' % (path, r.stderr.decode('utf8', 'replace').strip()))
    return r.stdout.decode('latin1').split('\n')

def parse(text, path=None):
    """Lua script text -> the chunk's bytes"""
    try: items = _parse_plain(text)
    except _Plain:
        if path is None:
            fd, path = tempfile.mkstemp(suffix='.lua'); os.write(fd, text.encode('latin1')); os.close(fd)
            try: return textdump.parse(_run_lua(path))
            finally: os.remove(path)
        return textdump.parse(_run_lua(path))
    return textdump.parse(_to_lines(items))

def parse_file(path):
    return parse(open(path, encoding='latin1').read(), path)

if __name__ == '__main__':
    # self test: every chunk of the given level files -> Lua -> bytes must give back the same bytes
    import sys
    sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
    from chunks import chunks
    import chunkfmt
    bad = tot = 0
    for f in sys.argv[1:]:
        d = open(f, 'rb').read()
        for p, t, s, v, fl in chunks(d):
            body = d[p + 16:p + s]; tot += 1
            tl = chunkfmt.lines(t, v, body) or textdump.dump(body)
            src = to_lua(tl, ['chunk %s' % t], 'chunk', t)
            if parse(src) != body: bad += 1; print('MISMATCH', f, t, hex(p))
    print('%d chunks, %d mismatches' % (tot, bad))
