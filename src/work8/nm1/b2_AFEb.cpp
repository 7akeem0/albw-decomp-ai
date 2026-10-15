typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef int s32;
struct Sub { char pad[0xa4]; u16 first, second; };
struct C { char pad[0x200]; Sub sub; };
void f(C* c, s32 a, s32 b){ Sub* s=&c->sub; if(a<0)a=180; s->first=(u16)a; if(b>=0)s->second=(u16)b; else s->second=60; }
