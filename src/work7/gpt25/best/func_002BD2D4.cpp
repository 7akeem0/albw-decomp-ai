#include "../range_types.h"
struct Obj2BD2D4{char pad[0x3a4];void*child;char gap[0x95c-0x3a8];u8 flag;};
extern "C" void func_004F88A0(Obj2BD2D4*,void*);
extern "C" void func_004FABDC(Obj2BD2D4*,s32,s32,s32);
extern "C" void f_002BD2D4(Obj2BD2D4*p){func_004F88A0(p,p->child);p->flag=0;func_004FABDC(p,10,2,0);}
