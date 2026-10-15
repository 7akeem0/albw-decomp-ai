#include "range.h"
struct S{char pad[188];u32 state;char gap[116];Ctrl231 ctrl;};extern u32 func_00532C78(Ctrl231*);extern  void func_0066D78C(void*,u32);
void f_0045E2B4(S*p){if(!func_00532C78(&p->ctrl))func_0066D78C(&p->state,3);}
