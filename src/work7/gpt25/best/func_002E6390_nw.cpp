#include "../range_types.h"
struct Obj2E5D { char pad[0x8bc]; u32 state; };
extern "C" bool func_0058A8F0(Obj2E5D*);
extern "C"  void func_00663FA8(u32*,s32);
extern "C" void f_002E6390(Obj2E5D* p) {
    if(func_0058A8F0(p))func_00663FA8(&p->state,5);
}
