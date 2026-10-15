#include "range.h"
#include "sead_rtti.h"
struct A1 { SEAD_RTTI_BASE(A1) };
struct A2 : A1 { SEAD_RTTI_OVERRIDE(A2, A1) };
struct A3 : A2 { SEAD_RTTI_OVERRIDE(A3, A2) };
bool f(void* self, const sead::RuntimeTypeInfo::Interface* t) { return A3::checkDerivedRuntimeTypeInfoStatic(t); }
