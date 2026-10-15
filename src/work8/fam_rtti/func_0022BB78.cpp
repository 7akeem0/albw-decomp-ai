#include "sead_rtti.h"
typedef unsigned int u32; typedef unsigned char u8;
typedef signed char s8;
typedef int s32;
struct Base { SEAD_RTTI_BASE(Base) };
struct A : Base { SEAD_RTTI_OVERRIDE(A, Base) u8 pad[0x8c0 - 4]; s8 m8C0; };
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
extern "C" char* data_00706E20;
extern "C" Base* func_0052FBA0(void* mgr, u32 h);
struct Self { u8 pad[0x8c0]; u32 m8C0[15]; u8 m8FC[4]; };
static u32* at(Self* s, s32 i) { u32* p = s->m8C0; if ((u32)i < 15) p += i; return p; }
extern "C" void func_00229E24(Self* self);
extern "C" __attribute__((weak)) void func_0065E8B8(void* p, s32 v);
extern "C" void func_0022BB78(Self* self);
void func_0022BB78(Self* self)
{
    s32 i;
    func_00229E24(self);
    for (i = 0; i < 15; i++) {
        char* mgr = data_00706E20;
        Base* o = func_0052FBA0(mgr + 0x3dbbc, *at(self, i));
        if (o) {
            A* a = DynamicCast<A>(o);
            if (a) {
                s8 k = a->m8C0;
                if (k == 4 || k == 5 || k == 3) return;
            }
        }
    }
    func_0065E8B8(self->m8FC, 11);
}
