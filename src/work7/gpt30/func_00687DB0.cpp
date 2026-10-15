#include "sead_rtti.h"
struct RuntimeBase30 {
    virtual bool checkDerivedRuntimeTypeInfo(const sead::RuntimeTypeInfo::Interface*)const;
    static const sead::RuntimeTypeInfo::Interface*getRuntimeTypeInfoStatic();
    static bool checkDerivedRuntimeTypeInfoStatic(const sead::RuntimeTypeInfo::Interface*);
};
struct RuntimeDerived30:RuntimeBase30{SEAD_RTTI_OVERRIDE(RuntimeDerived30,RuntimeBase30)};
template<class D,class T>bool IsDerivedFrom30(const T*o){const sead::RuntimeTypeInfo::Interface*info=D::getRuntimeTypeInfoStatic();return o!=0&&o->checkDerivedRuntimeTypeInfo(info);}
RuntimeDerived30*target(RuntimeBase30*p){if(IsDerivedFrom30<RuntimeDerived30>(p))return static_cast<RuntimeDerived30*>(p);return 0;}
