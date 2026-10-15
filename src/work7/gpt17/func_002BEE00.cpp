#include "range.h"
struct Child {u8 pad[0x16];BitFlag16 flags;};struct Obj {u8 pad[0x14];Child*child;u8 pad18[0x3c-0x18];u8 mode;u8 pad3d[0x5c-0x3d];u8 flag;};extern void func_002C00A8(Child*);
void f_002BEE00(Obj*p){if(p->mode!=3){func_002C00A8(p->child);Child*c=p->child;c->flags.reset(0x40);p->flag=0;}}
