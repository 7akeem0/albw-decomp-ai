typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16; typedef unsigned int u32; typedef int s32;

struct Sub; struct P { char pad[0x42]; s16 id; char pad2[2]; Sub* m48; };
bool g1(Sub*); bool g2(Sub*);
bool f(P* p){ s16 id=p->id; if(id==0x50||id==0x52) return g1(p->m48); if(id==0x75||id==0x77) return g2(p->m48); return false; }
