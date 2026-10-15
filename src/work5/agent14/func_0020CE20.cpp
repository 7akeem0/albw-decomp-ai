// MATCH: two Vec3 temps whose ctor BODY store orders differ (KB #157 family): dir = x,z,y ; result = y,x,z
#define EN_EXTRA void f();
#include "en20c.h"
struct V3xzy : Vec3 { V3xzy(f32 a, f32 b, f32 c) { x = a; z = c; y = b; } };
struct V3yxz : Vec3 { V3yxz(f32 a, f32 b, f32 c) { y = b; x = a; z = c; } };
void En::f() {
    Obj708998* g = data_00708998;
    if (g == 0) return;
    Obj18* o = g->m18;
    if (o == 0) return;
    Vec3 d = *func_00520FC0(this) - m3d0;
    V3xzy dir(d.x, 0.0f, d.z);
    func_00115DC8(&dir);
    Vec3 p = m3d0 + dir * 0.0f;
    Vec3 m = *func_00520FC0(this) + p;
    V3yxz c(m.x * 0.5f, m.y, m.z * 0.5f);
    func_001E8500(o, &c, 200, 15.0f);
}
