#include "range.h"
struct S{char pad[200];u32 state;char gap[32];Ctrl231 ctrl;};extern u32 func_00532C78(Ctrl231*);extern  void func_0066E58C(void*,u32);
void f_004748C0(S*p){if(!func_00532C78(&p->ctrl))func_0066E58C(&p->state,3);}
