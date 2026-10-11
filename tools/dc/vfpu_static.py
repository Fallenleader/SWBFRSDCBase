"""Static VFPU translation: decode each VFPU instruction at generation time into straight-line C.

Reference semantics = runtime/vfpu.c (the interpreter); every construct here mirrors it operation for operation
(same float expressions in the same order) so the output is bit-identical when compiled with -ffp-contract=off.
Anything not translated here falls back to the interpreter: VFPU(c,w).

Prefix state (vpfxs / vpfxt / vpfxd) is tracked at generation time per slot:
  'off'        no prefix pending (runtime pfxon[k] == 0)
  ('on', val)  prefix set by an earlier instruction in the same straight-line run, not yet written to c->pfx
  'unk'        unknown at generation time: the runtime c->pfx / c->pfxon hold the truth
"""
import struct


def vsize(w): return 1 + ((w >> 7) & 1) + (((w >> 15) & 1) << 1)
def VD(w): return w & 0x7F
def VS(w): return (w >> 8) & 0x7F
def VT(w): return (w >> 16) & 0x7F
def s16(x): return x - 0x10000 if x & 0x8000 else x


def vidx(sz, v):
    mtx = (v >> 2) & 7; col = v & 3; tr = (v >> 5) & 1
    if sz == 1: tr = 0; row = (v >> 5) & 3
    elif sz == 2: row = (v >> 5) & 2
    elif sz == 3: row = (v >> 6) & 1
    else: row = (v >> 5) & 2
    return [mtx * 16 + ((row + i) & 3) * 4 + col if tr else mtx * 16 + col * 4 + ((row + i) & 3) for i in range(sz)]


def midx(sz, v):
    mtx = (v >> 2) & 7; col = v & 3; tr = (v >> 5) & 1
    if sz == 2: row = (v >> 5) & 2
    elif sz == 3: row = (v >> 6) & 1
    else: row = (v >> 5) & 2
    out = {}
    for i in range(sz):
        for j in range(sz):
            out[j * 4 + i] = (mtx * 16 + ((row + i) & 3) * 4 + ((col + j) & 3)) if tr else (mtx * 16 + ((col + j) & 3) * 4 + ((row + i) & 3))
    return out


def fbits_of(x):  # python float (exact in float32) -> bits
    return struct.unpack('<I', struct.pack('<f', x))[0]


def half_bits(h):  # mirrors vfloat_half (exact: ldexp of small ints)
    import math
    s = (h >> 15) & 1; e = (h >> 10) & 31; m = h & 1023
    if e == 0: f = math.ldexp(m, -24)
    elif e == 31: return (0x7FC00000 if m else 0x7F800000) | (s << 31)
    else: f = math.ldexp(m | 1024, e - 25)
    b = fbits_of(f)
    return b | (s << 31)


K0 = ['0.f', '1.f', '2.f', '0.5f']
K1 = ['3.f', '(1.f / 3.f)', '0.25f', '(1.f / 6.f)']
CST = ['0.f', '3.4028235e38f', '1.41421356237f', '0.70710678118f', '1.12837916709f', '0.63661977236f', '0.31830988618f',
       '0.78539816339f', '1.57079632679f', '3.14159265358f', '2.71828182845f', '1.44269504088f', '0.43429448190f', '0.69314718055f',
       '2.30258509299f', '6.28318530717f', '0.52359877559f', '0.30102999566f', '3.32192809488f', '0.86602540378f'] + ['0'] * 12


class Untranslated(Exception):
    pass


