#include "range.h"
struct Obj {u8 pad[0x3dc];Vec3 velocity;u8 gap[0x59c-0x3e8];BitFlag32 flags;};
extern void func_004F8638(Obj*,s32);
void f_002B38C4(Obj*p){p->velocity.setZero();func_004F8638(p,-1);p->flags.set(0x1000);}
