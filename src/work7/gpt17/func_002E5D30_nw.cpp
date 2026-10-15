#include "range.h"
struct Obj{u8 pad0[0x8BC];u32 state;};
extern bool func_0058A8F0(Obj*);
extern  void func_00663FA8(u32*,s32);
void f_002E5D30(Obj*p){if(func_0058A8F0(p))func_00663FA8(&p->state,4);}
