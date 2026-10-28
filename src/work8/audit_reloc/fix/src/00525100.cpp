#include "sead_rtti.h"
extern "C" __weak bool func_00610AB4(const sead::RuntimeTypeInfo::Interface*);
struct Base {static const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfoStatic();static bool checkDerivedRuntimeTypeInfoStatic(const sead::RuntimeTypeInfo::Interface*t){return func_00610AB4(t);}};
struct D:Base{SEAD_RTTI_OVERRIDE(D,Base)};
bool target(void*,const sead::RuntimeTypeInfo::Interface*t){return D::checkDerivedRuntimeTypeInfoStatic(t);}
