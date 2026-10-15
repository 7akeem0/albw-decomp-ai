#include "../range_types.h"
struct Obj2B40 { char pad[0x3dc]; Vec3 velocity; };
extern "C" void func_004FABDC(Obj2B40*,s32,s32,s32);
extern "C" void f_002B401C(Obj2B40* p) {
    for(s32 i=0;i<3;++i) (&p->velocity.x)[i]=0.0f;
    func_004FABDC(p,5,-1,0);
}
