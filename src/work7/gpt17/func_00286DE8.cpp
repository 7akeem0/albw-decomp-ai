#include "range.h"
struct Req_002C11E8 {u8 opaque[0x5c];Req_002C11E8(u16,u32,bool);};struct Obj {u8 pad[0x414];void*child;};extern void func_0016898C(void*,const Req_002C11E8&);
void f_00286DE8(Obj*p){func_0016898C(p->child,Req_002C11E8(1,0,false));}
