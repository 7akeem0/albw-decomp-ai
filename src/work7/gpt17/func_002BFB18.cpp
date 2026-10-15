#include "range.h"
struct Obj{u8 pad[0x14];void*child;u8 pad18[0x45];u8 a,b,c;};
extern void func_002C00A8(void*);
extern void func_001B6DE0(Obj*);
void f_002BFB18(Obj*p){func_002C00A8(p->child);p->a=0;p->b=0;p->c=0;func_001B6DE0(p);}
