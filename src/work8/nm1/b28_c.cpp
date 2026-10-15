typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16; typedef unsigned int u32; typedef int s32;
struct P { char pad[0x78]; s32 m78,m7c,m80; };
void g(s32,s32);
void f(P* p, s32 v){ p->m78=p->m7c; if(p->m80<=v) return; p->m80=v; if(v<=0x3c) return g(3,2); if(v<=0xb4) return g(3,1); return g(3,0); }
