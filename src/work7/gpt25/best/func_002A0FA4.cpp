#include "../range_types.h"
struct Obj2A0F {char pad[0x3dc];Vec3 velocity;char gap[0x59c-0x3e8];Flag32 flags;char gap2[0x900-0x5a0];f32 value;};
extern "C" void f_002A0FA4(Obj2A0F*p){p->flags.set(0x30);p->value=0.f;p->velocity.setZero();}
