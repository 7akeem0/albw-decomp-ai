#include "rtti_cpp.h"
struct A : Base { SEAD_RTTI_OVERRIDE(A, Base) u8 pad[0x829 - 4]; s8 m829; };
struct G { u8 pad[0x44]; void* m44; };
struct Item { u32 h; };
extern "C" char* data_00706E20;
extern "C" G* data_0070B728;
extern "C" Base* func_0052FBA0(void* mgr, u32 h);

struct Self {
    u8 pad[0x40c]; s32 mNum; s32 mMax; Item** mBuf; u8 pad1[0x4a8 - 0x418]; void* m4A8; u8 pad2[0x4bc - 0x4ac]; s32 m4BC;
    bool func_0037A228();
};
bool Self::func_0037A228()
{
    G* g = data_0070B728;
    void* cur = m4A8;
    if (g->m44 == 0 || g->m44 != cur) return false;
    bool ok = true;
    for (Item** it = mBuf, **end = mBuf + mNum; it != end; ++it) {
        Base* o = func_0052FBA0(data_00706E20 + 0x3dbbc, (*it)->h);
        if (o) {
            A* a = DynamicCast<A>(o);
            if (a && a->m829) { ok = false; break; }
        }
    }
    { s32* t = &m4BC; if (*t > 0) *t = *t - 1; }
    if (ok && m4BC == 0) return true;
    return false;
}
