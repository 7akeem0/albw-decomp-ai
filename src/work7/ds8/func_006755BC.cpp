#include "sead_rtti.h"

struct Base {
    SEAD_RTTI_BASE(Base)
};

struct T : Base {
    SEAD_RTTI_OVERRIDE(T, Base)
};

template <typename D, typename B>
bool IsDerivedFrom(const B* o) {
    const sead::RuntimeTypeInfo::Interface* ti = D::getRuntimeTypeInfoStatic();
    return o != 0 && o->checkDerivedRuntimeTypeInfo(ti) != 0;
}

struct D {
    void* m0;
    Base* m4;
    char pad[0x100 - 8];
    void (T::*mFunc)();
    void invoke();
};

void D::invoke() {
    Base* b = m4;
    T* p = IsDerivedFrom<T, Base>(b) ? static_cast<T*>(b) : 0;
    if (p && mFunc) (p->*mFunc)();
}
