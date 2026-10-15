
#include "sead_rtti.h"
struct A1 { SEAD_RTTI_BASE(A1) };
struct A2 : A1 { SEAD_RTTI_OVERRIDE(A2, A1) };
struct A3 : A2 { SEAD_RTTI_OVERRIDE(A3, A2) };
struct A4 : A3 { SEAD_RTTI_OVERRIDE(A4, A3) };
struct A5 : A4 { SEAD_RTTI_OVERRIDE(A5, A4) };
struct A6 : A5 { SEAD_RTTI_OVERRIDE(A6, A5) };
struct A7 : A6 { SEAD_RTTI_OVERRIDE(A7, A6) };
typedef const sead::RuntimeTypeInfo::Interface* TI;

inline bool g1(TI t) { return A1::getRuntimeTypeInfoStatic() == t; }
inline bool g0(TI t) { if (A7::getRuntimeTypeInfoStatic() == t) return true; if (A6::getRuntimeTypeInfoStatic() == t) return true; if (A5::getRuntimeTypeInfoStatic() == t) return true; if (A4::getRuntimeTypeInfoStatic() == t) return true; if (A3::getRuntimeTypeInfoStatic() == t) return true; if (A2::getRuntimeTypeInfoStatic() == t) return true; return g1(t); }
bool f(TI t) { return g0(t); }
