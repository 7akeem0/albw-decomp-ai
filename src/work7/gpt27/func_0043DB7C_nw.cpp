#include "range.h"
struct Obj43DB{u8 pad[0x78];u8 active;u8 pad79[0x98-0x79];u32 state;u8 pad9c[0x158-0x9c];void*child;};
extern "C" void func_00478EB0(void*,s32);extern "C"  void func_0066C424(u32*,s32);
void func_0043DB7C(Obj43DB*p,s32 n){func_00478EB0(p->child,n);if(n==15&&!p->active)func_0066C424(&p->state,2);}
