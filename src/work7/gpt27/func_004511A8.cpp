#include "range.h"
struct Owner451{u8 pad[0x18];u32 flags;u8 gap1c[0x138-0x1c];Virtual20Shared*a,*b;};
void func_004511A8(Owner451*p){p->flags&=~0x80u;p->a->v18();p->b->v19();}
