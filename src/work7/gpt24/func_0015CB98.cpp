#include "range.h"
struct Obj15CB24{char pad[0x960];void*child;};
extern void func_004FC07C(Obj15CB24*,s32,s32,u32);
extern void func_002228D0(void*,s32,s32);
extern void func_0015CBD8(Obj15CB24*);
void phase(Obj15CB24*p,s32 n){func_004FC07C(p,n,-1,0);if(p->child)func_002228D0(p->child,n,-1);func_0015CBD8(p);}

extern "C" void target(Obj15CB24*p){phase(p,1);}
