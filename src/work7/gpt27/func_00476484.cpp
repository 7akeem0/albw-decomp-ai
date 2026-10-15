#include "range.h"
struct Child476{u8 pad[0x16];BitFlag16 flags;};
struct Owner476{u8 pad[0x14];Child476*child;};
extern "C" void func_0023251C(Owner476*);
extern "C" void func_002C00A8(Child476*);
void func_00476484(Owner476*p){func_0023251C(p);Child476*c=p->child;BitFlag16*f=&c->flags;f->reset(0x40);func_002C00A8(p->child);c=p->child;f=&c->flags;f->reset(2);}
