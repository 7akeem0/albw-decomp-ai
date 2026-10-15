#include "range.h"
struct Obj165724{char pad[0x8bc];u32 state;char pad8c0[0x910-0x8c0];u8 active;};
extern float func_00521298(Obj165724*);
extern void func_00658748(u32*,s32) ;
extern "C" void target(Obj165724*p){bool active=func_00521298(p)<25.f;p->active=active;if(active)func_00658748(&p->state,1);}
