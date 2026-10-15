#include "range.h"
struct Obj{u8 pad[332];Ctrl231 ctrl;u8 pad2[72];u32 state;};extern s32 func_00532C78(void*);extern  void func_0066D544(void*,s32);
void func_00458438(Obj*p){if(func_00532C78(&p->ctrl)==0)func_0066D544(&p->state,0);}
