#include "range.h"
struct S{char pad[0xdc];void* child;};extern void func_001B6D40(S*);extern void func_0012C790(void*);
void f_00440E38(S*p){func_001B6D40(p);if(p->child)func_0012C790(p->child);}
