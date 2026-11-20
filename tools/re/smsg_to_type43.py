import struct,sys
def chunks(d):
    p=8
    while p+16<=len(d):
        tag=d[p:p+4]; size,ver,flags=struct.unpack_from('<III',d,p+4)
        if size<16: break
        yield tag,ver,flags,d[p+16:p+size]; p+=size
for lvl in sys.argv[1:]:
    d=open('/home/claude/gd/GAME/PSP_GAME/USRDIR/ENVS/'+lvl,'rb').read()
    ids43={}; start=[]
    for tag,ver,flags,b in chunks(d):
        if tag==b'ENTI' and len(b)>=8:
            eid,ty=struct.unpack_from('<II',b,0)
            if ty&0x7fff==43: ids43[eid]=b[:32].hex()
            if ty==1 and len(b)>=0x34 and struct.unpack_from('<I',b,0x1c)[0]>=4 and struct.unpack_from('<f',b,0x30)[0]==0.0: start.append(struct.unpack_from('<h',b,0x24)[0])
    for tag,ver,flags,b in chunks(d):
        if tag!=b'SMSG': continue
        v=ver&0xffff; ng=struct.unpack_from('<I',b,0)[0]; p=4; side=0
        if v>=2: side=struct.unpack_from('<I',b,4)[0]; p=8
        msz=8+(4 if v>=3 else 0)+(4 if v>4 else 0)+(4 if v>5 else 0)
        cnt=b[p:p+ng]; p+=ng
        for g in range(ng):
            for m in range(cnt[g]):
                ty,ex,tg=struct.unpack_from('<HHI',b,p)
                eb=((ex+3)&~3) if not (flags&1) else 0
                if tg in ids43: print(lvl,'side',side,'group',g,'start' if g in start else '','msg',ty,'to',hex(tg),b[p+msz:p+msz+ex].hex())
                p+=msz+eb
    print(lvl,'type43:',len(ids43))
