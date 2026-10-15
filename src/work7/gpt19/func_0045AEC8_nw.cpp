#include "range.h"
struct S{char pad[284];Ctrl231 ctrl;char gap[84];u32 state;};extern u32 func_00532C78(Ctrl231*);extern  void func_0066D544(void*,u32);
void f_0045AEC8(S*p){if(!func_00532C78(&p->ctrl))func_0066D544(&p->state,12);}
