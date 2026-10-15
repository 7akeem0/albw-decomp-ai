typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16; typedef unsigned int u32; typedef int s32;

struct Sub { char pad[4]; u16 id; };
struct P { char pad[0x42]; u16 id; char pad2[2]; Sub* m48; };
bool f(P* p){ return p->id==0x97 || (p->m48 && p->m48->id==0x97); }
