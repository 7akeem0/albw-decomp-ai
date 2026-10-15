#include "range.h"
struct Child {char pad[0x16];Flag16 flags;};struct S {char pad[0x14];Child* child;char gap[0x50];u32 sub;};extern void func_002317C0(u32*,f32);
void f_00425BAC(S* p){Flag16* f=&p->child->flags;f->set(2);func_002317C0(&p->sub,1.0f);}
