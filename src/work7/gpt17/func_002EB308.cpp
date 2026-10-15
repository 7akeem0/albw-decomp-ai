#include "range.h"
struct Obj {u8 pad[0x3dc];Vec3 velocity;};
extern void func_002F618C(Obj*,f32);
extern void func_002F3D28(Obj*);
void f_002EB308(Obj*p){p->velocity.z=0.0f;p->velocity.x=0.0f;func_002F618C(p,0.0f);func_002F3D28(p);}
