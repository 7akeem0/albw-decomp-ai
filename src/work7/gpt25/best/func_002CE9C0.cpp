#include "../range_types.h"
struct Obj2CE9 {char pad[0x3d0];Vec3 position;char gap[0xac];Vec3 cached;char gap2[0xc];u8 flag;};
extern "C" void f_002CE9C0(Obj2CE9*p){p->flag=0;p->cached.setXYZ(p->position);}
