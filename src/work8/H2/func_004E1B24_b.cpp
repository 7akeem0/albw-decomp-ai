#include "range.h"
extern "C" void func_00151148(void*, s32);
struct Vec3 {
    f32 x, y, z;
    void set(const Vec3& o) { x = o.x; y = o.y; z = o.z; }
};
struct V {
    Vec3 v;
    f32 m0c;
    f32 m10;
};
struct Obj {
    u8 pad0[0x3d0];
    Vec3 m3d0;
    u8 pad1[0x458 - 0x3dc];
    void* m458;
    u8 pad2[0x4c1 - 0x45c];
    u8 m4c1;
    u8 pad3[0x510 - 0x4c2];
    V* m510;
    u8 pad4[0x520 - 0x514];
    Vec3 m520;
    void f();
};
void Obj::f() {
    m4c1 = 0;
    func_00151148(m458, 0);
    V* v = m510;
    v->v.x = 0.0f;
    v->v.y = 1.0f;
    v->v.z = 0.06666667f;
    v->m10 = 0.0f;
    v->m0c = 0.0f;
    V* w = m510;
    w->m10 = w->v.x;
    w->m0c = 0.0f;
    m520.set(m3d0);
}
