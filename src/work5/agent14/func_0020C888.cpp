#define EN_EXTRA void f();
#include "en20c.h"
inline void callF(Obj8F0* o, const Vec3* p, const Vec3& s, s32 z) { func_004F707C(o, p, &s, z, z); }
inline void callG(Obj8F0* o, const Vec3* p, f32 v, f32 one, s32 z) { callF(o, p, Vec3(v, one, v), z); }
inline f32 dbl(f32 x, f32 k) { return x * k; }
inline Vec3 mkScale(f32 s) { return Vec3(s, 1.0f, s); }
void En::f() { func_004ED46C(data_00708998, 2); f32 v = m4c4; callF(m8f0, &m3d0, Vec3(v * 2.0f, 1.0f, v * 2.0f), 0); m8f0->m30->m2c.set(8); m8f0->m30->m2c.set(0x20000); m8f0->m30->m2c.set(0x2000); func_004FABDC(this, 0x18, 6, 0); }
