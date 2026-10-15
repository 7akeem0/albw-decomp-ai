#include "range.h"
struct S{char pad[56];Ctrl231 ctrl;char gap[12];u32 state;};extern u32 func_00532BA0(Ctrl231*);extern  void func_0066DB6C(void*,u32);
void f_00461640(S*p){if(func_00532BA0(&p->ctrl))func_0066DB6C(&p->state,2);}
