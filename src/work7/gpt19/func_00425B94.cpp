#include "range.h"
struct Child {char pad[0x16];Flag16 flags;};struct M {u32 a;};
struct S {char pad[0x14];Child* child;char gap[0x50];M sub;};
extern void func_00231448(M*,Flag16*);
void f_00425B94(S* p){Flag16* f=&p->child->flags;f->reset(2);func_00231448(&p->sub,f);}
