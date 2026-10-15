#include "range.h"
struct A{char pad[0x114];u32 sub;};struct S{char pad[0x88];A* child;};extern void func_001B6D40(S*);extern void func_005452D4(void*);
void f_004867D0(S*p){func_001B6D40(p);if(p->child)func_005452D4(&p->child->sub);}
