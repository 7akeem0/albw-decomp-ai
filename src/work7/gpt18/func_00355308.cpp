#include "range.h"
struct O{char p0[0x3dc];Vec3 velocity;char p3e8[0x59c-0x3e8];Flag32 flags;char p5a0[0x9dc-0x5a0];f32 value;};void f(O*p){p->flags.set(0x30);p->value=0.0f;for(int i=0;i<3;i++)(&p->velocity.x)[i]=0.0f;}

