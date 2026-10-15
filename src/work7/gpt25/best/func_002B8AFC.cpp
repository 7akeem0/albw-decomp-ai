#include "../range_types.h"
struct Obj2B8A{char pad[0x4e4];Vec3 scale;};
void func_002B8AFC(Obj2B8A*p){f32 v=p->scale.x+(1.f-p->scale.x)*0.05f;p->scale.setAll(v);}
