#include "range.h"
struct S{char pad[56];Ctrl231 ctrl;u32 state;};extern u32 func_00532C78(Ctrl231*);extern  void func_0066F540(void*,u32);
void f_0048947C(S*p){if(!func_00532C78(&p->ctrl))func_0066F540(&p->state,0);}
