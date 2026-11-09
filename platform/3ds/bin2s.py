#!/usr/bin/env python3
# Minimal bin2s (devkitPro general-tools replacement): bin2s [-a align] [-H header.h] files... > out.s
import sys, os, re
args = sys.argv[1:]; align = 4; header = None; files = []
i = 0
while i < len(args):
    a = args[i]
    if a == '-a': align = int(args[i + 1]); i += 2; continue
    if a == '-H': header = args[i + 1]; i += 2; continue
    files.append(a); i += 1
out = sys.stdout; hdr = []
for f in files:
    d = open(f, 'rb').read()
    sym = re.sub(r'[^A-Za-z0-9_]', '_', os.path.basename(f))
    if sym[0].isdigit(): sym = '_' + sym
    out.write('\t.section .rodata.%s, "a"\n\t.balign %d\n\t.global %s\n\t.global %s_end\n\t.global %s_size\n%s:\n' % (sym, align, sym, sym, sym, sym))
    for j in range(0, len(d), 16):
        out.write('\t.byte ' + ','.join(str(b) for b in d[j:j + 16]) + '\n')
    out.write('%s_end:\n\t.balign 4\n%s_size: .int %d\n\n' % (sym, sym, len(d)))
    hdr += ['extern const unsigned char %s[];' % sym, 'extern const unsigned char %s_end[];' % sym, 'extern const unsigned int %s_size;' % sym]
if header:
    g = re.sub(r'[^A-Za-z0-9_]', '_', os.path.basename(header)).upper()
    open(header, 'w').write('#pragma once\n' + '\n'.join(hdr) + '\n')
