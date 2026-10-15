#define EN_EXTRA void f(int a);
#include "en204.h"
#include "sead_rtti.h"
struct Obj {
    virtual void v0();
    virtual void v1();
    SEAD_RTTI_BASE(Obj)
};
struct Holder { char pad[0x44]; Obj* m44; };
extern Holder* data_0070B728;
template <typename T> inline bool IsDerivedFrom(const Obj* o) {
    const sead::RuntimeTypeInfo::Interface* ti = T::getRuntimeTypeInfoStatic();
    return o && o->checkDerivedRuntimeTypeInfo(ti);
}
void En::f(int a) { func_004F68AC(this, a); if (a && !func_00588C3C(this)) return; Obj* o = data_0070B728->m44; if (!IsDerivedFrom<Obj>(o)) o = 0; Obj* t = static_cast<Obj*>(o); if (!t && !func_00588C3C(this)) return; func_004FACD4(this, 1); }
