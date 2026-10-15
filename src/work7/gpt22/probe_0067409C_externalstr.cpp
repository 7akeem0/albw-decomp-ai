#include "range.h"
extern "C" void func_002F8DE4(Soldier22*,s32,s32,bool);
extern "C" void func_001509A4(Soldier22*,const SafeString22&,s32);
extern const char ro_0069A84C[];
void target(Soldier22*p){p->count8f4=0;p->flag908=0;func_002F8DE4(p,0,-1,false);p->vx=0.f;p->vz=0.f;func_001509A4(p,SafeString22(ro_0069A84C),0);p->flag98f=1;}
