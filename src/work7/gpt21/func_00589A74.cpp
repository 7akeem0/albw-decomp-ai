#include "range.h"
struct Child{char pad[0x34];u32 value;};struct S{char pad[0x10];Child*a;u32 pad14;Child*b;};
u32* f_589A74(S*p){return p->a?&p->a->value:&p->b->value;}
