#include "../range_types.h"
struct Child2D43 {char pad[0x74];Vec3 value;char gap[0xe4];Flag32 flags;};
struct Obj2D43 {char pad[4];Child2D43*child;};
extern "C" void f_002D439C(Obj2D43*p,const Vec3&v){Child2D43*q=p->child;q->flags.v|=0x40000000;q->value.setXYZ(v);}
