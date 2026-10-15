#include "range.h"
struct S{char pad[0x34];u32 arg;};struct C{virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual u32 call(u32);};
u32 f_588078(S*p,C*c){return c->call(p->arg);}
