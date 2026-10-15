typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef int s32; typedef short s16;

struct E { u8 v; u8 pad[15]; };
extern E data_007111A8[];
struct Sub { char pad[0x70]; u32 m70; };
struct P { char pad[0x42]; s16 id; char pad2[2]; Sub* m48; };
u32 g2(Sub*);
u32 f(P* p){ u8 t=data_007111A8[p->id].v; if(t==0x11) return p->m48->m70; if(t==0xb) return g2(p->m48); return 0; }
