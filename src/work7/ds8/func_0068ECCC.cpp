#include "sead_rtti.h"

struct G {
    static const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfoStatic();
    static __attribute__((weak)) bool checkDerivedRuntimeTypeInfoStatic(const sead::RuntimeTypeInfo::Interface*);
};

struct A : G {
    SEAD_RTTI_OVERRIDE(A, G)
};

struct B : A {
    SEAD_RTTI_OVERRIDE(B, A)
};

struct C : B {
    SEAD_RTTI_OVERRIDE(C, B)
};

bool isKnown(void* self, const sead::RuntimeTypeInfo::Interface* t) {
    (void)self;
    return C::checkDerivedRuntimeTypeInfoStatic(t);
}
