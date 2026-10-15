#include "range.h"
struct Obj3EE{u8 pad[0x44];Vec3 pos,velocity;};
void func_003EE36C(Obj3EE*p){p->pos.x+=p->velocity.x;p->pos.y+=p->velocity.y;p->pos.z+=p->velocity.z;}
