#include "range.h"
struct Obj {u8 pad[0x4bc];u32 state;};extern bool func_00530280(Obj*);extern bool func_0052FDE8(Obj*);extern void func_00660F70(u32*,s32);
void f_0027FF28(Obj*p){if(func_00530280(p)&&func_0052FDE8(p))func_00660F70(&p->state,1);}
