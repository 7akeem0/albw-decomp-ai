#include "../range_types.h"
struct Obj2635 { char pad0[0x3dc]; Vec3 velocity; char pad1[0x59c-0x3e8]; Flag32 flags; };
extern "C" void f_002635FC(Obj2635* p) {
    for(s32 i=0;i<3;++i) (&p->velocity.x)[i]=0.0f;
    p->flags.reset(0x80);
}
