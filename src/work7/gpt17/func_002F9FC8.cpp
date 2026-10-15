#include "range.h"
struct Obj {u8 pad[0x3dc];Vec3 velocity;u8 gap[0x59c-0x3e8];BitFlag32 flags;};extern void func_004F8638(Obj*,s32);
void f_002F9FC8(Obj*p){func_004F8638(p,-1);p->flags.reset(0x80);p->velocity.setZero();}
