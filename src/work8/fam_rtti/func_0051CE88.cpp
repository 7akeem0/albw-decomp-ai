#include "rtti_cpp.h"
struct A : Base { SEAD_RTTI_OVERRIDE(A, Base) };
struct Mgr { u8 pad[0x3dbc0]; Base** m3DBC0; u8 pad2[4]; Base** m3DBC8; };
extern "C" Mgr* data_00706E20;
struct Self { A* m0; };
extern "C" bool func_0051CE88(Self* self);
bool func_0051CE88(Self* self)
{
    if (self->m0 != 0) return false;
    Base** it = data_00706E20->m3DBC0;
    Base** end = data_00706E20->m3DBC8;
    for (; it != end; ++it) {
        A* a = DynamicCast<A>(*it);
        if (a) {
            self->m0 = a;
            return true;
        }
    }
    self->m0 = 0;
    return false;
}
