#include "range.h"
#include "sead_rtti.h"
struct A1 { SEAD_RTTI_BASE(A1) };
struct A2 : A1 { SEAD_RTTI_OVERRIDE(A2, A1) };
bool f(void* self, const sead::RuntimeTypeInfo::Interface* t) { return A2::checkDerivedRuntimeTypeInfoStatic(t); }
