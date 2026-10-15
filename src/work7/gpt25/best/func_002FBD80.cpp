#include "../range_types.h"
struct Obj2FBD {char pad[0x4e4];Vec3 scale;char gap[0x3f0];f32 value;void setValue(f32 n);};
void Obj2FBD::setValue(f32 n){value=n;}
extern "C" void func_004F8638(Obj2FBD*,s32);
extern "C" void f_002FBD80(Obj2FBD*p){p->scale.setAll(1.f);p->setValue(1.f);func_004F8638(p,-1);}
