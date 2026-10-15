#include "range.h"
struct Obj{u8 pad[0x3dc];Vec3 velocity;};extern Vec3 bss_0073C898;extern void func_004F8864(Obj*,const Vec3&,f32,u32);
void f_00261E84(Obj*p){p->velocity.setZero();const Vec3&v=bss_0073C898;func_004F8864(p,v,0.8f,0);}
