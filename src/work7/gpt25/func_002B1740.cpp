#include "range_types.h"
struct Obj2B17 { char pad[0x3d0]; Vec3 pos; };
extern "C" void func_002B1760(const Vec3*,Obj2B17*,s32);
extern "C" void f_002B1740(Obj2B17* p,s32 n,const Vec3* pos) {
    if (pos) func_002B1760(pos,p,n);
    else func_002B1760(&p->pos,p,n);
}
