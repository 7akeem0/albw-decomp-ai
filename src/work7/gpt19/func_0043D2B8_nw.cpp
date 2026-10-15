#include "range.h"
struct S{char pad[0x74];u32 state;char gap[0xe0];void* child;};extern u32 func_00579EF8(void*);extern  void func_0066C424(void*,u32);
void f_0043D2B8(S*p){if(func_00579EF8(p->child))func_0066C424(&p->state,0);}
