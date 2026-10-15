#include "range.h"
struct Req{char data[0x5c];Req(u16,u32,bool);};struct O{char pad[0x1c];void*child;};extern void func_0016898C(void*,const Req&);void f(O*p){func_0016898C(p->child,Req(0,10,false));}
