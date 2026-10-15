#include "range.h"
struct Obj{u8 pad[0x40c];s32 state;};
extern  void func_0066501C(s32*,s32);
void f_00317ED4(Obj*p){if(p->state>30)func_0066501C(&p->state,2);}