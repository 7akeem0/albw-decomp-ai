typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef int s32; typedef float f32;

struct Sub { char pad[0x24]; u8 m24; char p1[0x64-0x25]; f32 m64,m68; char p2[4]; f32 m70,m74; };
struct P { char pad[0xd0]; u8 mD0; char p1[0xf4-0xd1]; u8 mF4; char p2[0x208-0xf5]; Sub* m208; };
void f(P* p){ if(p->mD0!=3) return; if(p->mF4!=0xf) return; Sub* s=p->m208; if(s->m24!=6) return; s->m70=s->m64+s->m68; s->m74=0.0f; }
