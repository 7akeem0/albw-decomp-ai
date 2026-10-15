#include "range.h"
struct S{char pad[116];Ctrl231 ctrl;char gap[12];u32 state;};extern u32 func_00532C78(Ctrl231*);extern  void func_0066F2B8(void*,u32);
void f_0048554C(S*p){if(!func_00532C78(&p->ctrl))func_0066F2B8(&p->state,2);}
