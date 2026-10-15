#include "range.h"
#include "sead_rtti.h"
struct G { static const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfoStatic(); static __attribute__((weak)) bool checkDerivedRuntimeTypeInfoStatic(const sead::RuntimeTypeInfo::Interface*); };
struct A1 : G { SEAD_RTTI_OVERRIDE(A1, G) };
struct A2 : A1 { SEAD_RTTI_OVERRIDE(A2, A1) };
bool f(void* self, const sead::RuntimeTypeInfo::Interface* t) { return A2::checkDerivedRuntimeTypeInfoStatic(t); }
