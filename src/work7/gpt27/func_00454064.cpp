#include "range.h"
struct Child454 {u8 pad[0x16];BitFlag16 flags;};struct Holder454 {u8 pad[0x14];Child454*child;};struct Obj454{u8 pad[0x9c];Holder454*holder;};
extern "C" void func_004B9620(void*);extern "C" void func_002C00A8(void*);
void func_00454064(Obj454*p){func_004B9620(p);func_002C00A8(p->holder->child);Child454*c=p->holder->child;BitFlag16*f=&c->flags;f->reset(1);}
