#include "../range_types.h"
struct Obj2FB3 { char pad[0x900]; Vec3 pos; };
struct Arg2FB3 { u32 value; Vec3 pos; };
extern "C" void func_004F4A68(Obj2FB3*,const Arg2FB3*);
extern "C" void f_002FB310(Obj2FB3* p,const Arg2FB3* a) {
    p->pos.x=a->pos.x;
    p->pos.y=a->pos.y;
    p->pos.z=a->pos.z;
    func_004F4A68(p,a);
}
