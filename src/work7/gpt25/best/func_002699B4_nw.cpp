#include "../range_types.h"
struct Obj2699 {char pad[0x3dc];Vec3 velocity;char gap[0x8c8-0x3e8];u32 state;};
extern "C"  void func_00660718(u32*,s32);
extern "C" void f_002699B4(Obj2699*p){p->velocity.setZero();func_00660718(&p->state,20);}
