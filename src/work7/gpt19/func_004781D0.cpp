#include "range.h"
struct Child {char pad[0x16];Flag16 flags;};struct S {char pad[0x14];Child* child;};extern void* data_007142C8;extern void func_0051B1F8(void*);
void f_004781D0(S* p){Flag16* f=&p->child->flags;f->reset(2);func_0051B1F8(data_007142C8);}
