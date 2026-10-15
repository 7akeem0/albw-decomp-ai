typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef unsigned int u32; typedef int s32; typedef short s16; typedef float f32;

struct Sub { char pad[0x5b0]; u32 m5b0; };
struct P { char pad[0x10]; Sub* m10; char pad2[0x42-0x14]; s16 id; };
struct E { u32 m0, m4; u32 r1, r2; };
extern E data_007111A8[];
bool f(P* p){ s16 id=p->id; if(id==0x23||id==0x26) return true; if(p->m10->m5b0!=0x3f800000) return false; if(data_007111A8[id].m4 & 0x100) return false; return true; }
