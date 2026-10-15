#include "range.h"
struct Obj{u8 pad[0x40c];u32 state;};
extern bool func_00588BF0(Obj*,u32);
extern  void func_00661990(u32*,s32);
void f_0029A800(Obj*p){if(func_00588BF0(p,0))func_00661990(&p->state,1);}
