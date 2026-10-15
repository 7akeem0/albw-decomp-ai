#include "sead_rtti.h"
struct RuntimeBase_006F5D5C {
    virtual bool checkDerivedRuntimeTypeInfo(const sead::RuntimeTypeInfo::Interface*)const;
    static const sead::RuntimeTypeInfo::Interface*getRuntimeTypeInfoStatic();
    static bool checkDerivedRuntimeTypeInfoStatic(const sead::RuntimeTypeInfo::Interface*);
};
struct RuntimeDerived_00726BC4:RuntimeBase_006F5D5C{SEAD_RTTI_OVERRIDE(RuntimeDerived_00726BC4,RuntimeBase_006F5D5C)};
template<class D,class T>bool IsDerivedFrom30(const T*o){const sead::RuntimeTypeInfo::Interface*info=D::getRuntimeTypeInfoStatic();return o!=0&&o->checkDerivedRuntimeTypeInfo(info);}
RuntimeDerived_00726BC4*target(RuntimeBase_006F5D5C*p){if(IsDerivedFrom30<RuntimeDerived_00726BC4>(p))return static_cast<RuntimeDerived_00726BC4*>(p);return 0;}
