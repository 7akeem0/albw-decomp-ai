#include "../../work7/gpt24/range.h"
struct Obj15CB24{char pad[0x91c];u32 m91c;char p920[0x960-0x920];void*child;};
extern void func_004FC07C(Obj15CB24*,s32,s32,u32);
extern void func_002228D0(void*,s32,s32);
extern void func_004F88A0(Obj15CB24*,u32);
extern void func_00653A54(Obj15CB24*);
void phase(Obj15CB24*p,s32 n){func_004FC07C(p,n,-1,0);if(p->child)func_002228D0(p->child,n,-1);func_004F88A0(p,p->m91c);func_00653A54(p);}

extern "C" void target(Obj15CB24*p){phase(p,12);}
