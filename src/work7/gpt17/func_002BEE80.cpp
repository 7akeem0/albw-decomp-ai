#include "range.h"
struct Child{u8 pad[0x16];BitFlag16 flags;void set();void set(u16 n);};struct Obj{u8 pad[0x14];Child*child;u8 pad18[0x24];u8 kind;u8 pad3d[0x1f];u8 enabled;};

void f_002BEE80(Obj*p){p->enabled=1;if(p->kind!=3){Child*c=p->child;c->flags.setWrapped(0x40);}}
