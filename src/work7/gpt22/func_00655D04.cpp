#include "range.h"
struct S{u8 pad[0x3dc];Vec3 velocity;u8 pad2[0x8e2-0x3e8];u16 count;};void target(S* p){for(int i=0;i<3;i++)(&p->velocity.x)[i]=0.0f;p->count=0;}
