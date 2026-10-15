#include "sead_rtti.h"
typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

class ActorBase {
    SEAD_RTTI_BASE(ActorBase)
public:
    s32 getActorId();   // 0x588BE4
};
class Target : public ActorBase {
    SEAD_RTTI_OVERRIDE(Target, ActorBase)
};
template <typename T, typename S> inline T* DynamicCast(S* o);
template <typename T, typename S> inline bool IsDerivedFrom(const S* o) {
    const sead::RuntimeTypeInfo::Interface* ti = T::getRuntimeTypeInfoStatic();
    return o != 0 && o->checkDerivedRuntimeTypeInfo(ti);
}

template <typename T, typename S> inline T* DynamicCast(S* o) { return IsDerivedFrom<T, S>(o) ? static_cast<T*>(o) : 0; }
template <typename T, typename S> inline T* DynamicCast2(S* o) { if (IsDerivedFrom<T, S>(o)) return static_cast<T*>(o); return 0; }
struct Game { char pad[0x3dbbc]; char mgr[4]; };
extern Game* data_00706E20;
ActorBase* func_0052FBA0(void* mgr, u32 handle);
extern const s32 ro_006930C4;
struct Arg { char pad[0x20]; u16 m20; char pad22[0x28 - 0x22]; u32 m28; };

struct Obj {
    char pad[0x39c];
    char m39c[0x4a4 - 0x39c];
    u32 m4a4;
    bool func_00521064();
    bool f(Arg* a);
};
void func_0014D9D8(Obj* o, void* p, Arg* a);

bool Obj::f(Arg* a) {
    ActorBase* act = func_0052FBA0(data_00706E20->mgr, a->m28);
    if (act != 0 && act->getActorId() == ro_006930C4) return false;
    if ((a->m20 & 0x7e0) == 0x160) return false;
    func_0014D9D8(this, m39c, a);
    if (m4a4 == 0) {
        if (func_00521064() && a->m28 != 0 && act != 0) {
            Target* t = DynamicCast2<Target>(act);
            if (t != 0) m4a4 = a->m28;
        }
    }
    return ((1 << (a->m20 & 0x1f)) & 0x5f) != 0;
}
