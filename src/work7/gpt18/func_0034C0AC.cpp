#include "range.h"
struct Pair{u32 base,offset;};struct O{char pad[0x98];void*a,*b;char gap[0xd0-0xa0];Pair pair;};extern void func_0034C0E4(void*,u32,u32,u32);void phase(void*child,const Pair*q){Pair v=*q;func_0034C0E4(child,v.base,v.base+v.offset,120);}void f(O*p){func_0034C0E4(p->a,p->pair.offset,0,120);phase(p->b,&p->pair);}
