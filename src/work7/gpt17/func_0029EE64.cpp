#include "range.h"
struct Obj {u8 pad[0x3d0];Vec3 pos;};extern void func_004CBB0C(const Vec3*,s32,s32,s32);
void f_0029EE64(Obj*p){Vec3 v=p->pos;func_004CBB0C(&v,1,0,0);}
