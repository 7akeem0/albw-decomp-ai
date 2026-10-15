#include "rtti_cpp.h"
struct X : Base { SEAD_RTTI_OVERRIDE(X, Base) u8 mKind; u8 pad[3]; u32 m8; };
struct A : X { SEAD_RTTI_OVERRIDE(A, X) };
struct B : X { SEAD_RTTI_OVERRIDE(B, X) };
struct C : X { SEAD_RTTI_OVERRIDE(C, X) };
struct Self { u8 pad[0x220]; X* m220; void* func_0057F260(); };
void* Self::func_0057F260()
{
    X* o = m220;
    if (o) {
        u8 k = o->mKind;
        if (k == 0) { A* a = DynamicCast<A>(o); if (a) return &a->m8; }
        else if (k == 1) { B* b = DynamicCast<B>(o); if (b) return &b->m8; }
        else if (k == 2) { C* c = DynamicCast<C>(o); if (c) return &c->m8; }
    }
    return 0;
}
