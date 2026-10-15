// MATCH (finisher2): dest Vec3 through a pointer local in a brace block ({ V3* o=&v; o->setMul(..); }) gives orig arg order; setAdd needs all three pointer locals.
#define OBJ1D8_EXTRA void f();
#include "obj1d8.h"
#include "sead_rtti.h"
struct Actor;
struct ActorMgr { Actor* find(void* h); };   // 0x52FBA0
struct Game { char pad[0x3dbbc]; ActorMgr mActorMgr; };
extern Game* data_00706E20;
extern const s32 ro_00693234;
extern const Vec3 data_007A9260;   // sead::Vector3f::zero
extern Vec3 bss_00791D2C;
void func_00115CA8(Vec3* out, const Mtx34& m, const Vec3& v);
void func_00115C54(Vec3* out, const Vec3& a, const Vec3& b);
struct V3 { f32 x, y, z; void setMul(const Mtx34& m, const Vec3& v); void setAdd(const V3& a, const Vec3& b); void setMulP(const Mtx34* m, const Vec3* v); };
struct Actor {
    SEAD_RTTI_BASE(Actor)
public:
    s32 getActorId();   // 0x588BE4
    char pad4[0x368 - 4];
    Vec3 m368;
    char pad374[0x3d0 - 0x374];
    Vec3 m3d0;
};
struct Target : public Actor { SEAD_RTTI_OVERRIDE(Target, Actor) };
template <typename T> inline bool IsDerivedFrom(const Actor* o) {
    const sead::RuntimeTypeInfo::Interface* ti = T::getRuntimeTypeInfoStatic();
    return o && o->checkDerivedRuntimeTypeInfo(ti);
}
inline void cpy(Vec3* d, const Vec3& s) { *d = s; }
void Obj1D8::f() {
    if (!m49d || !m438) return;
    Actor* a = data_00706E20->mActorMgr.find(m438);
    if (!a) return;
    if (a->getActorId() != ro_00693234) return;
    if (!IsDerivedFrom<Target>(a)) a = 0;
    Target* t = static_cast<Target*>(a);
    if (!t) return;
    V3 v = *(const V3*)&data_007A9260;
    V3 w = *(const V3*)&data_007A9260;
    { V3* o=&v; o->setMul(m40c->m104, bss_00791D2C); }
    { V3* o=&w; const V3* a=&v; const Vec3* q=&m46c; o->setAdd(*a,*q); }
    cpy(&t->m368, *(Vec3*)&w);
    cpy(&t->m3d0, *(Vec3*)&w);
}
