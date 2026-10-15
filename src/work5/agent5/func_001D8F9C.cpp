// state helper: find nearby actor (0x52FC3C), within 1.0 on XZ -> take its handle, check type, set m46c.
// MATCH needs the XZ length as a helper taking the two DIFFERENCES as f32 params (or Vec3/V2 temp, sq()):
// two named f32 locals dx/dz give the dz regs swapped (s0/s2, 96.4%). Vec3 const store via inline cpy() -> vstmia.
#define OBJ1D8_EXTRA void f();
#include "obj1d8.h"
#include "sead_rtti.h"
struct Actor;
struct ActorMgr { Actor* find(u32 h); Actor* findNear(s32 n, u8 k, s32 z); };   // 0x52FBA0 / 0x52FC3C
struct Game { char pad[0x3dbbc]; ActorMgr mActorMgr; };
extern Game* data_00706E20;
extern const s32 ro_00693234;
extern "C" float sqrtf(float);
struct Actor {
    SEAD_RTTI_BASE(Actor)
public:
    s32 getActorId();   // 0x588BE4
    char pad4[0x2cc - 4];
    u32 m2cc;
    char pad2d0[0x3d0 - 0x2d0];
    Vec3 m3d0;
};
struct Target : public Actor { SEAD_RTTI_OVERRIDE(Target, Actor) };
template <typename T> inline bool IsDerivedFrom(const Actor* o) {
    const sead::RuntimeTypeInfo::Interface* ti = T::getRuntimeTypeInfoStatic();
    return o && o->checkDerivedRuntimeTypeInfo(ti);
}
inline void cpy(Vec3* d, const Vec3& s) { *d = s; }
inline f32 lenXZ(f32 x, f32 z) { return sqrtf(x * x + z * z); }
inline f32 distXZ(const Vec3& a, const Vec3& b) { return lenXZ(a.x - b.x, a.z - b.z); }
void Obj1D8::f() {
    if (m49d) return;
    if (m5e <= 0) { m49d = 1; return; }
    Actor* a = data_00706E20->mActorMgr.findNear(m5e, m2d4, 0);
    if (!a) return;
    if (a->getActorId() != ro_00693234) return;
    if (distXZ(a->m3d0, m3d0) < 1.0f) {
        m438 = (void*)a->m2cc;
        Actor* b = data_00706E20->mActorMgr.find((u32)m438);
        if (!IsDerivedFrom<Target>(b)) b = 0;
        Target* t = static_cast<Target*>(b);
        if (!t) return;
        cpy(&m46c, Vec3(0.0f, 0.242063001f, 0.284893006f));
        m49d = 1;
    }
}
