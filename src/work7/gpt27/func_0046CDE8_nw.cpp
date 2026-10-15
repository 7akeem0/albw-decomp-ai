#include "range.h"
struct Obj{u8 pad[116];u32 state;u8 pad2[32];Ctrl231 ctrl;};extern s32 func_00532BA0(void*);extern  void func_0066E07C(void*,s32);
void func_0046CDE8(Obj*p){if(func_00532BA0(&p->ctrl)!=0)func_0066E07C(&p->state,5);}
