import struct
b=bytearray(open('/home/claude/gd/BOOT.BIN','rb').read())
BASE=0x08804000
shoff=struct.unpack_from('<I',b,0x20)[0]; shn=struct.unpack_from('<H',b,0x30)[0]
ph=[struct.unpack_from('<8I',b,0x34+32*i) for i in range(2)]
segs=[(p[2]+BASE) for p in ph]
img=bytearray(0x434c00)
img[0:ph[0][4]]=b[ph[0][1]:ph[0][1]+ph[0][4]]
o=ph[1][2]; img[o:o+ph[1][4]]=b[ph[1][1]:ph[1][1]+ph[1][4]]
n=0
hi=[]
for i in range(shn):
    sh=struct.unpack_from('<10I',b,shoff+40*i)
    if sh[1]!=0x700000A0: continue
    for k in range(sh[5]//8):
        off,info=struct.unpack_from("<II",b,sh[4]+8*k)
        t=info&0xff; ofs=(info>>8)&0xff; ab=(info>>16)&0xff
        a=ph[ofs][2]+off
        w=struct.unpack_from('<I',img,a)[0]
        S=segs[ab]
        if t==2: w=(w+S)&0xffffffff
        elif t==4: w=(w&0xfc000000)|((((w&0x03ffffff)<<2)+S)>>2&0x03ffffff)
        elif t==5: hi.append((a,w)); n+=1; continue
        elif t==6:
            lo=w&0xffff; slo=lo-0x10000 if lo&0x8000 else lo
            for (ha,hw) in hi:
                v=((hw&0xffff)<<16)+slo+S
                h=((v>>16)+((v>>15)&1))&0xffff
                struct.pack_into('<I',img,ha,(hw&0xffff0000)|h)
            hi=[]
            v=(slo+S)&0xffff
            w=(w&0xffff0000)|v
        elif t==0: pass
        else: print('type',t); 
        struct.pack_into('<I',img,a,w); n+=1
print('relocs',n)
open('/home/claude/work/image_reloc.bin','wb').write(img)
