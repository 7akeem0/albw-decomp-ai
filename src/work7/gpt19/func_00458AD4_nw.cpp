#include "range.h"
struct S{char pad[0x14c];Ctrl231 ctrl;char gap[0x48];u32 state;};extern s32 func_00532C2C(Ctrl231*);extern  void func_0066D544(void*,u32);
void f_00458AD4(S*p){if(func_00532C2C(&p->ctrl)>=8)func_0066D544(&p->state,2);}
