#include "range.h"
struct S{char pad[32];u32 state;char gap[36];Ctrl231 ctrl;};extern u32 func_00532C78(Ctrl231*);extern  void func_0066C0CC(void*,u32);
void f_0042533C(S*p){if(!func_00532C78(&p->ctrl))func_0066C0CC(&p->state,2);}
