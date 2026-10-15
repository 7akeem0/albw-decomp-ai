#include "range_types.h"
struct Obj2E44 { char pad[0x3dc]; Vec3 velocity; };
extern "C" void func_004F8638(Obj2E44*,s32);
extern "C" void f_002E449C(Obj2E44* p) {
    for (s32 i=0; i<3; ++i) (&p->velocity.x)[i]=0.0f;
    func_004F8638(p,-1);
}
