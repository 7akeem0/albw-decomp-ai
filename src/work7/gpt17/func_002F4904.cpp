#include "range.h"
struct Obj {u8 pad[0x3dc];Vec3 velocity;u8 pad3e8[0x59c-0x3e8];BitFlag32 flags;u8 pad5a0[0xe0e-0x5a0];u8 active;};extern void func_002F3D28(Obj*);
void f_002F4904(Obj*p){p->velocity.x=p->velocity.y=p->velocity.z=0.f;func_002F3D28(p);p->flags.set(7);p->active=0;}
