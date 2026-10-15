#include "range.h"
struct Sub {u8 pad[0x16];BitFlag16 flags;};
struct Obj {u8 pad[0x14];Sub* child;u8 p18[0x47];u8 flag;};
extern void func_001B6D40(Obj*);
void f_002BF934(Obj* p){Sub* s=p->child;BitFlag16* f=&s->flags;f->reset(0x40);p->flag=0;func_001B6D40(p);}
