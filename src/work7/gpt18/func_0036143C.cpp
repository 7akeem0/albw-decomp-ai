#include "range.h"
struct Child3614 {char pad[0x3dc];Vec3 vel;void zero(){vel.x=0;vel.y=0;vel.z=0;}};
struct Obj3614 {char pad[0x10];Child3614* child;};
void func_0036143C(Obj3614* p){p->child->zero();}
