#include "range.h"
struct Obj{u8 pad[116];Ctrl231 ctrl;u8 pad2[24];u32 state;};extern s32 func_00532C78(void*);extern  void func_0066DF38(void*,s32);
void func_0046AD98(Obj*p){if(func_00532C78(&p->ctrl)==0)func_0066DF38(&p->state,12);}
