#define EN_EXTRA void f();
#include "en210.h"
extern const s32 ro_0069382C;
// findFirst inline helper (Game*, id) by value: pool order {data, ro id, 0x3DBC0} like the orig
inline Actor** findFirst(Game* g, s32 id) { return g->findNext(id, g->actors.mPtrs); }
void En210::f() {
    func_004F500C(this);
    Actor* a = *findFirst(data_00706E20, ro_0069382C);
    if (a) m964 = a->m2cc;
}
