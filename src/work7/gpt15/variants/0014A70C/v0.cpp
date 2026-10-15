#include "../../range.h"
struct C{char pad[0x70];u32 v;};struct S{char pad[0x1c];C*p;u8 flag;};extern "C" void func_0014A70C(S*p,u8 v){if(p->flag!=v){p->flag=v;p->p->v=v;}}
