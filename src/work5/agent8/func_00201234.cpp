#include "sead_rtti.h"
struct A { SEAD_RTTI_BASE(A) };
struct B : A { SEAD_RTTI_OVERRIDE(B, A) };
struct C : B { SEAD_RTTI_OVERRIDE(C, B) };
struct D : C { SEAD_RTTI_OVERRIDE(D, C) };
bool testD(const sead::RuntimeTypeInfo::Interface* t) { return D::checkDerivedRuntimeTypeInfoStatic(t); }
