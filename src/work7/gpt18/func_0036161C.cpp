#include "range.h"
struct Child3616{char pad[0x30];u32 value;char pad34[0x4fa];u8 active;void set(u32 v){active=1;value=v;}};
struct Inner3616{char pad[0x604];Child3616* child;void set(u32 v){child->set(v);}};
struct Obj3616{char pad[0x10];Inner3616* inner;};
void func_0036161C(Obj3616* p,u32 v){p->inner->set(v);}
