#include "range.h"
struct Req{u8 pad[0x5c];Req(u16,u32,bool);};struct O{u8 pad[0x4f8];void*child;};extern void func_0016898C(void*,const Req&);void f225B74(O*p){func_0016898C(p->child,Req(5,6,false));}
