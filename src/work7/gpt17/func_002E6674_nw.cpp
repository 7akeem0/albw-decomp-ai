#include "range.h"
struct Obj{u8 pad0[0x8BC];u32 state;};
extern bool func_00521060(Obj*);
extern  void func_00663FA8(u32*,s32);
void f_002E6674(Obj*p){if(func_00521060(p))func_00663FA8(&p->state,4);}
