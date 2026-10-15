#include "../range_types.h"
struct Obj28B1{char pad[0x2e0];Flag32 flags;char gap[0x4f4-0x2e4];u32 state;};
extern "C" bool func_001E4A5C(Obj28B1*,s32,const Vec3*);
extern "C"  void func_00661708(u32*,s32);
bool func_0028B110(Obj28B1*p,s32 a,const Vec3*pos){if(!func_001E4A5C(p,a,pos))return false;func_00661708(&p->state,7);p->flags.reset(2);return true;}
