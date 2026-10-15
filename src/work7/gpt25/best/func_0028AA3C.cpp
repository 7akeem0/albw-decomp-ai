#include "../range_types.h"
struct Obj28AA{char pad[0x3d0];Vec3 pos,velocity;};
extern "C" void func_00324964(Obj28AA*);
void func_0028AA3C(Obj28AA*p){func_00324964(p);p->velocity.setZero();p->pos.y+=0.01f;}
