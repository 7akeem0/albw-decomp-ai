#include "range.h"
extern bool func_004FABDC(void*,u16,s32,bool);
inline void clear(Obj1A454*p,f32 z){p->velocity.x=z;p->velocity.z=z;}
void f_001A4544(Obj1A454*p){clear(p,0);p->rate=0;func_004FABDC(p,0,-1,false);p->flags.reset(128);p->flags.set(0x4000);}
