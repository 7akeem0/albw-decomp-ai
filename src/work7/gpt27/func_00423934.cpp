#include "range.h"
struct Child423 {u8 pad[0x16];BitFlag16 flags;};
struct Obj423 {u8 pad[0x14];Child423* child;};
extern void func_002C00A8(void*);
void func_00423934(Obj423* p){func_002C00A8(p->child);Child423* c=p->child;BitFlag16* f=&c->flags;f->reset(0x40);}
