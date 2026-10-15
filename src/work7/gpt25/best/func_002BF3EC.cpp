#include "../range_types.h"
struct Obj2BF3E {char pad[0x14];void*child;char gap[0x45];u8 a,b,c;};
extern "C" void func_002C00A8(void*);
extern "C" void func_001B6DE0(Obj2BF3E*);
extern "C" void f_002BF3EC(Obj2BF3E*p){func_002C00A8(p->child);p->a=0;p->b=0;p->c=0;func_001B6DE0(p);}
