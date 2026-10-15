#include "en218.h"
s32 func_004904CC(f32,f32);struct Rng{char p[0x660];u32 next();};extern Rng* data_007124F0;u32 func_00111A64(void*);
inline u32 randRange(void*r,u32 max){return (u64)func_00111A64(r)*max>>32;}
void func_00219668(EnB*o){Vec3 d;{const Vec3* p=&o->m8;d.setSub(*p,o->m3d0);}f32 x=d.x;s32 a=func_004904CC(x,d.z);s32 r=randRange((char*)data_007124F0+0x660,0xe38e38e);if(r&1)r=-r;o->m8d8=r+a;o->m8e0=150;}


