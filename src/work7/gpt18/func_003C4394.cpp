#include "range.h"
struct Inner3C43{char pad[0xaf4];u16 value;void set(u16 n){value=n;}};
struct Obj3C43{char pad[0x48];Inner3C43* child;};
void func_003C4394(Obj3C43*p){p->child->set(2);}
