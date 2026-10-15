#include "../range_types.h"
struct Obj287F{char pad[0x3d0];Vec3 pos;char gap[0x4dc-0x3dc];u32 state;};
extern "C" bool func_00392E48(const Vec3&,s32,s32,s32);
extern "C"  void func_00661480(u32*,s32);
void func_00287F44(Obj287F*p){bool r=func_00392E48(p->pos,1,0,0);if(!r)func_00661480(&p->state,6);else func_00661480(&p->state,2);}
