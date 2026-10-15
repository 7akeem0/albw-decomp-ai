#include "range.h"
struct S{char pad[116];u32 state;char gap[36];void* ctrl;};extern u32 func_0034BB9C(void*);extern  void func_0066E448(void*,u32);
void f_004739B0(S*p){if(func_0034BB9C(p->ctrl))func_0066E448(&p->state,4);}
