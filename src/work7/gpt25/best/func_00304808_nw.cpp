#include "../range_types.h"
struct Obj3048 {char pad[0x48];f32 value;char gap[0x4c0-0x4c];u32 state;};
extern "C"  void func_00664884(u32*,s32);
extern "C" void f_00304808(Obj3048*p){if((s32)p->value==1)func_00664884(&p->state,4);}
