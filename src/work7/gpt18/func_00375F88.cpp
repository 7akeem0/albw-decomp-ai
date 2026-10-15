#include "range.h"
struct O{char pad[0x2e0];Flag32 flags;char p2e4[0x430-0x2e4];void*first;void*second;};extern void func_004CF478(void*,bool,u32);extern void func_00151148(void*,s8);void f(O*p){p->flags.set(2);func_004CF478(p->first,false,0);func_00151148(p->second,0);}
