#include "range.h"
struct A{virtual void unused0();virtual void unused1();virtual void unused2();virtual void unused3();virtual void unused4();virtual void unused5();virtual void call();};struct S{char pad[0x10];A* child;char gap[0x38];u8 enabled;};
void f_0048AB94(S*p){p->child->call();p->enabled=0;}
