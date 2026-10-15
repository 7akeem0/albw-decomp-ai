#include "rtti_cpp.h"
struct A : Base { SEAD_RTTI_OVERRIDE(A, Base) u8 pad[0x4fc - 4]; u8 m4FC; };
struct Mgr { u8 pad[0x3dbc0]; Base** m3DBC0; u8 pad2[4]; Base** m3DBC8; };
extern "C" Mgr* data_00706E20;
extern "C" const u32 ro_00693108;
extern "C" Base** func_005841A8(Mgr* mgr, u32 k, Base** from);
extern "C" void func_0023C4E8(A* a, s32 v);
extern "C" void func_0023C710(A* a, s32 v);
extern "C" void func_0023CC54(void);
void func_0023CC54(void)
{
    Mgr* g = data_00706E20;
    u32 k = ro_00693108;
    Base** first = func_005841A8(g, k, g->m3DBC0);
    Base** end = data_00706E20->m3DBC8;
    for (Base** it = first; it != end;) {
        A* a = DynamicCast<A>(*it);
        if (a && a->m4FC) {
            func_0023C4E8(a, 0);
            func_0023C710(a, 0);
        }
        it = func_005841A8(data_00706E20, ro_00693108, it + 1);
    }
}
