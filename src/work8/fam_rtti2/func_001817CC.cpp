#include "rtti_cpp.h"
struct Vec3 { f32 x, y, z; };
struct Actor : Base { u8 pad[0x2cc - 4]; u32 m2CC; u8 pad1[0x2e0 - 0x2d0]; u32 m2E0; u8 pad2[0x3d0 - 0x2e4]; Vec3 m3D0; };
struct A : Actor { SEAD_RTTI_OVERRIDE(A, Actor) };
extern "C" char* data_00706E20;
extern "C" void func_003AAE2C(A* a, const u32* h);
struct Self {
    u8 pad[0x2cc]; u32 m2CC; u8 pad1[0x3d0 - 0x2d0]; Vec3 m3D0; u8 pad2[0xb9c - 0x3dc]; u32 mB9C;
    void func_001817CC();
};
static inline f32 dist2(const Vec3& a, const Vec3& b)
{
    f32 dx = a.x - b.x; f32 dz = a.z - b.z; f32 dy = a.y - b.y;
    return dx * dx + dy * dy + dz * dz;
}
void Self::func_001817CC()
{
    char* g = data_00706E20;
    if (!g) return;
    Actor** it = *(Actor***)(g + 0x3dbc0);
    Actor** end = *(Actor***)(g + 0x3dbc8);
    for (; it != end; ++it) {
        Actor* o = *it;
        if (!o) continue;
        A* a = DynamicCast<A>(o);
        if (!a) continue;
        if (dist2(m3D0, a->m3D0) < 2.25f) {
            u32 h = m2CC;
            func_003AAE2C(a, &h);
            a->m2E0 |= 2;
            mB9C = a->m2CC;
            return;
        }
    }
}
