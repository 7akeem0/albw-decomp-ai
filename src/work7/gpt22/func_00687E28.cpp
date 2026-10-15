#include "range.h"
#include "sead_rtti.h"
struct RttiSource22{virtual bool checkDerivedRuntimeTypeInfo(const sead::RuntimeTypeInfo::Interface*)const;};
struct RttiTarget22:RttiSource22{SEAD_RTTI_BASE(RttiTarget22)};
RttiTarget22*target(RttiSource22*p){const sead::RuntimeTypeInfo::Interface*info=RttiTarget22::getRuntimeTypeInfoStatic();if(p&&p->checkDerivedRuntimeTypeInfo(info))return static_cast<RttiTarget22*>(p);return 0;}
