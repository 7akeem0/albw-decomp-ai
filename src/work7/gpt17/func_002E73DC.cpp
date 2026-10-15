#include "range.h"
struct Obj {u8 pad[0xc9c];u8 flags[1];};
extern void func_004FC07C(Obj*,s32,s32,s32);
void f_002E73DC(Obj*p,s32 i){func_004FC07C(p,31,-1,0);p->flags[i]=1;}
