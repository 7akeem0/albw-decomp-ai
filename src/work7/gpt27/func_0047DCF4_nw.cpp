#include "range.h"
struct Obj{u8 pad[116];u32 state;u8 pad2[44];Ctrl231 ctrl;};extern s32 func_00532C78(void*);extern  void func_0066E9DC(void*,s32);
void func_0047DCF4(Obj*p){if(func_00532C78(&p->ctrl)==0)func_0066E9DC(&p->state,2);}
