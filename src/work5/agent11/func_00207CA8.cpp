#define EN7_EXTRA bool f(Arg28* p);
struct Arg28;
#include "en207.h"
struct Arg28 { char pad[0x28]; u32 m28; };
extern const s32 ro_006933D0;
extern const s32 ro_00693580;
void func_0020B768(u32 h);
bool En7::f(Arg28* p) {
    Actor* a = func_0052FBA0((ActorMgr*)(data_00706E20 + 0x3dbbc), p->m28);
    if (a) {
        if (func_00588BE4(a) == ro_006933D0) func_0020B768(p->m28);
        else if (func_00588BE4(a) == ro_00693580) return false;
    }
    return true;
}
