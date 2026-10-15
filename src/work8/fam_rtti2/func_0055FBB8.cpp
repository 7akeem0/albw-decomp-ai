#include "rtti_cpp.h"
struct SafeStr { const void* vt; const char* mStr; bool isEmpty() const { return mStr[0] == 0; } };
struct X2C0;
struct Actor : Base { u8 pad[0x2c0 - 4]; X2C0* m2C0; };
struct A : Actor { SEAD_RTTI_OVERRIDE(A, Actor) };
extern "C" char* data_00706E20;
extern "C" const s32 ro_006935D8;
extern "C" Actor** func_005841A8(char* g, s32 id, Actor** begin);
extern "C" bool func_00691884(X2C0* x, const SafeStr& s);
extern "C" void func_002C44C4(A* a, u32 v);
struct Self {
    u8 pad[0xc]; SafeStr mC; u8 pad1[0x38 - 0x14]; u32 m38;
};
static inline void impl(const SafeStr* name, u32 v)
{
    char* g = data_00706E20;
    if (!g) return;
    s32 id = ro_006935D8;
    Actor** it = func_005841A8(g, id, *(Actor***)(g + 0x3dbc0));
    Actor** end = *(Actor***)(g + 0x3dbc8);
    for (; it != end; ++it) {
        A* a = DynamicCast<A>(*it);
        if (!a) continue;
        if (name->isEmpty() || ((*it)->m2C0 && func_00691884((*it)->m2C0, *name))) {
            func_002C44C4(a, v);
            return;
        }
    }
}
extern "C" void func_0055FBB8(Self* s) { impl(&s->mC, s->m38); }
