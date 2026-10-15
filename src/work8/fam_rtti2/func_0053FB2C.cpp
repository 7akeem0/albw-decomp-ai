#include "rtti_cpp.h"
struct X : Base { SEAD_RTTI_OVERRIDE(X, Base) };
struct A : X { SEAD_RTTI_OVERRIDE(A, X) u8 pad[0x89 - 4]; s8 m89; };
struct B : X { SEAD_RTTI_OVERRIDE(B, X) };
struct Ent { u8 m0; u8 pad[15]; };
extern "C" Ent data_007111A8[];
extern "C" s32 func_0053EFC4(B* b);
struct Self {
    u8 pad[0x42]; s16 m42; u8 pad1[0x48 - 0x44]; Base* m48;
    s32 func_0053FB2C();
    u8 kind() const { return data_007111A8[m42].m0; }
};
s32 Self::func_0053FB2C()
{
    if (kind() == 8 || m42 == 0x1d || m42 == 0x1e || m42 == 0x5a) return 1;
    if (kind() == 0xe) {
        A* a = DynamicCast<A>(m48);
        if (a) return a->m89;
    }
    if (kind() == 0x13) {
        B* b = DynamicCast<B>(m48);
        if (b) return func_0053EFC4(b);
    }
    return 0;
}
