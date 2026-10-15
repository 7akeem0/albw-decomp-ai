#include "../range_types.h"
struct Obj2F2B {char pad[0x59c];Flag32 flags;};
extern "C" void func_002F618C(Obj2F2B*,f32);
extern "C" void f_002F2B84(Obj2F2B*p){func_002F618C(p,1.f);p->flags.set(4);p->flags.set(0x80);}
