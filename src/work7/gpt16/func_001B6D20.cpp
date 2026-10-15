#include "range.h"
extern void func_001B6D40(Obj1B6D*);
void f1B6D20(Obj1B6D* p){Sub1B6D* c=p->child;Flag16* f=&c->flags;f->reset(0x40);p->m5e=0;p->m5f=0;func_001B6D40(p);}
