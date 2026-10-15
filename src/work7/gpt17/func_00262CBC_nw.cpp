#include "range.h"
struct Obj {u8 pad[0x8bc];u32 state;};extern bool func_0058A8F0(Obj*);extern bool func_0053A254(Obj*);extern void func_00660490(u32*,s32);
void f_00262CBC(Obj*p){if(func_0058A8F0(p)){if(func_0053A254(p))func_00660490(&p->state,10);else func_00660490(&p->state,4);}}
