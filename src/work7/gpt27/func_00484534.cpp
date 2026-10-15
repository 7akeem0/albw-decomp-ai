#include "range.h"
struct Child484{u8 pad[0x18];BitFlag32 flags;};struct Obj484{u8 pad[0xe4];Child484*first,*second;};extern "C" void func_00232468(void*);
void func_00484534(Obj484*p){func_00232468(p);Child484*c=p->first;c->flags.set(1);Child484*d=p->second;d->flags.set(1);}
