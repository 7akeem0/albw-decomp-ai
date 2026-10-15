#include "../range_types.h"
struct Obj2C5E {char pad[0x428];u32 state;};
extern "C" bool func_00588BF0(Obj2C5E*,s32);
extern "C"  void func_00663068(u32*,s32);
extern "C" void f_002C5E30(Obj2C5E*p){if(!func_00588BF0(p,0))func_00663068(&p->state,0);}
