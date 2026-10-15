#include "range.h"
struct Child427 {u8 pad[0x74];Vec3 scale;u8 pad80[0x164-0x80];BitFlag32 flags;};
struct Obj427 {u8 pad[0xc];Child427*child;u8 pad10[0x81-0x10];u8 flags;};
void func_00427E98(Obj427*p,f32 x){Child427*c=p->child;c->flags.set(0x40000000);c->scale.x=x;c->scale.y=x;c->scale.z=x;p->flags&=~2;}
