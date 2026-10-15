#include "ds3.h"
struct S2A0E { char pad[0x3d0]; Vec3 v3D0; char g1[0x95c-0x3dc]; void* m95C; Vec3 v960; };
extern "C" void func_001512B4(void*, const Vec3*);
void func_002A0EE0(S2A0E* p) {
    p->v960.x = p->v3D0.x; p->v960.y = p->v3D0.y; p->v960.z = p->v3D0.z;
    if (!p->m95C) return;
    Vec3 tmp = p->v960;
    func_001512B4(p->m95C, &tmp);
}
