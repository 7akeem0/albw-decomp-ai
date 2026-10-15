#include "range.h"
struct S{char pad[152];u32 state;char gap[68];Ctrl231 ctrl;};extern u32 func_00532C78(Ctrl231*);extern  void func_0066D78C(void*,u32);
void f_0045E618(S*p){if(!func_00532C78(&p->ctrl))func_0066D78C(&p->state,0);}
