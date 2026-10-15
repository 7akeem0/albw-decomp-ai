#include "range.h"
struct Child3521A {char pad[0x28];u32 value;};
struct Child3521B {char pad[0x20];u32 value;};
struct Obj3521F {char pad[0x20];Child3521A* a;Child3521B* b;};
void func_003521F0(Obj3521F* p,u32 n){if(p->a){p->a->value=n;if(p->b)p->b->value=n;}}
