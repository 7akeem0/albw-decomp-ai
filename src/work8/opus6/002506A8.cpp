#include "sead_rtti.h"
typedef unsigned char u8;
typedef short s16;
typedef int s32;
typedef unsigned int u32;

struct Handle { Handle(); u32 v; operator u32() const { return v; } };   // 0x1E6D98
struct HandleArr { Handle a[16]; Handle& operator[](s32 i) { return a[i]; } };

class ActorBase {
    SEAD_RTTI_BASE(ActorBase)
};
class Target : public ActorBase {
    SEAD_RTTI_OVERRIDE(Target, ActorBase)
public:
    s32 getHandles(Handle* out);   // 0x520828
    s32 getHandles(HandleArr* out);
};

template <typename T, typename S> inline bool IsDerivedFrom(const S* o) {
    const sead::RuntimeTypeInfo::Interface* ti = T::getRuntimeTypeInfoStatic();
    return o != 0 && o->checkDerivedRuntimeTypeInfo(ti);
}
template <typename T, typename S> inline T* DynamicCast(S* o) {
    if (IsDerivedFrom<T, S>(o)) return static_cast<T*>(o);
    return 0;
}

struct Game { char pad[0x3dbbc]; char mgr[4]; };
extern Game* data_00706E20;
ActorBase* func_0052FBA0(void* mgr, u32 handle);
void func_00230610(void* list, u32 h);

struct Obj {
    char pad[0x470];
    u32 m470;
    void f(void* list);
};

void Obj::f(void* list) {
    Handle arr[16];
    Handle* p = arr;
    ActorBase* a = func_0052FBA0(data_00706E20->mgr, m470);
    if (!IsDerivedFrom<Target>(a)) a = 0;
    Target* t = static_cast<Target*>(a);
    if (t != 0) {
        s32 n = t->getHandles(p);
        for (s16 i = 0; i < n; i++) func_00230610(list, arr[i]);
    }
    func_00230610(list, m470);
}
