#include "range.h"
struct S{char pad[116];u32 state;char gap[168];Ctrl231 ctrl;};extern u32 func_00532BA0(Ctrl231*);extern  void func_0066CEE0(void*,u32);
void f_00450344(S*p){if(func_00532BA0(&p->ctrl))func_0066CEE0(&p->state,0);}
