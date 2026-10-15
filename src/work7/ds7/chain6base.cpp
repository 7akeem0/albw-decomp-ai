#include "range.h"
#include "sead_rtti.h"
struct A1 { SEAD_RTTI_BASE(A1) };
struct A2 : A1 { SEAD_RTTI_OVERRIDE(A2, A1) };
struct A3 : A2 { SEAD_RTTI_OVERRIDE(A3, A2) };
struct A4 : A3 { SEAD_RTTI_OVERRIDE(A4, A3) };
struct A5 : A4 { SEAD_RTTI_OVERRIDE(A5, A4) };
struct A6 : A5 { SEAD_RTTI_OVERRIDE(A6, A5) };
bool f(void* self, const sead::RuntimeTypeInfo::Interface* t) { return A6::checkDerivedRuntimeTypeInfoStatic(t); }
