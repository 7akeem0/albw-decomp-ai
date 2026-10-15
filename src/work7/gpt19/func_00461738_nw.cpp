#include "range.h"
struct S{char pad[0x44];Ctrl231 ctrl;u32 state;};extern void func_001B6C04(S*);extern void func_002313DC(Ctrl231*);extern  void func_0066DB6C(void*,u32);
void f_00461738(S*p){func_001B6C04(p);func_002313DC(&p->ctrl);func_0066DB6C(&p->state,0);}
