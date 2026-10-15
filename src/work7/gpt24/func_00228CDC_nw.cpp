#include "range.h"
struct Obj228C24{char pad[0x324];char effect[0x468-0x324];u32 state;char pad46c[0x73c-0x46c];u8 index;};
extern bool func_00588BF0(Obj228C24*,u32);
extern  void func_0065E774(u32*,s32);
extern void func_003521F0(void*,u32);
extern "C" void target(Obj228C24*p){if(func_00588BF0(p,0)){func_0065E774(&p->state,1);func_003521F0(p->effect,p->index);}}
