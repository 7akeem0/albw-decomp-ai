#include "range.h"
struct S{char pad[56];Ctrl231 ctrl;char gap[36];u32 state;};extern u32 func_00532C78(Ctrl231*);extern  void func_0066D2AC(void*,u32);
void f_00456084(S*p){if(!func_00532C78(&p->ctrl))func_0066D2AC(&p->state,3);}
