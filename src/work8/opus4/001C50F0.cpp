#include "sead_rtti.h"
typedef unsigned int u32; typedef int s32;
class Base { public: virtual ~Base(); SEAD_RTTI_BASE(Base) };
class Target : public Base { SEAD_RTTI_OVERRIDE(Target, Base) };
struct Mgr { char pad[0x44]; Base* m44; };
extern Mgr* data_0070B728;
template <typename D, typename T> inline bool IsDerivedFrom(const T* o)
{ const sead::RuntimeTypeInfo::Interface* ti = D::getRuntimeTypeInfoStatic(); return o != 0 && o->checkDerivedRuntimeTypeInfo(ti); }
template <typename D, typename T> inline D* DynCast(T* o) { if (!IsDerivedFrom<D>(o)) o = 0; return static_cast<D*>(o); }
template <typename D, typename T> inline D* DynCast2(T* o) { if (IsDerivedFrom<D>(o)) return static_cast<D*>(o); return 0; }
struct Sub7B0 { void* m0; void* m4; void* m8; };
extern "C" {
void func_0014E138(void*);
s32 func_00588C3C(void*);
void func_00168E9C(void*, void*, s32);
}
struct Obj { char pad[0x7b0]; Sub7B0 m7b0; void f(s32 b); };
void Obj::f(s32 b)
{
    s32 bb = b;
#define BB bb
    func_0014E138(this);
    if (BB != 0 && !func_00588C3C(this)) return;
    Base* p = data_0070B728->m44;
    if (!IsDerivedFrom<Target>(p)) p = 0;
    Target* t = static_cast<Target*>(p);
    if (t || func_00588C3C(this)) { Sub7B0* s = &m7b0; func_00168E9C(s->m8, s->m0, 1); }
}