class VfpuEmitter:
    """One instance per generated function.  state[k] for k = 0 (S), 1 (T), 2 (D)."""

    def __init__(self, R, W=None):
        self.R = R                      # GPR read expression (from the main generator)
        self.W = W or (lambda n: 'r[%d]' % n)   # GPR assignment target
        self.state = ['off', 'off', 'off']
        self.stats = {'static': 0, 'guarded': 0, 'fallback': 0, 'materialized_on': 0}

    # ---- control-flow helpers (invariant: runtime pfxon[k] != 0 only if state[k] == 'unk') -------------
    def mat_code(self, st, slots):
        """Code that makes statically pending prefixes of `slots` (in state list st) active at run time."""
        L = []
        for k in slots:
            if isinstance(st[k], tuple):
                L.append('c->pfx[%d]=0x%xu;c->pfxon[%d]=1;' % (k, st[k][1], k)); self.stats['materialized_on'] += 1
        return L

    def materialize(self):
        L = self.mat_code(self.state, range(3))
        self.state = ['unk' if st != 'off' else 'off' for st in self.state]
        return L

    # ---- operand access ----------------------------------------------------------------------
    @staticmethod
    def V(i): return 'v[%d]' % i

    def load(self, slot, sz, v, pre):
        """Returns (decls, names) for the source vector; consumes prefix slot like load_s()."""
        ix = vidx(sz, v)
        raw = ['%s' % self.V(i) for i in ix]
        st = self.state[slot]
        names = []; decls = []
        for i in range(sz):
            nm = '%s%d' % (pre, i)
            if isinstance(st, tuple):
                p = st[1]
                swz = (p >> (i * 2)) & 3; ab = (p >> (8 + i)) & 1; cs = (p >> (12 + i)) & 1; ng = (p >> (16 + i)) & 1
                if cs: e = K1[swz] if ab else K0[swz]
                else:
                    if swz >= sz: raise Untranslated('swizzle beyond size')  # interpreter reads t[swz] uninitialised: keep it
                    e = raw[swz]
                    if ab: e = 'fabsf(%s)' % e
                if ng: e = '-(%s)' % e
            else:
                e = raw[i]
            decls.append('float %s=%s;' % (nm, e)); names.append(nm)
        return decls, names

    def store(self, sz, v, vals):
        """store_d(): D prefix (saturate / mask) then write."""
        ix = vidx(sz, v)
        st = self.state[2]
        L = []
        for i in range(sz):
            e = vals[i]
            if isinstance(st, tuple):
                p = st[1]; sat = (p >> (i * 2)) & 3; msk = (p >> (8 + i)) & 1
                if sat == 1: e = 'SAT0(%s)' % e
                elif sat == 3: e = 'SAT1(%s)' % e
                if msk: continue
            L.append('%s=%s;' % (self.V(ix[i]), e))
        return L

    # ---- main entry --------------------------------------------------------------------------
    record = None   # tools/test_vfpu.py: list receiving (pc, w, state before, code, state after)

    def emit(self, pc, w):
        """Returns list of C statements for VFPU instruction w at pc."""
        before = list(self.state)
        code = self.emit_(pc, w)
        if VfpuEmitter.record is not None: VfpuEmitter.record.append((pc, w, before, code, list(self.state)))
        return code

    def emit_(self, pc, w):
        try:
            consumed, body = self.translate(pc, w)
        except Untranslated:
            L = self.materialize()
            # the interpreter only clears pfxon[] (consumption) except for mtvc to a prefix register, which sets it
            op = w >> 26
            if op == 0x12 and ((w >> 21) & 31) == 7 and ((w >> 7) & 1) and (w & 0x7F) < 3:
                self.state[w & 0x7F] = 'unk'
            self.stats['fallback'] += 1
            return L + ['VFPU(c,0x%08x);' % w]
        if body is None:   # pure state change (prefix instruction), nothing emitted
            return []
        unk = [k for k in consumed if self.state[k] == 'unk']
        if not unk:
            self.stats['static'] += 1
            for k in consumed: self.state[k] = 'off'
            return ['{' + ''.join(body) + '}']
        # some consumed slot is unknown at generation time.  body was built treating unknown slots as 'off'
        # and known slots with their static values; if any unknown slot is active at run time, interpret instead
        # (after making the statically known consumed slots visible to the interpreter).
        mat = self.mat_code(self.state, consumed)
        for k in consumed: self.state[k] = 'off'
        self.stats['guarded'] += 1
        cond = '||'.join('c->pfxon[%d]' % k for k in unk)
        return ['if(%s){%sVFPU(c,0x%08x);}else{%s}' % (cond, ''.join(mat), w, ''.join(body))]

    def translate(self, pc, w):
        """-> (consumed prefix slots, list of C statements) ; body None = no code.  Raises Untranslated."""
        R = self.R
        op = w >> 26; n = vsize(w)
        V = self.V
        if op == 0x32:   # lv.s
            vt = ((w >> 16) & 31) | ((w & 3) << 5); ix = vidx(1, vt)
            return (), ['%s=BITSF(LW(%s+(%d)));' % (V(ix[0]), R((w >> 21) & 31), s16(w & 0xFFFC))]
        if op == 0x3a:   # sv.s
            vt = ((w >> 16) & 31) | ((w & 3) << 5); ix = vidx(1, vt)
            return (), ['SW(%s+(%d),FBITS(%s));' % (R((w >> 21) & 31), s16(w & 0xFFFC), V(ix[0]))]
        if op == 0x36:   # lv.q
            vt = ((w >> 16) & 31) | ((w & 1) << 5); ix = vidx(4, vt)
            # bit 1 (write-back variant) is ignored, as in the interpreter
            return (), ['u32 a_=%s+(%d);' % (R((w >> 21) & 31), s16(w & 0xFFFC))] + \
                ['%s=BITSF(LW(a_+%d));' % (V(ix[i]), 4 * i) for i in range(4)]
        if op == 0x3e:   # sv.q
            vt = ((w >> 16) & 31) | ((w & 1) << 5); ix = vidx(4, vt)
            # bit 1 (write-back variant) is ignored, as in the interpreter
            return (), ['u32 a_=%s+(%d);' % (R((w >> 21) & 31), s16(w & 0xFFFC))] + \
                ['SW(a_+%d,FBITS(%s));' % (4 * i, V(ix[i])) for i in range(4)]
        if op == 0x3d:   # svl.q (bit1=0) / svr.q (bit1=1): unaligned quad store, run-time offset
            vt = ((w >> 16) & 31) | ((w & 1) << 5); ix = vidx(4, vt)
            L = ['u32 a_=%s+(%d);int off_=(a_>>2)&3;' % (R((w >> 21) & 31), s16(w & 0xFFFC)),
                 'float q_[4]={%s};' % ','.join(V(i) for i in ix)]
            if not (w & 2): L.append('for(int i=0;i<=off_;i++)SW(a_-4*i,FBITS(q_[3-i]));')
            else: L.append('for(int i=0;i<=3-off_;i++)SW(a_+4*i,FBITS(q_[i]));')
            return (), L
        if op == 0x35:
            raise Untranslated('lvl/lvr')   # not used by this game
        if op == 0x12:
            rs = (w >> 21) & 31; rt = (w >> 16) & 31
            if rs in (3, 7):
                ctrl = (w >> 7) & 1; v = VD(w)
                if not ctrl:
                    ix = vidx(1, v)
                    if rs == 3: return (), (['%s=FBITS(%s);' % (self.W(rt), V(ix[0]))] if rt else [])
                    return (), ['%s=BITSF(%s);' % (V(ix[0]), R(rt))]
                cr = v & 0x7F
                if rs == 3 and rt == 0: return (), []   # mfvc $zero, ...: VFPU pipeline sync idiom, no effect
                if cr < 3 or cr not in (3, 7):
                    raise Untranslated('pfx control move')
                if rs == 3:
                    if cr == 3: return (), (['%s=c->vcc;' % self.W(rt)] if rt else [])
                    return (), (['%s=0x20;' % self.W(rt)] if rt else [])
                if cr == 3: return (), ['c->vcc=%s;' % R(rt)]
                return (), []   # write to cr 7: ignored by the interpreter
            raise Untranslated('cop2')
        if op == 0x37:
            k = (w >> 24) & 3
            if k < 3:
                was = self.state[k]
                self.state[k] = ('on', w & 0xFFFFF)
                # an earlier prefix may be active at run time; the new one replaces it and is consumed statically,
                # so the run-time flag must not survive
                return (), (['c->pfxon[%d]=0;' % k] if was == 'unk' else None)
            ix = vidx(1, VT(w))
            if not ((w >> 23) & 1): return (), ['%s=(float)(s16)0x%x;' % (V(ix[0]), w & 0xFFFF)]
            return (), ['%s=BITSF(0x%08xu);' % (V(ix[0]), half_bits(w & 0xFFFF))]
        if op == 0x3f: return (), []
        if op in (0x18, 0x19, 0x1b):
            sub = (w >> 23) & 7
            if op == 0x19 and sub in (1, 4):   # vdot / vhdp
                dS, S = self.load(0, n, VS(w), 's'); dT, T = self.load(1, n, VT(w), 't')
                terms = ''.join('sum+=%s*%s;' % ('1.0f' if (sub == 4 and i == n - 1) else S[i], T[i]) for i in range(n))
                return (0, 1, 2), dS + dT + ['float sum=0;', terms] + self.store(1, VD(w), ['sum'])
            if op == 0x19 and sub == 2:   # vscl
                dS, S = self.load(0, n, VS(w), 's'); dT, T = self.load(1, 1, VT(w), 't')
                return (0, 1, 2), dS + dT + self.store(n, VD(w), ['%s*%s' % (S[i], T[0]) for i in range(n)])
            if op == 0x19 and sub == 5:   # vcrs.t
                dS, S = self.load(0, 3, VS(w), 's'); dT, T = self.load(1, 3, VT(w), 't')
                return (0, 1, 2), dS + dT + self.store(3, VD(w), ['%s*%s' % (S[1], T[2]), '%s*%s' % (S[2], T[0]), '%s*%s' % (S[0], T[1])])
            if op == 0x19 and sub == 6:   # vdet.p
                dS, S = self.load(0, 2, VS(w), 's'); dT, T = self.load(1, 2, VT(w), 't')
                return (0, 1, 2), dS + dT + self.store(1, VD(w), ['%s*%s-%s*%s' % (S[0], T[1], S[1], T[0])])
            # generic binary: classify first (interpreter consumes S,T before detecting unknown ops)
            if op == 0x1b and sub == 0:   # vcmp
                dS, S = self.load(0, n, VS(w), 's'); dT, T = self.load(1, n, VT(w), 't')
                cond = VD(w) & 15
                def cmp(a, b):
                    return {0: '0', 1: '%s==%s' % (a, b), 2: '%s<%s' % (a, b), 3: '%s<=%s' % (a, b), 4: '1', 5: '%s!=%s' % (a, b),
                            6: '%s>=%s' % (a, b), 7: '%s>%s' % (a, b), 8: '%s==0' % a, 9: '%s!=0' % a, 10: 'isinf(%s)' % a,
                            11: '(isinf(%s)||isnan(%s))' % (a, a), 12: '%s!=0' % a, 13: '%s!=0' % a, 14: 'isinf(%s)' % a}.get(
                        cond, '(isinf(%s)||isnan(%s))' % (a, a))
                L = dS + dT + ['u32 k0_=(%s)!=0;' % cmp(S[0], T[0])]
                for i in range(1, n): L.append('u32 k%d_=(%s)!=0;' % (i, cmp(S[i], T[i])))
                cc = '|'.join('(k%d_<<%d)' % (i, i) for i in range(n))
                anyv = '|'.join('k%d_' % i for i in range(n)); allv = '&'.join('k%d_' % i for i in range(n))
                L.append('c->vcc=(c->vcc&~0x3Fu)|%s|((%s)<<4)|((%s)<<5);' % (cc, anyv, allv))
                return (0, 1), L
            exprs = None
            if op == 0x18 and sub in (0, 1, 7): f = {0: '%s+%s', 1: '%s-%s', 7: '%s/%s'}[sub]
            elif op == 0x19 and sub == 0: f = '%s*%s'
            elif op == 0x1b and sub in (2, 3, 5, 6, 7):
                f = {2: '(%(a)s<%(b)s?%(a)s:%(b)s)', 3: '(%(a)s>%(b)s?%(a)s:%(b)s)', 5: '(%(a)s>%(b)s?1.f:(%(a)s<%(b)s?-1.f:0.f))',
                     6: '(%(a)s>=%(b)s?1.f:0.f)', 7: '(%(a)s<%(b)s?1.f:0.f)'}[sub]
            else: raise Untranslated('vfpu0/1/3 sub')
            dS, S = self.load(0, n, VS(w), 's'); dT, T = self.load(1, n, VT(w), 't')
            if '%(' in f: exprs = [f % {'a': S[i], 'b': T[i]} for i in range(n)]
            else: exprs = [f % (S[i], T[i]) for i in range(n)]
            # compute all results before any store (the interpreter fills D[] first)
            dec = ['float d%d=%s;' % (i, exprs[i]) for i in range(n)]
            return (0, 1, 2), dS + dT + dec + self.store(n, VD(w), ['d%d' % i for i in range(n)])
        if op == 0x34:
            k = (w >> 21) & 31; sub = (w >> 16) & 31
            if k == 3:   # vcst
                return (2,), self.store(n, VD(w), [CST[sub & 31]] * n)
            if k == 0:
                simple = {0: '%s', 1: 'fabsf(%s)', 2: '-%s', 4: '(%(x)s<0?0:(%(x)s>1?1:%(x)s))', 5: '(%(x)s<-1?-1:(%(x)s>1?1:%(x)s))',
                          6: '0', 7: '1', 16: '1.0f/%s', 17: '1.0f/sqrtf(%s)', 18: 'sinf(%s*1.57079632679f)', 19: 'cosf(%s*1.57079632679f)',
                          20: 'exp2f(%s)', 21: 'log2f(%s)', 22: 'sqrtf(%s)', 23: 'asinf(%s)*0.63661977236f'}
                if sub in simple:
                    dS, S = self.load(0, n, VS(w), 's'); f = simple[sub]
                    ex = [(f % {'x': S[i]}) if '%(' in f else (f % S[i] if '%s' in f else f) for i in range(n)]
                    dec = ['float d%d=%s;' % (i, ex[i]) for i in range(n)]
                    vals = ['d%d' % i for i in range(n)]
                    if sub in (6, 7): vals = ['(float)%s' % ex[i] for i in range(n)]; dec = []
                    return (0, 2), dS + dec + self.store(n, VD(w), vals)
                if sub == 3:   # vidt
                    dS, S = self.load(0, n, VS(w), 's'); dd = VD(w) & 3
                    return (0, 2), dS + self.store(n, VD(w), ['1.f' if i == dd else '0.f' for i in range(n)])
                if sub == 24:  # vnrm-like (interpreter case 24)
                    dS, S = self.load(0, n, VS(w), 's')
                    L = dS + ['float q=0;'] + ['q+=%s*%s;' % (S[i], S[i]) for i in range(n)] + ['q=sqrtf(q);']
                    L += ['float d%d=q?%s/q:0.f;' % (i, S[i]) for i in range(n)]
                    return (0, 2), L + self.store(n, VD(w), ['d%d' % i for i in range(n)])
                raise Untranslated('k0 sub')
            if k == 1 and sub == 0:
                raise Untranslated('vrnd')
            if k == 2 and sub <= 10:
                if sub == 5 and n > 2: raise Untranslated('vsocp n>2')
                if sub in (0, 1, 2, 3, 8, 9) and n < 4: raise Untranslated('quad-only op on short vector')
                dS, S = self.load(0, n, VS(w), 's')
                S4 = S
                if sub == 0: D = ['fminf(%s,%s)' % (S4[0], S4[1]), 'fmaxf(%s,%s)' % (S4[0], S4[1]), 'fminf(%s,%s)' % (S4[2], S4[3]), 'fmaxf(%s,%s)' % (S4[2], S4[3])]
                elif sub == 1: D = ['fminf(%s,%s)' % (S4[0], S4[3]), 'fminf(%s,%s)' % (S4[1], S4[2]), 'fmaxf(%s,%s)' % (S4[1], S4[2]), 'fmaxf(%s,%s)' % (S4[0], S4[3])]
                elif sub == 2: D = ['%s+%s' % (S4[0], S4[1]), '%s-%s' % (S4[0], S4[1]), '%s+%s' % (S4[2], S4[3]), '%s-%s' % (S4[2], S4[3])]
                elif sub == 3: D = ['%s+%s' % (S4[0], S4[2]), '%s+%s' % (S4[1], S4[3]), '%s-%s' % (S4[0], S4[2]), '%s-%s' % (S4[1], S4[3])]
                elif sub == 4: D = ['1.0f-%s' % S[i] for i in range(n)]
                elif sub == 5:
                    D = []
                    for i in range(n):
                        D += ['(1.0f-{x}<0?0:(1.0f-{x}>1?1:1.0f-{x}))'.format(x=S[i]), '({x}<0?0:({x}>1?1:{x}))'.format(x=S[i])]
                elif sub in (6, 7):
                    L = dS + ['float t=0;'] + ['t+=%s;' % S[i] for i in range(n)]
                    if sub == 7: L.append('t=t/%d;' % n)
                    return (0, 2), L + self.store(1, VD(w), ['t'])
                elif sub == 8: D = ['fmaxf(%s,%s)' % (S4[0], S4[1]), 'fminf(%s,%s)' % (S4[0], S4[1]), 'fmaxf(%s,%s)' % (S4[2], S4[3]), 'fminf(%s,%s)' % (S4[2], S4[3])]
                elif sub == 9: D = ['fmaxf(%s,%s)' % (S4[0], S4[3]), 'fmaxf(%s,%s)' % (S4[1], S4[2]), 'fminf(%s,%s)' % (S4[1], S4[2]), 'fminf(%s,%s)' % (S4[0], S4[3])]
                else: D = ['(float)((%s>0)-(%s<0))' % (S[i], S[i]) for i in range(n)]
                no = len(D)
                if sub in (0, 1, 2, 3, 8, 9): no = n
                dec = ['float d%d=%s;' % (i, D[i]) for i in range(no)]
                return (0, 2), dS + dec + self.store(no, VD(w), ['d%d' % i for i in range(no)])
            if k == 1 and sub >= 24:   # vuc2i vc2i vus2i vs2i vi2uc vi2c vi2us vi2s: same loops as the interpreter
                dS, S = self.load(0, n, VS(w), 's')
                L = list(dS) + ['u32 in_[4]={%s};u32 out_[4]={0,0,0,0};' % ','.join(['FBITS(%s)' % S[i] for i in range(n)] + ['0'] * (4 - n))]
                if sub == 24: L.append('for(int i=0;i<4;i++)out_[i]=((((in_[0]>>(8*i))&0xff))*0x01010101u)>>1;'); no = 4
                elif sub == 25: L.append('for(int i=0;i<4;i++)out_[i]=((in_[0]>>(8*i))&0xff)<<24;'); no = 4
                elif sub == 26:
                    if 2 * n > 4: raise Untranslated('vus2i n>2')
                    L.append('for(int i=0;i<%d;i++)for(int j=0;j<2;j++)out_[2*i+j]=((in_[i]>>(16*j))&0xffff)<<15;' % n); no = 2 * n
                elif sub == 27:
                    if 2 * n > 4: raise Untranslated('vs2i n>2')
                    L.append('for(int i=0;i<%d;i++)for(int j=0;j<2;j++)out_[2*i+j]=((in_[i]>>(16*j))&0xffff)<<16;' % n); no = 2 * n
                elif sub == 28: L.append('for(int i=0;i<4&&i<%d;i++){s32 x=(s32)in_[i];out_[0]|=(u32)(x<0?0:(u32)x>>23)<<(8*i);}' % n); no = 1
                elif sub == 29: L.append('for(int i=0;i<4&&i<%d;i++)out_[0]|=(((u32)((s32)in_[i]>>24))&0xff)<<(8*i);' % n); no = 1
                elif sub == 30: L.append('for(int i=0;i<%d;i++){s32 x=(s32)in_[i];out_[i>>1]|=(u32)(x<0?0:(u32)x>>15)<<(16*(i&1));}' % n); no = n // 2 if n > 1 else 1
                else: L.append('for(int i=0;i<%d;i++)out_[i>>1]|=(((u32)((s32)in_[i]>>16))&0xffff)<<(16*(i&1));' % n); no = n // 2 if n > 1 else 1
                L += ['float d%d=BITSF(out_[%d]);' % (i, i) for i in range(no)]
                return (0, 2), L + self.store(no, VD(w), ['d%d' % i for i in range(no)])
            if 16 <= k <= 19:   # vf2in / vf2iz / vf2iu / vf2id
                dS, S = self.load(0, n, VS(w), 's'); mode = k - 16
                sc = 'BITSF(0x%08xu)' % fbits_of(float(2 ** sub))
                dec = ['float d%d=BITSF(F2I(%s*%s,%d));' % (i, S[i], sc, mode) for i in range(n)]
                return (0, 2), dS + dec + self.store(n, VD(w), ['d%d' % i for i in range(n)])
            if k == 20:   # vi2f
                dS, S = self.load(0, n, VS(w), 's')
                sc = 'BITSF(0x%08xu)' % fbits_of(2.0 ** -sub)
                dec = ['float d%d=(float)(s32)FBITS(%s)*%s;' % (i, S[i], sc) for i in range(n)]
                return (0, 2), dS + dec + self.store(n, VD(w), ['d%d' % i for i in range(n)])
            if k == 21:   # vcmovt / vcmovf : no D prefix
                imm3 = (w >> 16) & 7; tf = (w >> 19) & 1
                dS, S = self.load(0, n, VS(w), 's'); di = vidx(n, VD(w))
                L = list(dS)
                for i in range(n):
                    bit = '((c->vcc>>%d)&1)' % (imm3 if imm3 < 6 else i)
                    L.append('if(%s==%d)%s=%s;' % (bit, 0 if tf else 1, V(di[i]), S[i]))
                return (0,), L
            raise Untranslated('vfpu4')
        if op == 0x3c:
            sub = (w >> 23) & 7
            if sub == 0:   # vmmul (no prefixes)
                s = midx(n, VS(w)); t = midx(n, VT(w)); d = midx(n, VD(w)); L = []
                for a in range(n):
                    for b in range(n):
                        L.append('float m%d%d=0;' % (a, b) + ''.join('m%d%d+=%s*%s;' % (a, b, V(s[b * 4 + k]), V(t[a * 4 + k])) for k in range(n)))
                for a in range(n):
                    for b in range(n):
                        L.append('%s=m%d%d;' % (V(d[a * 4 + b]), a, b))
                return (), L
            if sub == 5 and n in (3, 4):
                dS, S = self.load(0, n, VS(w), 's'); dT, T = self.load(1, n, VT(w), 't')
                if n == 3:
                    D = ['%s*%s-%s*%s' % (S[1], T[2], S[2], T[1]), '%s*%s-%s*%s' % (S[2], T[0], S[0], T[2]), '%s*%s-%s*%s' % (S[0], T[1], S[1], T[0])]
                else:
                    D = ['%s*%s+%s*%s+%s*%s-%s*%s' % (S[0], T[3], S[3], T[0], S[1], T[2], S[2], T[1]),
                         '%s*%s+%s*%s+%s*%s-%s*%s' % (S[1], T[3], S[3], T[1], S[2], T[0], S[0], T[2]),
                         '%s*%s+%s*%s+%s*%s-%s*%s' % (S[2], T[3], S[3], T[2], S[0], T[1], S[1], T[0]),
                         '%s*%s-%s*%s-%s*%s-%s*%s' % (S[3], T[3], S[0], T[0], S[1], T[1], S[2], T[2])]
                dec = ['float d%d=%s;' % (i, D[i]) for i in range(n)]
                return (0, 1, 2), dS + dT + dec + self.store(n, VD(w), ['d%d' % i for i in range(n)])
            if sub == 7:
                k = (w >> 16) & 31
                if k not in (0, 3, 6, 7): raise Untranslated('vmmov group')
                d = midx(n, VD(w)); s2 = midx(n, VS(w)); L = []
                for j in range(n):
                    for i in range(n):
                        e = {0: V(s2[j * 4 + i]), 3: '1.f' if i == j else '0.f', 6: '0.f', 7: '1.f'}[k]
                        L.append('float m%d%d=%s;' % (j, i, e))
                for j in range(n):
                    for i in range(n):
                        L.append('%s=m%d%d;' % (V(d[j * 4 + i]), j, i))
                return (), L
            if sub in (1, 2, 3):   # vtfm / vhtfm
                m = {1: 2, 2: 3, 3: 4}[sub]; homog = n < m
                s2 = midx(m, VS(w)); tn = m - 1 if homog else m; t2 = vidx(tn, VT(w))
                tv = [V(t2[i]) for i in range(tn)] + (['1.0f'] if homog else [])
                tv += ['0'] * (m - len(tv))
                L = ['float t%d=%s;' % (i, tv[i]) for i in range(m)]
                for b in range(m):
                    L.append('float o%d=0;' % b + ''.join('o%d+=%s*t%d;' % (b, V(s2[b * 4 + k2]), k2) for k2 in range(m)))
                di = vidx(m, VD(w))
                L += ['%s=o%d;' % (V(di[i]), i) for i in range(m)]
                return (), L
            raise Untranslated('vfpu6')
        raise Untranslated('primary')
