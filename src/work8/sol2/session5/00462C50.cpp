typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef unsigned int u32; typedef int s32; typedef float f32;
struct P { char pad[0xd]; s8 m0d; s8 m0e; char p2[0x81-0xf]; u8 m81; u8 m82; char p3[1]; f32 m84,m88,m8c; };
static inline bool paired(const s8& d,const s8& e){return(d==1&&e==1)||(d==3&&e==3);}
static inline void flags(P* p,u8 a,u8 b,const u8&zero,const u8&one){p->m81=a;p->m0d=zero;__schedule_barrier();p->m0e=one;p->m82=b;}
void f(P* p, u8 a, u8 b, f32 x, f32 y, f32 z){ if(paired(p->m0d,p->m0e)||p->m0e==1) return; p->m84=x; __schedule_barrier(); p->m88=y; __schedule_barrier(); p->m8c=z; __schedule_barrier(); flags(p,a,b,0,1); }
