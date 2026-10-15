#include "range.h"
struct S{char pad[116];u32 state;char gap[32];Ctrl231 ctrl;};extern u32 func_00532C78(Ctrl231*);extern  void func_0066D024(void*,u32);
void f_0045216C(S*p){if(!func_00532C78(&p->ctrl))func_0066D024(&p->state,0);}
