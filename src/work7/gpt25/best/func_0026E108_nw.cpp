#include "../range_types.h"
struct Child26E1 {char pad[0x4c];u32 state;};
struct Obj26E1 {char pad[0x74];Child26E1*child;char gap[0x16];u8 flag;};
extern "C" void func_001B6DE0(Obj26E1*);
extern "C"  void func_0065EDC8(u32*,s32);
extern "C" void f_0026E108(Obj26E1*p){p->flag=1;func_001B6DE0(p);func_0065EDC8(&p->child->state,0);}
