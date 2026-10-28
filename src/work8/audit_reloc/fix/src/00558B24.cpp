#include "sead_rtti.h"
extern "C" __weak bool func_0062B7FC(const sead::RuntimeTypeInfo::Interface*);
struct Base {static const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfoStatic();static bool checkDerivedRuntimeTypeInfoStatic(const sead::RuntimeTypeInfo::Interface*t){return func_0062B7FC(t);}};
struct D:Base{SEAD_RTTI_OVERRIDE(D,Base)};
bool target(void*,const sead::RuntimeTypeInfo::Interface*t){return D::checkDerivedRuntimeTypeInfoStatic(t);}
