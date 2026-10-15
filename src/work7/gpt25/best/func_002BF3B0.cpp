#include "../range_types.h"
struct Child2BF3 {char pad[0x16];Flag16 flags;};
struct Obj2BF3 {char pad[0x14];Child2BF3*child;char gap[0x44];u8 flag;void clear();};
void Obj2BF3::clear(){flag=0;}
extern "C" void func_002C00A8(Child2BF3*);
extern "C" void f_002BF3B0(Obj2BF3*p){p->clear();func_002C00A8(p->child);Child2BF3*q=p->child;q->flags.reset(0x40);}
