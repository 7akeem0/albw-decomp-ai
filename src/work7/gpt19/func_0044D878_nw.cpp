#include "range.h"
struct S{char pad[116];Ctrl231 ctrl;char gap[48];u32 state;};extern u32 func_00532C78(Ctrl231*);extern  void func_0066CD9C(void*,u32);
void f_0044D878(S*p){if(!func_00532C78(&p->ctrl))func_0066CD9C(&p->state,11);}
