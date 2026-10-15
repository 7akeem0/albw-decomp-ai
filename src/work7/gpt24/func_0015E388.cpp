#include "range.h"
struct Obj15E324{char pad[0x960];void*child;};
extern void func_004FC07C(Obj15E324*,s32,s32,u32);
extern void func_002228D0(void*,s32,s32);
extern void func_0015D0E0(Obj15E324*);
void phase(Obj15E324*p,s32 n){func_004FC07C(p,n,-1,0);if(p->child)func_002228D0(p->child,n,-1);}
extern "C" void target(Obj15E324*p){func_0015D0E0(p);phase(p,14);}
