typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16; typedef unsigned int u32; typedef int s32;

struct Sub { char pad[0x74]; s8 m74; };
struct P { char pad[0x42]; s16 id; char pad2[2]; Sub* m48; };
struct E { u8 v; u8 pad[15]; };
extern E data_007111A8[];
bool f(P* p){ if(data_007111A8[p->id].v != 2) return false; return p->m48->m74 != -1; }
