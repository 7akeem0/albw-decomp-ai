#include "rtti_cpp.h"
struct A : Base { SEAD_RTTI_OVERRIDE(A, Base) u8 pad[0x2d7 - 4]; u8 m2D7; };
extern "C" char* data_00706E20;
extern "C" Base* func_0052FBA0(void* mgr, u32 h);
struct Self { void* m0; u8 pad4[0x28 - 4]; u32 m28[3]; u8 m34[0x9f - 0x34]; u8 m9F; u8 pada0[0xd0 - 0xa0]; u32 mD0;
    u32* at(u32 i) { u32* p = m28; if (i < 3) p += i; return p; } };
extern "C" void func_0036E490(void* p, s32 a, void* b);
extern "C" void func_0032CD88(Self* self);
void func_0032CD88(Self* self)
{
    for (u32 i = 0; i < 3; i++) {
        char* mgr = data_00706E20;
        A* a = DynamicCast<A>(func_0052FBA0(mgr + 0x3dbbc, *self->at(i)));
        if (a) {
            a->m2D7 = 1;
            *self->at(i) = 0;
        }
    }
    self->mD0 = 0;
    func_0036E490(self->m34, 0, self->m0);
    self->m9F = 0;
}
