#include "range.h"
struct Owner{u8 pad[0x58];u32 lock;};struct S{u32 pad;Owner*owner;};extern "C" void func_0010C0C0(u32*);extern "C" void func_0010C160(u32*);extern "C" void func_003D306C(Owner*,void*);
void target(S*p,void*a){Owner*o=p->owner;u32*const&q=&o->lock;func_0010C0C0(q);func_003D306C(o,a);func_0010C160(q);}