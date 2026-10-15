#include "range.h"
struct Obj{u8 pad[0x164];PtrArray<Interp> interps;void impl(f32 v,const s32& n);};
void Obj::impl(f32 v,const s32& n){interps.at(0)->setTarget(n,v);}
void f_002973E8(Obj*p){p->impl(0.4f,15);}
