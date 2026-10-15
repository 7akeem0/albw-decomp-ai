#include "range.h"
struct Child {u8 pad[0x2c];u32 flags;};
struct Obj {u8 pad[0x3dc];Vec3 velocity;u8 gap[0x424-0x3e8];Child*child;u8 gap428[0x914-0x428];s32 id;};extern void func_004F88A0(Obj*,s32);
void f_00265B00(Obj*p){func_004F88A0(p,p->id);p->child->flags&=~0x20000u;p->velocity.setZero();}
