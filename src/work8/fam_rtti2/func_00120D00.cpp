#include "rtti_cpp.h"
struct E6 { s16 v; u16 a; u16 b; };
struct Sub { u8 pad[0x30]; u8 m30; u8 pad1; u16 m32; u8 pad2[0x58 - 0x34]; u8 mNum; u8 pad3; E6 mE[8]; };
struct Actor : Base { Sub m4; u8 pad[0x2e0 - 4 - sizeof(Sub)]; u32 m2E0; };
struct A : Actor { SEAD_RTTI_OVERRIDE(A, Actor) u8 pad4[0x7ba - 0x2e4]; s16 m7BA; };
struct G18 { u8 pad[0x18]; u8 m18; };
extern "C" G18* data_00709DF8;
extern "C" void* data_0070C8E0;
extern "C" const s32 ro_00693A28;
extern "C" const s32 ro_00693648;
extern "C" s32 func_00588BE4(Actor* a);
extern "C" void func_004AD9E8(void* g, u16 a, u8 b, s32 c);
extern "C" void func_00120D00(Actor* a, s32 id)
{
    s32 key = id;
    if (!a) return;
    if (func_00588BE4(a) == ro_00693A28) {
        Sub* s = &a->m4;
        s32 n = s->mNum;
        for (s32 i = 0; i < n; i++) {
            s16 v = s->mE[i].v;
            if (v > 0 && v == key) {
                A* x = DynamicCast<A>(a);
                if (x && x->m7BA <= 0) func_004AD9E8(data_0070C8E0, s->m32, s->m30, 1);
            }
        }
        return;
    }
    if (data_00709DF8->m18 == 0x10 && func_00588BE4(a) == ro_00693648) a->m2E0 |= 2;
}
