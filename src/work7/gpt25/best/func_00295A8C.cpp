#include "../range_types.h"
struct Obj295A {char pad[0x128];Flag32 flags;char gap[0x4c];PtrArray25<Interp293C> interps;};
void target(Obj295A*p,s32 frames,f32 goal){func_0010C7F8(p->interps.at(3),frames,goal);}
extern "C" void f_00295A8C(Obj295A*p){p->flags.set(4);target(p,5,.7f);}
