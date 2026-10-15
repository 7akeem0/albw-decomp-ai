#include "range.h"
struct Obj1A9824{char pad[0x3dc];Vec3_24 velocity;char pad3e8[0x944-0x3e8];u32 count;};
extern float func_004F898C();
extern bool func_004FABDC(Obj1A9824*,s32,s32,u32);
extern "C" void target(Obj1A9824*p){p->count=0;for(s32 i=0;i<3;++i)((f32*)&p->velocity)[i]=0;p->velocity.y=func_004F898C();func_004FABDC(p,2,-1,0);}
