#include "range_types.h"
struct Child2678 { char pad[0x61]; u8 flag; };
struct Obj2678 { char pad0[0x3dc]; Vec3 velocity; char pad1[0x9a4-0x3e8]; Child2678* child; };
extern "C" void f_002678DC(Obj2678* p) {
    Child2678* child=p->child;
    child->flag=0;
    f32 zero=0.0f;
    p->velocity.z=zero;
    p->velocity.x=zero;
}
