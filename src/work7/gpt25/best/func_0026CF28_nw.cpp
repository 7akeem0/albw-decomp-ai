#include "../range_types.h"
struct State26CF28{char bytes[0x24];};
struct Obj26CF28{char pad[0x8f0];State26CF28 state;};
extern "C" bool func_005211BC(Obj26CF28*,f32,f32);
extern "C"  void func_006609A0(State26CF28*,s32);
extern "C" void f_0026CF28(Obj26CF28*p){f32 zero=0;if(func_005211BC(p,2.f,zero))func_006609A0(&p->state,11);}
