#include "../range_types.h"
struct Obj2E44 { char pad[0x8cc]; u32 state; };
extern "C" bool func_0058A8F0(Obj2E44*);
extern "C"  void func_00663E64(u32*,s32);
extern "C" void f_002E44B8(Obj2E44* p) {
    if(func_0058A8F0(p))func_00663E64(&p->state,2);
}
