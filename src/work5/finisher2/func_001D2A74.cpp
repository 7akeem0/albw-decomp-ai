// MATCH (finisher2): this+0x400 base kept in r5 for the late vstr [r5,#0x1c4] = POINTER to a 0x400 sub-block (Blk400* b) declared after the call args (s32 t / f32 rr locals); store b->m1c4.
#define A1D2_EXTRA void func_001D2A74();
struct Mgr70FB60; struct Vec3;
struct AngleT { int v; AngleT(int x) : v(x) {} };
unsigned int func_0058E2B8(const AngleT& a); extern unsigned int data_0070F69C;
#include "a2_1d2.h"
void func_001DDDE8(Mgr70FB60* m, const Vec3* pos, s32 kind, f32 f);
struct Blk400 { char pad[0x1c4]; f32 m1c4; };
inline f32 distSqXZ(const Vec3& a, const Vec3& b) { f32 dx = b.x - a.x; f32 dz = b.z - a.z; return dx * dx + dz * dz; }
void Actor1D2::func_001D2A74() {
    Vec3 d;
    func_001D1598();
    Vec3* p = func_00520FC0(this);
    if (distSqXZ(m3D0, *p) <= 2.0f)
        func_001DDDE8(data_0070FB60, &m3D0, 1, 0.07f);
    if (m59C.step()) {
        func_001507D8(this, sead::SafeString("SE_Kokko_V_NORMAL"), 0);
        return;
    }
    m4FC.changeState(1);
    s32 t = m5B8; f32 rr = 2.0f;
    Blk400* b = (Blk400*)((char*)this + 0x400);
    if (func_001CFA58(t, rr)) {
        { Vec3* o = &d; const Vec3* h = &m8; const Vec3* q = &m3D0; o->setSub(*h, *q); }
        m5B8 = func_0068C690(d);
        if (func_0058E2B8(AngleT(m3E8 - m5B8)) > data_0070F69C)
            b->m1c4 = 0.0f;
    }
}
