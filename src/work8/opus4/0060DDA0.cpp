#include "sead_rtti.h"
#define OVR_T(CLASS, BASE) public: static const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfoStatic() { static const sead::RuntimeTypeInfo::Derive<BASE> typeInfo; return &typeInfo; }   static bool checkDerivedRuntimeTypeInfoStatic(const sead::RuntimeTypeInfo::Interface* typeInfo) { const sead::RuntimeTypeInfo::Interface* clsTypeInfo = CLASS::getRuntimeTypeInfoStatic(); return clsTypeInfo == typeInfo ? true : BASE::checkDerivedRuntimeTypeInfoStatic(typeInfo); }
#define OVR_I(CLASS, BASE) public: static const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfoStatic() { static const sead::RuntimeTypeInfo::Derive<BASE> typeInfo; return &typeInfo; }   static bool checkDerivedRuntimeTypeInfoStatic(const sead::RuntimeTypeInfo::Interface* typeInfo) { if (CLASS::getRuntimeTypeInfoStatic() == typeInfo) return true; return BASE::checkDerivedRuntimeTypeInfoStatic(typeInfo); }
#define OVR_O(CLASS, BASE) public: static const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfoStatic() { static const sead::RuntimeTypeInfo::Derive<BASE> typeInfo; return &typeInfo; }   static bool checkDerivedRuntimeTypeInfoStatic(const sead::RuntimeTypeInfo::Interface* typeInfo) { return CLASS::getRuntimeTypeInfoStatic() == typeInfo || BASE::checkDerivedRuntimeTypeInfoStatic(typeInfo); }
class G { SEAD_RTTI_BASE(G) };
class A1 : public G { OVR_I(A1, G) };
class A2 : public A1 { OVR_T(A2, A1) };
class A3 : public A2 { OVR_T(A3, A2) };
class A4 : public A3 { OVR_T(A4, A3) };
class A5 : public A4 { OVR_T(A5, A4) };
bool check(const sead::RuntimeTypeInfo::Interface* t) { return A5::checkDerivedRuntimeTypeInfoStatic(t); }
