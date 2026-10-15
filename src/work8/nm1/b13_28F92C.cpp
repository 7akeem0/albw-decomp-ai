typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef int s32; typedef short s16;

struct Sub { char pad[0x328]; u32 m328; char p2[0x33c-0x32c]; u8 m33c; };
struct SD { u16 m0; };
struct P { char pad[0x1c]; Sub* m1c; char p2[0x48-0x20]; void* m48; };
SD* chg(void*, s32);
void f(P* p){ Sub* s=p->m1c; if(s->m328 & 0x80){ if(s->m33c==0xc) return; } SD* d=chg(p->m48,0x7e); if(d) d->m0=0x74; }
