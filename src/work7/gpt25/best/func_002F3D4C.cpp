#include "../range_types.h"
struct Obj2F3D4C{char pad[0x59c];Flag32 flags;};
extern "C" void func_002F618C(Obj2F3D4C*,s32,f32);
extern "C" void f_002F3D4C(Obj2F3D4C*p,s32 kind){if(kind==33)return;func_002F618C(p,kind,1.f);p->flags.set(4);p->flags.set(128);}
