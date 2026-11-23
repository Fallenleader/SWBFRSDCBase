"""The original's sound key-ons by name: sas_report.py <game.log of a RS_SAS_LOG=1 harness run> [names from sas_names.py]."""
import sys, collections
names={}
for l in open(sys.argv[2] if len(sys.argv) > 2 else '/tmp/sas_names.txt'):
    h,sz,nm=l.rstrip('\n').split(' ',2); names[(h,int(sz))]=nm; names.setdefault((h,-1),nm)
c=collections.Counter(); first={}
for l in open(sys.argv[1]):
    if not l.startswith('SASKEY'): continue
    _,fr,v,h,sz,vl,vr,el,pitch,loop=l.split()
    nm=names.get((h,int(sz))) or names.get((h,-1)) or ('?'+h+'/'+sz)
    c[nm]+=1; first.setdefault(nm,(fr,vl,vr,pitch,loop))
for nm,n in c.most_common(): print(n,nm,first[nm])
