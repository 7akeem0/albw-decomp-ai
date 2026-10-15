/* fam_rtti: sead RTTI + DynamicCast helpers (C++), used when guard/ro are hoisted out of a loop */
#include "sead_rtti.h"
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef float f32;
template <class D, class T> inline bool IsDerivedFrom(const T* o)
{
    const sead::RuntimeTypeInfo::Interface* ti = D::getRuntimeTypeInfoStatic();
    return o != 0 && o->checkDerivedRuntimeTypeInfo(ti);
}
template <class D, class T> inline D* DynamicCast(T* o)
{
    if (IsDerivedFrom<D, T>(o)) return static_cast<D*>(o);
    return 0;
}
struct Base { SEAD_RTTI_BASE(Base) };
