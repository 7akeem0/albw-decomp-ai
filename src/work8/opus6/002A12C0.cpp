#include "sead_rtti.h"
typedef unsigned char u8;
typedef int s32;
typedef unsigned int u32;

class ActorBase {
    SEAD_RTTI_BASE(ActorBase)
};
class Target : public ActorBase {
    SEAD_RTTI_OVERRIDE(Target, ActorBase)
};

template <typename T, typename S> inline bool IsDerivedFrom(const S* o) {
    const sead::RuntimeTypeInfo::Interface* ti = T::getRuntimeTypeInfoStatic();
    return o != 0 && o->checkDerivedRuntimeTypeInfo(ti);
}
template <typename T, typename S> inline T* DynamicCast(S* o) {
    return IsDerivedFrom<T, S>(o) ? static_cast<T*>(o) : 0;
}

struct Game { char pad[0x3dbbc]; char mgr[4]; };
extern Game* data_00706E20;
ActorBase* func_0052FBA0(void* mgr, u32 handle);
s32 func_00588BE4(ActorBase* a);
void func_00334010(Target* t);
extern const s32 ro_0069357C;
extern const s32 ro_00693580;
struct Arg { char pad[0x28]; u32 m28; };
s32 func_004F4A68(void* self, Arg* a);

s32 func_002A12C0(void* self, Arg* a) {
    ActorBase* act = func_0052FBA0(data_00706E20->mgr, a->m28);
    if (act != 0) {
        Target* t = DynamicCast<Target>(act);
        if (t != 0) func_00334010(t);
        s32 id = func_00588BE4(act);
        if (id == ro_0069357C || id == ro_00693580) return 0;
    }
    return func_004F4A68(self, a);
}
