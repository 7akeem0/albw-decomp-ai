#include "range.h"
struct Obj{u8 pad[56];u32 state;u8 pad2[116];Ctrl231 ctrl;};extern s32 func_00532C78(void*);extern  void func_0066BFFC(void*,s32);
void func_00423684(Obj*p){if(func_00532C78(&p->ctrl)==0)func_0066BFFC(&p->state,0);}
