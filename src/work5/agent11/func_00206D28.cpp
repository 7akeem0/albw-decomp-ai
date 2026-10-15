#define EN_EXTRA bool f(Arg4F* p);
#include "en206.h"
struct Arg4F { char pad[0x28]; u32 m28; };
bool En::f(Arg4F* p) {
    if (p->m28) {
        Actor* a = func_0052FBA0((ActorMgr*)(data_00706E20 + 0x3dbbc), p->m28);
        if (!a || func_00588BE4(a) == ro_00693170) return false;
    }
    return func_004F7BB8(this, p);
}
