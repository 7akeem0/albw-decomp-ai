#include "range.h"
struct S{char pad[0x74];u32 state;char gap[0x20];u16 count;};extern  void func_0066F174(void*,u32);
void f_00485058(S*p){if(++p->count>=180)func_0066F174(&p->state,1);}
