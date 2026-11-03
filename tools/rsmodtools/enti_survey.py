#!/usr/bin/env python3
"""Survey of the entity (ENTI) chunks of every Renegade Squadron level: which entity types exist, how many per map, their sizes and a
sample record.  A step toward named entity fields (command posts, spawns, vehicle spawns) in the dumped scripts.

  enti_survey.py <game folder> [-o enti_types.md]

An ENTI chunk is one entity: u32 id, u32 type (bit 15: ?), u32 sub-kind, then the type's fields.  Floats that look like positions
are shown as such.  The game's parser is func_08824770 (src/game/game_01.c), reached from the level loader's chunk switch
(tag 0x49544E45 -> func_08825140)."""
import os, sys, struct, collections, argparse
HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.join(HERE, '..', 'asura'))
from chunks import chunks
import maptool

def words(b):
    out = []
    for i in range(0, len(b) // 4 * 4, 4):
        u, = struct.unpack_from('<I', b, i); f, = struct.unpack_from('<f', b, i)
        out.append(('%.3f' % f) if (u >> 23) & 0xFF not in (0, 0xFF) and 1e-3 < abs(f) < 1e6 else str(u if u < 0x10000 else hex(u)))
    return out

def main(argv):
    ap = argparse.ArgumentParser(); ap.add_argument('game'); ap.add_argument('-o', '--out', default='enti_types.md'); a = ap.parse_args(argv)
    envs = maptool.envs_dir(a.game)
    per = collections.defaultdict(collections.Counter); sizes = collections.defaultdict(collections.Counter); sample = {}
    maps = []
    for era in maptool.ERAS:
        d = os.path.join(envs, era)
        for f in sorted(os.listdir(d)) if os.path.isdir(d) else []:
            if not f.upper().endswith('.PSP'): continue
            m = '%s/%s' % (era, os.path.splitext(f)[0]); maps.append(m)
            data = open(os.path.join(d, f), 'rb').read()
            for p, tag, size, ver, flags in chunks(data):
                if tag != 'ENTI': continue
                body = data[p + 16:p + size]
                if len(body) < 12: continue
                _, typ, sub = struct.unpack_from('<III', body, 0)
                per[typ][m] += 1; sizes[typ][len(body)] += 1
                sample.setdefault(typ, (m, ' '.join(words(body)[:24])))
    with open(a.out, 'w') as o:
        o.write('# ENTI entity types in Renegade Squadron (%d levels)\n\n| type | flag 0x8000 | levels | total | sizes (bytes) | sample (first map; u32 or float words) |\n|---|---|---|---|---|---|\n' % len(maps))
        for t in sorted(per, key=lambda t: -sum(per[t].values())):
            o.write('| %d | %s | %d | %d | %s | %s: `%s` |\n' % (t & 0x7FFF, 'yes' if t & 0x8000 else '', len(per[t]), sum(per[t].values()),
                    ', '.join('%d' % s for s, _ in sizes[t].most_common(4)), sample[t][0], sample[t][1]))
        o.write('\n## Count per level\n\n')
        for t in sorted(per):
            o.write('- type %d%s: %s\n' % (t & 0x7FFF, ' (0x8000)' if t & 0x8000 else '', ', '.join('%s %d' % kv for kv in sorted(per[t].items()))))
    print('wrote', a.out, '(%d types, %d levels)' % (len(per), len(maps)))

if __name__ == '__main__':
    main(sys.argv[1:])
