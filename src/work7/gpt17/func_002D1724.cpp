#include "range.h"
struct Req_002C11E8 {u8 opaque[0x5c];Req_002C11E8(u16,u32,bool);};struct Obj {u8 pad[0x2c];void*child;};extern void func_0016898C(void*,const Req_002C11E8&);
void f_002D1724(Obj*p){func_0016898C(p->child,Req_002C11E8(0,10,false));}
