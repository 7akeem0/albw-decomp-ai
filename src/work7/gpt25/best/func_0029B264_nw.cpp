#include "../range_types.h"
struct Obj29B2 {char pad[0x40c];u32 state;};
extern "C" bool func_00588BF0(Obj29B2*,s32);
extern "C"  void func_00661AD4(u32*,s32);
extern "C" void f_0029B264(Obj29B2*p){if(func_00588BF0(p,0))func_00661AD4(&p->state,1);}
